#include<stdio.h>
#include<graphics.h>
#include<windows.h>
int main()
{
    DWORD screenwidth=GetSystemMetrics(SM_CXSCREEN);
    DWORD screenheight=GetSystemMetrics(SM_CYSCREEN);
    initwindow(screenwidth,screenheight," ");
    char arr[100],brr[3333];
    int p=1,k=1,recposx=0,recposy=0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,t15;
    int i,a,b,c,d,e,f,g,h,T,limit=1500,L,R,l1,l2,l3,l4,l5,l6,l7,l8,l9,l10,l11,l12,l13,l14,l15;
    int r1,r2,r3,r4,r5,r6,r7,r8,r9,r10,r11,r12,r13,r14,r15,score=0,sped=2,page=0,speed=5;
    while(1)
    {
        a=p*1*sped;
        b=p*2*sped;
        c=p*sped;
        d=p*sped;
        e=p*sped;
        f=p*3*sped;
        g=p*sped;
        h=p*0.5*sped;
        setactivepage(page);
        setvisualpage(1-page);
        cleardevice();
        //main road
        setfillstyle(SOLID_FILL,DARKGRAY);
        bar(580,0,820,screenwidth);
        //road divide
        setfillstyle(SOLID_FILL,WHITE);
        bar(700,0,705,30);
        setfillstyle(SOLID_FILL,WHITE);
        bar(700,40,705,70);
        setfillstyle(SOLID_FILL,WHITE);
        bar(700,80,705,110);
        setfillstyle(SOLID_FILL,WHITE);
        bar(700,120,705,150);
        setfillstyle(SOLID_FILL,WHITE);
        bar(700,160,705,190);
        setfillstyle(SOLID_FILL,WHITE);
        bar(700,200,705,230);
        setfillstyle(SOLID_FILL,WHITE);
        bar(700,240,705,270);
        setfillstyle(SOLID_FILL,WHITE);
        bar(700,280,705,310);
        setfillstyle(SOLID_FILL,WHITE);
        bar(700,320,705,350);
        setfillstyle(SOLID_FILL,WHITE);
        bar(700,360,705,390);
        setfillstyle(SOLID_FILL,WHITE);
        bar(700,400,705,430);
        setfillstyle(SOLID_FILL,WHITE);
        bar(700,440,705,470);
        setfillstyle(SOLID_FILL,WHITE);
        bar(700,480,705,510);
        setfillstyle(SOLID_FILL,WHITE);
        bar(700,520,705,550);
        setfillstyle(SOLID_FILL,WHITE);
        bar(700,560,705,590);
        setfillstyle(SOLID_FILL,WHITE);
        bar(700,600,705,630);
        setfillstyle(SOLID_FILL,WHITE);
        bar(700,640,705,670);
        setfillstyle(SOLID_FILL,WHITE);
        bar(700,680,705,710);
        setfillstyle(SOLID_FILL,WHITE);
        bar(700,720,705,750);
        //border of main road
        setcolor(WHITE);
        line(580,0,580,screenwidth);
        line(820,0,820,screenwidth);
        //footpath
        setcolor(WHITE);
        line(560,0,560,screenwidth);
        line(840,0,840,screenwidth);
        //footpath color
        setfillstyle(SOLID_FILL,RED);
        bar(560,0,580,screenwidth);
        setfillstyle(SOLID_FILL,RED);
        bar(820,0,840,screenwidth);
        //man in footpath 1
        setcolor(WHITE);
        circle(570,-1214+h,7);
        setcolor(WHITE);
        line(573,-1209+h,575,-1200+h);
        setcolor(WHITE);
        line(567,-1209+h,569,-1200+h);
        //man in footpath 2
        setcolor(WHITE);
        circle(570,-914+h,7);
        setcolor(WHITE);
        line(573,-909+h,575,-900+h);
        setcolor(WHITE);
        line(567,-909+h,569,-900+h);
        //man in footpath 3
        setcolor(WHITE);
        circle(570,-414+h,7);
        setcolor(WHITE);
        line(573,-409+h,575,-400+h);
        setcolor(WHITE);
        line(567,-409+h,569,-400+h);
        //man in footpath 4
        setcolor(WHITE);
        circle(570,-1614+h,7);
        setcolor(WHITE);
        line(573,-1609+h,575,-1600+h);
        setcolor(WHITE);
        line(567,-1609+h,569,-1600+h);
        //main car
        setfillstyle(SOLID_FILL,RED);
        bar(L=700+recposx,recposy+650,R=740+recposx,recposy+710);
        setfillstyle(SOLID_FILL,YELLOW);
        bar(710+recposx,650+recposy,730+recposx,T=635+recposy);
        //enemy car 1
        setfillstyle(SOLID_FILL,GREEN);
        bar(l1=620,-1200+a,r1=650,-1165+a);
        setfillstyle(SOLID_FILL,YELLOW);
        bar(625,-1165+a,645,t1=-1155+a);
        //enemy car2
        setfillstyle(LINE_FILL,BLACK);
        bar(l2=625,-1435+b,r2=655,-1400+b);
        setfillstyle(SOLID_FILL,BLUE);
        bar(630,-1400+b,650,t2=-1390+b);
        //enemy car 3
        setfillstyle(SOLID_FILL,YELLOW);
        bar(l3=605,-1535+c,r3=635,-1500+c);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        bar(610,-1500+c,630,t3=-1490+c);
        //enemy car 4
        setfillstyle(LINE_FILL,RED);
        bar(l4=620,-1675+d,r4=650,-1640+d);
        setfillstyle(SOLID_FILL,MAGENTA);
        bar(625,-1640+d,645,t4=-1630+d);
        //enemy car 5
        setfillstyle(SOLID_FILL,BLACK);
        bar(l5=645,-2280+e,r5=675,-2245+e);
        setfillstyle(SOLID_FILL,GREEN);
        bar(650,-2245+e,670,t5=-2235+e);
        //enemy car 6
        setfillstyle(LINE_FILL,RED);
        bar(l6=675,-1735+f,r6=705,-1700+f);
        setfillstyle(SOLID_FILL,YELLOW);
        bar(680,-1700+f,700,t6=-1690+f);
        //enemy car 7
        setfillstyle(SOLID_FILL,GREEN);
        bar(l7=735,-765+g,r7=765,-730+g);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        bar(740,-730+g,760,t7=-720+g);
        //enemy car 8
        setfillstyle(SOLID_FILL,YELLOW);
        bar(l8=705,-1845+c,r8=745,-1800+c);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        bar(710,-1800+c,740,t8=-1780+c);
        //enemy car 9
        setfillstyle(LINE_FILL,LIGHTCYAN);
        bar(l9=720,-1075+d,r9=750,-1040+d);
        setfillstyle(SOLID_FILL,MAGENTA);
        bar(725,-1040+d,745,t9=-1030+d);
        //enemy car 10
        setfillstyle(SOLID_FILL,BLACK);
        bar(l10=745,-2090+e,r10=785,-2045+e);
        setfillstyle(SOLID_FILL,BLUE);
        bar(750,-2045+e,780,t10=-2025+e);
        //enemy car 11
        setfillstyle(LINE_FILL,RED);
        bar(l11=675,-1935+f,r11=705,-1900+f);
        setfillstyle(SOLID_FILL,YELLOW);
        bar(680,-1900+f,700,t11=-1890+f);
        //enemy car 12
        setfillstyle(SOLID_FILL,GREEN);
        bar(l12=765,-1165+g,r12=795,-1130+g);
        setfillstyle(SOLID_FILL,LIGHTRED);
        bar(770,-1130+g,790,t12=-1120+g);
        //enemy car 13
        setfillstyle(SOLID_FILL,GREEN);
        bar(l13=690,-2065+a,r13=720,-2030+a);
        setfillstyle(SOLID_FILL,LIGHTRED);
        bar(695,-2030+a,715,t13=-2020+a);
        //enemy car 14
        setfillstyle(SOLID_FILL,GREEN);
        bar(l14=785,-2165+b,r14=815,-2130+b);
        setfillstyle(SOLID_FILL,LIGHTRED);
        bar(790,-2130+b,810,t14=-2120+b);
        //enemy car 15
        setfillstyle(SOLID_FILL,GREEN);
        bar(l15=765,-2365+c,r15=795,-2330+c);
        setfillstyle(SOLID_FILL,LIGHTRED);
        bar(770,-2330+c,790,t15=-2320+c);
        if(GetAsyncKeyState(VK_LEFT))
        {
            recposx-=speed;
        }
        if(GetAsyncKeyState(VK_RIGHT))
        {
            recposx+=speed;
        }
        if(GetAsyncKeyState(VK_UP))
        {
            recposy-=speed;
        }
        if(GetAsyncKeyState(VK_DOWN))
        {
            if(recposy<=0)
            {
                recposy+=speed;
            }
        }
        if( T<=t1&&L<=r1&&L>=l1&&T+75>=t1-45||T<=t1&&R>=l1&&R<=r1&&T+75>=t1-45
                ||T<=t2&&L<=r2&&L>=l2&&T+75>=t2-45||T<=t2&&R>=l2&&R<=r2&&T+75>=t2-45
                ||T<=t3&&L<=r3&&L>=l3&&T+75>=t3-45||T<=t3&&R>=l3&&R<=r3&&T+75>=t3-45
                ||T<=t4&&L<=r4&&L>=l4&&T+75>=t4-45||T<=t4&&R>=l4&&R<=r4&&T+75>=t4-45
                ||T<=t5&&L<=r5&&L>=l5&&T+75>=t5-45||T<=t5&&R>=l5&&R<=r5&&T+75>=t5-45
                ||T<=t6&&L<=r6&&L>=l6&&T+75>=t6-45||T<=t6&&R>=l6&&R<=r6&&T+75>=t6-45
                ||T<=t7&&L<=r7&&L>=l7&&T+75>=t7-45||T<=t7&&R>=l7&&R<=r7&&T+75>=t7-45
                ||T<=t8&&L<=r8&&L>=l8&&T+75>=t8-45||T<=t8&&R>=l8&&R<=r8&&T+75>=t8-45
                ||T<=t9&&L<=r9&&L>=l9&&T+75>=t9-45||T<=t9&&R>=l9&&R<=r9&&T+75>=t9-45
                ||T<=t10&&L<=r10&&L>=l10&&T+75>=t10-45||T<=t10&&R>=l10&&R<=r10&&T+75>=t10-45
                ||T<=t11&&L<=r11&&L>=l11&&T+75>=t11-45||T<=t11&&R>=l11&&R<=r11&&T+75>=t11-45
                ||T<=t12&&L<=r12&&L>=l12&&T+75>=t12-45||T<=t12&&R>=l12&&R<=r12&&T+75>=t12-45
                ||T<=t13&&L<=r13&&L>=l13&&T+75>=t13-45||T<=t13&&R>=l13&&R<=r13&&T+75>=t13-45
                ||T<=t14&&L<=r14&&L>=l14&&T+75>=t14-45||T<=t14&&R>=l14&&R<=r14&&T+75>=t14-45
                ||T<=t15&&L<=r15&&L>=l15&&T+75>=t15-45||T<=t15&&R>=l15&&R<=r15&&T+75>=t15-45
          )
        {
            settextstyle(BOLD_FONT,HORIZ_DIR,4);
            outtextxy(500,300,"YOU ARE CRASHED");
            outtextxy(500,500,"ENTER SHIFT THEN ANY KEY TO CLOSE");
            delay(1000);
            closegraph();

        }
        //condition for scoring
        if(t1>750&&t1<755)
        {
            score=score+5;
        }
        if(t2>750&&t2<755)
        {
            score=score+5;
        }
        if(t3>750&&t3<755)
        {
            score=score+5;
        }
        if(t4>750&&t4<755)
        {
            score=score+5;
        }
        if(t5>750&&t5<755)
        {
            score=score+5;
        }
        if(t6>750&&t7<755)
        {
            score=score+5;
        }
        if(t8>750&&t8<755)
        {
            score=score+5;
        }
        if(t9>750&&t9<755)
        {
            score=score+5;
        }
        if(t10>750&&t10<755)
        {
            score=score+5;
        }
        if(t11>750&&t11<755)
        {
            score=score+5;
        }
        if(t12>750&&t12<755)
        {
            score=score+5;
        }
        if(t13>750&&t13<755)
        {
            score=score+5;
        }
        if(t14>750&&t14<755)
        {
            score=score+5;
        }
        if(t15>750&&t15<755)
        {
            score=score+5;
        }
        settextstyle(BOLD_FONT,HORIZ_DIR,3);
        setcolor(BLUE);
        sprintf(brr,"YOUR SCORE IS : %d",score);
        outtextxy(30,200,brr);
        settextstyle(BOLD_FONT,HORIZ_DIR,2);
        outtextxy(30,100,"MY SUPERVISOR NAME:Md.Nesarul Hoque(SIR)");
        settextstyle(BOLD_FONT,HORIZ_DIR,3);
        outtextxy(30,50,"NAME:HASAN AL MASIUR");
        outtextxy(30,75,"MY PROJECT NAME:BUS DRIVING");
        //house 1
        setfillstyle(SOLID_FILL,GREEN);
        bar(520,20,560,40);
        setcolor(RED);
        line(525,10,555,10);
        line(525,10,520,20);
        line(555,10,560,20);
        //house 2
        setfillstyle(SOLID_FILL,YELLOW);
        bar(520,80,560,100);
        setcolor(GREEN);
        line(525,70,555,70);
        line(525,70,520,80);
        line(555,70,560,80);
        //tree 1 for
        //stamp
        setfillstyle(SOLID_FILL,LIGHTGREEN);
        bar(525,150,535,190);
        setfillstyle(SOLID_FILL,GREEN);
        bar(505,155,555,150);
        setfillstyle(SOLID_FILL,GREEN);
        bar(529,130,533,150);
        //for left side
        setcolor(GREEN);
        line(520,150,510,140);
        line(510,140,508,125);
        // close line
        line(532,150,522,140);
        line(507,140,505,125);
        //left side close
        setcolor(GREEN);
        line(530,150,520,140);
        line(520,140,518,130);
        line(527,150,517,140);
        line(517,140,515,130);
        //right side
        setcolor(GREEN);
        line(545,150,555,140);
        line(555,140,558,125);
        line(542,150,552,140);
        line(552,140,556,125);
        // right side close
        setcolor(GREEN);
        line(530,150,540,140);
        line(540,140,542,130);
        line(533,150,543,140);
        line(543,140,546,130);
        //for tree 2
        //stamp
        setfillstyle(SOLID_FILL,LIGHTGREEN);
        bar(525,250,535,290);
        setfillstyle(SOLID_FILL,GREEN);
        bar(505,255,555,250);
        setfillstyle(SOLID_FILL,GREEN);
        bar(529,230,533,250);
        //for left side
        setcolor(GREEN);
        line(520,250,510,240);
        line(510,240,508,225);
        // close line
        line(517,250,507,240);
        line(507,240,505,225);
        //left side close
        setcolor(GREEN);
        line(530,250,520,240);
        line(520,240,518,230);
        line(527,250,517,240);
        line(517,240,515,230);
        //right side
        setcolor(GREEN);
        line(545,250,555,240);
        line(555,240,558,225);
        line(542,250,552,240);
        line(552,240,556,225);
        // right side close
        setcolor(GREEN);
        line(530,250,540,240);
        line(540,240,542,230);
        line(533,250,543,240);
        line(543,240,546,230);
        //house 3
        setfillstyle(SOLID_FILL,LIGHTMAGENTA);
        bar(520,360,560,380);
        setcolor(WHITE);
        line(525,350,555,350);
        line(525,350,520,360);
        line(555,350,560,360);
        //for tree 3
        //stamp
        setfillstyle(SOLID_FILL,LIGHTGREEN);
        bar(525,450,535,490);
        setfillstyle(SOLID_FILL,GREEN);
        bar(505,455,555,450);
        setfillstyle(SOLID_FILL,GREEN);
        bar(529,430,533,450);
        //for left side
        setcolor(GREEN);
        line(520,450,510,440);
        line(510,440,508,425);
        // close line
        line(532,450,522,440);
        line(507,440,505,425);
        //left side close
        setcolor(GREEN);
        line(530,450,520,440);
        line(520,440,518,430);
        line(527,450,517,440);
        line(517,440,515,430);
        //right side
        setcolor(GREEN);
        line(545,450,555,440);
        line(555,440,558,425);
        line(542,450,552,440);
        line(552,440,556,425);
        // right side close
        setcolor(GREEN);
        line(530,450,540,440);
        line(540,440,542,430);
        line(533,450,543,440);
        line(543,440,546,430);
        //house 4
        setfillstyle(SOLID_FILL,LIGHTGREEN);
        bar(520,610,560,630);
        setcolor(BLUE);
        line(525,600,555,600);
        line(525,600,520,610);
        line(555,600,560,610);
        //house opposite 1
        setfillstyle(SOLID_FILL,RED);
        bar(840,20,880,40);
        setcolor(GREEN);
        line(845,10,875,10);
        line(845,10,840,20);
        line(875,10,880,20);
        //house opposite 2
        setfillstyle(SOLID_FILL,BLUE);
        bar(840,80,880,100);
        setcolor(WHITE);
        line(845,70,875,70);
        line(845,70,840,80);
        line(875,70,880,80);
        //sun
        setcolor(WHITE);
        circle(1300,50,40);
        setcolor(RED);
        circle(1300,50,20);
        outtextxy(1250,100,"SUN");
        //lamp 1
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        bar(860,150,870,180);
        setfillstyle(SOLID_FILL,CYAN);
        bar(845,140,885,150);
        //tree 1
        setfillstyle(SOLID_FILL,LIGHTGRAY);
        bar(860,230,870,260);
        setcolor(GREEN);
        circle(865,210,20);
        //lamp 2
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        bar(860,300,870,330);
        setfillstyle(SOLID_FILL,CYAN);
        bar(845,290,885,300);
        //lamp
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        bar(860,450,870,480);
        setfillstyle(SOLID_FILL,CYAN);
        bar(845,440,885,450);
        //lamp 4
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        bar(860,600,870,630);
        setfillstyle(SOLID_FILL,CYAN);
        bar(845,590,885,600);

        if(L<580||R>820)
        {
            settextstyle(BOLD_FONT,HORIZ_DIR,4);
            outtextxy(500,400,"YOU FALL IN OUT OF ROAD");
            outtextxy(500,500,"ENTER SHIFT THEN ANY KEY TO BACK");
            getch();
            if(GetAsyncKeyState(VK_SHIFT))
            {
                closegraph();
                exit(0);
            }
        }
        p++;
        if(p==limit)
        {
            p=1;
            sped=sped+.5;
            limit-=100;
        }
        delay(1);
        page=1-page;
    }
    getch();
}
