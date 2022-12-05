#include <bits/stdc++.h>

using namespace std;

class Student
{
private:
    char ten[20], gioiTinh[10];
    int tuoi;
public:
    Student(); // ham khoi tao khong co doi so truyen vao
    Student(const char* name, int age, const char* gender); // ham khoi tao co doi so truyen vao
    ~Student();
    void Xuat();
};

// const char* la mot hang chuoi ki tu
// tuong tu nhu khai báo {const float PI = 3.14}
// giá tri cua PI không the thay doi duoc
// khi truyen vao ham mot chuoi nhu "Nguyen Van A"
// thì chuoi dó không co su thay doi ve do dai lan gia tri theo thoi gian
// nen ta coi do la truyen vao 1 hanwgf chuoi ki t
// viec ghi mangr char name[] khong sai, nhung se gay canh bao

Student::Student() // dinh nghia ham khoi tao không doi (constructor khong doi)
{
    ten[0] = '\0'; // khoi gan ten = rong (NULL)
    tuoi = 0; // khoi gan tuoi = 0
    gioiTinh[0] = '\0'; // khoi gan gioi tinh = NULL
}

Student::Student(const char* name, int age, const char* gender) // dinh nghia ham tao co doi (constructor co doi)
{
    strcpy(ten, name); // sao chep chuoi tu [name] cho [ten]
    strcpy(gioiTinh, gender); // sao chep chuoi [gender] cho [gioiTinh]
    tuoi = age; // gan tuoi = age
}

Student::~Student()
{
    cout << "Da huy ";
}

void Student::Xuat()
{
    cout<<"Ten: "<<ten<<"\t\tTuoi: "<<tuoi<<"\t\tGioi Tinh: "<<gioiTinh<<endl;
}

int main()
{
    Student B; // khoi tao doi tuong B cos kieu du lieu Student 0 doi so
    B.Xuat();
    Student A ("Nguyen Van A", 19, "Nam"); // khoi tao doi tuong A co kieu du lieu Student co doi so truyen vao
    A.Xuat();
}

