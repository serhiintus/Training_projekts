#include<iostream>

using namespace std;

struct Point{ int x, y;};
struct Line { Point a, b; };
struct Circle { Point center; int radius; };
struct Triangle { Point a, b, c; };
struct Poligon { Point* points; int num; };

int main()
{
	Point pnt; 
	pnt.x = 100; 
	pnt.y = 200;

	Line l;
	l.a = pnt;
	l.b.x = 700;
	l.b.y = 200;

	Circle crc;
	crc.center = l.b;
	crc.radius = l.b.x - pnt.x;

	Triangle tri;
	tri.a = pnt;
	tri.b = l.b;
	tri.c.x = pnt.x;
	tri.c.y = 100;

	const int size = 5;
	Point parr[size] = { {1,10},{20,30},{tri.c},{l.b},{pnt} };
	
	Poligon plg;
	plg.points = parr;
	plg.num = size;

	for (int i = 0; i < size; i++)
	{
		cout << i << ".x = " << plg.points[i].x << "     " << i << ".y = " << plg.points[i].y << endl;
	}
	
	return 0;
}