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

all: Compression_Idl Compression RLECompressor

REMAINING_TARGETS := $(filter-out all,$(TARGETS_NESTED:.nested=)) $(CUSTOM_TARGETS)

$(REMAINING_TARGETS):
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Compression_Idl $(@)
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Compression $(@)
	$(KEEP_GOING)@cd rle && $(MAKE) -f GNUmakefile.RLECompressor $(@)

.PHONY: Compression_Idl
Compression_Idl:
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Compression_Idl all

.PHONY: Compression
Compression: Compression_Idl
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Compression all

.PHONY: RLECompressor
RLECompressor: Compression
	$(KEEP_GOING)@cd rle && $(MAKE) -f GNUmakefile.RLECompressor all

project_name_list:
	@echo Compression
	@echo Compression_Idl
	@echo RLECompressor
