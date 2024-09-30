/*
Program to enable bank customers to manage their Personal Identification Number (PIN) on an Automated Teller Machine (ATM). This program will let the user enter their default pin which is 1234. Program will also allow the user to change their pin, they willl be asked to enter their pin a second time to verify wether it matches. If it matches then the program will display a message saying that the pin was changed correctly, if not then it will display a message saying that the pin doesnt match. The user will aslo be able to check how many times the pin was entered correctly and incorrectly. Finally the user will be able to terminate the program.
Author: Alwalid Bouderbala
Date: 05/11/2021
*/


#include <stdio.h>


int main()


//Start Main
{
    int n;
    int pin = 1234;
    int New_Pin;
    int Correct = 0;
    int Incorrect = 0;
               

    //Start of do loop
    do
    {

        printf("\nWelcome to Bank Of Grangegorman!");
        printf("\nChoose an option below, choose option 4 to exit the program.");
        printf("\n1. Enter PIN and verify correct.");
        printf("\n2. Change Pin.");
        printf("\n3. Display the number of times the PIN was entered (i) Successfully (ii) Incorrectly.");
        printf("\n4. Exit Program.");
        printf("\n");
        printf("\nChoose an option:");
        scanf("%d", &n);

        
        while(getchar() != '\n');
        
    
       

        //Start Switch Statement
        switch(n)
        {

            
            //Start Case 1
            case 1:
            {
                
                printf("\nEnter PIN:");
                scanf("%d", &pin);
            
        
                //Start of nested if statement
                if(pin == 1234)
                {

                    printf("Pin entered is Correct!\n");
                    Correct++;
            
                }//end  nested if statement
                
                
                //start nested else if statement
                else 
                {
                    
                    printf("Pin entered is Incorrect, Please try again.\n");
                    Incorrect++;

                }//End nested else if
                break;

            }


            
            //Start Case 2
            case 2:
            {
                
                printf("Enter New Pin:\n");
                scanf("%d", &New_Pin);

                //Start If
                if(New_Pin > 9999)
                {
                    printf("Error\n");
                    break;
                }//End If

                
                //Start If
                if(New_Pin < 999)
                {
                    printf("Error\n");
                    break;
                }//End If
                
            
                pin = New_Pin;
            
                printf("Re-Enter New Pin:\n");
                scanf("%d", &pin);

                
                //start of nested if statement
                if(pin == New_Pin)
                {
                    
                    printf("Pin has been changed Correctly.\n");

                }//End if statement
                
                
                //Start of nested else statement
                else 
                {
                    
                    printf("Pin entered doesnt match, Please try again.\n");

                }   //End else statement
                
                break;  

            }//End of case 2
       
            
            
            //Start Case 3
            case 3:
            {
                
                printf("Pin was entered Correctly %d times.\n", Correct);
                printf("Pin was entered Incorrectly %d times.\n", Incorrect);
                break;

            }//End Case 3
            
            
            
            //Start Case 4
            case 4:
            {
                printf("Program has been terminated,\n");
                break;

            }//End Case 4
            
            
            
            //Start Default
            default:
            {
                
                printf("There was an error, please choose one of the four options!\n");
                break;
                
            }//End Default

            

        }//End Switch Statement
        
        
    }//End do Loop
    
    
    //Start while loop
    while(n!=4);
    {
        
        printf("Thank You.\n");


    }//End while loop
    
    
    return 0;


}//End main


