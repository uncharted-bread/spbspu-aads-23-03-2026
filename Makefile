CXXFLAGS = -Wall -Wextra -Weffec++ -std=c++14
vector-tests: main.o
	$(CXX) -0 $@ $^
