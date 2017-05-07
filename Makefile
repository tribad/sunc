PROJ=sunc

SUBSYS=GrMath Thread Renderer Application

CXXFLAGS=-DGL_GLEXT_PROTOTYPES

.PHONY: $(SUBSYS)

all : $(SUBSYS)

define SUBSYS_template =
  $(1) :
	$(MAKE) -C $(1)
endef

$(foreach part, $(SUBSYS), $(eval $(call SUBSYS_template, $(part))))

clean:
	$(foreach part, $(SUBSYS), $(MAKE) -C $(part) clean && ) true

export CXXFLAGS
