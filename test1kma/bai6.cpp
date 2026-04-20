/*Bài 2: Viết chương trình giải hệ phương trình tuyến tính bậc nhất hai ẩn:
ax + by = c
dx + ey = f
với các hệ số thực a, b, c, d, e, f được nhập vào từ bàn phím.*/
// #include <stdio.h>
// #include <math.h>
// int main(){
//     float a,b,c,d,e,f;
//     float eps=1e-6; // eps là  hằng số rất nhỏ
// printf("Nhap a,b,c,d,e,f: ");
// scanf("%f %f %f %f %f %f",&a ,&b,&c,&d,&e,&f);
// float De=a*e-b*d;
// float d1=c*e-b*f;
// float d2=a*f-c*d;
// if (fabs(De) > eps) {        // D ≠ 0 → hệ có nghiệm duy nhất
//     float x = d1 / De;
//     float y = d2 / De;
//     printf("He phuong trinh co nghiem duy nhat:\n");
//     printf("x = %f, y = %f", x, y);
// }
// else if (fabs(De) <= eps && fabs(d1) <= eps && fabs(d2) <= eps) {
//     // D = 0, D1 = 0, D2 = 0 → vô số nghiệm
//     printf("He phuong trinh co vo so nghiem");
// }
// else {
//     // D = 0 nhưng D1 ≠ 0 hoặc D2 ≠ 0 → vô nghiệm
//     printf("He phuong trinh vo nghiem");
// }
//   return 0;
// }
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, d, e, f;
    float x, y;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    if (a == b && b != e)
    {
        y = (c - f) / (b - e);
        x = (c - b * y) / a;
        printf("%.2f %.2f", x, y);
    }
    else if (a != b && b == e)
    {
        x = (c - f) / (a - d);
        y = (c - a * x) / b;
        printf("%.2f %.2f", x, y);
    }
    else if (a != d && b != e)
    {
        y = (c * d - a * f) / (b * d - a * e);
        x = (c * d - b * d * y) / (a * d);
        printf("%.2f %.2f", x, y);
    }
    else if (a / d == b / e != c / f)
    {
        printf("ptvn");
    }
    else if (a / d == b / e == c / f)
    {
        printf("ptcvsn");
    }
}

// KIỂM TRA MỘT SỐ CÓ PHẢI LÀ MỘT SỐ NGUYÊN TỐ HAY KHÔNG
/*#include <iostream>
using namespace std;
int main(){
    int n;
    printf("Nhập n: ");
    scanf("%d",&n);
    if (n<2) {
       pritnf("n ko phải là số nguyên tố ");
        return 0;
    }

    bool snt=true;
    for (int i = 2 ; i <n  ; i++){
        if (n%i==0){
            snt =false;
            break;
        }
    }
if (snt){
   printf("n là số nguyên tố");
}
else {
    printf("n ko là số nguyên tố");
}
return 0;
}
*/
// Bài 5: Viết chương trình nhập vào một số nguyên dương n từ bàn phím. Tính tổng các chữ số tạo nên số đó.
/*#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cout<<"Nhập n: ";
    cin>>n;
    if(n<0){
        n=-n;
    }
    int sum = 0;
    while (n>0){
        sum = sum + (n%10);
        n=n/10;
    }
    cout<<sum;
    return 0;
}*/
// KIỂM TRA MỘT SỐ CÓ PHẢI LÀ MỘT SỐ NGUYÊN TỐ HAY KHÔNG bằng hàm và mảng
// #include <stdio.h>
// int nt(int a)
// {
//     if (a < 2)
//         return 0;
//     if (a == 2)
//         return 1;

//     if (a % 2 == 0)
//         return 0;
//     else
//         return 1;
// }

// int main()
// {

//     int c;
//     scanf("%d", &c);

//     if (nt(c))
//     {
//         printf("%d la so nguyen to\n", c);
//     }
//     else
//     {
//         printf("%d khong phai so nguyen to\n", c);
//     }

//     return 0;
// }
