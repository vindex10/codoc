.PHONY: all build doc clean

all: clean build doc

build:
	g++ -g main.cpp

memcheck:
	valgrind --tool=massif --detailed-freq=1 --time-unit=B --massif-out-file=massif.log ./a.out
	ms_print massif.log

doc:
	doxygen
	sphinx-build -b html doc/sphinx/source doc/sphinx/build

clean:
	rm -f ./a.out
	rm -f massif.log
