main:paraent.o judge.o
	g++ -o main paraent.o judge.o
paraent.o:create_parent_array.cpp create_parent_array.h
	g++ -o paraent.o -c -g create_parent_array.cpp
judge.o:judge_node.cpp create_parent_array.h
	g++ -o judge.o -c -g judge_node.cpp
clean:
	rm *.o
