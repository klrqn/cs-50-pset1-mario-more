#include <stdio.h>
#include <cs50.h>

// PSET 1 Mario More

int height;

int main(void) {

    // get user input
    height = get_int("Height: ");
    while (height < 0 && height > 23) {
        height = get_int("Height: ");
        }

    // make left pyramid
    for (int i=0; i<height; i++){
        // print spaces for left pyramid
        for (int j=height-1; j>i; j--) {
            printf("-");
        }

        //print hashes for left pyramid
        for(int k=0; k<i+1; k++){
            printf("#");
        }

        //print gap
        for(int l=0; l<2; l++) {
            printf("$");
        }


        // print hashes for right pyramid
        printf("\n");

        //print new line

    }
}