//Phần I: Tạo và sử dụng

#include<bits/stdc++.h>

using namespace std;

struct Point
{
	int x, y;

	Point() {}

	Point(int x1, int y1){
		x = x1;
		y = y1;
	}
};

void print(Point p) {
    cout << p.x << " " << p.y << " ";
}

//Truyền tham số

void swapA(Point p1, Point p2) {
	Point tmp;
	tmp = p1;
	p1 = p2;
	p2 = tmp;
}

void swapB(Point &p1, Point &p2) {
	Point tmp;
	tmp = p1;
	p1 = p2;
	p2 = tmp;
}

void duplicateA(int x) {
	x = 2 * x;
}

void duplicateB(int &x) {
	x = 2 * x;
}

//Giá trị trả về

Point mid_point(const Point p1, const Point p2) {
	Point p;
	p.x = (p1.x + p2.x)/2;
	p.y = (p1.y + p2.y)/2;
	return p;
}

int main() {
	Point p1(1, 2), p2(3, 4), p3(5, 6);
	
	swapA(p1, p2);
	print(p1);
	print(p2);
	cout << endl;
	
	swapB(p1, p2);
	print(p1);
	print(p2);
	cout << endl;
	
	duplicateA(p3.x); duplicateA(p3.y);
	print(p3);
	cout << endl;
	
	duplicateB(p3.x); duplicateB(p3.y);
	print(p3);
	cout << endl;

	print(mid_point(p1, p2));
	return 0;
}