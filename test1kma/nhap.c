// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0 ; i<n ; i++){
//         cin>>a[i];
//     }
   
   
// }
// #include<stdio.h>
// #define Dau_cham'.'
// int main(){
//     char m;
//     int tong,i;
//     tong=0;
//     for(tong=1;(m=getchar())!=Dau_cham;){
        
//         scanf(" %d", &m);
//         tong++;

//     }
//     printf("%d", tong);
// }
#include<stdio.h>

int main(){
    char m;
    int tong,i;
    tong=0;
    for(int i=1;;i++){
        
        scanf(" %c", &m);
        tong++;
        if(m=='\.'){
            break;
        }
        
    }
    printf("%d", tong);
}








