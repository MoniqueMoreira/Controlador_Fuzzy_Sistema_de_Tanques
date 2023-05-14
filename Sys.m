clear; clc;

D1 = 4.445;
D2 = 4.445;
A1 = 15.3842;
A2 = 15.3842;
d1 = 0.476;
d2 = 0.476;
a1 = 0.1776;
a2 = 0.1776;
km = 3.3;
kc = 6.1;
g = 981;

x1eq = 10;
u_eq = (a1/km)*sqrt(2*g*x1eq)
x1_eq = ((1/(2*g))*((km*u_eq)/a1)^2);
x2_eq = (x1_eq*(a1/a2)^2);

A = [((-a1/A1)*sqrt(g/(2*x1_eq))) 0;((a1/A1)*sqrt(g/(2*x1_eq))) ((-a2/A2)*sqrt(g/(2*x2_eq)))]
B = [(km/A1); 0]
C = [0  1]
D = 0

sys = ss(A, B, C, D);
[num,den]=ss2tf(A,B,C,D);
G = tf(num,den);
step(G)
pause;
Ft = feedback(G,1);
step(Ft)

save Tanque.mat

