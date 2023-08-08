NAME		=	BraiiiiiiinnnzzzZ
CXX			=	g++
CXXFLAG		= 	-Wall -Wextra -Werror
VERSION		=	-std=c++98
INCLUDE		=	-I includes
SRCS		=	srcs/main.cpp srcs/Zombie.cpp
VPATH		=	srcs
OBJS		=	${SRCS:.cpp=.o}

all:${NAME}

${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} ${VERSION} ${OBJS} -o ${NAME}

${OBJS}:
	${CXX} ${CXXFLAGS} ${VERSION} ${INCLUDE} -c ${SRCS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all
