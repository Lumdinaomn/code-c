/*Bài 2: Viết chương trình nhập vào từ bàn phím số nguyên biểu diễn ngày, tháng, 
năm và xuất ra màn hình dưới dạng “dd/mm/yyyy”. Ví dụ: Hôm nay là ngày
12/4/2019*/
#include<iostream>
#include <cmath>
using namespace std;
int main(){
   int dd,mm,yyyy;
   cout<<"Hôm nay là ngày: ";
   cin>>dd;
   cout<<"Tháng này là tháng: ";
   cin>>mm;
   cout<<"Năm nay là năm: ";
   cin>>yyyy;
   cout<<"Hôm nay là ngày: "<<dd<<"/"<<mm<<"/"<<yyyy;
   return 0;

}