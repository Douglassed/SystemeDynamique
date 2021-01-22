CC= gcc
CFLAGS=  -Wall -g #-std=c11
LIB= ../../lib
LDFLAGS= -lm -lpoint -lderive
INC= ../../include
EXEC= ../../test
SRC= test.c
OBJ= $(SRC:.c=.o)

all : $(EXEC)

$(EXEC) : test.c
	$(CC) $< -o $@ $(CFLAGS) $(LDFLAGS) -I $(INC) -L $(LIB)
clean:
	rm *.exe *.o
