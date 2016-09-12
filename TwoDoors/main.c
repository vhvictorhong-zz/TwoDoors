//
//  main.c
//  TwoDoors
//
//  Created by Victor Hong on 9/12/16.
//  Copyright © 2016 Victor Hong. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char play;
    char choice;
    
    printf("Welcome to Two doors.\n");
    printf("Would you like to play? (y/n): ");
    scanf("%s", &play);
    
    if (play == 'y') {
        
        do {
            printf("\nYou are a prisoner in a room with 2 doors and 2 guards.\n");
            printf("One of the doors will guide you to freedom and behind the other is a hangman --you don't know which is which.\n");
            printf("One of the guards always tells the truth and the other always lies. You don't know which one is the truth-teller or the liar either.\n");
            printf("You have to choose and open one of these doors, but you can only ask a single question to one of the guards.\n");
            printf("What do you ask so you can pick the door to freedom?\n\n");
            printf("\t1.Ask the truth-guard to point to the door of doom.\n");
            printf("\t2.Ask the liar-guard to point to the door of doom.\n");
            printf("\t3.Doesn't matter which one you pick.\n");
            scanf("%s", &choice);
            
            switch (choice) {
                case 1:
                    printf("No matter which one you choose the guards both tell you which door leads to death, and therefore you can pick the other door.\n");
                    break;
                case 2:
                    printf("No matter which one you choose the guards both tell you which door leads to death, and therefore you can pick the other door.\n");
                    break;
                case 3:
                    printf("No matter which one you choose the guards both tell you which door leads to death, and therefore you can pick the other door.\n");
                    break;
                default:
                    break;
            }
            
            printf("Would you like to play again?\n");
            scanf("%s", &play);

        } while (play == 'y');
    }
    
    return 1;
}
