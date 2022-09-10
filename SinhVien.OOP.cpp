#include<iostream>
#include<string.h>
#include<vector>
#include<Windows.h>
#include<iomanip>
#include<fstream>
using namespace std;

void textcolor(int x)
{
	HANDLE mau;
	mau = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(mau, x);
}

class HoTen
{
	protected:
		string Ho;
		string TenDem;
		string Ten;
	public:
		HoTen();
		~HoTen();
		void Nhap();
		void Xuat();
		string getHo();
		string getTenDem();
		string getTen();
};

HoTen::HoTen()
{
	Ho = TenDem = Ten = "";
}

HoTen::~HoTen()
{
}

void HoTen::Nhap()
{
	cout << "\t\t\t\tNhap ho cua sinh vien: ";
	fflush(stdin);
	getline(cin, Ho);
	cout << "\t\t\t\tNhap ten dem cua sinh vien: ";
	fflush(stdin);
	getline(cin, TenDem);
	cout << "\t\t\t\tNhap ten cua sinh vien: ";
	fflush(stdin);
	getline(cin, Ten);
}

void HoTen::Xuat()
{
	cout << "\t\t\t\tHo ten sinh vien: "<< Ho << " " << TenDem << " " << Ten << endl;
}

string HoTen::getHo()
{
	return Ho;
}

string HoTen::getTenDem()
{
	return TenDem;
}

string HoTen::getTen()
{
	return Ten;
}

class NgaySinh
{
	protected:
		int Ngay, Thang, Nam;
	public:
		NgaySinh();
		~NgaySinh();
		void Nhap();
		void Xuat();
		int getNgay();
		int getThang();
		int getNam();
};

NgaySinh::NgaySinh()
{
	Ngay = Thang = Nam = 0;
}

NgaySinh::~NgaySinh()
{
}

