#include <iostream>
using namespace std;

void computeArea();

int main() {
	computeArea();
}

void computeArea() {
    float width, height, area;
	cout<<"Enter width: ";
	cin>>width;
	cout<<"Enter height: ";
    cin>>height;
	area = width * height; 
    cout<<"Area: "<<area;
}
    