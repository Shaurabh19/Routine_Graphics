#include<stdio.h>
#include <stdlib.h> 
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<time.h>

#define ScreenWidth getmaxx()
#define ScreenHeight getmaxy()
#define GroundY ScreenHeight*0.75

void draw();
void drawsp(int);
void drawtab();
void time();
void time_all();
void spf_table(int);
void subj(int);
void rainbow();
void rain();
void main()
{
	int d;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	setbkcolor(0);
	printf("Enter day Sunday=1 ,Monday=2,.......,and press 0 for all");
	scanf("%d",&d);
	if(d>6)
		{
		  printf("invalid input");
		}
	else
		{
			if (d==0)
			{
				drawtab();
				getch();
			}
			else
			{
				 cleardevice();
				 drawsp(d);
				 getch();
			}
		 }
}
void drawtab()
	{
		int i,j,x;
		cleardevice();
		draw();
		setcolor(7);
		time_all();
		outtextxy(30,110,"SUN");
		outtextxy(30,160,"MON");
		outtextxy(30,210,"TUE");
		outtextxy(30,260,"WED");
		outtextxy(30,310,"THU");
		outtextxy(30,360,"FRI");
		setcolor(13);
		settextstyle(5,0,4);
		outtextxy(290,5,"Routine");
		outtextxy(200,5,"_______________");
		
		rain();
	}

void draw()
{
	settextstyle(2,0,1);
	  //SUNDAY
	   rectangle(50,100,590,140);
	   rectangle(110,100,590,140);
	   rectangle(230,100,590,140);
	   rectangle(290,100,590,140);
	   rectangle(350,100,590,140);
	   rectangle(410,100,590,140);
	   rectangle(590,100,590,140);
	  outtextxy(150,110,"Software Engineering");
	  outtextxy(170,120,"(MA)");
	  outtextxy(250,115,"BREAK");
	  outtextxy(310,110,"English");
	  outtextxy(315,120,"(VKY)");
	  outtextxy(370,110,"English");
	  outtextxy(370,120,"(VKY+RKY)");
	  outtextxy(450,110,"INSTRUMENTATION II LAB(NA+BA)");
	  outtextxy(450,125,"DATA COMMUNICATION LAB(NK+AK)LAB D");


	  //MONDAY
	   rectangle(50,140,530,180);
	   rectangle(110,140,530,180);
	   rectangle(230,140,530,180);
	   rectangle(410,140,590,180);
	   rectangle(350,140,590,180);
	   //rectangle(410,140,530,180);
	  outtextxy(150,150,"COMPUTER ORG AND ARCH");
	  outtextxy(180,160,"(KG)");
	  outtextxy(270,150,"COMPUTER GRAPHICS");
	  outtextxy(290,160,"(AS)");
	  outtextxy(370,155,"BREAK");
	  outtextxy(440,150,"DATA COMMUNICATION");
	  outtextxy(460,160,"(NK)");

	  //TUESDAY

	   rectangle(50,180,230,210);
	   rectangle(50,180,110,210);
	   rectangle(50,180,590,240);
	   rectangle(50,180,590,240);
	   rectangle(230,180,590,240);
	   rectangle(290,180,590,240);
	   rectangle(350,180,590,240);
	   rectangle(470,180,590,240);

	  outtextxy(140,190,"ENGLISH LAB(KKY)");
	  outtextxy(80,220,"COMPUTER GRAPHICS (AD+GS)LAB B");
	  outtextxy(250,195,"BREAK");
	  outtextxy(305,195,"ComputerOrg");
	  outtextxy(315,200,"(KG)");
	  outtextxy(380,195,"INSTRUMENTATION II");
	  outtextxy(395,200,"(NA)");
	  outtextxy(495,195,"COMPUTER GRAPHICS");
	  outtextxy(515,200,"(AS)");

	  //WEDNESDAY
	   rectangle(50,240,590,290);
	   rectangle(170,240,590,290);
	   rectangle(290,240,590,290);
	   rectangle(350,240,590,290);
	   rectangle(470,240,590,290);
	  outtextxy(74,260,"COMPUTER ORGANIZATION &");
	  outtextxy(80,270,"ARCHITECTURE (KG)");
	  outtextxy(200,260,"SOFTWARE ENGINEERING");
	  outtextxy(220,270,"(MA)");
	  outtextxy(315,260,"BREAK");
	  outtextxy(380,260,"PROBAILITY & STATS");
	  outtextxy(400,270,"(BP)");
	  outtextxy(520,260,"ENGLISH");
	  outtextxy(525,270,"(RKY)");






	  //THURSDAY
	    rectangle(50,290,230,340);
	    rectangle(50,315,230,340);
	   rectangle(230,290,590,340);
	   rectangle(290,290,590,340);
	   rectangle(410,290,590,340);
	  rectangle(470,290,590,340);
	  outtextxy(70,300,"COMPUTER ORG & ARCH(KG+GS) LAB B");
	  outtextxy(70,325,"SOFTWARE ENGINEERING LAB (MA) ");
	  outtextxy(250,315,"BREAK");
	  outtextxy(320,310,"PROBABILITY & STATS");
	  outtextxy(340,320,"(BP)");
	  outtextxy(425,305,"INSTRUMEN-");
	  outtextxy(425,315,"TATION(NA)");
	  outtextxy(500,310,"DATA COMMUNICATION");
	  outtextxy(520,320,"(NK)");


	  //FRIDAY

	   rectangle(50,340,170,370);
	   rectangle(50,340,230,370);
	   rectangle(50,340,230,390);
	   rectangle(230,340,590,390);
	   rectangle(290,340,590,390);
	   rectangle(410,340,590,390);
	   rectangle(530,340,590,390);
	   outtextxy(80,350,"ENGLISH LAB (KKY)");
	   outtextxy(80,375,"COMPUTER GRAPHIcs LAB (GS+AD)");
	   outtextxy(250,360,"BREAK");
	   outtextxy(320,355,"PROBABILITY & STATS");
	  outtextxy(340,365,"(BP)");
	  outtextxy(440,355,"INSTRUMENTAION II");
	  outtextxy(460,365,"(NA)");


	  //put here all total
}