void NgaySinh::Nhap()
{
	cout << "\t\t\t\tNhap nam sinh: ";
	cin >> Nam;
	if (Nam < 0){
		do
		{
			cout << "\n\t\t\t\tDinh dang nam khong dung.";
			cout << "\n\t\t\t\tNhap lai nam: ";
			cin >> Nam;
		}
		while (Nam < 0);
	}
	if (Nam % 4 == 0 )
	{
		cout << "\t\t\t\tNhap thang: ";
		cin >> Thang;
		if (Thang <= 0 || Thang > 12)
		{
			do
			{
				cout << "\n\t\t\t\tDinh dang thang khong dung.";
				cout << "\n\t\t\t\tNhap lai thang: ";
				cin >> Thang;
			}
			while (Thang <= 0 || Thang > 12);
		}
		if (Thang < 8)
		{
			if (Thang % 2 != 0)
			{
				cout << "\t\t\t\tNhap ngay: ";
				cin >> Ngay;
				if (Ngay <= 0 || Ngay >= 32)
				{
					do
					{
						cout << "\n\t\t\t\tDinh dang ngay khong dung.";
						cout << "\n\t\t\t\tNhap lai ngay: ";
						cin >> Ngay;	
					}
					while (Ngay <= 0 || Ngay >= 32);
				}
			}
		}
		if (Thang < 8)
		{
			if (Thang % 2 == 0 && Thang != 2)
			{
				cout << "\t\t\t\tNhap ngay: ";
				cin >> Ngay;
				if (Ngay <= 0 || Ngay >= 31)
				{
					do
					{
						cout << "\n\t\t\t\tDinh dang ngay khong dung.";
						cout << "\n\t\t\t\tNhap lai ngay: ";
						cin >> Ngay;
					}
					while (Ngay <= 0 || Ngay >= 31);
				}
			}
		}
		if (Thang == 2)
		{
			cout << "\t\t\t\tNhap ngay: ";
			cin >> Ngay;
			if (Ngay <= 0 || Ngay >= 30)
			{
				do
				{
					cout << "\n\t\t\t\tDinh dang ngay khong dung.";
					cout << "\n\t\t\t\tNhap lai ngay: ";
					cin >> Ngay;
				}
				while (Ngay <= 0 || Ngay >= 30);
			}
		}
		if (Thang > 8)
		{
			if (Thang % 2 != 0)
			{
				cout << "\t\t\t\tNhap ngay: ";
				cin >> Ngay;
				if (Ngay <= 0 || Ngay >= 31)
				{
					do
					{
						cout << "\n\t\t\t\tDinh dang ngay khong dung.";
						cout << "\n\t\t\t\tNhap lai ngay: ";
						cin >> Ngay;
					}
					while (Ngay <= 0 || Ngay >= 31);
				}
			}
		}
		if (Thang > 8)
		{
			if (Thang % 2 == 0)
			{
				cout << "\t\t\t\tNhap ngay: ";
				cin >> Ngay;
				if (Ngay <= 0 || Ngay >= 32)
				{
					do
					{
						cout << "\n\t\t\t\tDinh dang ngay khong dung.";
						cout << "\n\t\t\t\tNhap lai ngay: ";
						cin >> Ngay;	
					}
					while (Ngay <= 0 || Ngay >= 32);
				}
			}
		}
		if (Thang == 8)
		{
			cout << "\t\t\t\tNhap ngay: ";
				cin >> Ngay;
				if (Ngay <= 0 || Ngay >= 32)
				{
					cout << "\n\t\t\t\tDinh dang ngay khong dung.";
					cout << "\n\t\t\t\tNhap lai ngay: ";
					cin >> Ngay;	
				}
				while (Ngay <= 0 || Ngay >= 32);
		}
	}
	if (Nam % 4 != 0)
	{
		cout << "\t\t\t\tNhap thang: ";
		cin >> Thang;
		if (Thang <= 0 || Thang > 12)
		{
			do
			{
				cout << "\n\t\t\t\tDinh dang thang khong dung.";
				cout << "\n\t\t\t\tNhap lai thang: ";
				cin >> Thang;
			}while (Thang <= 0 || Thang > 12);
		}
		if (Thang < 8)
		{
			if (Thang % 2 != 0){
				cout << "\t\t\t\tNhap ngay: ";
				cin >> Ngay;
				if (Ngay <= 0 || Ngay >= 32)
				{
					do
					{
						cout << "\n\t\t\t\tDinh dang ngay khong dung.";
						cout << "\n\t\t\t\tNhap lai ngay: ";
						cin >> Ngay;	
					}while (Ngay <= 0 || Ngay >= 32);
				}
			}
		}
		if (Thang < 8)
		{
			if (Thang % 2 == 0 && Thang != 2)
			{
				cout << "\t\t\t\tNhap ngay: ";
				cin >> Ngay;
				if (Ngay <= 0 || Ngay >= 31)
				{
					do
					{
						cout << "\n\t\t\t\tDinh dang ngay khong dung.";
						cout << "\n\t\t\t\tNhap lai ngay: ";
						cin >> Ngay;
					}
					while (Ngay <= 0 || Ngay >= 31);
				}
			}
		}
		if (Thang == 2)
		{
			cout << "\t\t\t\tNhap ngay: ";
			cin >> Ngay;
			if (Ngay <= 0 || Ngay >= 29)
			{
				do
				{
					cout << "\n\t\t\t\tDinh dang ngay khong dung.";
					cout << "\n\t\t\t\tNhap lai ngay: ";
					cin >> Ngay;
				}
				while (Ngay <= 0 || Ngay >= 29);
			}
		}
		if (Thang > 8)
		{
			if (Thang % 2 != 0)
			{
				cout << "\t\t\t\tNhap ngay: ";
				cin >> Ngay;
				if (Ngay <= 0 || Ngay >= 31)
				{
					do{
						cout << "\n\t\t\t\tDinh dang ngay khong dung.";
						cout << "\n\t\t\t\tNhap lai ngay: ";
						cin >> Ngay;
					}
					while (Ngay <= 0 || Ngay >= 31);
				}
			}
		}
		if (Thang > 8)
		{
			if (Thang % 2 == 0)
			{
				cout << "\t\t\t\tNhap ngay: ";
				cin >> Ngay;
				if (Ngay <= 0 || Ngay >= 32)
				{
					do{ 
						cout << "\n\t\t\t\tDinh dang ngay khong dung.";
						cout << "\n\t\t\t\tNhap lai ngay: ";
						cin >> Ngay;	
					}
					while (Ngay <= 0 || Ngay >= 32);
				}
			}
		}
		if (Thang == 8)
		{
			cout << "\t\t\t\tNhap ngay: ";
				cin >> Ngay;
				if (Ngay <= 0 || Ngay >= 32)
				{
					do
					{
						cout << "\n\t\t\t\tDinh dang ngay khong dung.";
						cout << "\n\t\t\t\tNhap lai ngay: ";
						cin >> Ngay;	
					}
					while (Ngay <= 0 || Ngay >= 32);
				}
		}
	}
}

