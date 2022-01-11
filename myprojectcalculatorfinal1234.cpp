#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define e 2.71828
#define b 10
#define PI 3.14 
//we can use here takes something function also but then we will have to use if else 
double sum(void);
double subtract(void);
double multiply(void);
double divide(void);
double sqnum(void);   //square of a number
double sqroot(void);  //square root of a number
double expo(void);    //exponent of a number
double natexpo(void); //natural exponent of a number
double logarithm(void);
double natlog(void);  //natural log of a number
double log_num1_to_the_base_num2(void);
double inverse(void); //inverse of a trigonometry funtion
double fact(void);    //factorial of a number
double power(void);
double trigno(void);

double num1,num2,num3,num4;

int main()
    
{
    while (1)
     { 
	  system("cls");
      printf("***?? --•?•----•?•--? SCIENTIFIC CALCULATOR?? --•?•----•?•--? ***\n");
         int choice;
         
          printf("Enter 1 for addition\n");
	      printf("Enter 2 for subtraction\n");
	      printf("Enter 3 for multiplication\n");
		  printf("Enter 4 for division\n");
	      printf("Enter 5 for square\n");
		  printf("Enter 6 for square root\n");
		  printf("Enter 7 for natural exponential\n");
          printf("Enter 8 for exponent\n");
          printf("Enter 9 for logarithm\n");
          printf("Enter 12 for inverse\n");
          printf("Enter 13 for factorial\n");
          printf("Enter 14 for power\n");
          printf("Enter 15 for trignometry\n");
          printf("Enter 0 for exit\n");
          printf("Enter your choice :\n");
          scanf("%d", &choice);

        switch (choice)
        {
        	
        case 1:
            printf("The sum of these numbers is %lf\n",sum());
            break;
            
        case 2:
            printf("The subtraction of these numbers is %lf\n",subtract());
            break;
            
        case 3:
            printf("The multiplication of these numbers is %lf\n",multiply());
            break;
            
        case 4:
            printf("The division of these numbers is %lf\n",divide());
            break;
            
        case 5:
            printf("The square of this number is %lf\n",sqnum());
            break;
            
        case 6:
            printf("The square root of this number is %lf\n",sqroot());
            break;
            
        case 7:
            printf("The natural exponent of this number is %lf\n",natexpo());
            break;
            
        case 8:
            printf("The exponent of this number is %lf\n",expo());
            break;
            
        case 9:
            printf("The logarithm o this number is %lf\n",logarithm());
            break;
            
        case 10:
            printf("The natural logarithm of this number is %lf\n",natlog());
            break;
            
        case 11:
            printf("The logarithm of this number is %lf\n",log_num1_to_the_base_num2());
            break;
            
        case 12:
            printf("The inverse of this number is %lf\n",inverse());
            break;
            
        case 13:
            printf("The factorial of this number is%lf\n",fact());
            break;
            
        case 14:
            printf("The result is %lf\n",power());
            break;
            
        case 15:
          	printf("The result is %lf\n",trigno());
          	break;
          	
        case 0:
		    exit(0); 
			   
        default:
            printf("Invalid choice\n");
            break;
        }
        getch();
    }
        return 0;
    
}

//for addition of two numbers
    double sum()
    { 
     printf("How many numbers do you want to add");
     printf("\n Enter 2 for two numbers\n Enter 3 for three numbers\n Enter 4 for four numbers\n");
     
     int choice;
     
     printf("Enter your choice:\n");
     scanf("%d",&choice);
     
    switch (choice){
    	
    	case 2:
			printf("Enter first number:\n");
			scanf("%lf",&num1);
			printf("Enter second number:\n");
        	scanf("%lf",&num2);
        	return (num1 + num2);
        
        case 3:
       		printf("Enter first number:\n");
			scanf("%lf",&num1);
			printf("Enter second number:\n");
        	scanf("%lf",&num2);
        	printf("Enter third number:\n");
        	scanf("%lf",&num3);
       	    return (num1 + num2 + num3);
        
        case 4:
       		printf("Enter first number:\n");
			scanf("%lf",&num1);
			printf("Enter second number:\n");
        	scanf("%lf",&num2);
        	printf("Enter third number:\n");
        	scanf("%lf",&num3);
        	printf("Enter fourth number:\n");
        	scanf("%lf",&num4);
        	return (num1 + num2 + num3 + num4);
        
        default:
        	printf("Invalid choice");
        	break;
        	
    	}
    }
    
