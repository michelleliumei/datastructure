main:tree.o changetree.o
	g++ -o main -g tree.o changetree.o
tree.o:create_tree.cpp create_tree.h
	g++ -o tree.o -c -g create_tree.cpp
changetree.o:change_tree.cpp create_tree.h
	g++ -o changetree.o -c -g change_tree.cpp
clean:
	rm *.o
