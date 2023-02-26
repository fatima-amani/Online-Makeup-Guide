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
    int choice;  
    struct UserDetail user1;
    user = &user1;
    printf("\t\t--------------------------------------------------------------------------\n");
    printf("\t\t|\t\t\t ONLINE MAKEUP GUIDE \t\t\t\t|\t"); 
    printf("\n\t\t--------------------------------------------------------------------------\n");
    printf("\n Please enter your name \n");
    scanf("%s",&user->name);
    while(1) {
        printf("OPTIONS TO CHOOSE\n");
        printf("1. Face Makeup\n"); 
        printf("2. Eye Makeup\n");
        printf("3. Lip Makeup\n");
        printf("enter choice : \n");  
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
        printf("\nHeyy %s!!!! \nEnter a category of facemakeup\n",user->name);
        printf("Categories we have:\n");
        printf("1. Primer\t");
        printf("\t2. Foundation\n");
        printf("3. Concealer\t");
        printf("\t4. LoosePowder\n");
        printf("5. Blush\t");
        printf("\t6. Contour\n");
        printf("7. Highlighter\t");
        printf("\t8. SettingSpray\n");
        scanf("%d",&choice);      
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
    printf("Primers basically have 2 type of finishes\n");
    printf("1. Matte finish\t 2. Dewy finish\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: printf("\nYou can checkout :\n  Maybelline New York Fit me Primer - Matte + Poreless \n\n");
            printf("Redirecting to Face makeup menu\n\n");
            break;

    case 2: printf("\nYou can checkout :\n  Maybelline New York Fit me Primer - Dewy + Smooth \n\n");
            printf("Redirecting to Face makeup menu\n\n");
            break;

    default: printf("the option you have entered does not exist, Redirecting to Face makeup menu\n");
        return;
    }
}

//foundation
void Foundation() {
    int choice;
    printf("Select your shade:\n 1. fair\t 2. light\t 3. light to medium\t 4. medium\t 5. rich\n ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: printf("\nYou can checkout :\n  Maybelline New York Fit me Matte+Poreless Liquid Foundation in 115 IVORY \n");
            printf("Redirecting to Face makeup menu\n\n"); 
            break;
        
    case 2: printf("\nYou can checkout :\n Maybelline fitme matte in 128 Warm Nude\n");
            printf("Redirecting to Face makeup menu\n\n");
            break;

    case 3: printf("\nYou can checkout :\n Maybelline fitme matte in 220 Natural Beige\n");
            printf("Redirecting to Face makeup menu\n");
            break;

    case 4: printf("\nYou can checkout :\n Maybelline fitme matte in 235 pure Beige\n");
            printf("Redirecting to Face makeup menu\n");
            break;

    case 5: printf("\nYou can checkout :\n Maybelline fitme matte in 330 Toffee\n");
            printf("Redirecting to Face makeup menu\n");
            break;

    default: printf("the option you have entered does not exist, Redirecting to Face makeup menu\n");
        return;
    }
}

// concealer
void Concealer() {
    int choice;
    printf("Select your shade:\n 1. fair\t 2. light\t 3. light to medium\t 4. medium\t 5. rich\n ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: printf("\nYou can checkout :\nMaybelline New York Fitme Concealer in 10 Light\n");
            printf("Redirecting to Face makeup menu\n");
            break;

    case 2: printf("\nYou can checkout :\nMaybelline New York Fitme Concealer in 15 Fair\n");
            printf("Redirecting to Face makeup menu\n");
            break;

    case 3: printf("\nYou can checkout :\nMaybelline New York Fitme Concealer in 20 Sand\n");
            printf("Redirecting to Face makeup menu\n");
            break;

    case 4: printf("\nYou can checkout :\nMaybelline New York Fitme Concealer in 25 Medium\n");
            printf("Redirecting to Face makeup menu\n");
            break;

    case 5: printf("\nYou can checkout :\nMaybelline New York Fitme Concealer in 35 Deep\n");
            printf("Redirecting to Face makeup menu\n");
            break;
    
    default: printf("the option you have entered does not exist, Redirecting to face makeup menu\n");
        return;
    }
}

