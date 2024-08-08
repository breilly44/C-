CC=g++

CFLAGS=-std=c++20

SRC=main.cpp shape.cpp circle.cpp square.cpp triangle.cpp

OUT=shapes

all: $(OUT)

$(OUT): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT)