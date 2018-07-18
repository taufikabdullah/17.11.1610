#include <iostream>

using namespace std;

class kasir{
	private:
		double saldo;
	public:
		kasir(){
			saldo=500;
		}
		void awal(){
			cout<<saldo<<endl;
		}
		void nerima (double uang){
			saldo=saldo+uang;
		}
		
		void ngurangin (double uang){
			saldo=saldo-uang;
		}
			
		void cetaksaldo(){
			cout<<saldo<<endl;
		}
	};
	
int main(){
	kasir x;
	cout<<"== PROGRAM KASIR =="<<endl;
	cout<<"saldo awal "<<endl; x.awal();
	cout<<"setelah pemasukan"<<endl;x.nerima(300);
	x.cetaksaldo();
	cout<<"setelah pengeluaran"<<endl;x.ngurangin(100);
	x.cetaksaldo();
}
