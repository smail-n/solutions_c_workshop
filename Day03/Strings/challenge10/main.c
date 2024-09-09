#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char String1 [20];
    char searchString [20];
    char *exist;
    int i, j;

    printf ("enter a string : ");
    gets (String1);


    printf ("enter a string to search about it in a last string \nenter: ");
    fgets (searchString, strlen (String1), stdin);
    searchString [strcspn (searchString, "\n")] = '\0';

    i = j = 0;
    while (String1 [i] != '\0'){
        searchString[j] = tolower (searchString[j]);
        String1[i] = tolower (String1[i]);

        if (searchString[j] != '\0')
            j++;
        i++;
    }


    exist = strstr (String1, searchString);
    if (exist)
        printf ("%s it's exist in %s ", searchString, String1);
    else
        printf ("%s it isn't exist in %s ", searchString, String1);

    return 0;
}
