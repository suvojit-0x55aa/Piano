#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void            pno(int);
void            pnobody(void);
float           piano(int);
main()
{
    int             driver = DETECT,
	mode,
	z = 150;
    char            c;
    initgraph(&driver, &mode, "");
    pnobody();
    c = getch();
    do {
	switch (c) {
	case 'q':{
		setfillstyle(SOLID_FILL, WHITE);
		floodfill(25 + z, 80 + z, WHITE);
		pno(261);
		cleardevice();
		pnobody();
		break;
	    }
	case 'w':{
		setfillstyle(SOLID_FILL, WHITE);
		floodfill(45 + z, 80 + z, WHITE);
		pno(293);
		cleardevice();
		pnobody();
		break;
	    }
	case 'e':{
		setfillstyle(SOLID_FILL, WHITE);
		floodfill(75 + z, 80 + z, WHITE);
		pno(329);
		cleardevice();
		pnobody();
		break;
	    }
	case 'r':{
		setfillstyle(SOLID_FILL, WHITE);
		floodfill(105 + z, 80 + z, WHITE);
		pno(350);
		cleardevice();
		pnobody();
		break;
	    }
	case 't':{
		setfillstyle(SOLID_FILL, WHITE);
		floodfill(135 + z, 80 + z, WHITE);
		pno(392);
		cleardevice();
		pnobody();
		break;
	    }
	case 'y':{
		setfillstyle(SOLID_FILL, WHITE);
		floodfill(165 + z, 80 + z, WHITE);
		pno(440);
		cleardevice();
		pnobody();
		break;
	    }
	case 'u':{
		setfillstyle(SOLID_FILL, WHITE);
		floodfill(195 + z, 80 + z, WHITE);
		pno(493);
		cleardevice();
		pnobody();
		break;
	    }
	case 'i':{
		setfillstyle(SOLID_FILL, WHITE);
		floodfill(215 + z, 80 + z, WHITE);
		pno(523);
		cleardevice();
		pnobody();
		break;
	    }
	case 'o':{
		setfillstyle(SOLID_FILL, WHITE);
		floodfill(245 + z, 80 + z, WHITE);
		pno(587);
		cleardevice();
		pnobody();
		break;
	    }
	case 'p':{
		setfillstyle(SOLID_FILL, WHITE);
		floodfill(275 + z, 80 + z, WHITE);
		pno(659);
		cleardevice();
		pnobody();
		break;
	    }
	case '[':{
		setfillstyle(SOLID_FILL, WHITE);
		floodfill(305 + z, 80 + z, WHITE);
		pno(698);
		cleardevice();
		pnobody();
		break;
	    }
	case ']':{
		setfillstyle(SOLID_FILL, WHITE);
		floodfill(335 + z, 80 + z, WHITE);
		pno(784);
		cleardevice();
		pnobody();
		break;
	    }
	case '1':{
		setfillstyle(SOLID_FILL, RED);
		floodfill(30 + z, 30 + z, WHITE);
		pno(311);
		cleardevice();
		pnobody();
		break;
	    }
	case '2':{
		setfillstyle(SOLID_FILL, RED);
		floodfill(60 + z, 30 + z, WHITE);
		pno(370);
		cleardevice();
		pnobody();
		break;
	    }
	case '4':{
		setfillstyle(SOLID_FILL, RED);
		floodfill(120 + z, 30 + z, WHITE);
		pno(415);
		cleardevice();
		pnobody();
		break;
	    }
	case '5':{
		setfillstyle(SOLID_FILL, RED);
		floodfill(150 + z, 30 + z, WHITE);
		pno(466);
		cleardevice();
		pnobody();
		break;
	    }
	case '6':{
		setfillstyle(SOLID_FILL, RED);
		floodfill(180 + z, 30 + z, WHITE);
		pno(554);
		cleardevice();
		pnobody();
		break;
	    }
	case '8':{
		setfillstyle(SOLID_FILL, RED);
		floodfill(240 + z, 30 + z, WHITE);
		pno(662);
		cleardevice();
		pnobody();
		break;
	    }
	case '9':{
		setfillstyle(SOLID_FILL, RED);
		floodfill(270 + z, 30 + z, WHITE);
		pno(740);
		cleardevice();
		pnobody();
		break;
	    }
	case ' ':{
		break;
	    }
	    getch();
	}
	c = getch();
    } while (c != ' ');
    return 0;
}
void
pno(int x)
{
    sound(x);
    delay(100);
    nosound();
    return;
}
void
pnobody(void)
{
    int             k = 150;
    rectangle(0 + k, 0 + k, 360 + k, 100 + k);
    rectangle(20 + k, 0 + k, 40 + k, 60 + k);
    rectangle(50 + k, 0 + k, 70 + k, 60 + k);
    rectangle(110 + k, 0 + k, 130 + k, 60 + k);
    rectangle(140 + k, 0 + k, 160 + k, 60 + k);
    rectangle(170 + k, 0 + k, 190 + k, 60 + k);
    rectangle(230 + k, 0 + k, 250 + k, 60 + k);
    rectangle(260 + k, 0 + k, 280 + k, 60 + k);
    rectangle(300 + k, 0 + k, 330 + k, 100 + k);
    rectangle(330 + k, 0 + k, 360 + k, 100 + k);
    for (int i = 1; i < 10; ++i) {
	line((30 * i) + k, 60 + k, (30 * i) + k, 100 + k);
    }
    line(90 + k, 0 + k, 90 + k, 60 + k);
    line(210 + k, 0 + k, 210 + k, 60 + k);
    for (i = 0; i < 12; ++i) {
	setfillstyle(SOLID_FILL, BLUE);
	floodfill(15 + (30 * i) + k, 80 + k, WHITE);
    }
    return;
}