//powder
void LoosePowder() {
    int choice;
    printf("Select your shade:\n 1. fair\t 2. light\t 3. light to medium\t 4. medium\t 5. rich\n ");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1: printf("\nYou can checkout :\nMaybelline New York Fit me Loose Finishing Powder 15 Light \n");
                printf("Redirecting to Face makeup menu\n");
                break;

        case 2: printf("\nYou can checkout :\nMaybelline New York Fit me Loose Finishing Powder 15 Light\n");
                printf("Redirecting to Face makeup menu\n");
                break;

        case 3: printf("\nYou can checkout :\nMaybelline New York Fit me Loose Finishing Powder 20 Light Medium\n");
                printf("Redirecting to Face makeup menu\n");
                break;

        case 4: printf("\nYou can checkout :\nMaybelline New York Fit me Loose Finishing Powder 25 Medium\n");
                printf("Redirecting to Face makeup menu\n");    
                break;

        case 5: printf("\nYou can checkout :\nMaybelline New York Fit me Loose Finishing Powder 30 Medium Deep\n");
                printf("Redirecting to Face makeup menu\n");    
                break;
        
        default: printf("the option you have entered does not exist,Redirecting to Face makeup menu\n");
            return;
    }
}

//Blush
void Blush() {
    int choice,pref;
    printf("You can buy it in 3 prefernces:\n1.by skin tone\n2.by colour\n3.blush pallete\n");
    scanf("%d",&pref);
    if(pref == 1) 
    {
        printf("Select your shade:\n 1. fair\t 2. light\t 3. light to medium\t 4. medium\t 5. rich\t\n");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1: printf("\nAccording to your skintone, the best blush suited for you is :\nMaybelline New York Fit me Mono Blush - 20 Hopeful \n");
                    printf("Redirecting to Face makeup menu\n"); 
                    break;

            case 2: printf("\nAccording to your skintone, the best blush suited for you is :\n Maybelline New York Fit me Mono Blush - 30 Fierce \n");
                    printf("Redirecting to Face makeup menu\n"); 
                    break;

            case 3: printf("\nAccording to your skintone, the best blush suited for you is :\nMaybelline New York Fit me Mono Blush - 30 Fierce \n");
                    printf("Redirecting to Face makeup menu\n");
                    break;

            case 4: printf("\nAccording to your skintone, the best blush suited for you is :\n Maybelline New York Fit me Mono Blush - 50 Wine \n");
                    printf("Redirecting to Face makeup menu\n");
                    break;

            case 5: printf("\nAccording to your skintone, the best blush suited for you is :\n Maybelline New York Fit me Mono Blush - 60 Passionate \n");
                    printf("Redirecting to Face makeup menu\n");    
                break;

            default: printf("the option you have entered does not exist, Redirecting to Face makeup menu\n");
                return;
        }
    }
    
    else if(pref == 2) 
    {
        printf("Enter your preferred colour:\n1.coral\t\t\t2.light pink\n3.cool toned pink\t4.deep pink\n5.Nude Colour\t\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1: printf("\nYou can checkout :\n Maybelline New York Fit me Mono Blush - 50 Wine \n");
                printf("Redirecting to Face makeup menu\n");
                break;

        case 2: printf("\nYou can checkout :\n Maybelline New York Fit me Mono Blush - 30 Fierce \n");
                printf("Redirecting to Face makeup menu\n");
                break;

        case 3: printf("\nYou can checkout :\n Maybelline New York Fit me Mono Blush - 40 Proud \n");
                printf("Redirecting to Face makeup menu\n");
                break;

        case 4:  printf("\nYou can checkout :\n Maybelline New York Fit me Mono Blush - 60 Passionate \n");
                 printf("Redirecting to Face makeup menu\n");
                 break;

        case 5: printf("\nYou can checkout :\n Maybelline New York Fit me Mono Blush - 20 Hopeful \n");
                printf("Redirecting to Face makeup menu\n");
                break;

        default: printf("the option you have entered does not exist, going back to face makeup menu");
            return;
        }
    }
    else if(pref ==3) 
        printf("\nYou can checkout :\n Maybelline New York Face Studio Master Blush Pallete \n");
    
    else 
        printf("the option you have entered does not exist,Redirecting to Face makeup menu");
}

