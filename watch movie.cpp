#include<iostream>
using namespace std;
int main (){
	int pilih,plh,ph,hp;
	string choose,ch;
	
	cout<<"piih genre life: "<<endl;
	cout<<"====================="<<endl;
	cout<<"1. slice of life\n2. romance"<<endl;
	cout<<"pilih :";
	cin>>pilih;
	switch(pilih){
		case 1:
			choose = "slice of life";
			
				cout<<"anda memilih genre slice of life"<<endl;
				cout<<"silahkan pilih tema lokasi anda: "<<endl;
				cout<<"1.school\n2.house"<<endl;
				cout<<endl;
				cout<<"pilih :";
				cin>>plh;
				cout<<"============================"<<endl;
				if(plh == 1){
					cout<<"anda memilih genre "<<choose<<" dengan tema school"<<endl;
			}else if(plh == 2){
				cout<<"anda memilih genre"<<choose<<"dengan tema house";
			}else{
				cout<<"tema yang anda pilih belum tersedia";
				
			}break;
			case 2:
				ch = "romance";
				cout<<"anda memilih genre romance"<<endl;
				cout<<"silahkan pilih tipe cewe anda "<<endl;
				cout<<"1.cool\n2.teman masa kecil"<<endl;
				cout<<"pilih:";
				cin>>ph;
				if(ph == 1){
					cout<<"anda memilih genre "<<ch<<" dengan tipe cewe cool"<<endl;
					
				}else if(ph == 2){
					cout<<"anda memilih genre "<<ch<<" dengan tipe cewe teman masa kecil";
				}else{
					cout<<"coming soon";
				}break;
	default:
	cout<<"coming soon";
	
	
		
	}
}