void NgaySinh::Xuat()
{
	cout << "\t\t\t\tNgay/thang/nam sinh: "<< Ngay << "/" << Thang << "/" << Nam << endl;
}

int NgaySinh::getNgay()
{
	return Ngay;
}

int NgaySinh::getThang()
{
	return Thang;
}

int NgaySinh::getNam()
{
	return Nam;
}

class SinhVien : public HoTen, public NgaySinh
{
	protected:
		string NganhHoc;
		int SoTinChi;
		int Khoa;
		string MSSV;
		string DiaChi;
		long long HocPhi;
	public:
		SinhVien();
		~SinhVien();
		virtual void Nhap();
		virtual void Xuat();
		virtual void TinhHocPhi() = 0;
		string getMSSV();
		int getSoTinChi();
		string getNganhHoc();
		int getKhoa();
		string getDiaChi();
		long long getHocPhi();
};

SinhVien::SinhVien()
{
	NganhHoc = MSSV = DiaChi = "";
	SoTinChi = HocPhi = 0;
}

SinhVien::~SinhVien()
{
}

void SinhVien::Nhap()
{
	textcolor(15);
	cout << "\t\t\t\tNhap nganh hoc cua sinh vien: ";
	fflush(stdin);
	getline(cin, NganhHoc);
	cout << "\t\t\t\tNhap khoa: ";
	cin >> Khoa;
	cout << "\t\t\t\tNhap ma so sinh vien: ";
	fflush(stdin);
	getline(cin, MSSV);
	HoTen::Nhap();
	NgaySinh::Nhap();
	cout << "\t\t\t\tNhap dia chi sinh vien: ";
	fflush(stdin);
	getline(cin, DiaChi);
	cout << "\t\t\t\tNhap so tin chi: ";
	cin >> SoTinChi;
}

void SinhVien::Xuat()
{
	cout << "\t\t\t\tNganh: " << NganhHoc << endl;
	cout << "\t\t\t\tKhoa: " << Khoa << endl;
	cout << "\t\t\t\tMa so sinh vien: " << MSSV << endl;
	HoTen::Xuat();
	NgaySinh::Xuat();
	cout << "\t\t\t\tDia chi : "<< DiaChi << endl;
	cout << "\t\t\t\tSo tin chi: "<<SoTinChi << endl;
}

string SinhVien::getNganhHoc()
{
	return NganhHoc;
}

string SinhVien::getDiaChi()
{
	return DiaChi;
}

int SinhVien::getKhoa()
{
	return Khoa;
}

long long SinhVien::getHocPhi()
{
	return HocPhi;
}

string SinhVien::getMSSV()
{
	return MSSV;
}

int SinhVien::getSoTinChi()
{
	return SoTinChi;
}

//tao class con SinhVienKiThuat ke thua class cha SinhVien
class SinhVienKiThuat:public SinhVien
{
	public:
		void Nhap();
		void Xuat();
		void TinhHocPhi();
};

void SinhVienKiThuat::Nhap()
{
	SinhVien::Nhap();
}

void SinhVienKiThuat::Xuat()
{
	SinhVien::Xuat();
	this->TinhHocPhi();
	cout << "\t\t\t\tHoc phi: " << HocPhi << " vnd" << endl;
	cout << "\t\t\t\t_______________________________________________"  << endl; 
}

void SinhVienKiThuat::TinhHocPhi()
{
	this->HocPhi = this->SoTinChi * 330400;
}

//tao class con SinhVienKinhTe ke thua class cha SinhVien
class SinhVienKinhTe : public SinhVien
{	
	public:
		void Nhap();
		void Xuat();
		void TinhHocPhi();
};

void SinhVienKinhTe::Nhap()
{
	SinhVien::Nhap();
}

