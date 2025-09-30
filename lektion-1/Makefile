CC=gcc
CFLAGS=-Wall -Wextra -std=c99
TARGET=main
SOURCE=main.c

$(TARGET): $(SOURCE)
	$(CC) $(CFLAGS) $(SOURCE) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

watch:
	echo $(SOURCE) | entr make run

.PHONY: run clean watch
