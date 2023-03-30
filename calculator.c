#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#define note "invalid input"
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void factorial();
void power();
void square();
void cube();
void squareroot();
void tan();
int main(){
	float radian,degree;
	const float PI = 3.14;

	printf("\t\t\tWelcome to the scientific calculator\n\n");
	char choice;
	printf("\n********** press  to quit the program**********\n");
	printf("Enter 1 for Addition \n");
	printf("Enter 2 for subtaction \n");
	printf("Enter 3 for multiplication \n");
	printf("Enter 4 for division \n");
	printf("Enter 5 for modulus \n");
	printf("Enter 6 for factorial \n");
	printf("Enter 7 for power \n");
	printf("Enter 8 for sqaure \n");
	printf("Enter 9 for cube \n");
	printf("Enter 10 for squareroot \n");
	while(1){
		printf("\n\n enter the operation you want to do: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				addition();
				break;
			case 2:
				subtraction();
				break;
			case 3:
				multiplication();
				break;
			case 4:
				division();
				break;
			case 5:
				modulus();
				break;
			case 6:
				factorial();
				break;
			case 7:
				power();
				break;
			case 8:
				square();
				break;
			case 9:
				cube();
				break;
			case 10:
				squareroot();
				break;
			case 11:
				sin();
				break;
			default:
                    printf("\n********** %s ***********\n",note);
		}

	}
	return 0;
}
void addition(){
    printf("Enter the numbers you want to add: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The sum of a and b is %d\n",a+b);
}
void subtraction(){
    printf("Enter the numbers you want to subtract: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The subtraction of a and b is %d\n",a-b);
}
void multiplication(){
    printf("Enter the numbers you want to multiply: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The multiplication of a and b is %d\n",a*b);
}
void division(){
    printf("Enter the numbers you want to divide: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The division of a and b is %f\n",(float)a/(float)b);
}
void modulus(){
    printf("Enter the numbers you want to find modulus of: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The modulus of a and b is %d\n",a%b);
}
void factorial(){
    int n,factorial;
    printf("Enter the number you want the factorial of: ");
    scanf("%d",&n);
    factorial=1;
    for(int i=1;i<=n;i++){
        factorial=factorial*i;
    }
    printf("\nFactorial of %d is %d",n,factorial);
}
void power(){
    double b;
    double p;
    printf("Enter the base and the power: ");
    scanf("%lf%lf",&b,&p);
    double e=pow(b,p);
    printf("The power is %lf",e);
}
void square(){
    double b;
    printf("Enter the number you want the square of: ");
    scanf("%lf",&b);
    double p=pow(b,2);
    printf("The square of %lf is %lf",b,p);
}
void cube(){
    double b;
    printf("Enter the number you want the cube of: ");
    scanf("%lf",&b);
    double p=pow(b,3);
    printf("The cube of %lf is %lf",b,p);
}
void squareroot(){
    double b;
    printf("Enter the number you want the square root of : ");
    scanf("%lf",&b);
    double s = sqrt(b);
    printf("The square root of %lf is %lf",b,s);
}
void tan(){
	float radian,degree;
	const float PI = 3.14;

	  printf("Enter angle in degree\n");
      scanf("%f", &degree);
      radian = degree * (PI / 180.0);

      printf("tan(%f) = %f\n", degree, tan(radian));
}