//contour 
void Contour() {
    int choice;
    printf("Select your shade:\n 1. fair\t 2. light\t 3. light to medium\t 4. medium\t 5. rich\n ");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1: printf("\nWe currently do not have Contour in singles but you can checkout our Pallete \n Maybelline New York Face Studio Master Contour Pallete in the shade - Light to Medium \n");
                printf("Redirecting to Face makeup menu\n");
                break;

        case 2: printf("\nWe currently do not have Contour in singles but you can checkout our Pallete \n Maybelline New York Face Studio Master Contour Pallete in the shade - Light to Medium \n");  
                printf("Redirecting to Face makeup menu\n");
                break;

        case 3: printf("\nWe currently do not have Contour in singles but you can checkout our Pallete \n Maybelline New York Face Studio Master Contour Pallete in the shade - Light to Medium \n");  
                printf("Redirecting to Face makeup menu\n");
                break;

        case 4: printf("\nWe currently do not have Contour in singles but you can checkout our Pallete \n Maybelline New York Face Studio Master Contour Pallete in the shade -  Medium to Deep \n");  
                printf("Redirecting to Face makeup menu\n");
                break;

        case 5: printf("\nWe currently do not have Contour in singles but you can checkout our Pallete \n Maybelline New York Face Studio Master Contour Pallete in the shade -  Medium to Deep \n");
                printf("Redirecting to Face makeup menu\n");
                break;
        
        default: printf("the option you have entered does not exist,Redirecting to Face makeup menu");
            return;
    }
}

//Highlighter
void Highlighter() {
    int choice;
    printf("Select your shade:\n 1. fair\t 2. light\t 3. light to medium\t 4. medium\t 5. rich\n ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: printf("\nYou can checkout :\n Maybelline New York Face Studio Master Chrome Metallic Highlighter - Molten Rose Gold \n"); 
            printf("Redirecting to Face makeup menu\n");
            break;

    case 2: printf("\nYou can checkout :\n Maybelline New York Face Studio Master Chrome Metallic Highlighter - Molten Rose Gold \n");
            printf("Redirecting to Face makeup menu\n");
            break;

    case 3: printf("\nYou can checkout :\n Maybelline New York Face Studio Master Chrome Metallic Highlighter - Molten Rose Gold \n");
            printf("Redirecting to Face makeup menu\n");
            break;

    case 4: printf("\nYou can checkout :\n Maybelline New York Face Studio Master Chrome Metallic Highlighter - Molten Gold \n");
            printf("Redirecting to Face makeup menu\n");
            break;

    case 5: printf("\nYou can checkout :\n Maybelline New York Face Studio Master Chrome Metallic Highlighter - Molten Gold \n");
            printf("Redirecting to Face makeup menu\n");
            break;
    
    default: printf("the option you have entered does not exist,Redirecting to Face makeup menu");
        return;
    }
}

//Settng spray
void SettingSpray() {
    int choice;
    printf("Enter your Preference \n1. Matte finish \n2. Dewy finish\n");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1: printf("\nYou can checkout :\nMaybelline New York Fit Me Matte + Poreless Setting Spray \nor\nMaybelline New York Facestudio Lasting Fix Makeup Setting Spray \n ");      // everything printf in this format
                printf("Redirecting to Face makeup menu\n");
                break;

        case 2: printf("\nSorry %s, currently we do not have a dewy setting spray, you can stay tuned for our future launches \n",user->name);
                printf("Redirecting to Face makeup menu\n");
                break;
        default: printf("the option you have entered does not exist,Redirecting to Face makeup menu");
            return;
    }
}
//************************************************************************************************************//
//***************************EYE MAKE UP*************************//
//************************************************************************************************************//
void EyeMakeup()
{
    int choice;
    while(1) {
        printf("\nHeyy %s enter a category of eyemakeup \n1. eyeliner\t2. eyebrow definer\n3. mascara\t4. eyeshadow\n",user->name);              
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
            default: printf("\n the option you have entered does not exist,Redirecting to main menu \n");
                break;
        }
    }
}

