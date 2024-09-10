#include <stdio.h>
#include <stdlib.h>

struct rectongle {
    float large;
    float longeur;
};

float surface (float a, float b){
    return a * b;
}

int main(){
    struct rectongle p;

    printf ("enter large : ");
    scanf ("%f", &p.large);

    printf ("enter longeur : ");
    scanf ("%f", &p.longeur);

    printf ("surface %.2f ", surface (p.large, p.longeur));

    return 0;
}
