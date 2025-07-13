#include <stdio.h>

char name[100];char activity;
int happiness=250;int energy=250;int hunger=250;
int alive=1;

void feed();
void stats();
int play();
void checkup();

int main(void) {
    printf("Welcome to Virtual Pet Simulator!!!\nPlease enter your pet's name:\n");
    gets(name);
    printf("Remember, stay above 0, and below 500!!!");
    while(alive==1) {
        activity=30;
        printf("\nWould you like to play with %s [P], feed %s [F], or check stats [S]?\n", name,name);
        scanf(" %c",&activity);
        if(activity==70||activity==102) {
            feed();
        }
        else if(activity==115||activity==83) {
            stats();
        }
        else if(activity==80||activity==112) {
            play();
        }
        checkup();
    }
    return 0;
}

void feed() {
    printf("\nWould you like to feed %s fish [F], carrot [C], or a treat [T]?\n",name);
    scanf(" %c",&activity);
    if(activity==70||activity==102) {
        printf("Hunger: -40\nEnergy: +60\nHappiness: +20\n");
        hunger=hunger-90;
        energy=energy+60;
        happiness=happiness+20;
    }
    else if(activity==67||activity==99) {
        printf("Hunger: -30\nEnergy: +80\nHappiness: -20\n");
        hunger=hunger-60;
        energy=energy+80;
        happiness=happiness-20;
    }
    else if(activity==116||activity==84) {
        printf("Hunger: -10\nEnergy: +100\nHappiness: +50\n");
        hunger=hunger-10;
        energy=energy+100;
        happiness=happiness+50;
    }
}

void stats() {
    printf("Happiness: %d\nEnergy: %d\n Hunger: %d\n",happiness,energy,hunger);
}

int play() {
    printf("\nWould you play fetch [F], tug-of-war [T], or have a nap [N]?\n");
    scanf(" %c",&activity);
    if(activity==70||activity==102) {
        printf("Hunger: +40\nEnergy: -60\nHappiness: +50\n");
        hunger=hunger+40;
        energy=energy-60;
        happiness=happiness+50;
    }
    else if(activity==84||activity==116) {
        printf("Hunger: +60\nEnergy: -90\nHappiness: +%d\n",energy-250);
        hunger=hunger+60;
        happiness=happiness+(energy-250);
        energy=energy-90;
    }
    else if(activity==110||activity==78) {
        printf("Hunger: +10\nEnergy: +100\nHappiness: +%d\n",150-energy);
        hunger=hunger+10;
        happiness=happiness+(250-energy);
        energy=energy+100;
    }
    return 0;
}

void checkup() {
    if(happiness<0) {
        printf("%s died of sadness.\n",name);
        alive=0;
    }
    if(hunger>500) {
        printf("%s died because you failed to feed them enough.\n",name);
        alive=0;
    }
    if(energy<0) {
        printf("%s died because you exhausted them.\n",name);
        alive=0;
    }
    if(hunger<0) {
        printf("%s died because you overfed them.\n",name);
        alive=0;
    }
    if(energy>500) {
        printf("%s died because they had too much energy which you failed to exhaust, causing issues.\n",name);
        alive=0;
    }
}