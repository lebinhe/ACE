// -*- C++ -*-

// $Id: PeerProcess.h 91742 2010-09-13 18:23:17Z johnnyw $
//

#ifndef LOG_WALKER_PEER_PROCESS_H
#define LOG_WALKER_PEER_PROCESS_H

#include "ace/SString.h"
#include "ace/Synch.h"
#include "ace/RB_Tree.h"
#include "ace/Functor.h"
#include "ace/Containers.h"
#include "ace/streams.h"

class PeerObject;
class HostProcess;
class Invocation;
class Session;
class Thread;

class Transport
{
public:
  Transport (const char *addr, bool is_client, size_t offset);
  long handle_;
  ACE_CString client_endpoint_;
  bool local_is_client_;
  size_t open_offset_;
  size_t close_offset_;
};


typedef ACE_RB_Tree<u_long, PeerObject*, ACE_Less_Than<u_long>, ACE_Null_Mutex> PeerObjectTable;
typedef ACE_DLList<Invocation> InvocationList;
typedef ACE_DLList<Transport> TransportList;

class PeerProcess
{
public:
  static char *nextIdent(void);
  PeerProcess (size_t offset, bool is_server);

  virtual ~PeerProcess (void);

  const char * id (void) const;

  void set_owner (HostProcess *host);
  HostProcess *owner (void);

  void match_hosts (Session *session);
  void set_server_addr (const char *addr);
  const ACE_CString &server_addr (void) const;
  const ACE_CString &last_client_addr (void) const;

  bool is_server (void) const;
  void add_transport (Transport *t);
  Transport *last_transport (void);
  Transport *find_transport (long handle);

  bool match_local (const char *addr) const;

  Invocation *new_invocation (size_t req_id, Thread *thr);
  Invocation *find_invocation (size_t req_id, long handle);
  Invocation *find_invocation_size (size_t len);

  PeerObject *object_for(const char *oid, size_t len);

  virtual void dump_summary (ostream &strm);
  virtual void dump_object_detail (ostream &strm);
  virtual void dump_invocation_detail (ostream &strm);

private:
  char *ident_;
  HostProcess *owner_;
  HostProcess *remote_;
  ACE_CString server_addr_;
  TransportList transports_;
  Transport *last_transport_;
  bool server_;
  size_t origin_offset_;
  PeerObjectTable objects_;
  InvocationList invocations_;
};


#endif // LOG_WALKER_PEER_PROCESS_H
