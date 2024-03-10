//Phần 2: Hàm thành viên, hằng

#include<bits/stdc++.h>

using namespace std;

struct Point {
	Point(int x1, int y1) {
		x = x1;
		y = y1;
	}

	double x, y;
};

struct Rect
{
	Rect() {};

	Rect (double x1, double y1, double w1, double h1) {
		x = x1;
		y = y1;
		w = w1;
		h = h1;
	}
	double x, y, w, h;

	bool contains(const Point p) const {
		return (p.x >= x && p.x <= x + w && p.y >= y - h && p.y <= y);
	}
};

struct Ship {
	
	Rect r;
	string id;
	double dx, dy;

	void move() {
		r.x += dx;
		r.y += dy;
	}
};

void display(const Ship& ship) {

	printf("Locate: %2lf %2lf ", ship.r.x, ship.r.y);
	cout << ship.id << "\n";
}

int main() {

	Rect r1(1, 2, 3, 4), r2(5, 6, 7, 8);

	Ship ship1, ship2;

	ship1.r = r1, ship1.dx = 2, ship1.dy = 2, ship1.id = "132456";
	ship2.r = r2, ship2.dx = 3, ship2.dy = 3, ship2.id = "165487"; 

	int loop = 1;
	while (loop < 10) {
		++loop;
    	ship1.move(); ship2.move();
    	display(ship1); display(ship2);
    }
	return 0; 
}