NAME		=	convert
CXX			=	g++
CXXFLAGS	=	-Wall -Werror -Wextra
INCLUDES	=	-I ./includes
VERSION		=	-std=c++98
SRCS		=	${shell find ${SRCSDIR} -name "*.cpp" -type f}
OBJS		=	${subst ${SRCSDIR}, ${OBJSDIR}, ${SRCS:.cpp=.o}}
SRCSDIR		=	srcs
OBJSDIR		=	objs

all: ${NAME}

${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} ${VERSION} $^ -o $@

${OBJSDIR}/%.o:${SRCSDIR}/%.cpp
	mkdir -p ${dir ${OBJS}}
	${CXX} ${CXXFLAGS} ${VERSION} ${INCLUDES} -c $< -o $@

clean:
	rm -rf ${OBJSDIR}
fclean: clean
	rm -rf ${NAME}
re: fclean all
