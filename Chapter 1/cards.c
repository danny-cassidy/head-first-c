/**
 * Program to evaluate face values
 * Released under the Minces License. 
 * (c) 2015 
 */

 #include <stdlib.h>
 #include <stdio.h>

 int main()
 {
    char card_name[3];
    puts("End the card name: ");
    scanf("%2s", card_name);
    int val = 0;

    if(card_name[0] == 'K') {
        val = 10;
    } else if (card_name[0] == 'Q') {
        val = 10;
    } else if (card_name[0] == 'J') {
        val = 10;
    } else if (card_name[0] == 'A') {
        val = 11;
    } else {
        val = atoi(card_name);
    }

    printf("The card value is: %i\n", val);

    if(val >= 3 && val <= 6)
        puts("Count has gone up!");
    else if (val == 10)
        puts("Count has gown down!");

    return 0;
 }