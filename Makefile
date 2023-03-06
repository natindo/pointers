make:
	g++ main.cpp array.cpp testArray.cpp string.cpp class.cpp pointer.cpp
	./a.out

.PHONY: clean
clean:
	rm -f *.out