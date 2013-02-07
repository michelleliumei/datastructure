treeDepth:main.o stack.o
	g++ main.o stack.o -o treeDepth
main.o:stack.h treeDepth.cpp treeDepth.h
	g++ -c -g treeDepth.cpp -o main.o
stack.o:stack.h stack.cpp 
	g++ -c -g stack.cpp -o stack.o
clean:
	rm main.o stack.o treeDepth

