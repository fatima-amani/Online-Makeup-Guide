// mini project
#include<stdio.h>
#include<stdlib.h>

void FaceMakeup();
void EyeMakeup();
void LipMakeup();

// Helper Functions for FaceMakeup()
void Primer();
void Foundation();  
void Concealer();
void LoosePowder();
void Blush();
void Contour();
void Highlighter();
void SettingSpray();

// Helper Functions for EyeMakeup()
void EyeLiner();
void EyeBrowDef();
void Mascara();
void EyeShadow();

void LiquidLipstick();
void BulletLipstick();
void LipLiner();
void LipGloss();

struct UserDetail {
    char name[40];
    
}*user;

int main() {   
    int choice;     // leave main function for last dont put effort now
    struct UserDetail user1;
    user = &user1;
    printf(" <<write welcome message here>> ");  // you can write this or skip
    printf("enter name ");
    scanf("%s",&user->name);
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
        printf("heyy %s enter a category of facemakeup",user->name);
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
        case 1: printf("\n %s, According to your skintone, the blush best suited for you is :\n Maybelline New York Fit me Mono Blush - 20 Hopeful \n",user->name);   // every printf in this format
            
            
            break;
        case 2: printf("\n You can checkout :\n Maybelline New York Fit me Mono Blush - 30 Fierce \n");
            
            
            break;
        case 3: 
            printf("\n You can checkout :\n Maybelline New York Fit me Mono Blush - 30 Fierce \n");
            
            
            break;
        case 4: 
            printf("\n %s, According to your skintone, the blush best suited for you is :\n Maybelline New York Fit me Mono Blush - 50 Wine \n",user->name);
            
            
            break;
        case 5: 
            printf("\n %s, According to your skintone, the blush best suited for you is :\n Maybelline New York Fit me Mono Blush - 60 Passionate \n",user->name);
            
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
    case 1: printf("\n We currently do not have Contour in singles but you can checkout our Pallete \n Maybelline New York Face Studio Master Contour Pallete in the shade - Light to Medium \n");      // everything printf in this format
        
              break;
    case 2: 
            printf("\n We currently do not have Contour in singles but you can checkout our Pallete \n Maybelline New York Face Studio Master Contour Pallete in the shade - Light to Medium \n");  
        
        
        break;
    case 3: 
        printf("\n We currently do not have Contour in singles but you can checkout our Pallete \n Maybelline New York Face Studio Master Contour Pallete in the shade - Light to Medium \n");  
        
        
        break;
    case 4: 
        printf("\n We currently do not have Contour in singles but you can checkout our Pallete \n Maybelline New York Face Studio Master Contour Pallete in the shade -  Medium to Deep \n");  
        
        
        break;
    case 5: 
        printf("\n We currently do not have Contour in singles but you can checkout our Pallete \n Maybelline New York Face Studio Master Contour Pallete in the shade -  Medium to Deep \n");
        
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
    case 1: printf("\n You can checkout :\n Maybelline New York Fit Me Matte + Poreless Setting Spray \n or You can also checkout \n Maybelline New York Facestudio Lasting Fix Makeup Setting Spray \n ");      // everything printf in this format
        
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
        printf("heyy %s enter a category of eyemakeup \n 1. eyeliner 2. eyebrow definer 3. mascara 4. eyeshadow ",user->name);              
         // menu me choice vs option add add karde like 1. Facemakeup 2. eyemakeup
        scanf("%d",&choice);
        switch (choice)
        {
        case 1 : EyeLiner();
            break;
        case 2 : EyeBrowDef();
            break;
        case 3 : Mascara();
            break;
        case 4 : EyeShadow();
                break;
        default: printf("\n the option you have entered does not exist, going back to main menu \n");
            break;
        }
    }
}

// Eye liner
void EyeLiner() {
    int choice,finish,i;
    printf("%s, choose your preferred formulation  \n 1. retractable kajal 2.kohl 3. sketch liner 4. liquid liner 5. gel liner \n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: printf("\n You can checkout :\n Maybelline New York The Collosal Kajal \n");      // everything printf in this format
        
              break;
    case 2: 
            printf("\n You can checkout :\n Maybelline New York Tattostudio Smokey \n"); 
        
        
        break;
    case 3: 
        printf("\n You can checkout :\n Maybelline New York The Collosal Liner\n");
        
        
        break;
    case 4: for(i=0;i<=5;i++) {
                if(i==5) {
                    printf("%s, you have completed 5 unsucessful trials, going back to eye makeup menu");
                    return;
                }
                printf("what is your perferred finish of liquid eyeliner 1. matte finish 2. glossy finish \n");
                scanf("%d",&finish);
                if(finish == 1) {
                    printf("\n You can checkout :\n Maybelline New York Collosal Bold Eyeliner \n"); 
                    break;
                }
                else if(finish == 2) {
                    printf("\n You can checkout :\n Maybelline New York Hyper Glossy Liquid Liner \n"); 
                    break;
                }
                else {
                    printf("\n the option you have entered does not exist, please retry \n");
                }
            }   
            break;
    case 5: 
        printf("\n You can checkout :\n Maybelline New York Lasting Drama Gel \n");
        
        break;
    
    default: printf("the option you have entered does not exist, going back to eye makeup menu");
        return;
    }
}

