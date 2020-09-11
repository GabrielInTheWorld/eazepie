# run-compile: ./*.cpp
# 	g++ -o eazepie *.cpp

############################
TARGET = Eazepie

SRCS = src/*.cpp
INCLUDES = include/*.h
OBJ = *.o

REBUILDABLES = $(OBJ) $(TARGET)

VPATH = src include

# all: $(TARGET)
# 	echo ALL done

# $(TARGET): $(OBJ)
# 	g++ -g -o $@ $^

# # %.o: $(SRCS) $(INCLUDES)
# # 	g++ -g -Wall -o $@ -c $<

# $(OBJ): $(SRCS) $(INCLUDES)
# 	g++ -g -Wall -o $@ -c $<

# clean: 
# 	rm -f $(REBUILDABLES)
# 	echo CLEAN done

all: $(TARGET)
	echo all done.

$(TARGET): objects
	g++ -o $(TARGET) $(OBJ)

# $(OBJ): src/*.cpp src/*.h
# 	g++ -g -Wall -c src/*.cpp

objects: src/*.cpp src/*.h
	g++ -g -Wall -c src/*.cpp


# Eazepie.o: Eazepie.h Scanner.h
################################
# %.dep: %.cpp
# 	g++ -M $(FLAGS)

# Eazepie.exe: Eazepie.o
# 	g++ -o $@ $<

# Eazepie.o: Eazepie.cpp
# 	g++ -c $<

# CC=gcc
# CXX=g++
# RM=rm -f
# CPPFLAGS=-g $(shell root-config --cflags)
# LDFLAGS=-g $(shell root-config --ldflags)
# LDLIBS=$(shell root-config --libs)

# SRCS=*.cpp
# OBJS=$(subst .cpp,.o,$(SRCS))

# all: Eazepie

# tool: $(OBJS)
#     $(CXX) $(LDFLAGS) -o tool $(OBJS) $(LDLIBS)

# tool.o: tool.cc support.hh

# support.o: support.hh support.cc

# clean:
#     $(RM) $(OBJS)

# distclean: clean
#     $(RM) tool

# IDIR =../include
# CC=g++
# CFLAGS=-I$(IDIR)

# ODIR=obj
# LDIR =../lib

# LIBS=-lm

# _DEPS = *.h
# DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

# _OBJ = *.o 
# OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


# $(ODIR)/%.o: %.c $(DEPS)
# 	$(CC) -c -o $@ $< $(CFLAGS)

# Eazepie: $(OBJ)
# 	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

# .PHONY: clean

# clean:
# 	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~

# vpath %.cpp src
# vpath %.h include

# CC=g++
# CFLAGS=-I.
# CPPFLAGS=-g $(shell root-config --cflags)
# LDFLAGS=-g $(shell root-config --ldflags)
# LDLIBS=$(shell root-config --libs)
# SRCS = *.cpp
# DEPS = *.h
# OBJ = *.o

# %.o: $(SRCS) $(DEPS)
# 	$(CC) -c -o $@ $< 

# all: Eazepie

# Eazepie: $(OBJ)
# 	$(CC) -o $@ $^ 


#
# 'make depend' uses makedepend to automatically generate dependencies 
#               (dependencies are added to end of Makefile)
# 'make'        build executable file 'mycc'
# 'make clean'  removes all .o and executable files
#

# define the C++ compiler to use
# CC = g++

# # define any compile-time flags
# CFLAGS = -Wall -g

# # define any directories containing header files other than /usr/include
# #
# # INCLUDES = -I/include
# # INCLUDES = include/*.h
# INCLUDES = include/Eazepie.h include/scanner.h

# # define library paths in addition to /usr/lib
# #   if I wanted to include libraries not in /usr/lib I'd specify
# #   their path using -Lpath, something like:
# LFLAGS = -L/lib

# # define any libraries to link into executable:
# #   if I want to link in libraries (libx.so or libx.a) I use the -llibname 
# #   option, something like (this will link in libmylib.so and libm.so:
# LIBS = -lmylib -lm

# # define the C++ source files
# # SRCS = emitter.c error.c init.c lexer.c main.c symbol.c parser.c
# # SRCS = src/*.cpp
# SRCS = src/Eazepie.cpp src/scanner.cpp

# # define the C object files 
# #
# # This uses Suffix Replacement within a macro:
# #   $(name:string1=string2)
# #         For each word in 'name' replace 'string1' with 'string2'
# # Below we are replacing the suffix .c of all words in the macro SRCS
# # with the .o suffix
# #
# OBJS = $(SRCS:.cpp=.o)
# # OBJS = src/*.o

# # define the executable file 
# MAIN = Eazepie

# #
# # The following part of the makefile is generic; it can be used to 
# # build any executable just by changing the definitions above and by
# # deleting dependencies appended to the file from 'make depend'
# #

# .PHONY: depend clean

# all: $(MAIN)
# 	echo  Simple compiler named $(MAIN) has been compiled

# $(MAIN): $(OBJS) 
# 	$(CC) $(CFLAGS) $(INCLUDES) -o $(MAIN) $(OBJS)

# # this is a suffix replacement rule for building .o's from .c's
# # it uses automatic variables $<: the name of the prerequisite of
# # the rule(a .c file) and $@: the name of the target of the rule (a .o file) 
# # (see the gnu make manual section about automatic variables)
# .cpp.o:
# 	$(CC) $(CFLAGS) $(INCLUDES) -c $<  -o $@

# clean:
# 	$(RM) *.o *~ $(MAIN)

# depend: $(SRCS)
# 	makedepend $(INCLUDES) $^

# DO NOT DELETE THIS LINE -- make depend needs it