#include <stdio.h>
int main(int argc, char* argv[])  
{
    int money = 100;
    int apples = 10;

    int option;
    int total;
    int ask;

    // Display Menu Options and ask for user input
    printf("--------------------------------------------- \n");
    printf("1. CHECK BALANCE \n");
    printf("2. SELL APPLE \n");
    printf("3. STEAL APPLE \n");
    printf("--------------------------------------------- \n");
    scanf("%d", &option);

    if (option == 1) {
        printf("Your balance is: $%d \n", money);
    }

    else if (option == 2) {
        printf("How many apples do you want to sell? You have 5 apples. 1 apple is $5 \n");
        scanf("%d", &ask);

        switch (ask)
        {
        case 1: apples -= 1; money += 5; printf("Apples: %d, Money: $%d", apples, money);
            break;
        case 2: apples -= 2; money += 10; printf("Apples: %d, Money: $%d", apples, money);
            break;
        case 3: apples -= 3; money += 15; printf("Apples: %d, Money: $%d", apples, money);
            break;
        case 4: apples -= 4; money += 20; printf("Apples: %d, Money: $%d", apples, money);
            break;
        case 5: apples -= 5; money += 25; printf("Apples: %d, Money: $%d", apples, money);
            break;
        case 6: apples -= 6; money += 30; printf("Apples: %d, Money: $%d", apples, money);
            break;
        case 7: apples -= 7; money += 35; printf("Apples: %d, Money: $%d", apples, money);
            break;
        case 8: apples -= 7; money += 40; printf("Apples: %d, Money: $%d", apples, money);
            break;
        case 9: apples -= 9; money += 45; printf("Apples: %d, Money: $%d", apples, money);
            break;
        case 10: apples -= 10; money += 50; printf("Apples: %d, Money: $%d", apples, money);
            break;
        default: printf("Invalid input! You only have 5 apples!");
            break;
        }
    }

    else if (option == 3) {
        int totalapples = apples += 10;
        printf("You now have ten apples from Gerald! Total Apples: %d. Gerald is very mad.", totalapples);
    }

    else {
        printf("PICK FROM 1, 2, OR, 3!");
    }

    return 0;
}
