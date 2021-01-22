CC= gcc
CFLAGS=  -Wall -g #-std=c11
LIB= ../../lib
LDFLAGS= -lm
INC= ../../include
EXEC= libderive.a
SRC= derive.c
OBJ= $(SRC:.c=.o)

all : $(EXEC)

derive.o : derive.c 
	$(CC) $(CFLAGS)  -c derive.c -I $(INC)

$(EXEC) : $(OBJ) $(INC)/derive.h
	ar rcs $(LIB)/libderive.a $(OBJ)
	ranlib $(LIB)/libderive.a

clean:
	rm $(LIB)/libderive.a *.exe *.o
