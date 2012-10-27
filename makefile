# Makefile for Assigment 1 - Nathaniel Miller

assig1: assig1.o gradeStats.o
	gcc assig1.o gradeStats.o -o assig1
assig1.o: assig1.c gradefunc.h
	gcc -c assig1.c
gradeStats.o: gradeStats.c gradefunc.h
	gcc -c gradeStats.c
clean: 
	rm -f *~
	rm -f *.o