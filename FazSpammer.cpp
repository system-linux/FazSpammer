
#include<clipboard.hpp>
#include<iostream>
#include<clocale>
#include<ConsoleColor.h>
using namespace std;

int main(int argc, char** argv){
	setlocale(LC_ALL,"Turkish");
	
	for(;;){
		cout<<green<<"\nClock killer spammera ho�geldiniz!"<<endl<<blue<<"\nFazbear Entertainment taraf�ndan kodlanm��t�r.."<<endl<<endl;
	    clipboardxx::clipboard copy;
		string *spammessage=new string;
		cout<<endl<<yellow;
		cout<<"[+]Spam mesaj�n� yaz�n�z :";
		getline(cin,*spammessage);
		
		copy<<*spammessage;
		
		short int *num=new short int;
		cout<<green<<"\n[+]Spam say�s�n� giriniz :";
		cin>>*num;
		if(*num<=1500){
			short int *j=new short int;
			*j=4;
			short int *counter=new short int;
			*counter=0;
			cout<<endl;
			for(*counter<4; *counter=*counter+1;){
				*j=*j-1;
			   	cout<<red<<"[+]Spamlaman�n ba�lamas�na "<<*j<<" saniye kald�!"<<endl;
			   	Sleep(1000);
			   	if(*j==0){
			   		delete j,counter;
		    		break;
				}
			}
			short int *sp=new short int;
			for(*sp=0; *sp<=*num; *sp=*sp+1){
				keybd_event(VK_CONTROL, 0x1D, KEYEVENTF_EXTENDEDKEY | 0, 0);
				keybd_event('V', 0x2F, KEYEVENTF_EXTENDEDKEY | 0, 0);
				keybd_event('V', 0x2F, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
				keybd_event(VK_CONTROL, 0x1D, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
				keybd_event(VK_RETURN, 0x9C, 0, 0);
				keybd_event(VK_RETURN, 0x9C, KEYEVENTF_KEYUP, 0);
			}
			delete sp,num,spammessage;
			cout<<white<<"\n\nClock Killer spamlama bitmi�tir.\n\a"<<green;
			Sleep(1000);
			break;
		}
		else if(*num==0){
			break;
		}
		else{
			cerr<<endl<<yellow<<"[-]Max 1500 de�er girebilirsin..!"<<endl;
			continue;
		}
	}
	system("PAUSE");
	return 0;
}
