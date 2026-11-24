CC      = gcc
CFLAGS  = -Wall -Wextra -g

BIN     = bin
TARGET  = $(BIN)/contact
OBJS    = main.o contact.o

all: $(TARGET)

$(TARGET): $(OBJS) | $(BIN)
	$(CC) $(OBJS) -o $(TARGET)

$(BIN):
	mkdir -p $(BIN)

%.o: %.c contact.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
