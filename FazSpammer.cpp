#include<iostream>
#include<clocale>
#include<ConsoleColor.h>
#include<windows.h>
void CopyToClipboard(const std::string &text) {
    if (OpenClipboard(nullptr)) {
        EmptyClipboard();
        // Metni clipboard'e kopyala
        HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, (text.length() + 1) * sizeof(char));
        if (hMem != nullptr) {
            char *memData = static_cast<char *>(GlobalLock(hMem));
            if (memData != nullptr) {
                strncpy(memData, text.c_str(), text.length() + 1);
                GlobalUnlock(hMem);

                if (SetClipboardData(CF_TEXT, hMem) != nullptr) {
                    ;
                } else {
                    std::cerr << "Clipboard'e metin kopyalanirken bir hata olustu." << std::endl;
                }
            }

            GlobalFree(hMem);
        } else {
            std::cerr << "Clipboard icin bellek tahsisi yapilamadi." << std::endl;
        }

        CloseClipboard();
    } else {
        std::cerr << "Clipboard acilamadi." << std::endl;
    }
}
using namespace std;

int main(int argc, char** argv){
	setlocale(LC_ALL,"Turkish");
	
	for(;;){
		cout<<green<<"\nClock killer spammera hoşgeldiniz!"<<endl<<blue<<"\nFazbear Entertainment tarafından kodlanmıştır.."<<endl<<endl;
		string *spammessage=new string;
		cout<<endl<<yellow;
		cout<<"[+]Spam mesajını yazınız :";
		getline(cin,*spammessage);
		
		CopyToClipboard(*spammessage);
		
		short int *num=new short int;
		cout<<green<<"\n[+]Spam sayısını giriniz :";
		cin>>*num;
		if(*num<=1500){
			short int *j=new short int;
			*j=4;
			short int *counter=new short int;
			*counter=0;
			cout<<endl;
			for(*counter<4; *counter=*counter+1;){
				*j=*j-1;
			   	cout<<red<<"[+]Spamlamanın başlamasına "<<*j<<" saniye kaldı!"<<endl;
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
			cout<<white<<"\n\nClock Killer spamlama bitmiştir.\n\a"<<green;
			Sleep(1000);
			break;
		}
		else if(*num==0){
			break;
		}
		else{
			cerr<<endl<<yellow<<"[-]Max 1500 değer girebilirsin..!"<<endl;
			continue;
		}
	}
	system("PAUSE");
	return 0;
}
