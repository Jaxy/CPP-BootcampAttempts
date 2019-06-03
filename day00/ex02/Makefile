# Program name
NAME     := test

# Necessary sources and objects for compiler
SRCS     := Account.class.cpp tests.cpp
OBJS     := $(SRCS:.cpp=.o)
HEADERS	 := Account.class.hpp

# Compile Flags
CPP      := clang++
CPPFLAGS := -Wall -Werror -Wextra

# Compile Program
all: $(NAME)

# Commands for compiling
$(NAME): $(OBJS)
	$(CPP) $(OBJS) -o $@

# Remove all object files
clean:
	@rm -f $(OBJS)
	@echo "$(OBJS) removed!"

# Remove all object files and execution file
fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) removed!"

# Rule to re-make everything.
re:     fclean all