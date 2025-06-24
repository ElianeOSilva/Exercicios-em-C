//Beecrowd 1005 Média 1 _ Eliane Maria

#include <stdio.h>
 
int main() {
	double A, B, media;
	
	scanf("%lf %lf", &A, &B);
	 
	media = A*3.5;
    
    media += B*7.5;
    
    media = media/11;
    printf("MEDIA = %.5lf\n", media);
     
    return 0;
}

