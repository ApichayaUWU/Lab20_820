#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect r1,Rect r2)
 {   
	double x1 = max(r1.x,r2.x);
	double x2 = min(r1.x+r1.w,r2.x+r2.w);
	
	double y1 = min(r1.y,r2.y);
	double y2 = max(r1.y-r1.h,r2.y-r2.h);


	double width = x2 -x1;
	double height = y1 - y2;
	
	
    double area = width * height;
	if (area < 0) return 0;
	return area;
}


int main()

{
	Rect R1 = {1,1,5,5};
	Rect R2 = {2,2,5,5};	
	cout << overlap(R1,R2);
}
