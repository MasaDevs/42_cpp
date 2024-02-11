NAME		=	btc
CXX		=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -fsanitize=address,undefined -pedantic-errors
VERSION		=	-std=c++98
INCLUDE		=	-I ./includes
SRCS		=	${wildcard ${SRCSDIR}/*.cpp}
SRCSDIR		=	srcs
OBJSDIR		=	objs
OBJS		=	${subst ${SRCSDIR}, ${OBJSDIR}, ${SRCS:.cpp=.o}}

all: ${NAME}
${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} ${VERSION} ${OBJS} -o ${NAME}

${OBJSDIR}/%.o: ${SRCSDIR}/%.cpp
	mkdir -p ${dir ${OBJS}}
	${CXX} ${INCLUDE} ${VERSION} ${CXXFLAGS} -c $< -o $@

clean:
	rm -rf ${OBJSDIR}
fclean: clean
	rm -rf ${NAME}
re: fclean all

.PHONY:	clean fclean re all
