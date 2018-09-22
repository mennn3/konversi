
#include <iostream>


using namespace std;

int main(){


 int i,t,b,x,y,z,o,p,m,h;

    	cout << endl << endl;
	char red[] = { 0x1b, '[', '1', ';', '3', '1', 'm', 0 + 0x1b, '[','5', 'm', 0};
	char normal[] = { 0x1b, '[', '0', ';', '3', '9', 'm', 0 };

	
    cout << "\t\t\t\t=====> KONVERSI WAKTU <=====\t\t\t\t " << endl;
    cout << red <<"\t\t\t =====> Author by : naufalrivaille <=====\t\t\t  " << normal << endl; /*Don't Change it, Noob! */
 cout << endl;
 cout << " Pilih pilihan di bawah ini 1 sd 4 " << endl;
 cout << " 1. Tahun ke -> Bulan, Minggu, Hari " << endl;
 cout << " 2. Bulan ke -> Tahun, Bulan, Minggu, hari " << endl;
 cout << " 3. Minggu ke -> Tahun, Bulan, Minggu, Hari " << endl;
 cout << " 4. Hari ke -> Tahun, Bulan, Minggu, Hari " << endl;
 cout << " Masukkan Pilihan anda : "; cin >> i;
  
 switch(i){
  case 1: {
  

  cout << endl;
  cout << " Konversi dari Tahun.. " << endl << endl;
  cout << " Masukkan angka : "; cin >> i;
  
  b = i * 12;
  m = i * 48;
  h = i * 365;

  cout << "                  " << i << " Tahun = " << b << " Bulan, " << m << " Minggu, " << h << " Hari " << endl;
  break;
 }case 2:{
  cout << endl;
  cout << " Konversi dari Bulan.. " << endl << endl;
  cout << " Masukkan angka : "; cin >> i;
  t = i / 12;
  x = t * 12;
  y = i - x;
  b = y * 1;
  z = b / 1;
  m = y - z;
  o = m / 365;
  p = o * 365;
  h = m - p;
  cout << "               : " << i << " Bulan = " << t << " Tahun, " << b << " Bulan, " << m << " Minggu, " << h << " Hari." << endl;
  break;

}case 3:{
 cout << endl;
 cout << " Konversi dari Minggu.. " << endl << endl;
 cout << " Masukkan angka : "; cin >> i;
 t = i / 48;
 x = t * 48;
 y = i - x;
 b = y / 4;
 z = b * 4;
 m = y - z;
 o = m / 1;
 p = o * 1;
 h = m - p;
 cout << "               : " << i << " Minggu = " << t << " Tahun, " << b << " Bulan, " << m << " Minggu, " << h << " Hari "<< endl;
 break;
}case 4:{
 cout << " Konversi dari Hari " << endl << endl;
 cout << " Masukkan angka : "; cin >> i;
 t = i / 365;
 x = t * 365;
 y = i - x;
 b = y / 48;
 z = b * 48;
 m = y - z;
 o = m / 12;
 p = o * 12;
 h = m - p;
 cout << "                : " << i << " Hari = " << t << " Tahun, " << b << " Bulan, " << m << "Minggu, " << h << " Hari. "<< endl;
 break;
}default : {
 cout << " Error / tidak ada " << endl;

}

 }

}
