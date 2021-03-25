
PROJECT_NAME = done
SRC = src/product.c src/sum.c src/division.c src/difference.c \
inc/funp.h 

SRC1 = src/product.c src/sum.c src/division.c src/difference.c

UNI = unity/unity.c

UNITY = unity
INC = inc

$(PROJECT_NAME): $(SRC)
	gcc driver.c $(SRC) -I $(INC) -o $(PROJECT_NAME)

run: $(PROJECT_NAME)
	./$(PROJECT_NAME)

test : $(SRC) test.c $(UNI)
	gcc test.c $(UNI) $(SRC) -I $(INC) -I $(UNITY) -o $(PROJECT_NAME)
	./$(PROJECT_NAME) 

coverage: ${PROJECT_NAME}
	gcc -fprofile-arcs -ftest-coverage driver.c $(SRC1) -I $(INC) -I $(UNITY) -o $(PROJECT_NAME)
	./$(PROJECT_NAME) 
	gcov -a driver.c

clean: 
	rm -rf $(PROJECT_NAME) *.gcov *.gcda *.gcno