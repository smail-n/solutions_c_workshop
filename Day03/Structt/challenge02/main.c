#include <stdio.h>
#include <stdlib.h>
 struct etudiant {
  char nom [10];
  char prenom [10];
  float note [7];
};

int main(){
    int n, i;
    struct etudiant p;

    printf ("enter your nom : ");
    fgets (p.nom, 10, stdin);
    p.nom [strcspn (p.nom, "\n")] = '\0';

    printf ("enter your prenom : ");
    fgets (p.prenom, 10, stdin);
    p.prenom [strcspn (p.prenom, "\n")] = '\0';

    do{
        printf ("enter nombr de model : ");
        scanf ("%d", &n);
    }while (n > 7 || n < 0);

    for (i = 0; i < n; i++){
        printf ("enter your not in model %d : ",i+1);
        scanf ("%f", &p.note[i]);
    }


    printf ("-------------etudion : %s %s \n", p.nom, p.prenom);
    for (i = 0; i < n; i++) printf ("model %d note is %.2f\n", i+1, p.note[i]);
    return 0;
}
