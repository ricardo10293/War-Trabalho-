CC = gcc
CFLAGS = -Wall -g
SRC = src/main.c src/jogador.c src/territorio.c src/batalha.c src/missao.c
OBJ = $(SRC:.c=.o)
EXEC = war

$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)
