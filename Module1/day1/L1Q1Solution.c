#include <stdio.h>
int tebig(int a, int b) {
return (a > b) ? a : b;
}
int big(int a, int b) {
	if (a>b){
		printf("%d",&a);
	}
	else{
		printf("%d", &b);
	}
}
int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    int result = tebig(num1, num2);
    printf("The biggest number is: %d\n", result);
    
    int result1 = big(num1, num2);
    printf("The biggest number is: %d\n", result);

    return 0;
}
