CC = gcc
CFLAGS = -I./include
SRC = main.c src/clinical_history.c src/fill_clinical_history.c src/init_clinical_history.c src/menu.c src/handlers/*
TARGET = clinical_history_app

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)