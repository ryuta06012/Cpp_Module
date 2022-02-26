NAME := convert
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -MMD -MP
#-Wshadow -Wno-shadow
SRCS := main.cpp Convert.cpp
HEADER := Convert.hpp
OBJS_DIR := obj/
OBJS := $(addprefix $(OBJS_DIR), $(SRCS:.cpp=.o))
DEPS := $(OBJS:.o=.d)

RM := rm -f

all: $(NAME)

$(NAME): $(OBJS) $(OBJS_DIR)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

$(OBJS_DIR)%.o: %.cpp
	mkdir -p $(OBJS_DIR)
	$(CXX) $(CXXFLAGS) -o $@ -c $<
clean:
	rm -rf $(OBJS_DIR)
fclean: clean
	$(RM) $(NAME)

re: fclean all

test:
	bash ./test.sh | less > test.txt

-include $(DEPS)

.POHNY: all clean fclean re