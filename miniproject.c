// mini project
#include<stdio.h>
#include<stdlib.h>

void FaceMakeup();
void EyeMakeup();
void Lipmakeup();

void Foundation();  // please add all helper functions name here to summarise (category wise)
void Powder();

struct UserDetail {
    char name[40];
    
}*user;

int main() {
    struct UserDetail user1;
    user = &user1;
    int choice;
    printf(" <<write welcome message here>> ");  // you can write this or skip
    printf("enter name ");
    scanf("%s",&user->name;);
    while(1) {
        printf("<<add>>");      // menu me choice vs option add add karde like 1. Facemakeup 2. eyemakeup
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
            default: printf("heyy %s please enter a valid choice",user->name);
        }
    }

    return 0;
}

void FaceMakeup() {
    int choice;
        while(1) {
        printf("heyy %s enter a category of facemakeup",user1.name);
        scanf("%d",&choice);                // menu me choice vs option add add karde like 1. Facemakeup 2. eyemakeup
        switch (choice)
        {
        case 1 : Primer();
            break;
        case 2 : Foundation();
            break;
        case 3 : Concealer();
            break;
        case 4 : LoosePowder();
            break;
        case 5 : Blush();
            break;
        case 6 : Contour();
            break;
        case 7 : Highlighter();
            break;
        case 8: SettingSpray();
            break;
        case 8 : return;
        case 9 : exit(0); // exit 0 hai to add a closing message also
        default: printf("the option you have entered does not exist, going back to main menu");
            break;
        }
    }
}

//primer
void Primer() {
    int choice;
    printf("you can buy it in 2 finish : 1. Matte finish 2. dewy finish");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: printf("\n %s, You can checkout :\n  Maybelline New York Fit me Primer - Matte + Poreless \n",user->name); // everything in this format
        
        
        break;
    case 2: printf("\n %s, You can checkout :\n  Maybelline New York Fit me Primer - Dewy + Smooth \n",user->name);
        
        
        break;
    default: printf("the option you have entered does not exist, going back to face makeup menu");
        return;
    }
}

// function complete just beautify
void Foundation() {
    int choice;
    printf("Enter your shade \n 1. fair 2. light 3. light to medium 4. medium 5. rich ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: printf("\n You can checkout :\n  Maybelline New York Fit me Matte+Poreless Liquid Foundation in 115 IVORY \n"); // everything in this format
        
        
        break;
    case 2: printf("Maybelline fitme matte in 128 Warm Nude");
        
        
        break;
    case 3: 
        printf("Maybelline fitme matte in 220 Natural Beige");
        
        
        break;
    case 4: 
        printf("Maybelline fitme matte in 235 pure Beige");
        
        
        break;
    case 5: 
        printf("Maybelline fitme matte in 330 Toffee");
        
        break;
    default: printf("the option you have entered does not exist, going back to face makeup menu");
        return;
    }
}

// concealer
// function complete just beautify
void Concealer() {
    int choice;
    printf("Enter your shade \n 1. fair 2. light 3. light to medium 4. medium 5. rich ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: printf("\n You can checkout :\n Maybelline New York Fitme Concealer in 10 Light \n");      // everything printf in this format
        
              break;
    case 2: 
            printf("MMaybelline New York Fitme Concealer in 15 Fair");
        
        
        break;
    case 3: 
        printf("Maybelline New York Fitme Concealer in 20 Sand");
        
        
        break;
    case 4: 
        printf("\n Maybelline New York Fitme Concealer in 25 Medium");
        
        
        break;
    case 5: 
        printf("\n Maybelline New York Fitme Concealer in 35 Deep");
        
        break;
    
    default: printf("the option you have entered does not exist, going back to face makeup menu");
        return;
    }
}

//powder
// function complete just beautify
void LoosePowder() {
    int choice;
    printf("Enter your shade \n 1. fair 2. light 3. light to medium 4. medium 5. rich ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: printf("\n You can checkout :\n Maybelline New York Fit me Loose Finishing Powder 15 Light \n"); // everything in this format
        
        
        break;
    case 2: printf("Maybelline New York Fit me Loose Finishing Powder 15 Light");
        
        
        break;
    case 3: 
        printf("Maybelline New York Fit me Loose Finishing Powder 20 Light Medium");
        
        
        break;
    case 4: 
        printf("Maybelline New York Fit me Loose Finishing Powder 25 Medium");
        
        
        break;
    case 5: 
        printf("Maybelline New York Fit me Loose Finishing Powder 30 Medium Deep");
        
        break;
    
    default: printf("the option you have entered does not exist, going back to face makeup menu");
        return;
    }
}

