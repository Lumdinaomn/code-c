//Bài 1: Viết chương trình nhập vào một số x bất kỳ và in ra giá trị x2, x3, x4 Cuong@2406
#include <cmath>
using namespace std;
int main() {
   float x;
   cin >>x;
   float kq1=pow(x,2),kq2=pow(x,3),kq3=pow(x,4);
   cout <<kq1<<" "<<kq2<<" "<<kq3;
   return 0;
}

