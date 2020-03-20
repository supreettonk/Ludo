#include<graphics.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
char pos_array[60]=[]
pos1=(81,315);
pos2=(135,315)
pos3=(189,315)
pos4=(243,315)
pos5=(315,243)
pos6=(315,189)
pos7=(315,135)
pos8=(315,81)
pos9=(315,27)
pos10=(405,27)
pos11=(495,27)
pos12=(495,81)
pos13=(495,135)
pos14=(495,189)
pos15=(495,243)
pos16=(567,315)
pos17=(621,315)
pos18=(675,315)
pos19=(729,315)
pos20=(783,315)
pos21=(783,405)
pos22=(783,495)
pos23=(729,495)
pos24=(675,495)
pos25=(621,495)
pos26=(567,495)
pos27=(495,567)
pos28=(495,621)
pos29=(495,675)
pos30=(495,729)
pos31=(495,783)
pos32=(405,783)
pos33=(315,783)
pos34=(315,729)
pos35=(315,675)
pos36=(315,621)
pos37=(315,567)
pos38=(243,495)
pos39=(189,495)
pos40=(135,495)
pos41=(81,495)
pos42=(27,495)
pos43=(27,405)
pos44=(27,315)

posG1=(81,405)
posG2=(135,405)
posG3=(189,405)
posG4=(243,405)

posB1=(405,81)
posB2=(405,135)
posB3=(405,189)
posB4=(405,243)

posR1=(729,405)
posR2=(675,405)
posR3=(621,405)
posR4=(567,405)

posY1=(405,729)
posY2=(405,675)
posY3=(405,621)
posY4=(405,567)


class dice
{
public:

    int dice_val()
    {
        return rand()%5+1;
    }
};
class colourturn
{
public:

    int greenturn()
    {

    };
    int blueturn()
    {

    };
    int redturn()
    {

    };
    int yellowturn()
    {

    };
};
class cut
{

};
int main()
{
    int turn=0;


    //object
    dice d;
    d.dice_val();

    //turn
     for(int i=0;i<20;i++)
 {  if(turn<=3)
    {
    turn++;
    }
    else
    {
    turn=1;
    }
 }
    switch(turn)
    {
    case 1:
        greeenturn();
        break;
    case 2:
        blueturn();
        break;
    case 3:
        redturn();
        break;
    case 4:
        yellowturn();
        break;
    };



    //token movement

   //window size
    initwindow(1520,825);

   //ludo board boundary
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

    //small box lines
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


//width of token circles
    setlinestyle(SOLID_FILL,THICK_WIDTH,5);

 //token circles
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


  //winner box
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(400,405,WHITE);

    setfillstyle(SOLID_FILL,BLUE);
    floodfill(405,400,WHITE);

    setfillstyle(SOLID_FILL,RED);
    floodfill(410,405,WHITE);

    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(405,410,WHITE);



// green entrance
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



    // blue entrance
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


      // RED entrance
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


    // YELLOW entrance
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




    getch();
}

