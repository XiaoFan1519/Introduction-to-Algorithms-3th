TARGET_DIR = target

EXERCISES_DIR = Exercises
EXERCISES_SOURCES := $(wildcard $(EXERCISES_DIR)/*.cpp)
EXERCISES_LIB := $(subst .cpp,.o,$(EXERCISES_SOURCES))
#EXERCISES_LIB := $(notdir $(EXERCISES_LIB))
#EXERCISES_LIB := $(addprefix $(TARGET_DIR)/Lib_,$(EXERCISES_LIB))

CXX = g++
CXXFLAGS = -g
MAKE_DIR := $(shell mkdir $(TARGET_DIR))

.PHONY: all
all: main.cpp Exercise.cpp $(EXERCISES_SOURCES)
	$(CXX) -o $(TARGET_DIR)/main.exe $? $(CXXFLAGS)


.PHONY: clean
clean:
	$(RM)