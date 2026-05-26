//#include <stdio.h>
//#include <string.h>
//#include <time.h>
//typedef struct Sinhvien SV;
//
//typedef struct date
//{
//    int ngay;
//    int thang;
//    int nam;
//} date;
//struct Sinhvien
//{
//    int id;
//    char ten[50];
//    char gioitinh[50];
//    date ngaysinh;
//    int tuoi;
//    float diemmon1;
//    float diemmon2;
//    float diemmon3;
//    float diemtrungbinh;
//    char hocluc[50];
//    char malop[50];
//};
//
//void nhapsinhvien(SV *sv)
//{
//    printf("\nID: ");
//    scanf("%d", &sv->id);
//
//    getchar();
//
//    printf("\nTen: ");
//    fgets(sv->ten, sizeof(sv->ten), stdin);
//    sv->ten[strcspn(sv->ten, "\n")] = '\0';
//
//    printf("\nGioi tinh: ");
//    fgets(sv->gioitinh, sizeof(sv->gioitinh), stdin);
//    sv->gioitinh[strcspn(sv->gioitinh, "\n")] = '\0';
//
//    printf("\nNgay sinh: ");
//    scanf("%d %d %d",
//          &sv->ngaysinh.ngay,
//          &sv->ngaysinh.thang,
//          &sv->ngaysinh.nam);
//
//    printf("\nDiem mon 1: ");
//    scanf("%f", &sv->diemmon1);
//
//    printf("\nDiem mon 2: ");
//    scanf("%f", &sv->diemmon2);
//
//    printf("\nDiem mon 3: ");
//    scanf("%f", &sv->diemmon3);
//
//    getchar();
//
//    printf("\nMa lop: ");
//    fgets(sv->malop, sizeof(sv->malop), stdin);
//    sv->malop[strcspn(sv->malop, "\n")] = '\0';
//}
//void tinhdiemtb(SV *sv){
//	sv->diemtrungbinh = (sv->diemmon1 + sv->diemmon2 + sv->diemmon3)/3;
//	
//}
//
//void xeploai(SV *sv){
//	if(sv->diemtrungbinh > 9 ){
//		strcpy(sv->hocluc,"XUAT XAC");
//	}
//	else if(sv->diemtrungbinh > 8){
//		strcpy(sv->hocluc,"GIOI");
//	} else if (sv->diemtrungbinh > 7){
//		strcpy(sv->hocluc,"Kha");
//	} else if (sv->diemtrungbinh>5){
//		strcpy(sv->hocluc,"Trung Binh");
//	} else {
//		strcpy(sv->hocluc,"YEU");
//	}
//}
//
//void tinhtuoi(SV *sv)
//{
//    time_t t = time(NULL);
//
//    struct tm *TME = localtime(&t);
//
//    int namhientai = TME->tm_year + 1900;
//
//    sv->tuoi = namhientai - sv->ngaysinh.nam;
//}
//void capnhatsv(SV *sv){s
//	nhapsinhvien(&sv);
//
//    tinhtuoi(&sv);
//
//    tinhdiemtb(&sv);
//
//    xeploai(&sv);
//}
//void in(SV sv) {
// printf("%d \t %s \t %s \t %d/%d/%d \t %d \t %.2f \t %.2f \t %.2f \t %.2f \t %s \t", sv.id, sv.ten, sv.gioitinh, sv.ngaysinh.ngay, sv.ngaysinh.thang, sv.ngaysinh.nam, sv.tuoi, sv.diemmon1, sv.diemmon2, sv.diemmon3, sv.diemtrungbinh, sv.hocluc, sv.malop); 
// }
//
//int main()
//{
//    SV sv1;
//
//    nhapsinhvien(&sv1);
//
//    tinhtuoi(&sv1);
//
//    tinhdiemtb(&sv1);
//
//    xeploai(&sv1);
//
//    in(sv1);
//
//    return 0;
//}




#include <stdio.h>
#include <string.h>

typedef struct date
{
    int ngay;
    int thang;
    int nam;
} date;

typedef struct thisinh
{
    int ma;
    char ten[100];
    date ngaysinh;
    float toan;
    float van;
    float anh;
    float dtb;
} ts;

void nhap(ts *x)
{
    printf("\nNhap ma sinh vien: ");
    scanf("%d", &x->ma);

    getchar();

    printf("Nhap ho ten: ");
    fgets(x->ten, sizeof(x->ten), stdin);
    x->ten[strcspn(x->ten, "\n")] = '\0';

    printf("Nhap ngay sinh (ngay thang nam): ");
    scanf("%d %d %d",
          &x->ngaysinh.ngay,
          &x->ngaysinh.thang,
          &x->ngaysinh.nam);

    printf("Nhap diem Toan: ");
    scanf("%f", &x->toan);

    printf("Nhap diem Van: ");
    scanf("%f", &x->van);

    printf("Nhap diem Anh: ");
    scanf("%f", &x->anh);
}

void tinhdiemtb(ts *x)
{
    x->dtb = (x->toan + x->van + x->anh) / 3;
}

void in(ts x)
{
    printf("\nMa sinh vien: %d", x.ma);

    printf("\nHo ten: %s", x.ten);

    printf("\nNgay sinh: %d/%d/%d",
           x.ngaysinh.ngay,
           x.ngaysinh.thang,
           x.ngaysinh.nam);

    printf("\nDiem Toan: %.2f", x.toan);

    printf("\nDiem Van: %.2f", x.van);

    printf("\nDiem Anh: %.2f", x.anh);

    printf("\nDiem trung binh: %.2f\n", x.dtb);
}

void intrungtuyen(ts a[], int n){
	int i ;
	for ( i = 0 ; i < n ; i ++){
		if(a[i].dtb >= 7){
			in(a[i]);
		}
	}
	
}
void intrungtuyen2 ( ts a[], int n){
	int i ;
	for ( i = 0 ; i < n ; i ++){
		if(a[i].dtb >= 5 && a[i].toan > 2 && a[i].van > 2  && a[i].anh >2){
			in(a[i]);
		}
	}
	
}
void timkiemma(ts a[], int n,int m){
	int i;
	for (  i = 0 ; i < n ; i ++){
		if(m == a[i].ma){
			in(a[i]);
			return;
		}
	}
}

void sx(ts a[], int n){
	int i;
	for (i = 0 ; i < n ; i++){
		int min = i;
		int j;
		for (  j = i + 1 ; j < n ; j++){
			if(a[j].dtb < a[min].dtb){
				min = j;
			}
		}
		ts tmp = a[i];
		a[i] = a[j];
		a[j]=tmp;
	}
}


int main()
{
    int n;

    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    getchar();

    ts a[n];
int i;
    for ( i = 0; i < n; i++)
    {
        printf("\n===== Nhap thong tin sinh vien thu %d =====\n", i + 1);

        nhap(&a[i]);

        tinhdiemtb(&a[i]);
    }

    printf("\n===== DANH SACH SINH VIEN =====\n");

    for ( i = 0; i < n; i++)
    {
        in(a[i]);
    }
//    printf("\n===== DANH SACH SINH VIEN TRUNG TUYEN=======\n);
//    intrungtuyen(a,n);
int s;
//printf("Nhap ma thi sinh can tim kiem: "); scanf("%d",&s);
//timkiemma(a,n,s);
sx(a, n);

printf("\nDanh sach sau khi sap xep:\n");

int i;

for (i = 0; i < n; i++)
{
    in(a[i]);
}
    return 0;
}