//Blush
void Blush() {
    int choice,pref;
    printf("you can buy it in 3 prefernce: 1. by skin tone 2. by colour 3. blush pallete");
    scanf("%d",&pref);
    if(pref == 1) {
        printf("Enter your shade \n 1. fair 2. light 3. light to medium 4. medium 5. rich 6. go back to face makeup catgegory");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1: printf("\n %s, According to your skintone, the blush best suited for you is :\n
                Maybelline New York Fit me Mono Blush - 20 Hopeful \n",user->name);   // every printf in this format
            
            
            break;
        case 2: printf("\n You can checkout :\n Maybelline New York Fit me Mono Blush - 30 Fierce \n");
            
            
            break;
        case 3: 
            printf("\n You can checkout :\n Maybelline New York Fit me Mono Blush - 30 Fierce \n");
            
            
            break;
        case 4: 
            printf("\n %s, According to your skintone, the blush best suited for you is :\n
                Maybelline New York Fit me Mono Blush - 50 Wine \n",user->name);
            
            
            break;
        case 5: 
            printf("\n %s, According to your skintone, the blush best suited for you is :\n
                Maybelline New York Fit me Mono Blush - 60 Passionate \n",user->name);
            
            break;
        case 6: printf("going back to face makeup menu");
                return;
        default: printf("the option you have entered does not exist, going back to face makeup menu");
            return;
        }
    }
    
    else if(pref == 2) {
        printf("Enter your preferred colour \n 1. coral 2. light pink 3. cool toned pink 4. deep pink 5. Nude Colour");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1: printf("\n %s, You can checkout :\n Maybelline New York Fit me Mono Blush - 50 Wine \n",user->name); // everything in this format
            
            
            break;
        case 2: printf("\n %s, You can checkout :\n Maybelline New York Fit me Mono Blush - 30 Fierce \n",user->name);
            
            
            break;
        case 3: 
            printf("\n %s, You can checkout :\n Maybelline New York Fit me Mono Blush - 40 Proud \n",user->name);
            
            
            break;
        case 4: 
            printf("\n %s, You can checkout :\n Maybelline New York Fit me Mono Blush - 60 Passionate \n",user->name);
            
            
            break;
        case 5: 
            printf("\n %s, You can checkout :\n Maybelline New York Fit me Mono Blush - 20 Hopeful \n",user->name);
            
            break;
        case 6: printf("going back to face makeup menu");
                return;
        default: printf("the option you have entered does not exist, going back to face makeup menu");
            return;
        }
    }
    else if(pref ==3) {
        printf("\n %s, You can checkout :\n Maybelline New York Face Studio Master Blush Pallete \n",user->name);
    }

    else {
        printf("the option you have entered does not exist, going back to face makeup menu");
    }
}

//contour 
void Contour() {
    int choice;
    printf("Enter your shade \n 1. fair 2. light 3. light to medium 4. medium 5. rich ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: printf("\n We currently do not have Contour in singles but you can checkout our Pallete \n
    Maybelline New York Face Studio Master Contour Pallete in the shade - Light to Medium \n");      // everything printf in this format
        
              break;
    case 2: 
            printf("\n We currently do not have Contour in singles but you can checkout our Pallete \n
    Maybelline New York Face Studio Master Contour Pallete in the shade - Light to Medium \n");  
        
        
        break;
    case 3: 
        printf("\n We currently do not have Contour in singles but you can checkout our Pallete \n
    Maybelline New York Face Studio Master Contour Pallete in the shade - Light to Medium \n");  
        
        
        break;
    case 4: 
        printf("\n We currently do not have Contour in singles but you can checkout our Pallete \n
    Maybelline New York Face Studio Master Contour Pallete in the shade -  Medium to Deep \n");  
        
        
        break;
    case 5: 
        printf("\n We currently do not have Contour in singles but you can checkout our Pallete \n
    Maybelline New York Face Studio Master Contour Pallete in the shade -  Medium to Deep \n");
        
        break;
    
    default: printf("the option you have entered does not exist, going back to face makeup menu");
        return;
    }
}

//Highlighter
void Highlighter() {
    int choice;
    printf("Enter your shade \n 1. fair 2. light 3. light to medium 4. medium 5. rich ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: printf("\n You can checkout :\n Maybelline New York Face Studio Master Chrome Metallic Highlighter - Molten Rose Gold \n");      // everything printf in this format
        
              break;
    case 2: 
            printf("\n You can checkout :\n Maybelline New York Face Studio Master Chrome Metallic Highlighter - Molten Rose Gold \n");
        
        break;
    case 3: 
        printf("\n You can checkout :\n Maybelline New York Face Studio Master Chrome Metallic Highlighter - Molten Rose Gold \n");
        
        
        break;
    case 4: 
        printf("\n You can checkout :\n Maybelline New York Face Studio Master Chrome Metallic Highlighter - Molten Gold \n");
        
        
        break;
    case 5: 
        printf("\n You can checkout :\n Maybelline New York Face Studio Master Chrome Metallic Highlighter - Molten Gold \n");
        
        break;
    
    default: printf("the option you have entered does not exist, going back to face makeup menu");
        return;
    }
}

//Settng spray
void SettingSpray() {
    int choice;
    printf("Enter your Preference \n 1. Matte finish 2. Dewy finish ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: printf("\n You can checkout :\n Maybelline New York Fit Me Matte + Poreless Setting Spray \n or You can also checkout \n 
            Maybelline New York Facestudio Lasting Fix Makeup Setting Spray \n ");      // everything printf in this format
        
              break;
    case 2: 
            printf("\n Sorry %s, currently we do not have a dewy setting spray, you can stay tuned for our future launches \n",user->name);
        
        break;
    default: printf("the option you have entered does not exist, going back to face makeup menu");
        return;
    }
}

//till here do it 












void EyeMakeup() {
    int choice;
        while(1) {
        printf("heyy %s enter a category of eyemakeup \n
        f for foudation // continue",user1.name);               // menu me choice vs option add add karde like 1. Facemakeup 2. eyemakeup
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