// Eye liner
void EyeLiner() 
{
    int choice,finish,i;
    printf("Choose your preferred formulation \n1. retractable kajal\t2.kohl \n3. sketch liner\t\t4. liquid liner \n5. gel liner\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: printf("\nYou can checkout :\nMaybelline New York The Collosal Kajal \n");   
            printf("Redirecting to Eye makeup menu\n");
            break;

    case 2: printf("\nYou can checkout :\nMaybelline New York Tattostudio Smokey \n"); 
            printf("Redirecting to Eye makeup menu\n");
            break;

    case 3: printf("\nYou can checkout :\nMaybelline New York The Collosal Liner\n");
            printf("Redirecting to Eye makeup menu\n");
            break;

    case 4: for(i=0;i<=5;i++) 
            {
                if(i==5) 
                {
                    printf("You have completed 5 unsucessful trials,Redirecting to eye makeup menu\n");
                    return;
                }
                printf("What is your perferred finish of liquid eyeliner\n1.matte finish \n2.glossy finish \n");
                scanf("%d",&finish);
                if(finish == 1) 
                {
                    printf("\nYou can checkout :\nMaybelline New York Collosal Bold Eyeliner \n"); 
                    printf("Redirecting to Eye makeup menu\n");
                    break;
                }
                else if(finish == 2) 
                {
                    printf("\nYou can checkout :\nMaybelline New York Hyper Glossy Liquid Liner \n");
                    printf("Redirecting to Eye makeup menu\n"); 
                    break;
                }
                else 
                {
                    printf("\nThe option you have entered does not exist, please Retry");
                    printf("Redirecting to Eye makeup menu\n");
                }
            }   
            break;
    case 5: printf("\n You can checkout :\nMaybelline New York Lasting Drama Gel \n");
            printf("Redirecting to Eye makeup menu\n");
            break;
    
    default: printf("the option you have entered does not exist, Redirecting to Eye makeup menu");
        return;
    }
}

//eyebrow definer
void EyeBrowDef() 
{
    int choice;
    printf("Choose your preferred formulation:\n1.Retractable eyebrow definer\n2.Pencil eyebrow definer \n3.Eyebrow mascara \n");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1: printf("\nYou can checkout these 2 options :\nMaybelline New York Define & Blend Brow Pencil\nOr\nMaybelline New York Tattoo Brow Pencil \n");
                printf("Redirecting to Eye makeup menu\n\n");
                break;

        case 2: printf("\nYou can checkout :\nMaybelline New York Fashion Brow Cream Pencil \n"); 
                printf("Redirecting to Eye makeup menu\n\n");
                break;

        case 3: printf("\nYou can checkout :\nMaybelline New York Tattoo Brow 3 Day Styling Brow Gel \n");
                printf("Redirecting to Eye makeup menu\n\n");
                break;

        default: printf("the option you have entered does not exist,Redirecting to eye makeup menu");
            return;
    }
}

