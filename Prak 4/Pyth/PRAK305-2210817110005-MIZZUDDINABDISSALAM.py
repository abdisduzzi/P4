a = int(input(""))

h = a / 86400;
sh = a % 86400;
jm = sh / 3600;
sj = a % 3600;
mnt = sj / 60;
dt = a % 60;

if a >= 86400: print('%d hari %.2d:%.2d:%.2d'%(h, jm, mnt, dt))
elif a >= 3600 and a <= 86399: print('%.2d:%.2d:%.2d'%(jm, mnt, dt))
elif a >= 60 and a <= 3599: print('00:%.2d:%.2d'%(mnt, dt))
elif a <= 59: print('00:00:%.2d'%(dt))