//eyebrow definer
void EyeBrowDef() {
    int choice;
    printf("%s, choose your preferred formulation  \n 1. retractable eyebrow definer 2.pencil eyebrow definer 3. eyebrow mascara \n",user->name);
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: printf("\n You can checkout these 2 options :\n Maybelline New York Define & Blend Brow Pencil \n Maybelline New York Tattoo Brow Pencil \n");      // everything printf in this format
        
              break;
    case 2: 
            printf("\n You can checkout :\n Maybelline New York Fashion Brow Cream Pencil \n"); 
        
        
        break;
    case 3: 
        printf("\n You can checkout :\n Maybelline New York Tattoo Brow 3 Day Styling Brow Gel \n");
    
        
        break;
    default: printf("the option you have entered does not exist, going back to eye makeup menu");
        return;
    }
}

// mascara
//eyebrow definer
void Mascara() {
    int choice,finish,i;
    printf("%s, What is your expectation from mascara, choose an option  \n 1. Curling 2.Volumnising 3. both curling and volumnising 4. false eyelash effect \n",user->name);
    scanf("%d",&choice);
    printf("would you prefer waterproof (enter 1) or washable (enter any number) ?  ");
    scanf("%d",&finish);
    switch (choice)
    {
    case 1: if(finish == 1) {
                printf("\n You can checkout :\n Maybelline New York The Collosal Mascara - Waterproof ");
            }
            else {
                printf("\n You can checkout :\n Maybelline New York The Collosal Volum Mascara - Washable");
            }
          // everything printf in this format
        
              break;
    case 2: if(finish == 1) {
                printf("\n You can checkout :\n Maybelline New York Hyper Curl Mascara - Waterproof Very Black \n");
            }
            else {
                printf("\n You can checkout :\n Maybelline New York Hyper Curl Mascara - Washable Very Black");
            }
        
        
        break;
    case 3: if(finish == 1) {
                printf("\n You can checkout :\n Maybelline New York Lash Sensantional Waterptoof Mascara Black \n");
            }
            else {
                printf("\n You can checkout :\n Maybelline New York Lash Sensantional Washable Mascara Black \n");         
            } 
            break;
    case 4: if(finish == 1) {
                printf("\n You can checkout :\n Maybelline New York Falsies Lash Lift Mascara - Very Black \n");
            }
            else {
                printf("\n You can checkout :\n Maybelline New York Falsies Lash Lift Mascara - Very Black \n Unfortunately it is not available in Washable variant as of now \n");      
            } 
            break;
    default: printf("the option you have entered does not exist, going back to eye makeup menu");
        return;
    }
}


//eyeshadow
void EyeShadow() {
    int choice,finish,i;
    printf("%s, What is your preference for colour story in eyeshadow palette, choose an option  \n 1. Browns 2.Pinks \n",user->name);
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: printf("\n You can checkout :\n Maybelline New York City Mini Palette Eye Shadow ");
            
          // everything printf in this format
        
              break;
    case 2: printf("\n You can checkout :\n Maybelline New York The Blushed Nudes Eye Shadow Palette \n");
            
                   
        
        break;
    default: printf("the option you have entered does not exist, going back to eye makeup menu");
        return;
    
    }
}

















void LipMakeup() {
    int choice;
        while(1) {
        printf("heyy %s, which type of lipstick do you want \n 1. liquid lipstick 2. ",user->name);               // menu me choice vs option add add karde like 1. Facemakeup 2. eyemakeup
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
        default: printf("\n the option you have entered does not exist, going back to eye makeup menu \n");
            break;
        }
    }
}

