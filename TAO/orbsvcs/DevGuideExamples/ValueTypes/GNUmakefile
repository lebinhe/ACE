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

all: Notify_Consumer Notify_Supplier

REMAINING_TARGETS := $(filter-out all,$(TARGETS_NESTED:.nested=)) $(CUSTOM_TARGETS)

$(REMAINING_TARGETS):
	$(KEEP_GOING)@cd Notify && $(MAKE) -f GNUmakefile.Notify_Consumer $(@)
	$(KEEP_GOING)@cd Notify && $(MAKE) -f GNUmakefile.Notify_Supplier $(@)

.PHONY: Notify_Consumer
Notify_Consumer:
	$(KEEP_GOING)@cd Notify && $(MAKE) -f GNUmakefile.Notify_Consumer all

.PHONY: Notify_Supplier
Notify_Supplier: Notify_Consumer
	$(KEEP_GOING)@cd Notify && $(MAKE) -f GNUmakefile.Notify_Supplier all

project_name_list:
	@echo Notify_Consumer
	@echo Notify_Supplier