void SinhVienKinhTe::Xuat()
{
	SinhVien::Xuat();
	this->TinhHocPhi();
	cout << "\t\t\t\tHoc phi: " << HocPhi << " vnd" << endl;
	cout << "\t\t\t\t_______________________________________________"  << endl; 
}

void SinhVienKinhTe::TinhHocPhi()
{
	this->HocPhi = this->SoTinChi * 275200;
}

class QuanLySinhVien
{
    private:
        vector<SinhVien *> SV;
    public:
        void NhapDS();
        void XuatDS();
        void XoaSinhVienTheoMSSV();
        void XoaSinhVienTheoTen();
        void SapXepTangDanTheoMssv();
        void SapXepTangDanTheoHocPhi();
        void SapXepGiamDanTheoHocPhi();
        void MaxHocPhi();
        void MinHocPhi();
        void TongHocPhi();
        void TimTen();
		void TimMaSoSinhVien();
		void TimSinhVienTheoDiaChi();
		void SapXepTangDanTheoMSSV();
		void GhiFile();
};

void QuanLySinhVien::NhapDS()
{
	SinhVien *sv;
    int n, m;
    cout << "\n\t\t\t\tNhap so luong sinh vien ky thuat: ";
    cin >> n;
    if (n > 0)
    {
        textcolor(14);
        cout << "\t\t\t\t\t _______________________________________\n\t\t\t\t\t|   ===== Cac nganh dao dao UTC2 =====  |\t\t\n\t\t\t\t\t|-Kien truc\t\t\t\t|\n\t\t\t\t\t|-Ky thuat dien\t\t\t\t|\n\t\t\t\t\t|-Ky thuat o to\t\t\t\t|\n\t\t\t\t\t|-Ky thuat xay dung\t\t\t|\n\t\t\t\t\t|-Cong nghe thong tin\t\t\t|\n\t\t\t\t\t|-Ky thuat co dien tu\t\t\t|\n\t\t\t\t\t|-Ky thuat co khi dong luc\t\t|\n\t\t\t\t\t|-Ky thuat dien tu, vien thong\t\t|\n\t\t\t\t\t|-Ky thuat dieu khien va tu dong hoa\t|\n\t\t\t\t\t|_______________________________________|" << endl;
        textcolor(15);
    }
    for (int i = 0; i < n; i++)
	{
        sv = new SinhVienKiThuat;
        cout << "\n\t\t\t\tNhap sinh vien thu " << i+1 << endl;
        sv->Nhap();
        SV.push_back(sv);
    }
    cout << "\t\t\t\t_________________________________________________" << endl;
    cout << "\n\t\t\t\tNhap so luong sinh vien kinh te: ";
    cin >> m;
    if (m > 0)
	{
		textcolor(14);
        cout << "\t\t\t\t\t _______________________________________\n\t\t\t\t\t|   ===== Cac nganh dao dao UTC2 =====  |\t\t\n\t\t\t\t\t|-Ke toan\t\t\t\t|\n\t\t\t\t\t|-Kinh te\t\t\t\t|\n\t\t\t\t\t|-Kinh te van tai\t\t\t|\n\t\t\t\t\t|-Kinh te xay dung\t\t\t|\n\t\t\t\t\t|-Quan ly xay dung\t\t\t|\n\t\t\t\t\t|-Khai thac van tai\t\t\t|\n\t\t\t\t\t|-Quan tri kinh doanh\t\t\t|\n\t\t\t\t\t|-Logistic va Quan ly chuoi cung ung\t|\t\t\t\t\t\t\t\t\t\t\t|_______________________________________|" << endl;
    	textcolor(15);
    }
    for (int i = 0; i < m; i++)
	{
        sv = new SinhVienKinhTe;
        cout << "\n\t\t\t\tNhap sinh vien thu " << i+1 << endl;
		sv->Nhap();
        SV.push_back(sv);
    }
}

