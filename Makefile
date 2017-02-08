all:
	g++ -c -std=c++11 -o src/termio.o src/termio.cpp
	ar rcs lib/libtermio.a src/termio.o
	cp src/termio.hpp inc
clean:
	rm -f inc/*.hpp
	rm -f lib/*.a
	rm -f src/*.o
