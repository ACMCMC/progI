#SUBDIRS := $(wildcard */.)
SUBDIRS := ./progII

$(SUBDIRS):
	$(MAKE) -C $@

.PHONY: $(SUBDIRS)
