#include<iostream>
using namespace std;

class fibonanci{
	friend ostream& operator<<(ostream&, fibonanci&);
	friend istream& operator>>(istream&, fibonanci&);
	
	public:
		long fibonacci1();
	private:
		int n;
};

int fibonacci1(int n) {
    if ((n == 1)||(n==2)) return (1);
    else return (fibonacci1(n-1)+ fibonacci1(n-2));
}

istream& operator>>(istream& in, fibonanci& masuk){
	cout<<"--------BILANGAN FIBONACCI-----------\n";
	cout << "Masukkan angka ke-n: ";
    in>>masuk.n;
    cout<<"------------------------------------\n";
    cout<<"                ||                  \n";
    return in;
}

ostream& operator<<(ostream& out, fibonanci& keluar){
	out<<"------------------------------------\n";
	for(int i=1; i<=keluar.n; i++)
	out <<fibonacci1(i)<< endl;
	out<<"------------------------------------\n";
	return out;
}

int main() {
    fibonanci kamu;
    cin>>kamu;
    cout<<kamu;

    return 0;
}

