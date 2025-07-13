#include <ctype.h>
#include <stdio.h>

int main(void) {
    char input;
    printf("[Starters (S)]\t[Mains (M)]\t[Desserts (D)] \t [Drinks (R)]\n");
    fflush(stdin);
    scanf("%c", &input);
    switch(toupper(input)) {

        case 'R':
            printf("[Water (W)]\t[Pineapple Juice (P)]\t[Vodka (V)]\t[Crystal Pepsi (C)]\t[Hot Chocolate(H)]\n");
            fflush(stdin);
            scanf("%c", &input);
            switch(toupper(input)) {
                case 'W':
                    printf("Refreshingly cold H20 packed with minerals freshly-taken straight from the French alps\n");
                break;
                case 'P':
                    printf("Refreshingly delicious pineapple juice freshly-squeezed straight from the French alps\n");
                break;
                case 'V':
                    printf("Refreshingly earthy, flavourful vodka freshly-distilled straight from the French alps\n");
                break;
                case 'C':
                    printf("Refreshingly flavourful, exclusive Crystal Pepsi freshly-mined straight from the French alps\n");
                break;
                case 'H':
                    printf("Refreshingly hot hot chocolate freshly-brewed in our kitchen (featuring marshmallows)\n");
                break;
                default:
                    printf("Not on the menu bud\n");
                break;
            }
        break;
        case 'S':
            printf("[Dough Balls (D)]\t[Soup of the Month (M)]\t[Satay Chicken (S)]\t[Calamari (C)]\t[Olives (O)]\n");
            fflush(stdin);
            scanf("%c", &input);
            switch(toupper(input)) {
                case 'D':
                    printf("Hot dough balls served with scrumptious garlic butter and a tomato reduction seasoned with oregano and spices\n");
                break;
                case 'M':
                    printf("The famous monthly soup served with freshly baked sourdough bread and freshly churned butter (ask waiter for this month's soup)\n");
                break;
                case 'S':
                    printf("Extremely flavourful skewers of our perfectly seasoned chicken and tub of creamy satay sauce\n");
                break;
                case 'C':
                    printf("A heap of crispy rings of octopus fried in our special batter\n");
                break;
                case 'O':
                    printf("Refreshingly salty Calletier olives freshly picked from the French alps\n");
                break;
                default:
                    printf("Not on the menu bud\n");

            }
        break;
        case 'M':
            printf("[Spaghetti and Meatballs (S)]\t[Ham and Cheese Toastie (H)]\t[Beef Wellington (B)]\t[Sausage and Mash (M)]\t[Vegan Stew (V)]\n");
            fflush(stdin);
            scanf("%c", &input);
            switch(toupper(input)) {
                case 'S':
                    printf("Large orbs of wagyu beef served on a bed of freshly stretched spaghetti in a refreshingly tasty tomato reduction and an unlimited supply of Italian parmesan cheese so generous it'd make the great Atlas' deeds feel insignificant\n");
                break;
                case 'H':
                    printf("The perfect blend of 4 cheeses and the highest quality taste-the-difference Great British Ham served between 2 pieces of sourdough break, with a fresh side salad and crinkle-cut fries crispy enough to piece the armour Caeser himself\n");
                break;
                case 'B':
                    printf("Our special slow-cooked beef wellington, masterfully put together by our professional chefs, served in a beef gravy delectable enough to make Zeus himself shed a tear\n");
                break;
                case 'M':
                    printf("A classic blend of British pork sausages, buttery mashed potato, freshly-grown peas, and a gravy flavourful enough to eviscerate a 12th century peasant\n");
                break;
                case 'V':
                    printf("A healthy mixture of stewed vegetables in a sauce\n");
                break;
                default:
                    printf("Not on the menu bud\n");
                break;
            }
            break;

        case 'D':
            printf("[Chocolate Brownie (B)]\t[Banana Cheesecake (C)]\t[Crepe (P)]\t[Fredo (F)]\t[Coffee and Walnut Cake (W)]\n");
        fflush(stdin);
        scanf("%c", &input);
        switch(toupper(input)) {
            case 'B':
                printf("Our famous homemade brownie which melts in your mouth, served with a vanilla ice-cream who's recipe dates back to the 18th century\n");
            break;
            case 'C':
                printf("Our homemade cheesecake, crafted meticulously from the milk of 4 different exotic animals, and over 3 of the highest-quality Fairtrade bananas, served on a buttery digestive base, a recipe dating back to the 16th century\n");
            break;
            case 'P':
                printf("A giant homemade crepe, baked with our recipe dating back to the 15th century, stuffed to the brim with ingredients of your choice (Nutella and Banana, or fresh fruits freshly picked from the French alps)\n");
            break;
            case 'F':
                printf("The classic Great British Freddo, served on a bed of crumbled digestives and garnished with edible flowers, our recipe dating back to the 13th century\n");
            break;
            case 'W':
                printf("Our special homemade recipe dating back to the 19th century, containing delicious freshly brewed coffee and walnuts freshly-picked from the French alps\n");
            break;
            default:
                printf("Not on the menu bud\n");
            break;
        }
        break;




    default:
        printf("Not on the menu bud");
    }
    return 0;
}
