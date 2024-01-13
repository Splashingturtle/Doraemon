#include<stdio.h>
#include<easyx.h>
#define PI 3.14
int main()
{
	initgraph(2024, 3024);
	
	setbkcolor(WHITE);
	cleardevice();

	setlinecolor(BLACK);
	setlinestyle(PS_SOLID,10);
	
	setfillcolor(BLUE);
	fillellipse(118,125,990,931);

	setfillcolor(WHITE);
	fillellipse(189, 271, 919, 931);

	fillellipse(375,170,555,420);
	fillellipse(555,170,735,420);

	setfillcolor(BLACK);
	solidcircle(484,333,25);
	solidcircle(617, 333, 25);

	setfillcolor(WHITE);
	solidcircle(484, 333, 10);
	solidcircle(617, 333, 10);

	setfillcolor(RED);
	solidcircle(554,420,35);
	line(554,460,554,828);

	arc(320,510,789,827,PI,2*PI);

	line(125,313,296,410);
	line(83,444,270,474);
	line(83,595,292,527);
	line(819,414,990,320);
	line(845,478,1029,448);
	line(853,542,1029,660);



	getchar();
	closegraph();

	return 0;
}
