CC = cl
CXXFLAGS = /nologo /EHsc /std:c++14 /W4 /WX 

SRC = main.cpp 

all: 
	$(CC) $(CXXFLAGS) $(SRC)
	main.exe

clean: 
	del main.exe





