.PHONY: all build doc clean

all: clean build doc

build:
	g++ -g main.cpp

doc:
	doxygen
	sphinx-build -b html doc/sphinx/source doc/sphinx/build

clean:
	rm -f ./a.out
