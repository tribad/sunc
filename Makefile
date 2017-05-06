PROJ=sunc

SUBSYS=GrMath Thread Renderer Application

.PHONY: $(SUBSYS)

all : $(SUBSYS)

define SUBSYS_template =
  $(1) :
	$(MAKE) -C $(1)
endef

$(foreach part, $(SUBSYS), $(eval $(call SUBSYS_template, $(part))))

