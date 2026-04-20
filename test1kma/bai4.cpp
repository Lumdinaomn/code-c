/*Bài 4: Viết chương trình nhập vào bán kính hình cầu, tính và in ra diện tích, thể 
tích của hình cầu đó. (Gợi ý: S = 4πR2 và V = (4/3)πR3)*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
     const float pi = 3.14;
     float r;
     cout<<"Nhập bán kính: ";
     cin>>r;
   cout << "S = " << 4 * pi * pow(r, 2)<<endl;
   cout<< "V = " << (4/3)*pi* pow(r,3);
}