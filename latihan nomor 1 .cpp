#include <iostream>
using namespace std;

int main () {
    int nilai = 92;


    if (nilai >= 90) {
        cout<<"anda mendapatkan nilai A"<<endl;
    } else if (nilai >= 80&& nilai >= 89) {
        cout<<"anda mendapatkan nilai B"<<endl;
    }else if (nilai >= 70 && nilai >= 79) {
        cout<<"anda mendapatkan nilai C"<<endl;

    } else if (nilai >= 60 && nilai >= 69) {
        cout<<"anda mendapatkan nilai D"<<endl;

    } else (nilai < 60) {
        cout<<"anda mendapatkan nilai E"<<endl;
    }


return 0;




}
