#Compiler
CC =gcc
CFLAGS = -Wall -I../include

SRC= ../src/main.c
OBJ= main.o
OUT= ima


all: $(OUT)


# Build the final executable
$(OUT): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Compile .c files to .o
main.o: $(SRC)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean
clean:
	rm -f $(OBJ) $(OUT)
