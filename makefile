CXX = g++ -std=c++11
CXXFLAGS = -pedantic -g

run: main.o printarray.o
	$(CXX) $(CXXFLAGS) main.o printarray.o -o run

main.o: main.cpp printarray.h
	$(CXX) $(CXXFLAGS) -c main.cpp

printarray.o: printarray.cpp printarray.h
	$(CXX) $(CXXFLAGS) -c printarray.cpp

clean:
	$(RM) run *.o