NAME = Form_up_maggots

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

SRCS = 	*.cpp

$(NAME) :
	c++ $(CFLAGS) $(SRCS) -o $(NAME)

all : $(NAME)

fclean : clean
	$(RM) $(NAME)

clean :
	$(RM) $(NAME)

re : fclean all