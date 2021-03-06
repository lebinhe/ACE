/* -*- c++ -*- */
//=============================================================================
/**
 *  @file    valuetype_obv_ch.h
 *
 *  $Id: valuetype_obv_ch.h 88828 2010-02-04 09:09:22Z johnnyw $
 *
 *  Concrete visitor for the Valuetype node.
 *  This one provides code generation for valuetype OBV_ class
 *  in the (client) header.
 *
 *
 *  @author Torsten Kuepper  <kuepper2@lfa.uni-wuppertal.de>
 *  @author based on code from Aniruddha Gokhale
 */
//=============================================================================


#ifndef _BE_VALUETYPE_VALUETYPE_OBV_CH_H_
#define _BE_VALUETYPE_VALUETYPE_OBV_CH_H_

// we need derived valuetype visitors for the client and server header files. For
// the others, they use the default valuetype visitor

/**
 * @class be_visitor_valuetype_obv_ch
 *
 * @brief be_visitor_valuetype_obv_ch
 *
 * This is a concrete visitor to generate the header for valuetype
 * OBV_ class
 */
class be_visitor_valuetype_obv_ch : public be_visitor_valuetype
{
public:
  /// constructor
  be_visitor_valuetype_obv_ch (be_visitor_context *ctx);

  /// destructor
  ~be_visitor_valuetype_obv_ch (void);

  virtual int visit_valuetype (be_valuetype *node);
  virtual int visit_eventtype (be_eventtype *node);

  virtual int visit_field (be_field *node);

  void begin_public ();
  void begin_private ();
};

#endif /* _BE_VALUETYPE_VALUETYPE_OBV_CH_H_ */
