compile_createxls:
	g++ createxls.cpp Command.cpp FileProcessor.cpp -o createxls.out 
run_createxls:
	./createxls.out
compile_hello:
	g++ helloworld.cpp -o helloworld.out
run_hello:
	./helloworld.out