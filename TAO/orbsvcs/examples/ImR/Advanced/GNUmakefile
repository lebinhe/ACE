# -*- makefile -*-
#----------------------------------------------------------------------------
#       GNU ACE Workspace
#
# $Id: GNUACEWorkspaceCreator.pm 94635 2011-10-06 12:59:23Z johnnyw $
#
# This file was generated by MPC.  Any changes made directly to
# this file will be lost the next time it is generated.
#
# MPC Command:
# /tmp/DOC_ROOT/stage-3715/ACE_wrappers/bin/mwc.pl -type gnuace -exclude "TAO/TAO_*.mwc,TAO/CIAO/CIAO_*.mwc" -workers 8 -recurse -hierarchy -relative ACE_ROOT=/tmp/DOC_ROOT/stage-3715/ACE_wrappers -relative TAO_ROOT=/tmp/DOC_ROOT/stage-3715/ACE_wrappers/TAO -relative CIAO_ROOT=/tmp/DOC_ROOT/stage-3715/ACE_wrappers/TAO/CIAO -relative DANCE_ROOT=/tmp/DOC_ROOT/stage-3715/ACE_wrappers/TAO/DAnCE
#
#----------------------------------------------------------------------------

MAKEFILE = GNUmakefile

ifeq ($(findstring k,$(MAKEFLAGS)),k)
  KEEP_GOING = -
endif

include $(ACE_ROOT)/include/makeinclude/macros.GNU

all: Advanced_IDL Advanced_Server Advanced_Client Advanced_Manager

REMAINING_TARGETS := $(filter-out all,$(TARGETS_NESTED:.nested=)) $(CUSTOM_TARGETS)

$(REMAINING_TARGETS):
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Advanced_IDL $(@)
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Advanced_Server $(@)
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Advanced_Client $(@)
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Advanced_Manager $(@)

.PHONY: Advanced_IDL
Advanced_IDL:
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Advanced_IDL all

.PHONY: Advanced_Server
Advanced_Server: Advanced_IDL
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Advanced_Server all

.PHONY: Advanced_Client
Advanced_Client: Advanced_IDL Advanced_Server
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Advanced_Client all

.PHONY: Advanced_Manager
Advanced_Manager: Advanced_IDL Advanced_Server
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Advanced_Manager all

project_name_list:
	@echo Advanced_Client
	@echo Advanced_IDL
	@echo Advanced_Manager
	@echo Advanced_Server
