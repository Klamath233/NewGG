CXX := clang++
LD := ld

SRC_DIR := I_GGX64

INCLUDE_PATHS += -I$(PWD)/I_GGX64 -I$(PWD)/endgame
COMMON_DEFS += $(INCLUDE_PATHS)
CCFLAGS += -stdlib=libc++ -msse -msse2 -msse3 -msse4.1 -msse4.2 $(COMMON_DEFS)
LDFLAGS += -lc++ -lpthread

objs :=

include $(SRC_DIR)/rules.mk

all: newgg

newgg: $(objs)
	$(CXX) $^ -o $@ $(LDFLAGS)

%.o: %.cpp
	$(CXX) $(CCFLAGS) -o $@ -c $<

%.o: %.c
	$(CXX) $(CCFLAGS) -o $@ -c $<

.PHONY: clean
clean:
	find . -name "*.o" -exec rm \{} \;
	 
