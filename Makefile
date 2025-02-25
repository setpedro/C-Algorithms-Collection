CC = gcc
TARGET = main
SRC_DIR = src

run: $(TARGET)
	./$(TARGET)

$(TARGET): $(SRC_DIR)/main.c
	$(CC) $(SRC_DIR)/main.c -o $(TARGET)

clean:
	rm -f $(TARGET)
