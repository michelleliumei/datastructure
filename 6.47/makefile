main:create_tree.o queue.o main.cpp
	g++ -o main -g create_tree.o queue.o main.cpp
create_tree.o:create_tree.cpp create_tree.h
	g++ -o create_tree.o -g -c create_tree.cpp
queue.o:queue.cpp queue.h
	g++ -o queue.o -g -c queue.cpp
clean:
	rm *.o
