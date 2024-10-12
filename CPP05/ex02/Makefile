NAME = More_Forms

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

SRCS = 	*.cpp

TREE = christmas_shrubbery

$(NAME) :
	c++ $(CFLAGS) $(SRCS) -o $(NAME)

all : $(NAME)

fclean : clean
	$(RM) $(NAME)
	$(RM) $(TREE)

clean :
	$(RM) $(NAME)

re : fclean all