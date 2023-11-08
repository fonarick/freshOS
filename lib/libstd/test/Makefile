all: main

clean:
	rm main

main: main.cpp
	g++ -L ../ -lstdc++ -I../ -Wl,-rpath=./ -o main main.cpp