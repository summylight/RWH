# rwh: random walk on heterogeneous graph 
#
# Suchan Guang -- USTC
# ------------------------------------------------
# Makefile
# ------------------------------------------------

# Executable name
EXEC_NAME=rwh

# Compiler to use
CC=g++

# Default Options to use
# CFLAGS= -Wall -Wno-write-strings -O0 -g
CFLAGS= -Wno-write-strings -O3
#CFLAGSFINAL= -O3
CLIBS=

#NAUTYSRC= nauty.c nautil.c naugraph.c

# Source files
SRC =                   \
	Graph.cpp           \
	alg.cpp             \
	main.cpp

OBJ =  ${SRC:.cpp=.o}

#------------------------------------------------------------

all: ${EXEC_NAME}

${EXEC_NAME}: ${OBJ}
	${CC} ${CFLAGS} ${CLIBS}  -o ${EXEC_NAME} ${OBJ}

%.o: %.cpp
	${CC} ${CFLAGS} -c -g -o $@ $+

.PHONY: clean
clean:
	rm ${EXEC_NAME} *.o *~ *# -rf