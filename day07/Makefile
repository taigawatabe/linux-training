CC = gcc
TARGET = calculator
SRCS = main.c calc.c
OBJS = $(SRCS:.c=.o)

ifdef DEBUG
    CFLAGS = -Wall -Wextra -g -O0 -DDEBUG
else
    CFLAGS = -Wall -Wextra -O2
endif

$(TARGET): $(OBJS)
	$(CC) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean debug release

clean:
	rm -f $(TARGET) $(OBJS)

debug:
	$(MAKE) DEBUG=1

release:
	$(MAKE)
