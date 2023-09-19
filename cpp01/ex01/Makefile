NAME		=	BraiiiiiiinnnzzzZ
CXX			=	g++
CXXFLAG		= 	-Wall -Wextra -Werror -fsanitize=leak
VERSION		=	-std=c++98
INCLUDE		=	-I includes
SRCSDIR		=	srcs
OBJSDIR		=	objs
SRCS		=	$(shell find ${SRCSDIR} -name "*.cpp" -type f)
OBJS		=	${subst ${SRCSDIR}, ./${OBJSDIR}, ${SRCS:.cpp=.o}}

all:${NAME}

${NAME}: ${OBJS}
	${CXX} ${CXXFLAG} ${VERSION} ${OBJS} -o ${NAME}

${OBJSDIR}/%.o: ${SRCSDIR}/%.cpp
	mkdir -p ${OBJSDIR}
	$(CXX) $(CXXFLAG) $(INCLUDE) -o $@ -c $<

clean:
	rm -rf ${OBJSDIR}

fclean: clean
	rm -f ${NAME}

re: fclean all
