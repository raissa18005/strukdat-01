#include <iostream>

using namespace std;

void swap(int a,int b, int temp){
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x=5;
    int y=4;
    cout << "x is "<< x <<endl;
    cout << "y is "<< y <<endl;
    swap(x,y);
    cout << "After swap"<<endl;
    cout << "x is "<< x <<endl;
    cout << "y is "<< y <<endl;
    return 0;
}
