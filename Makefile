export CC = gcc
export LDFLAGS = -lm

SOURCES = $(wildcard *.c)
TARGETS = $(SOURCES:.c=.out)

all: $(TARGETS)

%.out: %.c
	$(CC) $< -o $@ $(LDFLAGS)

.PHONY: $(basename $(TARGETS))
$(basename $(TARGETS)): %: %.out

clean:
	rm -f *.out
