NAME		=	megaphone
CXX			=	g++
CXXFLAGS	=	-Wall -Werror -Wextra
VERSION		=	-std=c++98
SRCS		=	${shell find ${SRCSDIR} -name "*.cpp" -type f}
OBJS		=	${subst ${SRCSDIR}, ${OBJSDIR}, ${SRCS:.cpp=.o}}
SRCSDIR		=	srcs
OBJSDIR		=	objs

all: ${NAME}
${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} ${VERSION} -o ${NAME} ${OBJS}

${OBJSDIR}/%.o: ${SRCSDIR}/%.cpp
	@mkdir -p ${dir $@}
	${CXX} ${CXXFLAGS} ${VERSION} -c $< -o $@

clean:
	rm  -rf ${OBJSDIR}
	
fclean: clean
	rm -f ${NAME}

re:	fclean all