void QuanLySinhVien::XuatDS()
{
	if (SV.size() == 0)
	{
		cout << "\n\t\t\t\t\t********** Danh sach rong **********" << endl;
	}
	else
	{
		for (int i = 0; i < this -> SV.size(); i++)
		{
			textcolor(7);
			cout << "\t\t\t\t_______________________________________________" << endl;
			cout << "\n\t\t\t\t\t   THONG TIN SINH VIEN THU " << i+1 << endl; 
        	this->SV.at(i)->Xuat();
        	cout << endl;
        	textcolor(15);
		}
	}
}

void QuanLySinhVien::XoaSinhVienTheoMSSV()
{
	if(SV.size() == 0)
	{
		cout << "\n\t\t\t\t\t********** Danh sach rong **********" << endl;
	}
	else
	{
		string Xoa;
		cout << "\n\t\t\t\tNhap ma so sinh vien can xoa : ";
		fflush(stdin);
		getline(cin, Xoa);
		for(int i = 0; i < SV.size(); i++){
			if(Xoa == SV.at(i)->getMSSV()){
				SV.erase(SV.begin() + i);
				cout << "\n\t\t\t\tXoa thanh cong!" << endl;
			}
		}
	}
}

void QuanLySinhVien::XoaSinhVienTheoTen()
{
	if(SV.size() == 0)
	{
		cout << "\n\t\t\t\t\t******** Danh sach rong ********" << endl;
	}
	else
	{
		string Xoa;
		int kt = 0;
		cout << "\n\t\t\t\tNhap ten sinh vien can xoa : ";
		fflush(stdin);
		getline(cin, Xoa);
		for(int i = 0; i < SV.size(); i++){
			if(Xoa == SV.at(i)->getTen()){
				SV.erase(SV.begin() + i);
				cout << "\n\t\t\t\tXoa thanh cong!" << endl;
			}
		}
	}
}

void QuanLySinhVien :: SapXepTangDanTheoMSSV()
{
	if (SV.size() == 0)
	{
		cout << "\n\t\t\t\t\t************ Danh sach rong ************" << endl;
	}
	else{
		for (int i = 0; i < SV.size()-1; i++){
        	for (int j = i + 1; j < SV.size(); j++){
            	if (SV.at(i)->getMSSV() > SV.at(j)->getMSSV()){
                	SinhVien *t = SV.at(i);
                	SV.at(i) = SV.at(j);
                	SV.at(j) = t;
            	}
            }
        }
        XuatDS();
    }
}

void QuanLySinhVien :: SapXepTangDanTheoHocPhi()
{
	if (SV.size() == 0){
		cout << "\n\t\t\t\t\t  ********** Danh sach rong *********" << endl;
	}
	else
	{
		for (int i=0; i < SV.size()-1; i++)
		{
        for (int j = i + 1; j < SV.size(); j++)
		{
            if (SV.at(i)->getHocPhi() > SV.at(j)->getHocPhi())
			{
                SinhVien *t= SV.at(i);
                SV.at(i) = SV.at(j);
                SV.at(j) = t;
            }
        }
    }
    XuatDS();
	}
}

void QuanLySinhVien :: SapXepGiamDanTheoHocPhi()
{
	if (SV.size()==0)
	{
		cout << "\n\t\t\t\t\t  ********** Danh sach rong **********" << endl;
	}
	else
	{
		for (int i=0; i < SV.size()-1; i++)
		{
        for (int j = i + 1; j < SV.size(); j++)
		{
            if (SV.at(i)->getHocPhi() < SV.at(j)->getHocPhi())
			{
                SinhVien *t= SV.at(i);
                SV.at(i)=SV.at(j);
                SV.at(j)=t;
            }
        }
    }
    XuatDS();
	}
}

void QuanLySinhVien :: MaxHocPhi()
{
    if (SV.size()==0)
	{
		cout << "\n\t\t\t\t\t    ********** Danh sach rong **********" << endl;
	}
	else{
		SinhVien *max = SV.at(0);
    	for (int i = 1; i < SV.size(); i++)
		{
        	if (SV.at(i)->getHocPhi() > max->getHocPhi())
            	max = SV.at(i);
    	}
    	max->Xuat();
    }
}

void QuanLySinhVien :: MinHocPhi()
{
    if (SV.size()==0)
	{
		cout << "\n\t\t\t\t\t    ********** Danh sach rong **********" << endl;
	}
	else
	{
		SinhVien *min = SV.at(0);
    	for (int i = 1; i < SV.size(); i++)
		{
       	 	if (SV.at(i)->getHocPhi() < min->getHocPhi())
           	 	min = SV.at(i);
    	}
    	min->Xuat();
    }
}

