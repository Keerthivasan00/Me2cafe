#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int order_again(int menu){
    char again;
    printf("\nWould you like to order again? (y/n): ");
    scanf(" %c", &again);
    if(again == 'y' || again == 'Y') {
    system("cls");
    main();
} else {
    exit(0);
}
return menu;
}
int main()
{
    int count;
    float total;
    int choise=1;
    int menu=1;
    int partyChoice;
    char name[50];
    int guests;
    char date[20];
    char timeStr[20];
    struct tm party_tm = {0};
    time_t party_time, current_time;

    printf("----------Welcome To Me2Cafe----------");
    printf("\n--------------------------------------");
    printf("\n|              Menu                  |");
    printf("\n|          1.Cheesecakes             |");
    printf("\n|          2.Cakes                   |");
    printf("\n|          3.Donuts                  |");
    printf("\n|          4.Coffee                  |");
    printf("\n|          5.Tres leches             |");
    printf("\n|          6.Ice Creame              |");
    printf("\n|          7.Indian Desserts         |");
    printf("\n|          8.Party Booking           |");
    printf("\n--------------------------------------");
    printf("\n----------Welcome To Me2Cafe----------");

    printf("\nPlease enter your choice from the menu above: ");
    int option;
    scanf("%d",&option);
    int i=1;
    switch(option)
    {
    case 1:
        system("cls");
        while(choise){
        printf("\n");
        printf("----------Welcome To Me2Cafe----------");
        printf("\n--------------------------------------");
        printf("\n|   1. New York-style Cheesecake      |");
        printf("\n|   2. Chicago-style Cheesecake       |");
        printf("\n|   3. Traditional Cheesecake         |");
        printf("\n|   4. No Bake Cheesecake             |");
        printf("\n|   5. Philadelphia-style Cheesecake  |");
        printf("\n|   6. Vegan Cheesecake               |");
        printf("\n--------------------------------------");
        printf("\n----------Welcome To Me2Cafe----------");
        int option_cheescake;
        printf("\nMay I know which cheesecake you would like to order? Kindly enter the number: ");
        scanf("%d",&option_cheescake);

        switch(option_cheescake)
        {
        case 1:
            printf("Price of New York-style Cheesecake is $20 ");
            printf("\nHow many would you like to order? : ");
            scanf("%d",&count);
            total = count*20.0;
            printf("\nWe kindly request you to proceed with the payment of $%.2f:",total);
            while(i){
            float paid;
            scanf("%f",&paid);
            if(paid == total){
              printf("\nThank you for your order. Please wait while we prepare your New York-style Cheesecake.\n");
              i=0;
            }
            else if(paid > total){
                printf("\nThank you! You paid $%.2f. Your change is $%.2f.\n", paid, paid - total);
                printf("Please wait while we prepare your order.\n");
                i=0;
            }
            else if( paid < total){
                printf("\nThe amount you entered is insufficient. Please pay the full amount of $%.2f\n", total);
            }
            }
            printf("\n");
            printf("\nYour order is ready! Enjoy your treat and have a great day!\n");
            menu=order_again(menu);
            break;
        case 2:
            printf("Price of Chicago-style Cheesecake is $15 ");
            printf("\nHow many would you like to order? : ");
            scanf("%d",&count);
            total = count*15.0;
            printf("\nWe kindly request you to proceed with the payment of $%.2f:",total);
            while(i){
            float paid;
            scanf("%f",&paid);
            if(paid == total){
              printf("\nThank you for your order. Please wait while we prepare your Chicago-style Cheesecake.\n");
              i=0;
            }
            else if(paid > total){
                printf("\nThank you! You paid $%.2f. Your change is $%.2f.\n", paid, paid - total);
                printf("Please wait while we prepare your order.\n");
                i=0;
            }
            else if( paid < total){
                printf("\nThe amount you entered is insufficient. Please pay the full amount of $%.2f\n", total);
            }
            }
            printf("\n");
            printf("\nYour order is ready! Enjoy your treat and have a great day!\n");
            menu=order_again(menu);
            break;
        case 3:
            printf("Price of Traditional Cheesecake $25 ");
            printf("\nHow many would you like to order? : ");
            scanf("%d",&count);
            total = count*25.0;
            printf("\nWe kindly request you to proceed with the payment of $%.2f:",total);
            while(i){
            float paid;
            scanf("%f",&paid);
            if(paid == total){
              printf("\nThank you for your order. Please wait while we prepare your Chicago-style Cheesecake.\n");
              i=0;
            }
            else if(paid > total){
                printf("\nThank you! You paid $%.2f. Your change is $%.2f.\n", paid, paid - total);
                printf("Please wait while we prepare your order.\n");
                i=0;
            }
            else if( paid < total){
                printf("\nThe amount you entered is insufficient. Please pay the full amount of $%.2f\n", total);
            }
            }
            printf("\n");
            printf("\nYour order is ready! Enjoy your treat and have a great day!\n");
            menu=order_again(menu);
            break;
        case 4:
            printf("Price of No Bake Cheesecake $10 ");
            printf("\nHow many would you like to order? : ");
            scanf("%d",&count);
            total = count*10.0;
            printf("\nWe kindly request you to proceed with the payment of $%.2f:",total);
            while(i){
            float paid;
            scanf("%f",&paid);
            if(paid == total){
              printf("\nThank you for your order. Please wait while we prepare your No Bake Cheesecake.\n");
              i=0;
            }
            else if(paid > total){
                printf("\nThank you! You paid $%.2f. Your change is $%.2f.\n", paid, paid - total);
                printf("Please wait while we prepare your order.\n");
                i=0;
            }
            else if( paid < total){
                printf("\nThe amount you entered is insufficient. Please pay the full amount of $%.2f\n", total);
            }
            }
            printf("\n");
            printf("\nYour order is ready! Enjoy your treat and have a great day!\n");
            menu=order_again(menu);;
            break;
        case 5:
            printf("Price of Philadelphia-style Cheesecake $25 ");
            printf("\nHow many would you like to order? : ");
            scanf("%d",&count);
            total = count*25.0;
            printf("\nWe kindly request you to proceed with the payment of $%.2f:",total);
            while(i){
            float paid;
            scanf("%f",&paid);
            if(paid == total){
              printf("\nThank you for your order. Please wait while we prepare your Philadelphia-style Cheesecake.\n");
              i=0;
            }
            else if(paid > total){
                printf("\nThank you! You paid $%.2f. Your change is $%.2f.\n", paid, paid - total);
                printf("Please wait while we prepare your order.\n");
                i=0;
            }
            else if( paid < total){
                printf("\nThe amount you entered is insufficient. Please pay the full amount of $%.2f\n", total);
            }
            }
            printf("\n");
            printf("\nYour order is ready! Enjoy your treat and have a great day!\n");
            menu=order_again(menu);
            break;
        case 6:
            printf("Price of Vegan Cheesecake $17 ");
            printf("\nHow many would you like to order? : ");
            scanf("%d",&count);
            total = count*25.0;
            printf("\nWe kindly request you to proceed with the payment of $%.2f:",total);
            while(i){
            float paid;
            scanf("%f",&paid);
            if(paid == total){
              printf("\nThank you for your order. Please wait while we prepare your Vegan Cheesecake.\n");
              i=0;
            }
            else if(paid > total){
                printf("\nThank you! You paid $%.2f. Your change is $%.2f.\n", paid, paid - total);
                printf("Please wait while we prepare your order.\n");
                i=0;
            }
            else if( paid < total){
                printf("\nThe amount you entered is insufficient. Please pay the full amount of $%.2f\n", total);
            }
            }
            printf("\n");
            printf("\nYour order is ready! Enjoy your treat and have a great day!\n");
            menu=order_again(menu);
            break;
        default:
            system("cls");
            printf("Enter the correct choise..!\n");
            choise=1;
            }
        }
    case 2:
        system("cls");
        while(choise){
            printf("\n");
            printf("----------Welcome To Me2Cafe----------");
            printf("\n--------------------------------------");
            printf("\n|            cake Menu               |");
            printf("\n|   1. Buttermilk cakes              |");
            printf("\n|   2. Banana Pancakes               |");
            printf("\n|   3. Blueberry Pancakes            |");
            printf("\n|   4. Chocolate Chip Pancakes       |");
            printf("\n--------------------------------------");
            printf("\n----------Welcome To Me2Cafe----------");
            int option_cake;
            printf("\nMay I know which cake you would like to order? Kindly enter the number: ");
            scanf("%d",&option_cake);
            switch(option_cake)
            {
            case 1:
                printf("Price of Buttermilk cake is $20 ");
                printf("\nHow many would you like to order? : ");
                scanf("%d",&count);
                total = count*20.0;
                printf("\nWe kindly request you to proceed with the payment of $%.2f:",total);
                while(i){
                float paid;
                scanf("%f",&paid);
                if(paid == total){
                    system("cls");
                    printf("\nThank you for your order. Please wait while we prepare your Buttermilk cake.\n");
                    i=0;
                }
                else if(paid > total){
                    printf("\nThank you! You paid $%.2f. Your change is $%.2f.\n", paid, paid - total);
                    printf("Please wait while we prepare your order.\n");
                    i=0;
                }
                else if( paid < total){
                    printf("\nThe amount you entered is insufficient. Please pay the full amount of $%.2f\n", total);
                }
                }
                printf("\n");
                printf("\nYour order is ready! Enjoy your treat and have a great day!\n");
                order_again(menu);
                break;
            case 2:
                printf("Price of Banana cake is $15 ");
                printf("\nHow many would you like to order? : ");
                scanf("%d",&count);
                total = count*15.0;
                printf("\nWe kindly request you to proceed with the payment of $%.2f:",total);
                while(i){
                    float paid;
                    scanf("%f",&paid);
                    if(paid == total){
                        printf("\nThank you for your order. Please wait while we prepare your Banana cake.\n");
                        i=0;
                    }
                    else if(paid > total){
                        printf("\nThank you! You paid $%.2f. Your change is $%.2f.\n", paid, paid - total);
                        printf("Please wait while we prepare your order.\n");
                        i=0;
                    }
                    else if( paid < total){
                        printf("\nThe amount you entered is insufficient. Please pay the full amount of $%.2f\n", total);
                    }
                }
                printf("\n");
                printf("\nYour order is ready! Enjoy your treat and have a great day!\n");
                order_again(menu);
                break;
            case 3:
                printf("Price of Blueberry cake $25 ");
                printf("\nHow many would you like to order? : ");
                scanf("%d",&count);
                total = count*25.0;
                printf("\nWe kindly request you to proceed with the payment of $%.2f:",total);
                while(i){
                    float paid;
                    scanf("%f",&paid);
                    if(paid == total){
                        printf("\nThank you for your order. Please wait while we prepare your Blueberry cake.\n");
                        i=0;
                    }
                    else if(paid > total){
                        printf("\nThank you! You paid $%.2f. Your change is $%.2f.\n", paid, paid - total);
                        printf("Please wait while we prepare your order.\n");
                        i=0;
                    }
                    else if( paid < total){
                        printf("\nThe amount you entered is insufficient. Please pay the full amount of $%.2f\n", total);
                    }
                }
                printf("\n");
                printf("\nYour order is ready! Enjoy your treat and have a great day!\n");
                order_again(menu);
                break;
            case 4:
                printf("Price of Chocolate Chip cake $10 ");
                printf("\nHow many would you like to order? : ");
                scanf("%d",&count);
                total = count*10.0;
                printf("\nWe kindly request you to proceed with the payment of $%.2f:",total);
                while(i){
                    float paid;
                    scanf("%f",&paid);
                    if(paid == total){
                        printf("\nThank you for your order. Please wait while we prepare your Chocolate Chip cake.\n");
                        i=0;
                    }
                    else if(paid > total){
                        printf("\nThank you! You paid $%.2f. Your change is $%.2f.\n", paid, paid - total);
                        printf("Please wait while we prepare your order.\n");
                        i=0;
                    }
                    else if( paid < total){
                        printf("\nThe amount you entered is insufficient. Please pay the full amount of $%.2f\n", total);
                    }
                }
                printf("\n");
                printf("\nYour order is ready! Enjoy your treat and have a great day!\n");
                order_again(menu);
                break;
            default:
            system("cls");
            printf("Enter the correct choise..!\n");
            choise=1;
            }
        }
    case 3:
        system("cls");
        while(choise){
            printf("\n");
            printf("----------Welcome To Me2Cafe----------");
            printf("\n--------------------------------------");
            printf("\n|        1. Glazed Donut              |");
            printf("\n|        2. Chocolate Frosted Donut   |");
            printf("\n|        3. Jelly-Filled Donut        |");
            printf("\n|        4. Boston Cream Donut        |");
            printf("\n--------------------------------------");
            printf("\n----------Welcome To Me2Cafe----------");
            int donut;
            printf("\nMay I know which cake you would like to order? Kindly enter the number: ");
            scanf("%d",&donut);
            switch(donut)
            {
            case 1:
                printf("Price of Glazed Donut is $50 ");
                printf("\nHow many would you like to order? : ");
                scanf("%d",&count);
                total = count*50.0;
                printf("\nWe kindly request you to proceed with the payment of $%.2f:",total);
                while(i){
                float paid;
                scanf("%f",&paid);
                if(paid == total){
                    system("cls");
                    printf("\nThank you for your order. Please wait while we prepare your Glazed Donut.\n");
                    i=0;
                }
                else if(paid > total){
                    printf("\nThank you! You paid $%.2f. Your change is $%.2f.\n", paid, paid - total);
                    printf("Please wait while we prepare your order.\n");
                    i=0;
                }
                else if( paid < total){
                    printf("\nThe amount you entered is insufficient. Please pay the full amount of $%.2f\n", total);
                }
                }
                printf("\n");
                printf("\nYour order is ready! Enjoy your treat and have a great day!\n");
                order_again(menu);
                break;
            case 2:
                printf("Price of Chocolate Frosted Donut is $75 ");
                printf("\nHow many would you like to order? : ");
                scanf("%d",&count);
                total = count*75.0;
                printf("\nWe kindly request you to proceed with the payment of $%.2f:",total);
                while(i){
                    float paid;
                    scanf("%f",&paid);
                    if(paid == total){
                        printf("\nThank you for your order. Please wait while we prepare your Chocolate Frosted Donut.\n");
                        i=0;
                    }
                    else if(paid > total){
                        printf("\nThank you! You paid $%.2f. Your change is $%.2f.\n", paid, paid - total);
                        printf("Please wait while we prepare your order.\n");
                        i=0;
                    }
                    else if( paid < total){
                        printf("\nThe amount you entered is insufficient. Please pay the full amount of $%.2f\n", total);
                    }
                }
                printf("\n");
                printf("\nYour order is ready! Enjoy your treat and have a great day!\n");
                order_again(menu);
                break;
            case 3:
                printf("Price of Jelly-Filled Donut $45 ");
                printf("\nHow many would you like to order? : ");
                scanf("%d",&count);
                total = count*25.0;
                printf("\nWe kindly request you to proceed with the payment of $%.2f:",total);
                while(i){
                    float paid;
                    scanf("%f",&paid);
                    if(paid == total){
                        printf("\nThank you for your order. Please wait while we prepare your Jelly-Filled Donut.\n");
                        i=0;
                    }
                    else if(paid > total){
                        printf("\nThank you! You paid $%.2f. Your change is $%.2f.\n", paid, paid - total);
                        printf("Please wait while we prepare your order.\n");
                        i=0;
                    }
                    else if( paid < total){
                        printf("\nThe amount you entered is insufficient. Please pay the full amount of $%.2f\n", total);
                    }
                }
                printf("\n");
                printf("\nYour order is ready! Enjoy your treat and have a great day!\n");
                order_again(menu);
                break;
            case 4:
                printf("Price of Boston Cream Donut $60 ");
                printf("\nHow many would you like to order? : ");
                scanf("%d",&count);
                total = count*60.0;
                printf("\nWe kindly request you to proceed with the payment of $%.2f:",total);
                while(i){
                    float paid;
                    scanf("%f",&paid);
                    if(paid == total){
                        printf("\nThank you for your order. Please wait while we prepare your Boston Cream Donut.\n");
                        i=0;
                    }
                    else if(paid > total){
                        printf("\nThank you! You paid $%.2f. Your change is $%.2f.\n", paid, paid - total);
                        printf("Please wait while we prepare your order.\n");
                        i=0;
                    }
                    else if( paid < total){
                        printf("\nThe amount you entered is insufficient. Please pay the full amount of $%.2f\n", total);
                    }
                }
                printf("\n");
                printf("\nYour order is ready! Enjoy your treat and have a great day!\n");
                order_again(menu);
                break;
            default:
            system("cls");
            printf("Enter the correct choise..!\n");
            choise=1;
            }
        }
    case 4:
         system("cls");
        while(choise){
            printf("\n");
            printf("----------Welcome To Me2Cafe----------");
            printf("\n--------------------------------------");
            printf("\n|        1. Espresso                  |");
            printf("\n|        2. Cappuccino                |");
            printf("\n|        3. Latte                     |");
            printf("\n|        4. Americano                 |");
            printf("\n|        5. Mocha                     |");
            printf("\n--------------------------------------");
            printf("\n----------Welcome To Me2Cafe----------");

            int coffee;
            printf("\nMay I know which coffee you would like to order? Kindly enter the number: ");
            scanf("%d",&coffee);
            switch(coffee)
            {
            case 1:
                printf("Price of Espresso is $50 ");
                printf("\nHow many would you like to order? : ");
                scanf("%d",&count);
                total = count*50.0;
                printf("\nWe kindly request you to proceed with the payment of $%.2f:",total);
                while(i){
                float paid;
                scanf("%f",&paid);
                if(paid == total){
                    system("cls");
                    printf("\nThank you for your order. Please wait while we prepare your Espresso.\n");
                    i=0;
                }
                else if(paid > total){
                    printf("\nThank you! You paid $%.2f. Your change is $%.2f.\n", paid, paid - total);
                    printf("Please wait while we prepare your order.\n");
                    i=0;
                }
                else if( paid < total){
                    printf("\nThe amount you entered is insufficient. Please pay the full amount of $%.2f\n", total);
                }
                }
                printf("\n");
                printf("\nYour order is ready! Enjoy your treat and have a great day!\n");
                order_again(menu);
                break;
            case 2:
                printf("Price of Cappuccino is $75 ");
                printf("\nHow many would you like to order? : ");
                scanf("%d",&count);
                total = count*75.0;
                printf("\nWe kindly request you to proceed with the payment of $%.2f:",total);
                while(i){
                    float paid;
                    scanf("%f",&paid);
                    if(paid == total){
                        printf("\nThank you for your order. Please wait while we prepare your Cappuccino.\n");
                        i=0;
                    }
                    else if(paid > total){
                        printf("\nThank you! You paid $%.2f. Your change is $%.2f.\n", paid, paid - total);
                        printf("Please wait while we prepare your order.\n");
                        i=0;
                    }
                    else if( paid < total){
                        printf("\nThe amount you entered is insufficient. Please pay the full amount of $%.2f\n", total);
                    }
                }
                printf("\n");
                printf("\nYour order is ready! Enjoy your treat and have a great day!\n");
                order_again(menu);
                break;
            case 3:
                printf("Price of Latte $45 ");
                printf("\nHow many would you like to order? : ");
                scanf("%d",&count);
                total = count*25.0;
                printf("\nWe kindly request you to proceed with the payment of $%.2f:",total);
                while(i){
                    float paid;
                    scanf("%f",&paid);
                    if(paid == total){
                        printf("\nThank you for your order. Please wait while we prepare your Latte.\n");
                        i=0;
                    }
                    else if(paid > total){
                        printf("\nThank you! You paid $%.2f. Your change is $%.2f.\n", paid, paid - total);
                        printf("Please wait while we prepare your order.\n");
                        i=0;
                    }
                    else if( paid < total){
                        printf("\nThe amount you entered is insufficient. Please pay the full amount of $%.2f\n", total);
                    }
                }
                printf("\n");
                printf("\nYour order is ready! Enjoy your treat and have a great day!\n");
                order_again(menu);
                break;
            case 4:
                printf("Price of Americano $60 ");
                printf("\nHow many would you like to order? : ");
                scanf("%d",&count);
                total = count*60.0;
                printf("\nWe kindly request you to proceed with the payment of $%.2f:",total);
                while(i){
                    float paid;
                    scanf("%f",&paid);
                    if(paid == total){
                        printf("\nThank you for your order. Please wait while we prepare your Americano.\n");
                        i=0;
                    }
                    else if(paid > total){
                        printf("\nThank you! You paid $%.2f. Your change is $%.2f.\n", paid, paid - total);
                        printf("Please wait while we prepare your order.\n");
                        i=0;
                    }
                    else if( paid < total){
                        printf("\nThe amount you entered is insufficient. Please pay the full amount of $%.2f\n", total);
                    }
                }
                printf("\n");
                printf("\nYour order is ready! Enjoy your treat and have a great day!\n");
                order_again(menu);
                break;
            case 5:
                printf("Price of Mocha $60 ");
                printf("\nHow many would you like to order? : ");
                scanf("%d",&count);
                total = count*60.0;
                printf("\nWe kindly request you to proceed with the payment of $%.2f:",total);
                while(i){
                    float paid;
                    scanf("%f",&paid);
                    if(paid == total){
                        printf("\nThank you for your order. Please wait while we prepare your Mocha.\n");
                        i=0;
                    }
                    else if(paid > total){
                        printf("\nThank you! You paid $%.2f. Your change is $%.2f.\n", paid, paid - total);
                        printf("Please wait while we prepare your order.\n");
                        i=0;
                    }
                    else if( paid < total){
                        printf("\nThe amount you entered is insufficient. Please pay the full amount of $%.2f\n", total);
                    }
                }
                printf("\n");
                printf("\nYour order is ready! Enjoy your treat and have a great day!\n");
                order_again(menu);
                break;
            default:
            system("cls");
            printf("Enter the correct choise..!\n");
            choise=1;
            }
        }
    case 5:
        system("cls");
        printf("Price of Tres leches is $150 ");
        printf("\nHow many would you like to order? : ");
        scanf("%d",&count);
        total = count*50.0;
        printf("\nWe kindly request you to proceed with the payment of $%.2f:",total);
        while(i){
            float paid;
            scanf("%f",&paid);
            if(paid == total){
                system("cls");
                printf("\nThank you for your order. Please wait while we prepare your Tres leches.\n");
                i=0;
            }
            else if(paid > total){
                printf("\nThank you! You paid $%.2f. Your change is $%.2f.\n", paid, paid - total);
                printf("Please wait while we prepare your order.\n");
                i=0;
            }
            else if( paid < total){
                printf("\nThe amount you entered is insufficient. Please pay the full amount of $%.2f\n", total);
            }
        }
        printf("\n");
        printf("\nYour order is ready! Enjoy your treat and have a great day!\n");
        order_again(menu);
    case 6:
        system("cls");
        while(choise){
            printf("\n");
            printf("----------Welcome To Me2Cafe----------");
            printf("\n--------------------------------------");
            printf("\n|        1. Vanilla Ice Cream         |");
            printf("\n|        2. Chocolate Ice Cream       |");
            printf("\n|        3. Strawberry Ice Cream      |");
            printf("\n|        4. Mint Chocolate Chip       |");
            printf("\n|        5. Cookies and Cream         |");
            printf("\n--------------------------------------");
            printf("\n----------Welcome To Me2Cafe----------");
            int Ice_cream;
            printf("\nMay I know which Ice_cream you would like to order? Kindly enter the number: ");
            scanf("%d",&Ice_cream);
            switch(Ice_cream)
            {
            case 1:
                printf("Price of Vanilla Ice Cream is $50 ");
                printf("\nHow many would you like to order? : ");
                scanf("%d",&count);
                total = count*50.0;
                printf("\nWe kindly request you to proceed with the payment of $%.2f:",total);
                while(i){
                float paid;
                scanf("%f",&paid);
                if(paid == total){
                    system("cls");
                    printf("\nThank you for your order. Please wait while we prepare your Vanilla Ice Cream.\n");
                    i=0;
                }
                else if(paid > total){
                    printf("\nThank you! You paid $%.2f. Your change is $%.2f.\n", paid, paid - total);
                    printf("Please wait while we prepare your order.\n");
                    i=0;
                }
                else if( paid < total){
                    printf("\nThe amount you entered is insufficient. Please pay the full amount of $%.2f\n", total);
                }
                }
                printf("\n");
                printf("\nYour order is ready! Enjoy your treat and have a great day!\n");
                order_again(menu);
                break;
            case 2:
                printf("Price of Chocolate Ice Cream is $75 ");
                printf("\nHow many would you like to order? : ");
                scanf("%d",&count);
                total = count*75.0;
                printf("\nWe kindly request you to proceed with the payment of $%.2f:",total);
                while(i){
                    float paid;
                    scanf("%f",&paid);
                    if(paid == total){
                        printf("\nThank you for your order. Please wait while we prepare your Chocolate Ice Cream.\n");
                        i=0;
                    }
                    else if(paid > total){
                        printf("\nThank you! You paid $%.2f. Your change is $%.2f.\n", paid, paid - total);
                        printf("Please wait while we prepare your order.\n");
                        i=0;
                    }
                    else if( paid < total){
                        printf("\nThe amount you entered is insufficient. Please pay the full amount of $%.2f\n", total);
                    }
                }
                printf("\n");
                printf("\nYour order is ready! Enjoy your treat and have a great day!\n");
                order_again(menu);
                break;
            case 3:
                printf("Price of Strawberry Ice Cream $45 ");
                printf("\nHow many would you like to order? : ");
                scanf("%d",&count);
                total = count*25.0;
                printf("\nWe kindly request you to proceed with the payment of $%.2f:",total);
                while(i){
                    float paid;
                    scanf("%f",&paid);
                    if(paid == total){
                        printf("\nThank you for your order. Please wait while we prepare your Strawberry Ice Cream.\n");
                        i=0;
                    }
                    else if(paid > total){
                        printf("\nThank you! You paid $%.2f. Your change is $%.2f.\n", paid, paid - total);
                        printf("Please wait while we prepare your order.\n");
                        i=0;
                    }
                    else if( paid < total){
                        printf("\nThe amount you entered is insufficient. Please pay the full amount of $%.2f\n", total);
                    }
                }
                printf("\n");
                printf("\nYour order is ready! Enjoy your treat and have a great day!\n");
                order_again(menu);
                break;
            case 4:
                printf("Price of Mint Chocolate Chip $60 ");
                printf("\nHow many would you like to order? : ");
                scanf("%d",&count);
                total = count*60.0;
                printf("\nWe kindly request you to proceed with the payment of $%.2f:",total);
                while(i){
                    float paid;
                    scanf("%f",&paid);
                    if(paid == total){
                        printf("\nThank you for your order. Please wait while we prepare your Mint Chocolate Chip.\n");
                        i=0;
                    }
                    else if(paid > total){
                        printf("\nThank you! You paid $%.2f. Your change is $%.2f.\n", paid, paid - total);
                        printf("Please wait while we prepare your order.\n");
                        i=0;
                    }
                    else if( paid < total){
                        printf("\nThe amount you entered is insufficient. Please pay the full amount of $%.2f\n", total);
                    }
                }
                printf("\n");
                printf("\nYour order is ready! Enjoy your treat and have a great day!\n");
                order_again(menu);
                break;
            case 5:
                printf("Price of Cookies and Cream $60 ");
                printf("\nHow many would you like to order? : ");
                scanf("%d",&count);
                total = count*60.0;
                printf("\nWe kindly request you to proceed with the payment of $%.2f:",total);
                while(i){
                    float paid;
                    scanf("%f",&paid);
                    if(paid == total){
                        printf("\nThank you for your order. Please wait while we prepare your Cookies and Cream.\n");
                        i=0;
                    }
                    else if(paid > total){
                        printf("\nThank you! You paid $%.2f. Your change is $%.2f.\n", paid, paid - total);
                        printf("Please wait while we prepare your order.\n");
                        i=0;
                    }
                    else if( paid < total){
                        printf("\nThe amount you entered is insufficient. Please pay the full amount of $%.2f\n", total);
                    }
                }
                printf("\n");
                printf("\nYour order is ready! Enjoy your treat and have a great day!\n");
                order_again(menu);
                break;
            default:
            system("cls");
            printf("Enter the correct choise..!\n");
            choise=1;
            }
        }
    case 7:
        system("cls");
        while(choise){
            printf("\n");
            printf("----------Welcome To Me2Cafe----------");
            printf("\n--------------------------------------");
            printf("\n|          1. Gulab Jamun             |");
            printf("\n|          2. Rasgulla                |");
            printf("\n|          3. Jalebi                  |");
            printf("\n|          4. Kaju Katli              |");
            printf("\n|          5. Ladoo                   |");
            printf("\n--------------------------------------");
            printf("\n----------Welcome To Me2Cafe----------");

            int dessert;
            printf("\nMay I know which Indian Dessert you would like to order? Kindly enter the number: ");
            scanf("%d",&dessert);
            switch(dessert)
            {
            case 1:
                printf("Price of Gulab Jamun is $50 ");
                printf("\nHow many would you like to order? : ");
                scanf("%d",&count);
                total = count*50.0;
                printf("\nWe kindly request you to proceed with the payment of $%.2f:",total);
                while(i){
                float paid;
                scanf("%f",&paid);
                if(paid == total){
                    system("cls");
                    printf("\nThank you for your order. Please wait while we prepare your Gulab Jamun.\n");
                    i=0;
                }
                else if(paid > total){
                    printf("\nThank you! You paid $%.2f. Your change is $%.2f.\n", paid, paid - total);
                    printf("Please wait while we prepare your order.\n");
                    i=0;
                }
                else if( paid < total){
                    printf("\nThe amount you entered is insufficient. Please pay the full amount of $%.2f\n", total);
                }
                }
                printf("\n");
                printf("\nYour order is ready! Enjoy your treat and have a great day!\n");
                order_again(menu);
                break;
            case 2:
                printf("Price of Rasgulla is $75 ");
                printf("\nHow many would you like to order? : ");
                scanf("%d",&count);
                total = count*75.0;
                printf("\nWe kindly request you to proceed with the payment of $%.2f:",total);
                while(i){
                    float paid;
                    scanf("%f",&paid);
                    if(paid == total){
                        printf("\nThank you for your order. Please wait while we prepare your Rasgulla.\n");
                        i=0;
                    }
                    else if(paid > total){
                        printf("\nThank you! You paid $%.2f. Your change is $%.2f.\n", paid, paid - total);
                        printf("Please wait while we prepare your order.\n");
                        i=0;
                    }
                    else if( paid < total){
                        printf("\nThe amount you entered is insufficient. Please pay the full amount of $%.2f\n", total);
                    }
                }
                printf("\n");
                printf("\nYour order is ready! Enjoy your treat and have a great day!\n");
                order_again(menu);
                break;
            case 3:
                printf("Price of Jalebi $45 ");
                printf("\nHow many would you like to order? : ");
                scanf("%d",&count);
                total = count*25.0;
                printf("\nWe kindly request you to proceed with the payment of $%.2f:",total);
                while(i){
                    float paid;
                    scanf("%f",&paid);
                    if(paid == total){
                        printf("\nThank you for your order. Please wait while we prepare your Jalebi.\n");
                        i=0;
                    }
                    else if(paid > total){
                        printf("\nThank you! You paid $%.2f. Your change is $%.2f.\n", paid, paid - total);
                        printf("Please wait while we prepare your order.\n");
                        i=0;
                    }
                    else if( paid < total){
                        printf("\nThe amount you entered is insufficient. Please pay the full amount of $%.2f\n", total);
                    }
                }
                printf("\n");
                printf("\nYour order is ready! Enjoy your treat and have a great day!\n");
                order_again(menu);
                break;
            case 4:
                printf("Price of Kaju Katli $60 ");
                printf("\nHow many would you like to order? : ");
                scanf("%d",&count);
                total = count*60.0;
                printf("\nWe kindly request you to proceed with the payment of $%.2f:",total);
                while(i){
                    float paid;
                    scanf("%f",&paid);
                    if(paid == total){
                        printf("\nThank you for your order. Please wait while we prepare your Kaju Katli.\n");
                        i=0;
                    }
                    else if(paid > total){
                        printf("\nThank you! You paid $%.2f. Your change is $%.2f.\n", paid, paid - total);
                        printf("Please wait while we prepare your order.\n");
                        i=0;
                    }
                    else if( paid < total){
                        printf("\nThe amount you entered is insufficient. Please pay the full amount of $%.2f\n", total);
                    }
                }
                printf("\n");
                printf("\nYour order is ready! Enjoy your treat and have a great day!\n");
                order_again(menu);
                break;
            case 5:
                printf("Price of Rasmalai $60 ");
                printf("\nHow many would you like to order? : ");
                scanf("%d",&count);
                total = count*60.0;
                printf("\nWe kindly request you to proceed with the payment of $%.2f:",total);
                while(i){
                    float paid;
                    scanf("%f",&paid);
                    if(paid == total){
                        printf("\nThank you for your order. Please wait while we prepare your Rasmalai.\n");
                        i=0;
                    }
                    else if(paid > total){
                        printf("\nThank you! You paid $%.2f. Your change is $%.2f.\n", paid, paid - total);
                        printf("Please wait while we prepare your order.\n");
                        i=0;
                    }
                    else if( paid < total){
                        printf("\nThe amount you entered is insufficient. Please pay the full amount of $%.2f\n", total);
                    }
                }
                printf("\n");
                printf("\nYour order is ready! Enjoy your treat and have a great day!\n");
                order_again(menu);
                break;
            default:
            system("cls");
            printf("Enter the correct choise..!\n");
            choise=1;
            }
        }
    case 8:
        system("cls");
        printf("----------Welcome To Me2Cafe----------");
        printf("\n--------------------------------------");
        printf("\n|         Party Booking Menu         |");
        printf("\n|   1. Birthday Party                 |");
        printf("\n|   2. Marriage Party                 |");
        printf("\n|   3. Bachelor Party                 |");
        printf("\n|   4. Anniversary Party              |");
        printf("\n|   5. Baby Shower                    |");
        printf("\n--------------------------------------");

        printf("\nPlease select your party type (1-5): ");
        scanf("%d", &partyChoice);

        printf("May I have your name, please? ");
        scanf(" %[^\n]", name);

        printf("Enter the number of guests: ");
        scanf("%d", &guests);

        int valid = 0;
        while (!valid) {
            printf("Enter the date of the party (DD-MM-YYYY): ");
            scanf("%s", date);

            printf("Enter the time of the party (HH:MM in 24-hour format): ");
            scanf("%s", timeStr);

            int dd, mm, yyyy, hh, min;
            if (sscanf(date, "%d-%d-%d", &dd, &mm, &yyyy) != 3 ||
                sscanf(timeStr, "%d:%d", &hh, &min) != 2) {
                printf("Invalid date or time format. Please try again.\n");
                continue;
            }

            memset(&party_tm, 0, sizeof(struct tm));
            party_tm.tm_mday = dd;
            party_tm.tm_mon = mm - 1;
            party_tm.tm_year = yyyy - 1900;
            party_tm.tm_hour = hh;
            party_tm.tm_min = min;
            party_tm.tm_sec = 0;

            party_time = mktime(&party_tm);
            time(&current_time);

            if (party_time == -1 || difftime(party_time, current_time) <= 0) {
                printf("Invalid or past date/time. Please enter a future time.\n");
            }
            else {
            valid = 1;
            }
    }
float pricePerGuest = 50.0;
    float totalCost = guests * pricePerGuest;
    float paidAmount;

    printf("\nThe total cost for your party is $%.2f.\n", totalCost);

    while (paidAmount < totalCost) {
        printf("Please proceed with payment: $");
        scanf("%f", &paidAmount);

        if (paidAmount < totalCost) {
            printf("Insufficient amount. Please pay at least $%.2f.\n", totalCost);
        }
    }

    printf("\nThank you, %s! Your ", name);
    switch (partyChoice) {
        case 1: printf("Birthday Party"); break;
        case 2: printf("Marriage Party"); break;
        case 3: printf("Bachelor Party"); break;
        case 4: printf("Anniversary Party"); break;
        case 5: printf("Baby Shower"); break;
        default: printf("Special Event"); break;
    }
    printf(" for %d guests has been booked on %s at %s.\n", guests, date, timeStr);

    if (paidAmount > totalCost) {
        printf("You paid $%.2f. Your change is $%.2f.\n", paidAmount, paidAmount - totalCost);
    }

    printf("We look forward to hosting your event at Me2Cafe!\n");
    order_again(menu);
    }
}
