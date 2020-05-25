#include <iostream>
#include <cmath>

using namespace std;

double distance(double x1, double y1, double x2, double y2){
    double d = sqrt(pow((x2-x1),2) + pow(y2-y1,2));
    return d;
}
double area(double x1, double y1, double x2, double y2, double x3, double y3){
    double a = distance(x1,y1,x2,y2);
    double b = distance(x2,y2,x3,y3);
    double c = distance(x3,y3,x1,y1);
    double s = (a+b+c)/2;
    double area = sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}
int main(){
    cout << area(0,0,3,3,0,6);
}