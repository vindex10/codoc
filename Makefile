.PHONY: all build memcheck doc clean

all: clean build memcheck doc

build:
	g++ -g main.cpp

memcheck: clean_mem
	valgrind --tool=massif --detailed-freq=1 --time-unit=B --massif-out-file=massif.log ./a.out
	ms_print massif.log

doc:
	sphinx-build -b html doc/sphinx/source doc/sphinx/build

clean:
	rm -f ./a.out
	rm -f massif.log
