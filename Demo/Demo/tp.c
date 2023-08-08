// Header File
#include<stdio.h>

// Function call
void add();
void sub();
void mul();
void div();

// variable Declaration
int a,b,choice;
 

// Main Function

void main(){
	
	do {
		
		printf("\nChoose Choice");
		printf("\n1.Addition");
		printf("\n2.Subtraction");
		printf("\n3.Multiplication");
		printf("\n4.Divison");
		printf("\n5.Exit");
		printf("\n");
		
		printf("\nEnter the choice  = ");
		scanf("%d",&choice);
		
		switch ( choice ){
			
			case 1:
				add();
				break;
			
			case 2:
				sub();
				break;
				
			case 3:
				mul();
				break;
				
			case 4:
				div();
				break;
			
			case 5:
				break;
				
			default:
				printf("\nEnter the valid choice");
			
		}
		
		
	} while (choice != 5 );
	
}

// Add Function
void add(){
	
	printf("\nEnter 1st Number = ");
	scanf("%d",&a);
	printf("\nEnter 2nd Number = ");
	scanf("%d",&b);
	
	printf("\nAddition of %d and %d is  = %d",a,b,a+b);
	
}

// Sub Function
void sub(){
	
	printf("\nEnter 1st Number = ");
	scanf("%d",&a);
	printf("\nEnter 2nd Number = ");
	scanf("%d",&b);
	
	printf("\nSubtraction of %d and %d is  = %d",a,b,a-b);

    
}

// Mul Function
void mul(){
	
	printf("\nEnter 1st Number = ");
	scanf("%d",&a);
	printf("\nEnter 2nd Number = ");
	scanf("%d",&b);
	
	printf("\nMultiplication of %d and %d is  = %d",a,b,a*b);
	
}

// Div Function
void div(){
	
	printf("\nEnter 1st Number = ");
	scanf("%d",&a);
	printf("\nEnter 2nd Number = ");
	scanf("%d",&b);
	
	printf("\nDivision of %d and %d is  = %d",a,b,a/b);
	
}
