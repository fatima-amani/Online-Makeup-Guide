// mini project
#include<stdio.h>
#include<stdlib.h>

void FaceMakeup();
void EyeMakeup();
void Lipmakeup();

void Foundation();  
void Powder();
void 
struct UserDetail {
    char name[40];
    
}user1;

int main() {
    int choice;
    printf(" <<write welcome message here>> ");  
    printf("enter name ");
    scanf("%s",&user1.name);
    while(1) {
        printf("<<add>>");      
        printf("enter choice : ");  
        scanf("%d",&choice);
        switch(choice) {
            case 1: FaceMakeup();
                    break;
            case 2: EyeMakeup();
                    break;
            case 3: LipMakeup();
                    break;
            case 4: exit(0);
                    break;
            default: printf("heyy %s please enter a valid choice",user1.name);
        }
    }

    return 0;
}

void FaceMakeup() {
    int choice;
        while(1) {
        printf("heyy %s enter a category of facemakeup",user1.name);
        scanf("%d",&choice);                
        switch (choice)
        {
        case 1 : Foundation();
            break;
        case 2 : Concealer();
            break;
        case 3 : Powder();
            break;
        case 4 : Compact();
            break;
        case 5 : Blush();
            break;
        case 6 : Highlighter();
            break;
        case 8 : return;
        case 9 : exit(0);
        default: printf("enter a correct choice");
            break;
        }
    }
}

void EyeMakeup() {
    int choice;
        while(1) {
        printf("heyy %s enter a category of eyemakeup \n
        f for foudation 
        scanf("%d",&choice);
        switch (choice)
        {
        case 1 : EyeShadow();
            break;
        case 2 : Eyeliner();
            break;
        case 3 : EyeBrowDef();
            break;
        case 4 : Mascara();
            break;
        case 8 : return;
            break;
        case 9 : exit(0);

        default: printf("enter a correct choice");
            break;
        }
    }
}

void LipMakeup() {
    int choice;
        while(1) {
        printf("heyy %s enter a category of eyemakeup \n
        f for foudation // continue",user1.name);               // menu me choice vs option add add karde like 1. Facemakeup 2. eyemakeup
        scanf("%d",&choice);
        switch (choice)
        {
        case 1 : LiquidLipstick();
            break;
        case 2 : BulletLipstick();
            break;
        case 3 : LipLiner();
            break;
        case 4 : LipGloss();
            break;
        case 8 : return;
        case 9 : exit(0);
            break;
        default: printf("enter a correct choice");
            break;
        }
    }
}
