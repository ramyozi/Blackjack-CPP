CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -Wpedantic

TARGET = main
OBJS = main.o Carte.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

main.o: main.cpp Carte.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Carte.o: Carte.cpp Carte.h
	$(CXX) $(CXXFLAGS) -c Carte.cpp

clean:
	rm -f $(OBJS) $(TARGET)
