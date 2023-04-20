DIR_SRC = ./src
DIR_OBJ = ./obj

SRC = $(wildcard ${DIR_SRC}/*.c)
OBJ = $(patsubst %.c, ${DIR_OBJ}/%.o, $(notdir ${SRC}))
TAR = ${DIR_OBJ}/helloAPP
ALL:$(TAR) 
 
$(TAR) : $(OBJ)
	
	gcc $^ -o $@
 
${DIR_OBJ}/%.o: ${DIR_SRC}/%.c
	@echo "正在编译$<"
	gcc -c $< -o $@
	
	
clean:
	rm -rf $(OBJ) $(TAR) 
