clc
clear
clf
L= input("Enter the value of L=")
n=input("Enter the value of n=")

a0=(2/L)*integrate('x^2','x',0,L)
disp("a0",a0)
for i=1:n
    a(i)=(2/L)*integrate('x^2*cos((i*%pi*x)/L)','x',0,L)
end
disp("a",a)

x=linspace(0,L,40)
y=x^2
series=a0/2
for i=1:n
    series=series+a(i)*cos(i*%pi*x/L)
end
plot(x,y)
plot(x,series,"*r")
xtitle("plot function vs its fourier","x-axis","y-axis")
legend("plot of function","plot of function by fourier series")
