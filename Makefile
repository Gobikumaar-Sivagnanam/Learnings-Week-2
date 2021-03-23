
PROJECT_NAME = done
SRC = test.c \
src/product.c src/sum.c src/division.c src/difference.c \
inc/funp.h

INC = inc

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) -I $(INC) -o $(PROJECT_NAME)

run: $(PROJECT_NAME)
	./$(PROJECT_NAME)

#all : test.c src/product.c src/sum.c src/division.c src/difference.c inc/funp.h
#	gcc test.c src/product.c src/sum.c src/division.c src/difference.c -I inc -o all

#all : $(SRC)
#	gcc $(SRC) -I $(INC) -o all
