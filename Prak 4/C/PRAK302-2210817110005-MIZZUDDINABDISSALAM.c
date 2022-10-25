#include <stdio.h>

int main(){
int bil;

scanf("%d", &bil);

if(bil < 50){printf("E");}
else if(bil >= 50 && bil <= 59){printf("D");}
else if(bil >= 60 && bil <= 69){printf("C");}
else if(bil >= 70 && bil <= 79){printf("B");}
else if(bil >= 80){printf("A");}
return 0;}
