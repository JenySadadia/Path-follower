#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>



void main()
{

int gd,gm,x,y,i;
gd=DETECT;
initgraph(&gd,&gm,"c://turboc3//bgi");

x=getmaxx();
y=getmaxy();
//setbkcolor(DARKGRAY);
printf("%d %d",x,y);

line(40,400,120,400); //joining line

line(40,400,40,300);
line(120,400,120,300);

arc(40,260,270,450,40);//obs-1
arc(120,260,270,450,40);

line(40,220,40,50);
line(120,220,120,110);
line(40,50,200,50);
line(120,110,200,110);
line(200,50,250,90);
line(200,110,250,150);
line(250,90,300,50);
line(250,150,300,110);
line(300,50,450,50);
line(300,110,400,110);
line(450,50,450,110);
line(400,110,400,160);
line(450,110,510,110);
line(400,160,570,160);
line(510,110,510,50);
line(570,160,570,110);
line(510,50,640,50);
line(570,110,580,110);
line(639,50,639,260);
line(580,110,580,200);
line(639,260,540,260);
line(580,200,540,200);
arc(520,260,180,360,20);
arc(520,200,0,180,20);
line(500,260,280,260);
line(500,200,200,200);
line(280,260,280,330);
line(200,200,200,400);
line(280,330,370,330);
line(200,400,300,400);
arc(400,330,180,360,30);
arc(330,400,0,180,30);
line(430,330,630,330);
line(360,400,630,400);
line(630,330,630,400);


for(i=0;i<100;i=i+10){

setcolor(WHITE);
					// circle(80,425,20);//robo
					// circle(73,420,3);
					//circle(88,420,3);
					// arc(80,429,190,350,8)

circle(80,425-i,20);//robo
circle(73,420-i,3);
circle(88,420-i,3);
arc(80,429-i,190,350,8);
delay(500);

setcolor(BLACK);
circle(80,425-i,20);//robo
circle(73,420-i,3);
circle(88,420-i,3);
arc(80,429-i,190,350,8);
}


for(i=0;i<30;i=i+10){

setcolor(WHITE);
circle(90+i,325-(2*i),20);
circle(83+i,120-(2*i),3);
circle(98+i,320-(2*i),3);
arc(90+i,329-(2*i),190,350,8);
delay(500);

setcolor(BLACK);
circle(90+i,325-(2*i),20);
circle(83+i,120-(2*i),3);
circle(98+i,320-(2*i),3);
arc(90+i,329-(2*i),190,350,8);


}
getch();
}





