#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;
class SinhVien{
	protected:
		char TenSV[20];
		char GioiTinh[10];
		int NamSinh;
	public:
		void Nhap();
		void Hien();
		void Tim();
		
};
class QLSinhVien: public SinhVien{
	private:
		int n;
		SinhVien sv[100];
	public:
		void Nhap();
		void Hien();
		void Tim();
	
	
};

void SinhVien::Nhap(){
	fflush(stdin);
	cout<< "\t Ten sinh vien: ";
	cin.get(TenSV,20);
	cout<< "\t Nam sinh: ";
	cin>>NamSinh;
	fflush(stdin);
	cout<< "\t Gioi tinh: ";
	cin.get(GioiTinh,10);
}
void SinhVien::Hien(){
	cout<< " Ten sinh vien: "<<TenSV<<" - Nam sinh: "<<NamSinh<<" - GioiTinh: "<<GioiTinh<<endl;
}

void SinhVien::Tim(){
		char s2[] = "Nguyen";
			if(TenSV[5]==s2[5]){
				cout<< " Ten sinh vien: "<<TenSV<<" - Nam sinh: "<<NamSinh<<" - GioiTinh: "<<GioiTinh<<endl;
			}
		}
void QLSinhVien::Nhap(){
	cout<<"Nhap so sinh vien: ";
	cin>>n;
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<" Sinh vien ["<<i+1<<"]:\n";
		sv[i].Nhap();
		cout<<endl;	
	}
}
void QLSinhVien::Hien(){
	for(int i=0;i<n;i++){
		cout<< " Thong tin sinh vien["<<i+1<<"] la: ";
		sv[i].Hien();
	}
}
void QLSinhVien::Tim(){
			
			for(int i=0;i<n;i++){
				sv[i].Tim();	
			}
		}

int main(){
	QLSinhVien sv;
	sv.Nhap();
	sv.Hien();
	string tukhoa="Nguyen";
	cout<<" Sinh vien co ho Nguyen la: \n\n";
	sv.Tim();
	
}
