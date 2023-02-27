#include <stdio.h>
#include <string.h>

int main (){

    char name[100];
    char skin_type[100];

    printf("\nHello there,What is your name?: ");
    fgets (name, 100, stdin);
    name[strlen(name)-1] = '\0';

    printf("Hello %s, what is your skin type?, A: oily B: dry C: normal D: uknown\n", name);

    fgets (skin_type, 100, stdin);
    skin_type[strlen(skin_type)-1] = '\0';

    //Conditionals for the skin type 


    if (strcmp(skin_type, "oily") == 0)
    {
        printf("Hello you can try this products,\n");
    }
    else if (strcmp(skin_type, "dry") == 0)
    {
        printf("you can try this products,\n");
    }
    else if (strcmp(skin_type, "normal") == 0)
    {
        printf("Use this products,\n");
    }
    else if (strcmp(skin_type, "uknown") == 0)
    {
        printf("Check out this articule\n");
    }
    else{
        printf("Sorry input unkown, use only skin type A: oily B:dry C:normal D: uknown\n");
    }


    return (0);
}