void QuanLySinhVien::TongHocPhi()
{
    float Tong = 0;
    if (SV.size()==0){
		cout << "\n\t\t\t\t\t******** Danh sach rong ********" << endl;
	}
	else
	{
    	for (int i = 0; i < SV.size(); i++)
		{
        	Tong += SV.at(i)->getHocPhi();
    	}
    	cout << endl << "\n\t\t\t\tTong hoc phi cua sinh vien trong truong: "<<setprecision(2)<<fixed<<Tong<<endl;
    }
}

void QuanLySinhVien::TimMaSoSinhVien()
{
		
	if (SV.size() == 0)
	{
		cout << "\n\t\t\t\t\t******** Danh sach rong ********" << endl;
	}
	else if (SV.size() != 0)
	{
		SinhVien *maso ; 
		string TimMaSo;
        cout << "\n\t\t\t\tNhap ma so sinh vien can tim: ";
        fflush(stdin);
		getline(cin, TimMaSo);
        for (int i = 0; i < SV.size(); i++)
		{
            if (TimMaSo == SV.at(i)->getMSSV())
			{		
                maso = SV.at(i);
                maso->Xuat();
                cout << endl;
		    }
        }
    }
}

void QuanLySinhVien :: TimTen()
{
	if (SV.size() == 0)
	{
		cout << "\n\t\t\t\t\t******** Danh sach rong ********" << endl;
	}
	else if (SV.size() != 0)
	{
		SinhVien *ten;
		string timten;
    	cout << "\n\t\t\t\tNhap ten can tim: ";
		fflush(stdin);
		getline(cin, timten);
		for (int i = 0; i < SV.size(); i++)
		{
            if (timten == SV.at(i)->getTen())
			{
				ten = SV.at(i);
				ten->Xuat();
				cout << endl;
            }
        }
   	}
}

void QuanLySinhVien::GhiFile()
{
	if (SV.size() == 0)
	{
		cout << "\n\t\t\t\t\t******** Danh sach rong ********" << endl;
	}
	else
	{
		ofstream file("QuanLySinhVien.txt");
		file << setw(90) << "\t\t\t*********** DANH SACH SINH VIEN ***********" << endl;
		file << "    " << left << setw(0) << setw(8) << "STT" << setw(40) << "        Nganh" << setw(12) << "Khoa" << setw(18) << "    MSSV" << setw(23) << "     Ho ten" << setw(6) << setw(10) << setw(25) << "Ngay/thang/nam sinh" << setw(2) << setw(4) << setw(20) << "   Dia chi" << setw(16) << "So tin chi" << setw(15) << "   Hoc phi" << endl;
		for (int i = 0; i < SV.size(); i++)
		{
			file << "    " << left << " " << setw(8) << i + 1 << setw(40) << SV.at(i)->getNganhHoc() << setw(12) << SV.at(i)->getKhoa() << setw(18) << SV.at(i)->getMSSV() << setw(7) << SV.at(i)->getHo() << setw(6) << SV.at(i)->getTenDem() << setw(10) << SV.at(i)->getTen() << setw(0) << "   " << setw(2) << SV.at(i)->getNgay() << setw(0) << "/" << setw(2) << SV.at(i)->getThang() << setw(0) << "/" << setw(17) << SV.at(i)->getNam() << setw(22) << SV.at(i)->getDiaChi() << setw(15) << SV.at(i)->getSoTinChi() << setw(15) << SV.at(i)->getHocPhi() << endl;
		}
		file.close();
		cout << "\n\t\t\t\tIn thanh cong!" << endl;
	}
}