//    for subtraction of two numbers
    double subtract()
    {
		printf("Enter first number:\n");
		scanf("%lf",&num1);
		printf("Enter second number:\n");
        scanf("%lf",&num2);
        return (num1 - num2);
    }
    
    // for multiplication of two numbers
    double multiply()
    { 
   	    printf("How many numbers do you want to multiply\n");
    	printf("Enter 2 for two digits\n Enter 3 for three digits\n Enter 4 for four digits\n");
    	
    	int choice;
    	printf("Enter your choice:\n");
    	scanf("%d",&choice);
    	
    switch (choice){
    	
    	case 2:
    		
    		printf("Enter first number:\n");
			scanf("%lf",&num1);
			printf("Enter second number:\n");
       	    scanf("%lf",&num2);
       	    return (num1 * num2);

        case 3:
        	
       		printf("Enter first number:\n");
			scanf("%lf",&num1);
			printf("Enter second number:\n");
       	    scanf("%lf",&num2);
       	    printf("Enter third number:\n");
       	    scanf("%lf",&num3);
       	    return (num1 * num2 * num3);

        case 4:
        	
       		printf("Enter first number\n");
			scanf("%lf",&num1);
			printf("Enter second number:\n");
       	    scanf("%lf",&num2);
       	    printf("Enter third number:\n");
       	    scanf("%lf",&num3);
       	    printf("Enter fourth number:\n");
       	    scanf("%lf",&num4);
        	return (num1 * num2 * num3 * num4);

        default:
        	
        	printf("Invalid choice");
        	break;
        	
    	}
    }
    
//    for division of two numbers
    double divide()
    {
		printf("Enter first number:\n");
		scanf("%lf",&num1);
		printf("Enter second number:\n");
	    scanf("%lf",&num2);
	    
    if (num2==0){
    	
		printf("You cannot enter 0");
    }
    
    else {
 	   return (num1 / num2);
	}
}

//for finding square of a number
    double sqnum()
    { 
	    printf("Enter a number:\n");
	    scanf("%lf",&num1);
        return (num1 * num1);
    }
    
    //for finding square root of a number
    double sqroot()
    { 
	    printf("Enter a number:\n");
	    scanf("%lf",&num1);
	    
    if (num1 < 0)
    {
	   printf("My friend you have given a negetive value\n\n");
    }
	  
     return (sqrt(num1));
    }
    
    //for finding exponentiation of a number
    double expo()
    { 
	    printf("Enter a number:\n");
	    scanf("%lf",&num1);
        return (pow(b, num1));
    }
    
    //for natural exponent of a number
    double natexpo()
    { 
	    printf("Enter a number:\n");
	    scanf("%lf",&num1);
        return (pow(e, num1));
    }
    
    //for finding log
    double logarithm()
    {
	    printf("Enter a number:\n");
	    scanf("%lf",&num1);
	    
    if (num1==0)
	{
    	printf("you cannot enter 0");
	}
	else
	 {
        return (log(num1)/log(b));}
    }
    
    //for natural log
    double natlog()
    { 
    	printf("Enter a number:\n");
    	scanf("%lf",&num1);
    	
    	if (num1==0)
		{
    	printf("you cannot enter 0");
		}
		else 
		{
        return (log(num1));
		}
   	} 
    
//     	for finding log of a number to the base of any number
    double log_num1_to_the_base_num2()
	{
    	printf("Enter a number:\n");
    	scanf("%lf",&num1);
    	printf("Enter a base:\n");
    	scanf("%lf",&num2);
		if (num1==0 || num2==0)
		{
    	printf("you cannot enter 0");
	    } 
		else
		{
        return (log(num1)/log(num2));
		}	
	}
	
	//for finding inverse of a funtion
    double inverse()
    { 
    	printf("Enter a number:\n");
    	scanf("%lf",&num1);
    	if (num1==0)
		{
    	printf("you cannot enter 0");
		}
		else 
		{
        return (1 / num1);
		}
    }
    
    //for finding factorial of a number
    double fact()
    { 
    	printf("Enter a number:\n");
    	scanf("%lf",&num1);
    	double f=1;
    	int i=1;
    	for(;i<=num1;i++)
		{
    	f=f*i;
	    }
        return f;
	}
	
//		num1 raise to the power num 2
    double power()
	{
    	printf("Enter a number:\n");
    	scanf("%lf",&num1);
    	printf("Enter a power:\n");
    	scanf("%lf",&num1);
    	return (pow(num1, num2));
	} 
	
//	 for trignometric functions
	double trigno(){
        	int choice;
        	
        printf("what do you want\n");
		printf("1.sin\n2.cos\n3.tan\n");
		printf("Enter your choice:\n");
		scanf("%d",&choice);
		switch (choice)
		    {
				
		case 1:
		    printf("Enter a number\n");
            scanf("%lf",&num1);
            return (sin(num1*PI/180));
            break;
            
        case 2:
		    printf("Enter a number\n");
            scanf("%lf",&num1);
            return (cos(num1*PI/180));
            break;
            
        case 3:
		    printf("Enter a number\n");
            scanf("%lf",&num1);
            return (tan(num1*PI/180));
            break;
            
        default:
        	printf("Invalid choice");
        	break;
		}
	}
