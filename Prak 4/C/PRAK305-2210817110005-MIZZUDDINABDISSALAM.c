#include <stdio.h>

int main(){
int a, h, jm, mnt, dt, sh, sj;

scanf("%d", &a);
h = a / 86400;
sh = a % 86400;
jm = sh / 3600;
sj = a % 3600;
mnt = sj / 60;
dt = a % 60;

if(a >= 86400){printf("%d hari %.2d:%.2d:%.2d", h, jm, mnt, dt);}
else if(a >= 3600 && a <= 86399){printf("%.2d:%.2d:%.2d", jm, mnt, dt);}
else if(a >= 60 && a <= 3599){printf("00:%.2d:%.2d", mnt, dt);}
else if(a <= 59){printf("00:00:%.2d", dt);}
return 0;}
