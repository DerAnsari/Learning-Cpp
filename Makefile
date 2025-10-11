# Define the compiler and the flags
CXX = g++
CXXFLAGS = -std=c++23 -Wall -Wextra -Weffc++ \
           -Wconversion -Wsign-conversion \
           -Werror -pedantic-errors -g

# The magic pattern rule
%: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<
