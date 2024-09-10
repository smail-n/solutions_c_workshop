#include <stdio.h>
#include <stdlib.h>

struct Person {
    char nom [10];
    char prenom [10];
    int age;
};

int main(){
    struct Person p;

    printf ("enter nom : ");
    fgets (p.nom, 10, stdin);
    p.nom [strcspn (p.nom, "\n")] = '\0';

    printf ("enter prenom : ");
    fgets (p.prenom, 10, stdin);
    p.nom [strcspn (p.prenom, "\n")] = '\0';

    printf ("enter your age : ");
    scanf ("%d", &p.age);

    printf ("your Full name is %s %s and age is %d", p.nom, p.prenom, p.age);

    return 0;
}