void drawsp(int d)
{
	int i,j,x,p;
	if (d==1)
		{
			time();
			spf_table(d);
			rain();
			rainbow();

		}
	else if (d==2)
		{
			time();
			spf_table(d);
			rain();
			rainbow();
		}
	else if (d==3)
		{
			time();
			spf_table(d);
			rain();
			rainbow();
		}
	else if (d==4)
		{
			time();
			spf_table(d);
			rain();
			rainbow();
		}

	else if (d==5)
		{
			time();
			spf_table(d);
			rain();
			rainbow();
		}
	else if (d==6)
		{
			time();
			spf_table(d);
			rain();
			rainbow();
		}
	else if(d==7)
	{
	rain();
	rainbow();
	printf("TEST");
	}

	getch();
}




void time()
{
	int i,p,b;
	for(i=0;i<=630;i+=70)
		{
			rectangle(0+i,200,630,250);
		}
	setcolor(RED);
	{
		settextstyle(2,0,4);
		outtextxy(07,220,"9:45-10:35");
		outtextxy(75,220,"10:35-11:25");
		outtextxy(143,220,"11:25-12:15");
		outtextxy(217,220,"12:15-1:05");
		outtextxy(290,220,"1:05-1:55");
		outtextxy(360,220,"1:55-2:45");
		outtextxy(430,220,"2:45-3:35");
		outtextxy(500,220,"3:35-4:25");
		outtextxy(570,220,"4:25-5:15");
	}
}


void time_all()
{
	setcolor(RED);
	int i;
	for(i=0;i<=590;i+=60)
	{
		rectangle(50+i,60,530,100);
	}
	
		{
			settextstyle(2,0,3);
			outtextxy(60,75,"9:45-10:35");
			outtextxy(120,75,"10:35-11:25");
			outtextxy(180,75,"11:25-12:15");
			outtextxy(240,75,"12:15-1:05");
			outtextxy(300,75,"1:05-1:55");
			outtextxy(360,75,"1:55-2:45");
			outtextxy(420,75,"2:45-3:35");
			outtextxy(480,75,"3:35-4:25");
			outtextxy(540,75,"4:25-5:15");
		}
}
void spf_table(int d)
{
	setcolor(RED);
	if( d==1)
	{	
	   setcolor(7);
	   rectangle(0,250,630,300);
	   rectangle(70,250,630,300);
	   rectangle(210,250,630,300);
	   rectangle(280,250,630,300);
	   rectangle(350,250,631,300);
	   rectangle(420,250,631,300);
	   rectangle(420,250,631,275);
	   rectangle(420,250,631,275);
	   subj(d);
	   settextstyle(1,0,8);
	   outtextxy(170,45,"SUNDAY");
	   outtextxy(150,45,"________");

	}


	if( d==2)
	{
		setcolor(7);
	   rectangle(0,250,630,300);
	   rectangle(70,250,630,300);
	   rectangle(210,250,630,300);
	   rectangle(350,250,630,300);
	   rectangle(420,250,631,300);
	   rectangle(560,250,631,300);
	   subj(d);
	   settextstyle(1,0,8);
	   outtextxy(170,45,"MONDAY");
	   outtextxy(150,45,"________");

	}

	if( d==3)
	{
		setcolor(7);
	   rectangle(0,250,630,300);
	   rectangle(0,250,210,275);
	   rectangle(70,250,210,275);
	   rectangle(210,250,630,300);
	   rectangle(280,250,630,300);
	   rectangle(350,250,630,300);
	   rectangle(490,250,631,300);
	   subj(d);
	   settextstyle(1,0,8);
	   outtextxy(170,45,"TUESDAY");
	   outtextxy(150,45,"_________");
	}
	if( d==4 )
	{
		setcolor(7);
	   rectangle(0,250,630,300);
	   rectangle(140,250,630,300);
	   rectangle(280,250,630,300);
	   rectangle(350,250,630,300);
	   rectangle(490,250,631,300);
	   subj(d);
	   settextstyle(1,0,8);
	   outtextxy(100,45,"WEDNESDAY");
	   outtextxy(90,45,"___________");
	}
	if( d==5)
	{
		setcolor(7);
	   rectangle(0,250,630,300);
	   rectangle(0,250,210,275);
	   rectangle(210,250,630,300);
	   rectangle(280,250,630,300);
	   rectangle(420,250,630,300);
	   rectangle(490,250,631,300);
	   subj(d);
	   settextstyle(1,0,8);
	   outtextxy(130,45,"THURSDAY");
	   outtextxy(120,45,"__________");
	}
	if (d==6)
	{
		setcolor(7);
	   rectangle(0,250,630,300);
	   rectangle(0,250,140,275);
	   rectangle(140,250,210,275);
	   rectangle(210,250,630,300);
	   rectangle(280,250,630,300);
	   rectangle(420,250,630,300);
	   rectangle(560,250,631,300);
	   subj(d);
	   settextstyle(1,0,8);
	   outtextxy(170,45,"FRIDAY");
	   outtextxy(150,45,"_______");
	}
	if(d==7)
	{
		rain();
	}


}