int main()
{
    QuanLySinhVien a;
    int luachon;
    while (true)
    {
    	system("cls");	//xoa man hinh
		textcolor(10);
    	cout << endl;
    	cout << "\t\t\t\t         ****   ****  *******  ***    **  **     **        "<<endl;
		cout << "\t\t\t\t         ** ** ** **  **       ****   **  **     **        "<<endl;
		cout << "\t\t\t\t         **  ***  **  *******  ** **  **  **     **        "<<endl;
		cout << "\t\t\t\t         **       **  **       **  ** **  **     **        "<<endl;
		cout << "\t\t\t\t         **       **  *******  **   ****  *********        "<<endl;	
		textcolor(9);		 
		cout << "\t\t\t\t************************************************************** ";	 	 		 
    	cout << "\n\t\t\t\t**     1. Nhap, them danh sach sinh vien                    ** ";
    	cout << "\n\t\t\t\t**     2. In danh sach sinh vien                            ** ";
    	cout << "\n\t\t\t\t**     3. Xoa sinh vien                                     ** ";
    	cout << "\n\t\t\t\t**     4. Sap xep sinh vien                                 ** ";
    	cout << "\n\t\t\t\t**     5. In sinh vien co hoc phi cao nhat                  ** ";
    	cout << "\n\t\t\t\t**     6. In sinh vien co hoc phi thap nhat                 ** ";
    	cout << "\n\t\t\t\t**     7. Tong hoc phi cua sinh vien trong truong           ** ";
    	cout << "\n\t\t\t\t**     8. Tim kiem sinh vien                                ** ";
    	cout << "\n\t\t\t\t**     9. Ghi danh sach sinh vien ra file                   ** ";
    	cout << "\n\t\t\t\t**     0. Ket thuc                                          ** ";
    	cout << "\n\t\t\t\t**              ============ END =============              ** ";
    	cout << "\n\t\t\t\t************************************************************** ";
    	textcolor(15);
    	cout << "\n\n\t\t\t\tNhap lua chon: ";
    	cin >> luachon;
    	if (luachon!=0 && luachon !=1 && luachon != 2 && luachon!=3 && luachon!=4 && luachon!=5 && luachon!=6 && luachon!=7 && luachon!=8 && luachon!=9)
		{
			cout << "\nLua chon khong hop le. Xin kiem tra lai!" << endl;
			system("pause");
		}
		else if (luachon == 1)
		{
			textcolor(13);
			cout << "\n\n\t\t\t\t   ============ NHAP DANH SACH SINH VIEN ============" << endl;
			textcolor(15);
			a.NhapDS();
			system("pause");
		}
		else if (luachon == 2)
		{
			textcolor(13);
			cout << "\n\n\t\t\t\t   ============ DANH SACH SINH VIEN DA NHAP ============" << endl;
			textcolor(15);
			a.XuatDS();
			system("pause");
		}
		else if (luachon == 3)
		{
			while (69)
			{
				system("cls");
				textcolor(9);
				int luachon0;
				system("cls");
				cout << "\n\n\t\t\t\t   ============ XOA SINH VIEN  ============" << endl;
				cout << "\n\t\t\t\t1. Xoa sinh vien theo ma so sinh vien";
    			cout << "\n\t\t\t\t2. Xoa sinh vien theo ten";  
    			cout << "\n\t\t\t\t0. Quay lai";
    			textcolor(15);
    			cout << "\n\n\t\t\t\tNhap lua chon: ";
    			cin >> luachon0;
				if (luachon0 != 0 && luachon0 != 1 && luachon0 != 2)
				{
					cout << "\n\t\t\t\tLua chon khong hop le. Xin kiem tra lai!" << endl;
					system("pause");
				}
				else if (luachon0 == 1)
				{
					textcolor(13);
					cout << "\n\n\t\t\t\t============ XOA SINH VIEN THEO MA SO SINH VIEN  ============" << endl;
					textcolor(15);
					a.XoaSinhVienTheoMSSV();
					system("pause");
				}
				else if (luachon0 == 2)
				{
					textcolor(13);
					cout << "\n\n\t\t\t\t============ XOA SINH VIEN THEO TEN  ============" << endl;
					textcolor(15);
					a.XoaSinhVienTheoTen();
					system("pause");
				}
				else
				{
					break;
				}
			}
		}
		else if (luachon == 4)
		{
			int luachon1;
			while (69)
			{
				system("cls");
				textcolor(9);
				system("cls");
				cout << "\n\n\t\t\t\t   ============ SAP XEP SINH VIEN  ============" << endl;
				cout << "\n\t\t\t\t1. Sap xep tang dan theo ma so sinh vien";
    			cout << "\n\t\t\t\t2. Sap xep tang dan theo hoc phi";
    			cout << "\n\t\t\t\t3. Sap xep giam dan theo hoc phi";
    			cout << "\n\t\t\t\t0. Quay lai";
    			textcolor(15);
    			cout << "\n\n\t\t\t\tNhap lua chon: ";
    			cin >> luachon1;
				if (luachon1 != 0 && luachon1 !=1 && luachon1 != 2 && luachon1 != 3)
				{
					cout << "\n\t\t\t\tLua chon khong hop le. Xin kiem tra lai!" << endl;
					system("pause");
				}
				else if (luachon1 == 1)
				{
					textcolor(13);
					cout << "\n\n\t\t\t============ THONG TIN SINH VIEN DA SAP XEP TANG DAN THEO MSSV LA  ============" << endl;
					textcolor(15);
					a.SapXepTangDanTheoMSSV(); 
					system("pause");
				}
				else if (luachon1 == 2)
				{
					textcolor(13);
					cout << "\n\n\t\t\t   ============ DANH SACH SINH VIEN DA SAP XEP THEO HOC PHI TANG DAN ============" << endl;
					textcolor(15);
					a.SapXepTangDanTheoHocPhi();
					system("pause");
				}
				else if (luachon1 == 3)
				{
					textcolor(13);
					cout << "\n\n\t\t\t   ============ DANH SACH SINH VIEN DA SAP XEP THEO HOC PHI GIAM DAN ============" << endl;
					textcolor(15);
					a.SapXepGiamDanTheoHocPhi();
					system("pause");
				}
				else
				{
					break;
				}
			}
		}
		else if (luachon == 5)
		{
			textcolor(13);
			cout << "\n\n\t\t\t\t   ============ SINH VIEN CO HOC PHI CAO NHAT ============" << endl;
			textcolor(15);
			a.MaxHocPhi();
			system("pause");
		}
		else if (luachon == 6)
		{
			textcolor(13);
			cout << "\n\n\t\t\t\t   ============ SINH VIEN CO HOC PHI THAP NHAT ============" << endl;
			textcolor(15);
			a.MinHocPhi();
			system("pause");
		}
		else if (luachon == 7)
		{
			textcolor(13);
			cout << "\n\n\t\t\t   ============ TONG HOC PHI CUA SINH VIEN TRONG TRUONG ============" << endl;
			textcolor(15);
			a.TongHocPhi();
			system("pause");
		}
		else if (luachon == 8)
		{
			while (true)
			{
				system("cls");
				textcolor(9);
				int luachon2;
				system("cls");
				cout << "\n\n\t\t\t\t   ============ TIM KIEM SINH VIEN  ============" << endl;
				cout << "\n\t\t\t\t1. Tim kiem sinh vien theo ten";
    			cout << "\n\t\t\t\t2. Tim kiem sinh vien theo ma so sinh vien";  
    			cout << "\n\t\t\t\t0. Quay lai";
    			textcolor(15);
    			cout << "\n\n\t\t\t\tNhap lua chon: ";
    			cin >> luachon2;
				if (luachon2 != 0 && luachon2 !=1 && luachon2 != 2)
				{
					cout << "\n\t\t\t\tLua chon khong hop le. Xin kiem tra lai!" << endl;
					system("pause");
				}
				else if (luachon2 == 1)
				{
					textcolor(13);
					cout << "\n\n\t\t\t\t============ TIM SINH VIEN THEO TEN  ============" << endl;
					textcolor(15);
					a.TimTen();
					system("pause");
				}
				else if (luachon2 == 2)
				{
					textcolor(13);
					cout << "\n\n\t\t\t\t============ TIM SINH VIEN THEO MA SO  ============" << endl;
					textcolor(15);
					a.TimMaSoSinhVien();
					system("pause");
				}
				else
				{
					break;
				}
			}
		}
		else if (luachon == 9)
		{
			textcolor(13);
			cout << "\n\n\t\t\t\t   ============ IN SINH VIEN RA FILE ============" << endl;
			textcolor(15);
			a.GhiFile();
			system("pause");
		}
		else
		{
			break;
		}
	}
    system("pause");
    return 0;
}
1
