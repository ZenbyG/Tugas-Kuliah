#include <iostream>
#include <cmath>

using namespace std;


double hitung_abs(double a){
    if (a < 0){
        return -a;
    } else {
        return a;
    }
}

double hitung_akar(double n, double tebakan = 1.0, double error = 1e-6){
    if (hitung_abs(tebakan * tebakan - n) < error){
        return tebakan;
    }else {
        double tebakan_baru = 0.5 * (tebakan + n / tebakan);
        return hitung_akar(n, tebakan_baru, error);
    }
}

double hitung_jarak(double x1, double y1, double x2, double y2){
    return hitung_akar(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main(){
    double n;
    double x1, y1, x2, y2;
    cout << "Masukan nilai dari titik (x1,y1) : ";
    cin >> x1 >> y1;
    cout << "Masukan nilai dari titik (x2,y2) : ";
    cin >> x2 >> y2;
    
    double jarak = hitung_jarak(x1,y1,x2,y2);
    cout << "hasil jaraknya adalah : " << jarak << endl;

    cout << "Masukan nilai dari akar tersebt : ";
    cin >> n;

    double akar = hitung_akar(n);
    cout << "hasil dari nilai " << n << " adalah " << akar << endl;
}



// int main(){
//     int a = 5;
//     int nilai_pangkat = pow(a, 1);
//     cout << "nilai " << a << " adalah : " << nilai_pangkat << endl;

//     int b;
//     cout << "Masukan nilai b : ";
//     cin >> b;

//     int nilai_absolute = fabs(b);

//     cout << "hasil dari b adalah  : " << nilai_absolute << endl;
//     return 0;
// }