projet:utilisateur.o main.o
	gcc main.o utilisateur.o -o projet -g	
main.o:main.c
	gcc -c main.c -g
utilisateur.o:utilisateur.c
	gcc -c utilisateur.c -g
