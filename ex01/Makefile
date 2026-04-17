NAME = phonebook
SRC_DIR = src
INC_DIR = inc

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
INCLUDES = -I$(INC_DIR)

SRC = $(addprefix src/,	Main.cpp \
						PhoneBook.cpp \
						Contact.cpp \
						)
HEADER = $(addprefix inc/,	Contact.hpp \
							PhoneBook.hpp \
							Main.hpp \
)

all: $(NAME)

$(NAME): $(SRC) $(HEADER)
	$(CC) $(CFLAGS) $(INCLUDES) $(SRC) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