// mascara
void Mascara() 
{
    int choice,finish,i;
    printf("%s,What is your expectation from mascara, choose an option :\n1.Curling \t2.Volumnising \n3.Both curling and volumnising\t 4.False eyelash effect \n",user->name);
    scanf("%d",&choice);
    printf("Would you prefer waterproof (enter 1) or washable (enter any number) ? ");
    scanf("%d",&finish);
    switch (choice)
    {
        case 1: if(finish == 1) 
                {
                    printf("\n You can checkout :\nMaybelline New York The Collosal Mascara - Waterproof ");
                    printf("Redirecting to Eye makeup menu\n");
                }
                else 
                {
                    printf("\n You can checkout :\nMaybelline New York The Collosal Volum Mascara - Washable");
                    printf("Redirecting to Eye makeup menu\n");
                }
                break;

        case 2: if(finish == 1) 
                {
                    printf("\n You can checkout :\nMaybelline New York Hyper Curl Mascara - Waterproof Very Black \n");
                    printf("Redirecting to Eye makeup menu\n");
                }
                else 
                {
                    printf("\n You can checkout :\n Maybelline New York Hyper Curl Mascara - Washable Very Black");
                    printf("Redirecting to Eye makeup menu\n");
                }
                break;

        case 3: if(finish == 1) 
                {
                    printf("\n You can checkout :\nMaybelline New York Lash Sensantional Waterptoof Mascara Black \n");
                    printf("Redirecting to Eye makeup menu\n");
                }
                else 
                {
                    printf("\n You can checkout :\nMaybelline New York Lash Sensantional Washable Mascara Black \n");
                    printf("Redirecting to Eye makeup menu\n");         
                } 
                break;

        case 4: if(finish == 1) 
                {
                    printf("\n You can checkout :\nMaybelline New York Falsies Lash Lift Mascara - Very Black \n");
                    printf("Redirecting to Eye makeup menu\n");
                }
                else
                {
                    printf("\n You can checkout :\nMaybelline New York Falsies Lash Lift Mascara - Very Black \nUnfortunately it is not available in Washable variant as of now \n");      
                    printf("Redirecting to Eye makeup menu\n");
                } 
                break;

        default: printf("the option you have entered does not exist, Redirecting to eye makeup menu\n");
            return;
    }
}


//eyeshadow
void EyeShadow() 
{
    int choice,finish,i;
    printf("%s, What are your preferences for colour story in eyeshadow palette, choose an option:  \n1. Browns \n2.Pinks \n",user->name);
    scanf("%d",&choice);
    switch (choice)
    {
        case 1: printf("\n You can checkout :\nMaybelline New York City Mini Palette Eye Shadow ");
                printf("Redirecting to Eye makeup menu\n");
                break;

        case 2: printf("\n You can checkout :\nMaybelline New York The Blushed Nudes Eye Shadow Palette \n");
                printf("Redirecting to Eye makeup menu\n");
            break;
        default: printf("the option you have entered does not exist,Redirecting to eye makeup menu");
            return;
        
    }
}
//************************************************************************************************************//
//***************************LIP MAKE UP*************************//
//************************************************************************************************************//
void LipMakeup() {
    int choice;
        while(1) {
        printf("\nHeyy %s, which type of lipstick do you want \n1.Liquid lipstick\t2.BulletLipstick \n3.LipLiner \t\t4.LipGloss\n",user->name);    
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
            default: printf("\n The option you have entered does not exist, Redirecting to Lip makeup menu \n");
                break;
        }
    }
}

//Liquid Lipstick
void LiquidLipstick() {
     int choice;
    printf("What is your preferred colour, choose an option  \n1.Brown\t\t2.Pink \t\t3.Red \n4.Nude \t\t5.Wine \t\t6.Purple \n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: printf("\nYou can checkout :\nMaybelline New York Super Stay Matte Ink Liquid Lipstick - 135 Globe Trotter \n");
            printf("Redirecting to Lip makeup menu\n");
            break;

    case 2: printf("\nYou can checkout :\nMaybelline New York Super Stay Matte Ink Liquid Lipstick - 120 Artist \n");
            printf("Redirecting to Lip makeup menu\n");
            break;

    case 3 : printf("\nYou can checkout :\nMaybelline New York Super Stay Matte Ink Liquid Lipstick - 20 Pioneer \n");
             printf("Redirecting to Lip makeup menu\n");
             break;

    case 4 : printf("\nYou can checkout :\nMaybelline New York Super Stay Matte Ink Liquid Lipstick - 70 Amazonian \n");
             printf("Redirecting to Lip makeup menu\n");
             break;

    case 5 : printf("\nYou can checkout :\nMaybelline New York Super Stay Matte Ink Liquid Lipstick - 50 Voyager \n");
             printf("Redirecting to Lip makeup menu\n");
            break;

    case 6: printf("\nYou can checkout :\nMaybelline New York Super Stay Matte Ink Liquid Lipstick - 15 Lover \n");
            printf("Redirecting to Lip makeup menu\n");
            break;

    default: printf("the option you have entered does not exist,Redirecting to lip makeup menu");
        return;
    
    }
}

