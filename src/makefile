#Makefile finale

CXX = g++
CXXFLAGS = -Wall -Wextra -pedantic -std=c++11
LDFLAGS =

SRC = Blackjack.cpp Deck.cpp Carte.cpp Joueur.cpp Dealer.cpp
OBJ = $(SRC:.cpp=.o)
DEPS = $(OBJ:.o=.d)
TARGET = blackjack

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(LDFLAGS) -o $@ $^

-include $(DEPS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -MMD -MP -c -o $@ $<


clean:
	rm -f $(OBJ) $(DEPS) $(TARGET)
