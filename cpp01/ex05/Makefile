NAME		=	Herl2.0
CXX			=	g++
CXXFLAGS	=	-Wall -Werror -Wextra
VERSION		=	-std=c++98
INCLUDES	=	-I ./includes
SRCS		=	${shell find ${SRCSDIR} -name "*.cpp" -type f}
SRCSDIR		=	srcs
OBJSDIR		=	objs
OBJS		=	${subst ${SRCSDIR}, ${OBJSDIR}, ${SRCS:.cpp=.o}}

all: ${NAME}

${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} ${VERSION} ${OBJS} -o $@
${OBJSDIR}/%.o: ${SRCSDIR}/%.cpp
	mkdir -p ${dir ${OBJS}}	
	${CXX} ${CXXFLAGS} ${INCLUDES} ${VERSION} -c $< -o $@

clean:
	rm -rf ${OBJSDIR}
fclean: clean
	rm -rf ${NAME}
re: fclean all

.PHONY: clean fclean re

