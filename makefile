TARGET_DIR = target
EXERCISES_DIR = Exercises
CXX = g++
CXXFLAGS = -g
MAKE_DIR := $(shell mkdir $(TARGET_DIR))

$(TAGET_DIR)/main.o: main.cpp $(TAGET_DIR)/Exercise.o
	echo 'main'

$(TAGET_DIR)/Exercise.o: Exercise.cpp $(TARGET_DIR)/Exercises.o
	echo 'Exercise'
	
$(TARGET_DIR)/Exercises.o: $(wildcard $(EXERCISES_DIR)/*.cpp)
	echo '$?'

.PHONY: clean
clean:
