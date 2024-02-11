NAME		=	PmergeMe
CXX		=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -fsanitize=address,undefined -pedantic-errors
INCLUDE		=	-I ./includes
SRCS		=	${wildcard ${SRCSDIR}/*.cpp}
VERSION		=	-std=c++98
SRCSDIR		=	srcs
OBJSDIR		=	objs
OBJS		=	${subst ${SRCSDIR}, ${OBJSDIR}, ${SRCS:.cpp=.o}}

all: ${NAME}
${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} ${VERSION} ${OBJS} -o ${NAME}

${OBJSDIR}/%.o: ${SRCSDIR}/%.cpp
	mkdir -p ${dir ${OBJS}}
	${CXX} ${CXXFLAGS} ${VERSION} ${INCLUDE} -c $< -o $@

clean:
	rm -rf ${OBJSDIR}
fclean: clean
	rm -rf ${NAME}
re: fclean all

.PHONY:	clean fclean re
