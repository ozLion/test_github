CXX = C:/msys64/mingw64/bin/g++.exe
CXXFLAGS = -std=c++11 -I. -Igoogletest/googletest/include -Igoogletest/googletest
LDFLAGS = -pthread

# Test executable
TEST_SRC = tests/test_calc.cpp googletest/googletest/src/gtest-all.cc
TEST_OBJ = tests/test_calc.o googletest/googletest/src/gtest-all.o
TEST_EXE = tests/test_calc.exe

# Main executable
CALC_SRC = calc.cpp
CALC_EXE = calc.exe

all: calc test

calc: $(CALC_SRC) ArithmeticOperations.h
	$(CXX) $(CXXFLAGS) -o $(CALC_EXE) $(CALC_SRC)

test: $(TEST_OBJ)
	$(CXX) $(LDFLAGS) -o $(TEST_EXE) $(TEST_OBJ)

tests/test_calc.o: tests/test_calc.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

googletest/googletest/src/gtest-all.o: googletest/googletest/src/gtest-all.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(TEST_OBJ) $(TEST_EXE) $(CALC_EXE)

.PHONY: all test calc clean