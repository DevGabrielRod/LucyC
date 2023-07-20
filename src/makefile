nome = calc
all: $(nome).o
	g++ $(nome).o main.cpp -o test.exe
	rm -rf *.o

%.o: %.asm
	nasm -f elf64 $<

clean:
	rm -rf *.o *.exe