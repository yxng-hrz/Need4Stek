##
## EPITECH PROJECT, 2023
## ai
## File description:
## Makefile
##

INCLUDE			=	-I./include/
LIB				=	-L./lib -lmy
LIBPATH			=	./lib
SRCPATH 		=	./src
ENGPATH			=	$(SRCPATH)/Engine
MOVPATH			=	$(SRCPATH)/Movement
UTIPATH			=	$(SRCPATH)/Utils

CFLAGS += 	-Werror -Wextra -Wall -pedantic

SRC 	=	$(SRCPATH)/main.c			\
			$(ENGPATH)/n4s.c			\
			$(ENGPATH)/loop.c			\
			$(MOVPATH)/set_speed.c		\
			$(MOVPATH)/set_turn.c		\
			$(UTIPATH)/free_array.c		\
			$(UTIPATH)/check.c			\

LIBSRC	=	$(LIBPATH)/my_str_to_warray.c

OBJ 	= 	$(LIBSRC:.c=.o)

LIBNAME = 	libmy.a

NAME 	= 	ai

all: 		$(NAME)

$(NAME):	$(OBJ)
			ar rc $(LIBNAME) $(OBJ) && mv $(LIBNAME) $(LIBPATH)
			gcc -o $(NAME) $(SRC) $(LIB) $(INCLUDE)

clean:
			rm -f $(OBJ)
			rm -f $(LIBPATH)/$(LIBNAME)
			rm -f $(NAME)

fclean:		clean

re: 		fclean all

.PHONY: all clean fclean re
