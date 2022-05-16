#include<stdio.h>
#include<math.h>
#define e 0.0001

float f(float);
float derivative(float);

int main() {
	float x; 
	unsigned short i = 1, k; 

	printf("PRWTI TIMH: ");
	scanf("%f", &x);

	printf("EPANALIPSEIS: ");
	scanf("%hu", &k);

	while(i <= k) {
		x = x - f(x)/derivative(x);
		printf("RIZA: %f \n", x);
		if (x<e)
		 break;
		
		i++;
	}

	return 0;
}

float f(float x) { // edo einai h synartisi gia tin f(x)
	return pow(x,2) - 5;
}

float derivative(float x) { // edo einai h synartisi gia tin f'(x)
	return 2*x;
}
