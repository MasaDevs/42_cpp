NAME		=	RPN
CXX			=	g++
CXXFLAGS	=	-Wall -Wextra -Werror
INCLUDE		=	-I ./includes
SRCS		=	${shell find ${SRCSDIR} -name "*.cpp" -type f}
SRCSDIR		=	srcs
OBJSDIR		=	objs
OBJS		=	${subst ${SRCSDIR}, ${OBJSDIR}, ${SRCS:.cpp=.o}}

all: ${NAME}
${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

${OBJSDIR}/%.o: ${SRCSDIR}/%.cpp
	mkdir -p ${dir ${OBJS}}
	${CXX} ${CXXFLAGS} ${INCLUDE} -c $< -o $@

clean:
	rm -rf ${OBJSDIR}
fclean: clean
	rm -rf ${NAME}
re: fclean all

.PHONY:	clean fclean re
