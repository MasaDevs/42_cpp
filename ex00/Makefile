NAME		=	Template00
CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -fsanitize=address
VERSION		=	-std=c++98
INCLUDE		=	-I ./includes/
SRCS		=	${shell find ${SRCSDIR} -name "*.cpp"}
SRCSDIR		=	srcs
OBJSDIR		=	objs
OBJS		=	${subst ${SRCSDIR}, ${OBJSDIR}, ${SRCS:.cpp=.o}}

${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} ${VERSION} ${OBJS} -o ${NAME}

${OBJSDIR}/%.o: ${SRCSDIR}/%.cpp
	mkdir -p ${dir $@}
	$(CXX) $(CXXFLAGS) $(VERSION) $(INCLUDE) -o $@ -c $< 

clean:
	rm -rf ${OBJSDIR}
fclean: clean
	rm -f ${NAME}

re: fclean ${NAME}

.PHONY: clean fclean re

