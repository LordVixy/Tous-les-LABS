CC = ${CCP}gcc ${CC_OPTIONS}
CC_OPTIONS = -g -Wall
CCP = ${CROSS_COMPILE}
MAIN = test.o
OBJ = max.o min.o var.o
LIBRARY = libbib.a
OUTPUT = My-binaire_q5

install: ${OUTPUT}
	./${OUTPUT}

${OUTPUT}: ${MAIN} ${LIBRARY}
	${CC} ${MAIN} ${LIBRARY} -o ${OUTPUT}

%.o: %.c
	${CC} -c $^ -o $@

${LIBRARY}: ${OBJ}
	ar -cr ${LIBRARY} ${OBJ}
	ranlib ${LIBRARY}

clean: 
	rm *.o *.a

