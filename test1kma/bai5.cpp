/*Bài 1: Viết chương trình giải phương trình bậc hai: ax2 + bx + c = 0, với a, b, c là
các hệ số thực nhập vào từ bàn phím.
#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c;
    printf("Nhap a: ");
    scanf("%f",&a);
    printf("Nhap b: ");
    scanf("%f",&b);
    printf("Nhap c: ");
    scanf("%f",&c);
    float delta = b*b - 4*a*c;
    if(delta > 0 ){
        float x1 = (-b + sqrt(delta))/(2*a);
        float x2 = (-b - sqrt(delta))/(2*a);
        printf("Phuong trinh co 2 nghiem phan biet: x1 =%f , x2 =%f",x1,x2);
    } else if(delta ==0){
        float x = -b/(2*a);
        printf("Phuong trinh co nghiem kep: %f",x);
    } else {
        printf("Phuong trinh vo nghiem");
}
    */
// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     double a, b, c;
//     double delta, x1, x2;

//     printf("Nhap a, b, c: ");
//     scanf("%lf %lf %lf", &a, &b, &c);

//     // Trường hợp a = 0 → phương trình bậc nhất
//     if (a == 0)
//     {
//         if (b == 0)
//         {
//             if (c == 0)
//                 printf("Phuong trinh vo so nghiem\n");
//             else
//                 printf("Phuong trinh vo nghiem\n");
//         }
//         else
//         {
//             printf("Phuong trinh co nghiem x = %.2lf\n", -c / b);
//         }
//         return 0;
//     }

//     // Tính delta
//     delta = b * b - 4 * a * c;

//     if (delta > 0)
//     {
//         x1 = (-b + sqrt(delta)) / (2 * a);
//         x2 = (-b - sqrt(delta)) / (2 * a);
//         printf("Phuong trinh co 2 nghiem phan biet:\n");
//         printf("x1 = %.2lf\nx2 = %.2lf\n", x1, x2);
//     }
//     else if (delta == 0)
//     {
//         x1 = -b / (2 * a);
//         printf("Phuong trinh co nghiem kep x = %.2lf\n", x1);
//     }
//     else
//     {
//         printf("Phuong trinh vo nghiem (khong co nghiem thuc)\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// // Hàm giải phương trình bậc nhất
// void giaiBacNhat(double b, double c)
// {
//     if (b == 0)
//     {
//         if (c == 0)
//             printf("Phuong trinh vo so nghiem\n");
//         else
//             printf("Phuong trinh vo nghiem\n");
//     }
//     else
//     {
//         printf("Phuong trinh co nghiem x = %.2lf\n", -c / b);
//     }
// }

// // Hàm giải phương trình bậc hai
// void giaiBacHai(double a, double b, double c)
// {
//     double delta = b * b - 4 * a * c;

//     if (delta > 0)
//     {
//         double x1 = (-b + sqrt(delta)) / (2 * a);
//         double x2 = (-b - sqrt(delta)) / (2 * a);
//         printf("Phuong trinh co 2 nghiem phan biet:\n");
//         printf("x1 = %.2lf\nx2 = %.2lf\n", x1, x2);
//     }
//     else if (delta == 0)
//     {
//         double x = -b / (2 * a);
//         printf("Phuong trinh co nghiem kep x = %.2lf\n", x);
//     }
//     else
//     {
//         printf("Phuong trinh vo nghiem (khong co nghiem thuc)\n");
//     }
// }

// int main()
// {
//     double a, b, c;

//     printf("Nhap a, b, c: ");
//     scanf("%lf %lf %lf", &a, &b, &c);

//     if (a == 0)
//     {
//         giaiBacNhat(b, c);
//     }
//     else
//     {
//         giaiBacHai(a, b, c);
//     }

//     return 0;
// }
// /* BANG MA ASCII
// //char 128-127
// //kiem tra ki tu in hoa
// //keim tr ki tu in thuong
// //kiem tra ki tu la chu cai
// //chuyen ki tu tu in hoa sang in thuong
// //chuyen ki tu tu in thuong sang in hoa
// //a-z : 65-90
// //A-Z : 97 - 122
// //0-9 : 48 - 57
// */
// /*
// //chuyen ki tu tu in hoa sang in thuong

// */
// /*#include <stdio.h>
// int main() {
//     char c;
//     scanf("%c",&c);
//     if(c>='a' && c<='z'){
//         c = c - 32;
//         printf ("%c",c);
//     }
// }*/

// /*#include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     float a,b,c;
//     cout<<"Nhập các hệ số a b c: ";
//     cin>>a>>b>>c;
//     float delta=b*b - 4*a*c;
//     if(delta==0){

//         cout << " Phương Trình vô nghiệm ";

//     } else if (delta > 0)
//     {
//       float x1 = (-b - sqrt(delta)) / (2*a);
//       float x2 =  (-b + sqrt(delta)) / (2*a);
//       cout << " Phương trình có 2 nghiệm phân biệt :"<< endl << "x1 = " << x1 << endl << " x2 = " << x2 ;

//     }
//     else {
//      float ngokep = -b / 2*a;
//      cout << " Phương trình có nghiệm kép = " << ngokep;
//     }

//     return 0 ;
// }*/
#include <iostream>

using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if (a > 0 && b > 0 && c > 0 && a + b > c && b + c > a && c + a > b)
    {

        if (a == b && b == c)
        {
            cout << "Tam giac deu\n";
        }

        else if (a == b || b == c || c == a)
        {
            if (a * a + b * b == c * c ||
                b * b + c * c == a * a ||
                c * c + a * a == b * b)
            {
                cout << "Tam giac vuong can" << endl;
            }
            else
            {
                cout << "Tam giac can" << endl;
            }
        }
        else if (a * a + b * b == c * c ||
                 b * b + c * c == a * a ||
                 c * c + a * a == b * b)
        {
            cout << "Tam giac vuong\n";
        }
        else
        {
            cout << "Tam giac thuong " << endl;
        }
    }
    else
    {
        cout << "INVALID" << endl;
    }
    return 0;
}
// /*#include <iostream>
// using namespace std;

// int main() {
//     for (int x = 0; x <= 100; x++) {          // x = trâu đứng
//         for (int y = 0; y <= 100 - x; y++) {  // y = trâu nằm
//             int z = 100 - x - y;              // z = trâu già

//             // Điều kiện ăn cỏ:
//             // Trâu đứng ăn 5 bó
//             // Trâu nằm ăn 3 bó
//             // 3 trâu già ăn 1 bó -> 1 trâu già ăn 1/3 bó
//             if (5*x + 3*y + z/3.0 == 100) {
//                 cout << "Trâu đứng: " << x
//                      << ", Trâu nằm: " << y
//                      << ", Trâu già: " << z << endl;
//             }
//         }
//     }
//     return 0;
// }*/
