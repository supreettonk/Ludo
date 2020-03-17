#include<graphics.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int dice_val;

    initwindow(1520,825);

    rectangle(0,0,810,810);

    // 4 players rectangle
    rectangle(5,5,265,265);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(10,10,WHITE);
    rectangle(545,5,805,265);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(550,10,WHITE);
    rectangle(545,545,805,805);
    setfillstyle(SOLID_FILL,RED);
    floodfill(550,550,WHITE);
    rectangle(5,545,265,805);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(10,550,WHITE);

    line(54,270,54,540);
    line(108,270,108,540);
    line(162,270,162,540);
    line(216,270,216,540);

    line(270,54,540,54);
    line(270,108,540,108);
    line(270,162,540,162);
    line(270,216,540,216);

    line(594,270,594,540);
    line(648,270,648,540);
    line(702,270,702,540);
    line(756,270,756,540);


    line(270,594,540,594);
    line(270,648,540,648);
    line(270,702,540,702);
    line(270,756,540,756);




     circle(81,495,20);
      setfillstyle(SOLID_FILL,WHITE);
    floodfill(81,495,WHITE);
     circle(315,81,20);
     setfillstyle(SOLID_FILL,WHITE);
    floodfill(315,81,WHITE);
     circle(729,315,20);
     setfillstyle(SOLID_FILL,WHITE);
    floodfill(729,315,WHITE);
     circle(495,729,20);
     setfillstyle(SOLID_FILL,WHITE);
    floodfill(495,729,WHITE);


    line(270,0,270,810);
    line(540,0,540,810);
    line(0,270,810,270);
    line(0,540,810,540);


   line(0,360,270,360);
   line(0,450,270,450);
   line(540,360,810,360);
   line(540,450,810,450);

    line(360,0,360,270);
    line(450,0,450,270);
    line(360,540,360,810);
    line(450,540,450,810);

    line(270,270,540,540);
    line(270,540,540,270);

 setlinestyle(SOLID_FILL,THICK_WIDTH,5);
    circle(90,90,35);
    circle(180,90,35);
    circle(90,180,35);
    circle(180,180,35);

    circle(630,90,35);
    circle(630,180,35);
    circle(720,90,35);
    circle(720,180,35);

    circle(90,630,35);
    circle(90,720,35);
    circle(180,630,35);
    circle(180,720,35);

    circle(630,630,35);
    circle(630,720,35);
    circle(720,630,35);
    circle(720,720,35);

    setfillstyle(SOLID_FILL,GREEN);
    floodfill(400,405,WHITE);

    setfillstyle(SOLID_FILL,BLUE);
    floodfill(405,400,WHITE);

    setfillstyle(SOLID_FILL,RED);
    floodfill(410,405,WHITE);

    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(405,410,WHITE);



// green enterance
     setfillstyle(SOLID_FILL,GREEN);
    floodfill(81,280,WHITE);

      setfillstyle(SOLID_FILL,GREEN);
    floodfill(81,370,WHITE);

      setfillstyle(SOLID_FILL,GREEN);
    floodfill(135,370,WHITE);

     setfillstyle(SOLID_FILL,GREEN);
    floodfill(189,370,WHITE);

      setfillstyle(SOLID_FILL,GREEN);
    floodfill(243,370,WHITE);



    // blue enterance
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(390,104,WHITE);

      setfillstyle(SOLID_FILL,BLUE);
    floodfill(470,104,WHITE);

      setfillstyle(SOLID_FILL,BLUE);
    floodfill(390,158,WHITE);

     setfillstyle(SOLID_FILL,BLUE);
    floodfill(390,212,WHITE);

      setfillstyle(SOLID_FILL,BLUE);
    floodfill(390,266,WHITE);


      // RED enterance
     setfillstyle(SOLID_FILL,RED);
    floodfill(750,390,WHITE);

      setfillstyle(SOLID_FILL,RED);
    floodfill(700,390,WHITE);

      setfillstyle(SOLID_FILL,RED);
    floodfill(630,390,WHITE);

     setfillstyle(SOLID_FILL,RED);
    floodfill(570,390,WHITE);

      setfillstyle(SOLID_FILL,RED);
    floodfill(750,460,WHITE);


    // YELLOW nterance
     setfillstyle(SOLID_FILL,YELLOW);
    floodfill(320,750,WHITE);

      setfillstyle(SOLID_FILL,YELLOW);
    floodfill(400,750,WHITE);

      setfillstyle(SOLID_FILL,YELLOW);
    floodfill(400,700,WHITE);

     setfillstyle(SOLID_FILL,YELLOW);
    floodfill(400,640,WHITE);

      setfillstyle(SOLID_FILL,YELLOW);
    floodfill(400,590,WHITE);


// DICE
{
    rand()%6+1;

    }











    getch();
}

