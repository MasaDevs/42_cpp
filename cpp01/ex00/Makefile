NAME		=	BraiiiiiiinnnzzzZ
CXX			=	g++
CXXFLAG		= 	-Wall -Wextra -Werror
VERSION		=	-std=c++98
SRCS		=	main.cpp Zombie.cpp
OBJS		=	${SRCS:.cpp=.o}

all:${NAME}

${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} ${VERSION} ${OBJS} -o ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all
