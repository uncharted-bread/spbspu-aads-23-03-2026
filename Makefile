CXXFLAGS = -Wall -Wextra -Weffc++ -std=c++14 -MMD
vector-tests:main.cpp
	$(CXX) -o $@ $^
-include main.d