point.exe: point.o main.o
	gcc point.o main.o -o point.exe -lm;
	
point.o:
	gcc -c point.c;
	
main.o:
	gcc -c main.c;

clean:
	rm -f main.o point.o point.exe
