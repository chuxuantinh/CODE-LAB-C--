#include <iostream>
using namespace std;

class Student
{
    private:
        //string masv;
        string fullname;
        string lop;
        string xeploai;
        double cc,bt,gk,ck,tb;
        double toan,ly,hoa;
        double diemtb;
    public:
        string masv;
        void setmasv(string ma) {masv= ma;};
        string getmasv(){return masv;}
        void setfullname(string sfullname){fullname = sfullname;}
        string getfullname() {return fullname;}
        void settoan(double dtoan){toan = dtoan;}
        double gettoan(){return toan;}
        void setxeploai(string xep_loai) {xeploai = xep_loai;}
        string getxeploai(){return xeploai;}
        

        void setcc(double dcc){cc= dcc;}
        double getcc(){return cc;}
        void setbt(double dbt) {bt =dbt;}
        double getbt() {return bt;}
        void setgk(double dgk) {gk = dgk;}
        double getgk(){return gk;}
        void setck(double dck) {ck =dck;}
        double getck() {return ck;}
        void settb(double dtb) {tb = dtb;}
        double gettb() {return tb;}

        void thongtin() {cout<< masv << fullname << toan <<endl;}
        Student();
        Student(string masv1, string fullname1, string lop1, double cc1, double bt1, double gk1, double ck1, double tb1, string xeploai1);
        void Nhapthongtin();
        void XepLoai();
        void Xuatthongtin();
        double DiemTB();
};
// nho dau ;

Student::Student()
{
    masv ="CTI1";
    fullname ="cutinh";
    lop = "SDH";
    cc = 8;
    bt = 9; gk =5; ck =9; tb =0;
}

Student::Student(string masv1, string fullname1, string lop1, double cc1, double bt1, double gk1, double ck1, double tb1, string xeploai1)
{
    masv = masv1;
    fullname = fullname1;
    lop=lop1;
    cc= cc1;
    bt = bt1;
    gk = gk1;
    ck =ck1;
    tb= tb1;
    xeploai = xeploai1;      
}

void Student::Nhapthongtin()
{

    cin.ignore(1);
    cout<<"Nhap ma:";
    getline(cin, masv);
    cout<<"nhap fullname:";
    getline(cin, fullname);
    cout<<" nhap diemcc:";
    cin>>cc;
    cout<<" nhap diemcc:"; cin>>bt;
    cout<<" nhap diemgk:"; cin>>gk;
    cout<<" nhap diemcc:"; cin>>ck;
}
double Student::DiemTB()
{
    tb = (cc*0.1+ bt*0.2+ gk*0.3+ck*0.4);
    return tb;
}
void Student::XepLoai()
{
    DiemTB();
    if (tb >= 4.0 && tb <= 5.4)
    {
    xeploai = 'D';
    }
    else if (tb >= 5.5 && tb <= 6.9)
    {
    xeploai = 'C';
    }
    else if (tb >= 7.0 && tb <= 8.4)
    {
    xeploai = 'B';
    }
    else if (tb >= 8.5 && tb <= 10)
    {
    xeploai = 'A';
    }
    else
    {
    xeploai = 'F';
    }
}

class MyClass{ public: MyClass() {cout << 1;}};


char arr[] = {'a', 'b', 'c', 'd'};
//char arr[] = {"a", "b", "c", "d"}; loi

 
int main()

{
    Student st1;
    st1.setmasv("SV01");
    st1.setfullname("chutinh");
    st1.settoan(9);
    cout<<"kq";
    cout<< st1.getmasv() << st1.getfullname() <<st1.gettoan()<< endl;

    Student *st2 = new Student(); // nhớ cách khai báo này
    st2->setmasv("Ct002");
    st2->setfullname("Chutinh02");
    st2->settoan(10);
    cout<<"kq2";
    cout<<st2->getmasv() <<st2->getfullname()<<st2->gettoan() <<endl;

    //st1.thongtin();
    //delete st2;
    //MyClass a, b[2], *p[2];
    system("pause");
}