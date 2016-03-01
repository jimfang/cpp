# copy left 
# for evaluation of algorithm's complicity

# TO DO Here.... 
# 1. Change Target Name
# 2. Add source files' name
# 3. Add header file if they are big dependency
TARGET        = run
INCLUDES      = $(wildcard *.h)
INCLUDE_DIRS  := /usr/include 

OBJ_DIR := debug
OBJECTS := $(patsubst %.cpp, $(OBJ_DIR)/%.o, $(wildcard *.cpp))

CC      = g++
DEBUG   = -g
CFLAGS  = -Wall -O2  $(DEBUG) -I$(INCLUDE_DIRS)
LDFLAGS = -Wall $(DEBUG) 

all: $(TARGET)

$(TARGET): $(OBJECTS)
	@echo $(OBJECTS)
	$(CC) $(LDFLAGS) $^ -o $@ 

$(filter %.o, $(OBJECTS)):$(OBJ_DIR)/%.o: %.cpp $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJECTS): | $(OBJ_DIR)
$(OBJ_DIR):
	mkdir $(OBJ_DIR)	

.PHONY: clean
clean:
	rm -r $(OBJ_DIR) $(TARGET)
