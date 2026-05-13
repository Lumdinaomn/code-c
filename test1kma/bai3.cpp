/*Bài 3: Viết chương trình đọc và 2 số nguyên và in ra kết quả của phép (+), phép
trừ (-), phép nhân (*), phép chia (/). Nhận xét kết quả chia 2 số nguyên. */
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;

    if (b != 0)
        cout << "a / b = " << (float)a / b << endl;
    else
        cout << "Khong the chia cho 0\n";

    return 0;
}
