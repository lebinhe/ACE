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

all: Tao__Timeout_Idl Timeout_Supplier Timeout_Consumer

REMAINING_TARGETS := $(filter-out all,$(TARGETS_NESTED:.nested=)) $(CUSTOM_TARGETS)

$(REMAINING_TARGETS):
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Tao__Timeout_Idl $(@)
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Timeout_Supplier $(@)
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Timeout_Consumer $(@)

.PHONY: Tao__Timeout_Idl
Tao__Timeout_Idl:
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Tao__Timeout_Idl all

.PHONY: Timeout_Supplier
Timeout_Supplier: Tao__Timeout_Idl
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Timeout_Supplier all

.PHONY: Timeout_Consumer
Timeout_Consumer: Tao__Timeout_Idl Timeout_Supplier
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Timeout_Consumer all

project_name_list:
	@echo Tao__Timeout_Idl
	@echo Timeout_Consumer
	@echo Timeout_Supplier
