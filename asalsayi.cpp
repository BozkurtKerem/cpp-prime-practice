#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main() {

  int sayi;
    cout<<"Lutfen bir sayi giriniz: ";
    cin>>sayi;
   
    bool asal=true;
    if(sayi<=1) {
        asal=false;
    } else {
        for(int i = 2; i<sayi; i++) {
            if(sayi%i==0) {
                asal=false;
                break;
            }
        }
    }

 if(asal)
    cout<<"Girdiginiz sayi asaldir."<<endl;
    else
    
    cout<<"Girdiginiz sayi asal degildir."<<endl;








    return 0;
}