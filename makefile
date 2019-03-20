point.exe: point.o main.o
	gcc point.o main.o -o point.exe -lm;
	
driver: point.o driver.o
	gcc point.o driver.o -o driver.exe -lm;
	
point.o:
	gcc -c point.c;
	
main.o:
	gcc -c main.c;
	
driver.o:
	gcc -c driver.c;

clean:
	rm -f main.o point.o driver.o point.exe driver.exe
