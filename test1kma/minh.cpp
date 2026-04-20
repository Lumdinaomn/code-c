#include <iostream>
#include<cmath>
using namespace std;
int main(){
     int n; 
     int doi=0;
     int mu=1;
     printf ("Nhap he so 10: ");
     scanf("%d",&n);
     while (n>0){
        doi = doi + (n%2) * mu;
        mu = mu *10;
        n=n/2;

     }
     printf("%d",doi);
     return 0;

}


