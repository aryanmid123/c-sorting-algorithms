TARGETS=$(basename $(wildcard test/*.c))

CXX=clang

all: $(TARGETS)

%: %.c
	$(CXX) -std=c99  -o $@ $^

clean:
	-rm $(TARGETS)