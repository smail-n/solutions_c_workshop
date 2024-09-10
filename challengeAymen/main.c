#include <stdio.h>
#include <stdlib.h>


int FindeMax (int T [], int NumberT){
    int M, i;
    M = T [0];
    for (i = 0; i < NumberT; i++)
        if (M < T [i])
            M = T [i];

    return M;
}
int DiviserInNT (int M, int NT []){
    int i, j = 0;

    for (i = M; i >0; i--)
        if (M % i == 0){
            NT [j] = i;
            j++;
        }
        return j;
}
int main(){
    int T [10], n, i;
    int NT [10], m;

    printf ("who element do you want in Table : ");
    scanf ("%d", &n);

    for (i = 0; i < n; i++){
        printf ("T [%d] = ", i+1);
        scanf ("%d", &T [i]);
    }
    m = DiviserInNT (FindeMax (T, n), NT);

    printf ("        max = %d\n", FindeMax (T, n));
    for (i = 0; i < n; i++)
        printf ("NT [%d] = %d\n", i, NT [i]);
    return 0;
}
