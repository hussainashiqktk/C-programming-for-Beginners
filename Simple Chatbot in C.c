#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<windows.h>
#include<math.h>

int main()
{
	printf("*****************************************************************************\n");
	printf("WELCOME.\nThis is a chatbot. Enter 'help' for availabe commands. How can i help you? Just type, please !\n");
	printf("Coded by HUSSAIN ASHIQ.\n");
	printf("*****************************************************************************\n");
	char input[128];
	while(1)
	{
		gets(input);
		if(strcmp(input,"help")==0)
			{
			printf("\nAvailabe commands are:\n\nhi\nhello\nchange color to <color name>\nsalam\nbye\ncalculator\nadd\nthanks\nbye\nwho are you?\nwho made you?\n");
			printf("can i ask something?\ncan i ask a question?\nclear screen");
			printf("\n------------------------------------------------------\n");
			}
		else if((strcmp(input, "hi")==0) || (strcmp(input,"hello")==0))
			{
			printf("\t\t\tHi Sir, I am your personal chatbot.\n");
			printf("------------------------------------------------------\n");
			}
		else if(strcmp(input,"salam")==0 || strcmp(input,"Salam")==0)
			{
			printf("\t\t\tSalam Sir, Kia khidmat kar sakty hain apki ?\n");
			printf("------------------------------------------------------\n");
			}
		else if(strcmp(input,"who made you?")==0 || strcmp(input,"who is your creator?")==0)
			{
			printf("\t\t\tHUSSAIN ASHIQ coded this bot.\n");
			printf("------------------------------------------------------\n");
			}
		else if(strcmp(input,"can i ask a question?")==0)
			{
			printf("\t\t\tYes, ofcourse");
			printf("\n------------------------------------------------------\n");
			}
			
		else if(strcmp(input, "change color to blue")==0)
			{
				printf("\t\t\tColor changed Sir. Anything else?\n");
				system("color 1");
				printf("------------------------------------------------------\n");
			}
		else if(strcmp(input, "change color to green")==0)
			{
				printf("\t\t\tColor changed Sir. Anything else?\n");
				system("color 2");
				printf("------------------------------------------------------\n");
			}
		else if(strcmp(input, "change color to white")==0)
			{
				printf("\t\t\tColor changed Sir. Anything else?\n");
				system("color 7");
				printf("------------------------------------------------------\n");
			}
		else if(strcmp(input, "change color to yellow")==0)
			{
				printf("\t\t\tColor changed to YELLOW Sir. Anything else?\n");
				system("color 6");
				printf("------------------------------------------------------\n");
			}
		else if(strcmp(input, "change color to red")==0)
			{
				printf("\t\t\tColor changed Sir. Anything else?\n");
				system("color c");
				printf("------------------------------------------------------\n");
			}
			
		else if(strcmp(input, "can i ask something?")==0)
			{
			printf("\t\t\tI am not so intelligent yet. But please ask.\n");
			printf("------------------------------------------------------\n");
			}
		else if(strcmp(input, "who are you?")==0)
			{
			printf("\t\t\tI am a chatbot, made by Mr.HUSSAIN ASHIQ. You can call me BLOODY!\n");
			printf("------------------------------------------------------\n");
			}
		else if(strcmp(input, "add")==0)
			{
			int num1, num2;
			printf("Enter first number: ");
			scanf("%d", &num1);
			printf("Enter second number: ");
			scanf("%d", &num2);
			printf("Sir, your sum is : %d", num1+num2);
			printf("\n------------------------------------------------------\n");
			}
				
		else if(strcmp(input, "calculator")==0)
		{
				
			int choice;
			float x, y, result;
			printf("WELCOME. This calculator can perform the following operations: \n");
			printf("1. Sin\n2. Cos\n3. Tan\n4. Natural Logarithm\n");
			printf("5. Exponential\n6. Raised to a power\n7. Square Root\n");
			printf("8. Ceiling (e.g ceil of 4.5 is 5)\n9. Floor (e.g. floor of 4.5 is 4)\n");
	
			printf("\nEnter the serial number of the operation you want to perform: ");        
			scanf("%d", &choice);
	
				/*Using switch() function for various cases. We can also use if---if else---else mehtod.*/

			switch(choice)                             
			{
	
					/*For first case, when the user wants to find the sine of a number*/	
	  			  case 1:
		   				 printf("\nEnter the number (in radians) for finding its Sine value: ");
		    				scanf("%f", &x);
		   				 result = sin(x);
		   				 printf("Sin value of %f = %f", x, result);
		   			 	break;
		 
							/*For second case, when the user wants to find the cosine of a number*/		 
					case 2:
						printf("\nEnter the number (in radians) for finding its Cosine value: ");
		 				   scanf("%f", &x);
		   				 result = cos(x);
		   				 printf("Cosine value of %f = %f", x, result);
		   			 		break;
	
							/*For third case, when the user wants to find the tangent of a number*/		
					case 3:
						printf("\nEnter the number (in radians) for finding its Cosine value: ");
		   				 scanf("%f", &x);
		   				 result = tan(x);
		   				 printf("Tangent value of %f = %f", x, result);
		   				 break;

						/*For fourth case, when the user wants to find the natural log of a number*/
					case 4:
							printf("\nEnter the number for finding its Natural Logarithm: ");
		   					 scanf("%f", &x);
		  					  result = log(x);
		   					 printf("Natural Logarithm of %f = %f", x, result);
		   					 break;

							/*For fifth case, when the user wants to find the exponential of a number*/		
					case 5:
						printf("\nEnter the number for finding its Exponential (raised to power e): ");
					    scanf("%f", &x);
		   				 result = exp(x);
		   				 printf("Exponential of %f = %f", x, result);
		   				 break;
		    
							/*For sixth case, when the user wants to raise a number to another number*/
					case 6:
						printf("\nEnter the base number: ");
					    scanf("%f", &x);
		 				   printf("Enter the exponent to which you want the first number raised to: ");
		  				  scanf("%f", &y);
		  					  result = pow(x, y);
		  				  printf("The number %.2f when raised to  %f = %.2f", x, y, result);
		  					  break;

									/*For first case, when the user wants to find the square root of a number*/		
					case 7:
							printf("\nEnter the number for finding its Square Root: ");
		  					  scanf("%f", &x);
		  					  result = sqrt(x);
		  					  printf("Square Root of %f = %f", x, result);
		  					  break;

								/*For first case, when the user wants to find the floor of a number*/
					case 8:
						printf("\nEnter the number for finding nearest integer greater than the number: ");
					    scanf("%f", &x);
		  				  result = ceil(x);
		  				  printf("Nearest integer greater than %f = %f", x, result);
		  				  break;
		    
							/*For nineth operation, when the user wants to find the floor of a number*/
					case 9:
						printf("\nEnter the number for finding nearest integer LESS than the number: ");
		   				 scanf("%f", &x);
		   				 result = floor(x);
		   				 printf("Nearest integer LESS than %f = %f", x, result);
		   				 break;
		 
						/*If the user enters a choice other than than 1-9, the following will execute */	 	 
					default:
						printf("\nSorry, you entered an invalid choice.\n");
						break;
			
			}
		}
		else if(strcmp(input, "thanks")==0)
			{
			printf("No problem Sir. Have a nice day !");
			printf("\n------------------------------------------------------\n");
			}
		else if(strcmp(input, "goodbye")==0 || strcmp(input, "bye")==0)
			{
			printf("Good Bye Sir. It was nice meeting you. Take care!\n");
			printf("\n------------------------------------------------------\n");		
			}
		else if(strcmp(input,"clear screen")==0)
			{
			printf("This screen will clear in 3 seconds.\n");		
			sleep(2);
			system("cls");
			printf("Screen cleared Sir. Anything else ?\n\n");
			}
		else
			{
			printf("Sorry sir, i did'nt understand. Type 'help' please!\n");
			printf("\n------------------------------------------------------\n");
			}
	}
				
			
system("pause");
return 0;
}
