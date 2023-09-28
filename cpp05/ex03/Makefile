NAME		=	Form
CXX			=	g++
CXXFLAGS	=	-Wall -Wextra -Werror -fsanitize=address
VERSION		=	-std=c++98
INCLUDE		=	-I ./includes/
SRCS		=	${shell find ${SRCSDIR} -name "*.cpp" -type f}
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
