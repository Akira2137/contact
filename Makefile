CC      = gcc
CFLAGS  = -Wall -Wextra -g

TARGET  = contact
OBJS    = main.o contact.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

%.o: %.c contact.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean rebuild
