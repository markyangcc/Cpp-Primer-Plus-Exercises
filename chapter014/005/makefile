CXX = clang++
CXXFLAGS = -Wall -g


main: 	main.cpp \
 		emp.o \
  		employee.o \
   		fink.o \
    	highfink.o \
	 	manager.o
	$(CXX) $(CXXFLAGS) main.cpp emp.o employee.o fink.o highfink.o manager.o -o main

emp.o: #emp.cpp 
	$(CXX) $(CXXFLAGS) -c emp.cpp -o emp.o

employee.o: #employee.cpp
	$(CXX) $(CXXFLAGS) -c employee.cpp -o employee.o

fink.o: #fink.cpp
	$(CXX) $(CXXFLAGS) -c  fink.cpp -o fink.o

highfink.o: #highfink.cpp
	$(CXX) $(CXXFLAGS) -c highfink.cpp -o highfink.o

manager.o: #manager.cpp
	$(CXX) $(CXXFLAGS) -c manager.cpp -o manager.o

clean:
	rm *.o main

# CXX default to g++ (google gnu make documents)
# You must end a line with a \ (backslash, not the forward slash) to tell make that the line continues(for readability)
# For " $(CXX) $(CXXFLAGS) -c emp.cpp -o emp.o " the " -o emp.o " can be ignored,
# because make know .cpp files will be compile to .o files