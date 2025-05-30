# Toolchain
CC       := /usr/bin/gcc
CPP      := /usr/bin/g++
DEBUG    := -g

# Flags
CFLAGS   := -c $(DEBUG)
CPPFLAGS := -c $(DEBUG)
LDFLAGS  := -lpthread -lm

# Include path for testcasesupport
INCLUDES := -I ../../testcasesupport

# Core source
MAIN_SRC := main_linux.cpp

# Anonymized test‐cases (local dir)
TEST_C_SRCS    := $(wildcard file_*.c)
TEST_CPP_SRCS  := $(wildcard file_*.cpp)

# External support sources
SUPPORT_SRCS   := ../../testcasesupport/io.c \
                  ../../testcasesupport/std_thread.c

# Derive object‐file lists
MAIN_OBJ       := $(MAIN_SRC:.cpp=.o)
TEST_C_OBJS    := $(TEST_C_SRCS:.c=.o)
TEST_CPP_OBJS  := $(TEST_CPP_SRCS:.cpp=.o)
SUPPORT_OBJS   := $(patsubst ../../testcasesupport/%.c,%.o,$(SUPPORT_SRCS))

# All objects to link
OBJS := $(MAIN_OBJ) \
        $(SUPPORT_OBJS) \
        $(TEST_C_OBJS) \
        $(TEST_CPP_OBJS)

TARGET := CWE416

#--------------------------------------------------
# Pattern rules
#--------------------------------------------------

# Local C++ sources → .o
%.o: %.cpp
	$(CPP)  $(CPPFLAGS) $(INCLUDES) $< -o $@

# Local C sources → .o
%.o: %.c
	$(CC)   $(CFLAGS)   $(INCLUDES) $< -o $@

# Support C sources → .o
%.o: ../../testcasesupport/%.c
	$(CC)   $(CFLAGS)   $(INCLUDES) $< -o $@

#--------------------------------------------------
# Build and clean
#--------------------------------------------------

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CPP) $(LDFLAGS) -o $@ $^

clean:
	rm -f *.o $(TARGET)
