#include <stdio.h>
#include <string.h>
#include <time.h>
typedef struct Sinhvien SV;

typedef struct date
{
    int ngay;
    int thang;
    int nam;
} date;
struct Sinhvien
{
    int id;
    char ten[50];
    char gioitinh[50];
    date ngaysinh;
    int tuoi;
    float diemmon1;
    float diemmon2;
    float diemmon3;
    float diemtrungbinh;
    char hocluc[50];
    char malop[50];
};

void nhapsinhvien(SV *sv)
{
    printf("\nID: ");
    scanf("%d", &sv->id);

    getchar();

    printf("\nTen: ");
    fgets(sv->ten, sizeof(sv->ten), stdin);
    sv->ten[strcspn(sv->ten, "\n")] = '\0';

    printf("\nGioi tinh: ");
    fgets(sv->gioitinh, sizeof(sv->gioitinh), stdin);
    sv->gioitinh[strcspn(sv->gioitinh, "\n")] = '\0';

    printf("\nNgay sinh: ");
    scanf("%d %d %d",
          &sv->ngaysinh.ngay,
          &sv->ngaysinh.thang,
          &sv->ngaysinh.nam);

    printf("\nDiem mon 1: ");
    scanf("%f", &sv->diemmon1);

    printf("\nDiem mon 2: ");
    scanf("%f", &sv->diemmon2);

    printf("\nDiem mon 3: ");
    scanf("%f", &sv->diemmon3);

    getchar();

    printf("\nMa lop: ");
    fgets(sv->malop, sizeof(sv->malop), stdin);
    sv->malop[strcspn(sv->malop, "\n")] = '\0';
}

void in(SV sv) { printf("%d \t %s \t %s \t %d/%d/%d \t %d \t %.2f \t %.2f \t %.2f \t %.2f \t %s \t", sv.id, sv.ten, sv.gioitinh, sv.ngaysinh.ngay, sv.ngaysinh.thang, sv.ngaysinh.nam, sv.tuoi, sv.diemmon1, sv.diemmon2, sv.diemmon3, sv.diemtrungbinh, sv.hocluc, sv.malop); }

int main()
{
    SV sv1;

    nhapsinhvien(&sv1);

    in(sv1);

    return 0;
}