void subj(int d)
{
	if( d==1)
	{

	  outtextxy(80,260,"Software Engineering");
	  outtextxy(130,280,"(MA)");
	  outtextxy(230,270,"BREAK");
	  outtextxy(295,260,"English");
	  outtextxy(305,280,"(VKY)");
	  outtextxy(370,260,"English");
	  outtextxy(360,280,"(VKY+RKY)");
	  outtextxy(440,260,"INSTRUMENTATION II LAB(NA+BA)");
	  outtextxy(425,280,"DATA COMMUNICATION LAB(NK+AK)LAB D");
	}


	if( d==2)
	{
	  outtextxy(80,260,"COMPUTER ORG AND ARCH");
	  outtextxy(130,280,"(KG)");
	  outtextxy(230,260,"COMPUTER GRAPHICS");
	  outtextxy(270,280,"(AS)");
	  outtextxy(370,260,"BREAK");
	  outtextxy(360,280,"(VKY+RKY)");
	  outtextxy(440,260,"DATA COMMUNICATION");
	  outtextxy(480,280,"(NK)");
	}

	if( d==3)
	{
	  outtextxy(90,255,"ENGLISH LAB(KKY)");
	  outtextxy(10,280,"COMPUTER GRAPHICS (AD+GS)LAB B");
	  outtextxy(230,270,"BREAK");
	  outtextxy(285,260,"ComputerOrg");
	  outtextxy(305,280,"(KG)");
	  outtextxy(370,260,"INSTRUMENTATION II");
	  outtextxy(410,280,"(NA)");
	  outtextxy(510,260,"COMPUTER GRAPHICS");
	  outtextxy(550,280,"(AS)");
	}
	if( d==4 )
	{
	  outtextxy(4,260,"COMPUTER ORGANIZATION &");
	  outtextxy(20,280,"ARCHITECTURE (KG)");
	  outtextxy(150,260,"SOFTWARE ENGINEERING");
	  outtextxy(200,280,"(MA)");
	  outtextxy(300,270,"BREAK");
	  outtextxy(370,260,"PROBAILITY & STATS");
	  outtextxy(410,280,"(BP)");
	  outtextxy(535,260,"ENGLISH");
	  outtextxy(545,280,"(RKY)");

	}
	if( d==5)
	{
	  outtextxy(05,255,"COMPUTER ORG & ARCH(KG+GS) LAB B");
	  outtextxy(10,280,"SOFTWARE ENGINEERING LAB (MA) ");
	  outtextxy(230,270,"BREAK");
	  outtextxy(300,260,"PROBABILITY & STATS");
	  outtextxy(320,280,"(BP)");
	  outtextxy(430,260,"INSTRUMEN-");
	  outtextxy(430,280,"TATION(NA)");
	  outtextxy(510,260,"DATA COMMUNICATION");
	  outtextxy(550,280,"(NK)");
	}
	if (d==6)
	{
	  outtextxy(10,255,"ENGLISH LAB (KKY)");
	  outtextxy(10,280,"COMPUTER GRAPHIcs LAB (GS+AD)");
	  outtextxy(230,270,"BREAK");
	  outtextxy(300,260,"PROBABILITY & STATS");
	  outtextxy(340,280,"(BP)");
	  outtextxy(440,260,"INSTRUMENTAION II");
	  outtextxy(480,280,"(NA)");

	}

}



void rainbow()
{
	int i;
	for (i=30; i<100; i++)
    {
	delay(100);


	setcolor(i/10);


	arc(0, 480, 0, 180, i-10);
	arc(630, 480, 0, 180, i-10);
    }
}

void rain()
{
int i,rx,ry,x=0;
for(i=100;i<200;i++)
{

 rx=rand() % ScreenWidth;
 ry=rand() % ScreenHeight;
 if(ry<GroundY-4)
 {
  if(ry<GroundY-120 || (ry>GroundY-120 && (rx<x-20 || rx>x+60)))
  textcolor(0);
  textbackground(15);
  line(rx,ry,rx+0.5,ry+4);
  delay(75);

   x=(x+2)%ScreenWidth;
 }
}
}