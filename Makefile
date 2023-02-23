all:algLin

algLin: main.o readMatrix.o matrixSum.o matrixProduct.o
	gcc main.o readMatrix.o matrixSum.o matrixProduct.o -o algLin

main.o: main.c
	gcc -c main.c

readMatrix.o: readMatrix.c
	gcc -c readMatrix.c

matrixSum.o: matrixSum.c
	gcc -c matrixSum.c

matrixProduct.o: matrixProduct.c
	gcc -c matrixProduct.c

clean:
	rm *.o