// bullet lipstick
void BulletLipstick() {
    int choice;
    printf("What is your preferred colour, choose an option  \n1.Brown\t\t2.Pink \t\t3.Red \n4.Nude \t\t5.Wine \t\t6.Purple \n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: printf("\nYou can checkout :\nMaybelline New York Color Sensational Creamy Matte Lipstick - 676 East Village Rose \n");
            printf("Redirecting to Lip makeup menu\n");
            break;

    case 2: printf("\nYou can checkout :\nMaybelline New York Color Sensational Creamy Matte Lipstick - 680 Mesmerizing Magenta \n");
            printf("Redirecting to Lip makeup menu\n");
            break;

    case 3 : printf("\nYou can checkout :\nMaybelline New York Color Sensational Creamy Matte Lipstick - 690 Siren in Scarlet \n");
             printf("Redirecting to Lip makeup menu\n");
            break;

    case 4 : printf("\nYou can checkout :\nMaybelline New York Color Sensational Creamy Matte Lipstick - 660 Touch of Spice \n");
             printf("Redirecting to Lip makeup menu\n");
             break;

    case 5 : printf("\nYou can checkout :\nMaybelline New York Color Sensational Creamy Matte Lipstick - 691 Rich Ruby \n");
             printf("Redirecting to Lip makeup menu\n");
             break;

    case 6: printf("You can checkout :\nMaybelline New York Color Sensational Creamy Matte Lipstick - 808 Plum Perfection \n");
            printf("Redirecting to Lip makeup menu\n");
            break;

    default: printf("the option you have entered does not exist, Redirecting to lip makeup menu\n");
        return;
    
    }
}

// lip liner
void LipLiner() {
    int choice;
    printf("What is your preferred colour, choose an option  \n1.Brown\t\t2.Pink \t\t3.Red \n4.Nude \t\t5.Wine \t\t6.Purple \n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: printf("\nYou can checkout :\nMaybelline New York Color Sensational Lip Liner - Rich Chocolate \n");
            printf("Redirecting to Lip makeup menu\n");
            break;

    case 2: printf("\nYou can checkout :\nMaybelline New York Color Sensational Lip Liner - Pink Corral \n");
            printf("Redirecting to Lip makeup menu\n");
            break;

    case 3 : printf("\nYou can checkout :\nMaybelline New York Color Sensational Lip Liner - Brick Red \n");
            printf("Redirecting to Lip makeup menu\n");
            break;

    case 4 : printf("\nYou can checkout :\nMaybelline New York Color Sensational Lip Liner Creme Finish - Nude Whisper \n");
             printf("Redirecting to Lip makeup menu\n");
            break;

    case 5 : printf("\nYou can checkout :\nMaybelline New York Color Sensational Lip Liner - Rich Wine \n");
             printf("Redirecting to Lip makeup menu\n");
             break;

    case 6: printf("\n You can checkout :\n Maybelline New York Color Sensational Lip Liner - Magnetic Mauve \n");
            printf("Redirecting to Lip makeup menu\n");
            break;

    default: printf("the option you have entered does not exist,Redirecting to lip makeup menu");
        return;
    
    }
}

//lip gloss 
void LipGloss() {
    int choice;
    printf("%s, What is your preferred colour, choose an option  \n1.Clear \t\t2.Pink \n3.Brown \t\t4.Nude \n",user->name);
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: printf("\nYou can checkout :\nMaybelline New York Lifter Gloss - Pearl \n");
            printf("Redirecting to Lip makeup menu\n");
            break;

    case 2: printf("\nYou can checkout :\nMaybelline New York Lifter Gloss - Petal \n");
            printf("Redirecting to Lip makeup menu\n");
            break;

    case 3 : printf("\nYou can checkout :\nMaybelline New York Lifter Gloss - Topaz \n");
            printf("Redirecting to Lip makeup menu\n");
            break;
    case 4 : printf("\nYou can checkout :\nMaybelline New York Lifter Gloss - Moon \n");
            printf("Redirecting to Lip makeup menu\n");
            break;

    default: printf("the option you have entered does not exist,Redirecting to lip makeup menu");
        return;
    
    }
}
