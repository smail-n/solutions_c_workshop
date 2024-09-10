#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct livre {
    char nameLivre [10];
    char auter [10];
    int year;
};

struct livre liberirai (){

struct livre Book;

printf ("enter auter's name : ");
fgets (Book.auter, 10, stdin);
Book.auter [strcspn (Book.auter, "\n")] = '\0';


printf ("enter Book's name : ");
fgets (Book.nameLivre, 10, stdin);
Book.nameLivre [strcspn (Book.nameLivre, "\n")] = '\0';

printf ("enter the year : ");
scanf ("%d", &Book.year);

return Book;
}


int main(){
    struct livre pt;

    pt = liberirai ();

    printf("\t---The Book is %s ----\n", pt.nameLivre);
    printf("The auter : %s\n", pt.auter);
    printf("year : %d", pt.year);

    return 0;
}
