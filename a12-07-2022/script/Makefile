CC = g++
INC = ./inc
OBJ = ./obj
SRC = ./src
BIN = ./bin

CFLAGS = -c -g -Wall -Werror
LFLAGS = -o
IFLAGS = -I$(INC)
CVFLAGS = -v --tool=memcheck --leak-check=full --show-reachable=yes --log-file=valclient

all: $(BIN)/app valgrind

$(BIN)/app: $(OBJ)/parent.o
	$(CC) $(LFLAGS) $(BIN)/app $(OBJ)/parent.o

$(OBJ)/parent.o:$(SRC)/parent.cpp
	$(CC) $(CFLAGS) $(IFLAGS) $(SRC)/parent.cpp
		mv *.o $(OBJ)

clean:
			    
		rm -f $(OBJ)/*.
		rm -f a.out
		rm -f $(BIN)/app

