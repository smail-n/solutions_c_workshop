#include <stdio.h>
#include <stdlib.h>
struct point {
    int x;
    int y;
};

int main(){
    struct point p;
    struct point *pt;
    int what;

    pt = &p;

    pt->x = 1;
    pt->y = 3;

    printf ("pramet of (x, y) is x = %d and y = %d\n", pt->x, pt->y);
    printf ("if you want to change x and y enter 1 or enter any nombrer\nenter : ");
    scanf ("%d", &what);

    if (what == 1){
        printf ("x = ");
        scanf ("%d", &pt->x);

        printf ("y = ");
        scanf ("%d", &pt->y);

        printf ("The new value of x and y are\nx = %d  y = %d", pt->x, pt->y);
    }
    else
        printf ("\nGoodBuy!\n");

    return 0;
}
