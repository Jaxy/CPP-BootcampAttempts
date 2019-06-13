# Name of the program.
NAME     := serialize

# Sources and objects.
SRCS     := main.cpp Base.cpp ABC.cpp
OBJS     := $(SRCS:.cpp=.o)

# Define all the compiling flags.
CXX      := clang++ -std=c++98
CXXFLAGS := -Wall -Werror -Wextra

# Compile and create everything.
all: $(NAME)

# Compile the program with the objects.
$(NAME): $(OBJS)
	@$(CXX) $(OBJS) -o $@  

# Rule to remove all the object files.
clean:
	@rm -f $(OBJS)
	@echo "[INFO] $(OBJS) removed!"

# Rule to remove everything that has been created by the makefile.
fclean: clean
	@rm -f $(NAME)
	@echo "[INFO] $(NAME) removed!"

# Rule to re-make everything.
re:     fclean all