//Liquid Lipstick
void LiquidLipstick() {
     int choice;
    printf("%s, What is your preferred colour, choose an option  \n 1. Brown 2.Pink 3.red 4. nude 5. wine 6. purple \n",user->name);
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: printf("You can checkout :\n Maybelline New York Super Stay Matte Ink Liquid Lipstick - 135 Globe Trotter \n");
            
          // everything printf in this format
        
              break;
    case 2: printf("\n You can checkout :\n Maybelline New York Super Stay Matte Ink Liquid Lipstick - 120 Artist \n");
            
                   
        
        break;
    case 3 : printf("\n You can checkout :\n Maybelline New York Super Stay Matte Ink Liquid Lipstick - 20 Pioneer \n");
            
                   
        
        break;
    case 4 : printf("\n You can checkout :\n MMaybelline New York Super Stay Matte Ink Liquid Lipstick - 70 Amazonian \n");
            
                   
        
        break;
    case 5 : printf("\n You can checkout :\n Maybelline New York Super Stay Matte Ink Liquid Lipstick - 50 Voyager \n");
            
                   
        
        break;
    case 6: printf("You can checkout :\n Maybelline New York Super Stay Matte Ink Liquid Lipstick - 15 Lover \n");
            
          // everything printf in this format
        
              break;
    default: printf("the option you have entered does not exist, going back to lip makeup menu");
        return;
    
    }
}

// bullet lipstick
void BulletLipstick() {
    int choice;
    printf("%s, What is your preferred colour, choose an option  \n 1. Brown 2.Pink 3.red 4. nude 5. wine 6. purple \n",user->name);
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: printf("You can checkout :\n Maybelline New York Color Sensational Creamy Matte Lipstick - 676 East Village Rose \n");
            
          // everything printf in this format
        
              break;
    case 2: printf("\n You can checkout :\n Maybelline New York Color Sensational Creamy Matte Lipstick - 680 Mesmerizing Magenta \n");
            
                   
        
        break;
    case 3 : printf("\n You can checkout :\n Maybelline New York Color Sensational Creamy Matte Lipstick - 690 Siren in Scarlet \n");
            
                   
        
        break;
    case 4 : printf("\n You can checkout :\n MMaybelline New York Color Sensational Creamy Matte Lipstick - 660 Touch of Spice \n");
            
                   
        
        break;
    case 5 : printf("\n You can checkout :\n Maybelline New York Color Sensational Creamy Matte Lipstick - 691 Rich Ruby \n");
            
                   
        
        break;
    case 6: printf("You can checkout :\n Maybelline New York Color Sensational Creamy Matte Lipstick - 808 Plum Perfection \n");
            
          // everything printf in this format
        
              break;
    default: printf("the option you have entered does not exist, going back to lip makeup menu");
        return;
    
    }
}

// lip liner
void LipLiner() {
    int choice;
    printf("%s, What is your preferred colour, choose an option  \n 1. Brown 2.Pink 3.red 4. nude 5. wine 6. purple \n",user->name);
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: printf("You can checkout :\n Maybelline New York Color Sensational Lip Liner - Rich Chocolate \n");
            
          // everything printf in this format
        
              break;
    case 2: printf("\n You can checkout :\n Maybelline New York Color Sensational Lip Liner - Pink Corral \n");
            
                   
        
        break;
    case 3 : printf("\n You can checkout :\n Maybelline New York Color Sensational Lip Liner - Brick Red \n");
            
                   
        
        break;
    case 4 : printf("\n You can checkout :\n Maybelline New York Color Sensational Lip Liner Creme Finish - Nude Whisper \n");
            
                   
        
        break;
    case 5 : printf("\n You can checkout :\n Maybelline New York Color Sensational Lip Liner - Rich Wine \n");
            
                   
        
        break;
    case 6: printf("\n You can checkout :\n Maybelline New York Color Sensational Lip Liner - Magnetic Mauve \n");
        
              break;
    default: printf("the option you have entered does not exist, going back to lip makeup menu");
        return;
    
    }
}

//lip gloss 
void LipGloss() {
    int choice;
    printf("%s, What is your preferred colour, choose an option  \n 1. Clear 2.Pink 3.Brown 4. nude \n",user->name);
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: printf("You can checkout :\n Maybelline New York Lifter Gloss - Pearl \n");
            
          // everything printf in this format
        
              break;
    case 2: printf("\n You can checkout :\n Maybelline New York Lifter Gloss - Petal \n");
            
                   
        
        break;
    case 3 : printf("\n You can checkout :\n Maybelline New York Lifter Gloss - Topaz \n");
            
                   
        
        break;
    case 4 : printf("\n You can checkout :\n Maybelline New York Lifter Gloss - Moon \n");
            
                   
        
        break;
    default: printf("the option you have entered does not exist, going back to lip makeup menu");
        return;
    
    }
}
