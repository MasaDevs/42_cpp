NAME		=	megaphone
CXX			=	g++
CXXFLAGS	=	-Wall -Werror -Wextra
VERSION		=	-std=c++98
TESTVERSION	=	-std=c++17
SRCS		=	megaphone.cpp
OBJS		=	${SRCS:.cpp=.o}

all: ${NAME}
${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} ${VERSION} -o ${NAME} ${OBJS}

clean:
	rm  -f ${OBJS}
	
fclean: clean
	rm	-f ${NAME}

re:	fclean all
