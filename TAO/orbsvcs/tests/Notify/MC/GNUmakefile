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

all: MonitorControl_Idl MonitorControl_Monitor MonitorControl_Consumer MonitorControl_Supplier

REMAINING_TARGETS := $(filter-out all,$(TARGETS_NESTED:.nested=)) $(CUSTOM_TARGETS)

$(REMAINING_TARGETS):
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.MonitorControl_Idl $(@)
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.MonitorControl_Monitor $(@)
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.MonitorControl_Consumer $(@)
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.MonitorControl_Supplier $(@)

.PHONY: MonitorControl_Idl
MonitorControl_Idl:
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.MonitorControl_Idl all

.PHONY: MonitorControl_Monitor
MonitorControl_Monitor: MonitorControl_Idl
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.MonitorControl_Monitor all

.PHONY: MonitorControl_Consumer
MonitorControl_Consumer: MonitorControl_Idl MonitorControl_Monitor
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.MonitorControl_Consumer all

.PHONY: MonitorControl_Supplier
MonitorControl_Supplier: MonitorControl_Idl MonitorControl_Monitor
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.MonitorControl_Supplier all

project_name_list:
	@echo MonitorControl_Consumer
	@echo MonitorControl_Idl
	@echo MonitorControl_Monitor
	@echo MonitorControl_Supplier
