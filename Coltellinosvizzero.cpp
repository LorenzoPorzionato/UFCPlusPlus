#include <iostream>
using namespace std;
int main(){

}

int piuGrande( int x; int y;){

}

bool isEven( int x){
std::cout <<"inserisci un numero " << std::endl;
std:: cin >> x;
if(x % 2 == 0)
std:: cout << x << "e' pari" << std::endl;
else 
std:: cout << x << "e' dispari " << std::endl;
}

double costoTotale(double prezzo, int interesse){
    std::cout << "inserisci prezzo " << std::endl;
    std::cin >> prezzo;
    std:: cout << "inserisci interesse " << std::endl;
    std::cin >> interesse;



}
void buttaFuori(int eta){
std::cout << " Quanti anni hai? " << std::endl;
std::cin >> eta;
if(eta > 18)
std:: cout << " allora puoi bere " std::endl;
else
std::cout << " non puoi bere " std::endl;
}

void decrescente(int a, int b, int c){
    std:: cout << "inserisci 3 numeri " << std::endl;
    std:: cin >> a >> b >> c;
    if(a < b){
        if(a < c){
            std::cout << "il piu' piccolo e'" << a << std::endl;
        } else {
            std::cout << " il piu' piccolo e'" << c << std::endl;
        }
    } else {
        if(b < c){
            std::cout << "il piu' piccolo e'" << b << std::endl;
        } else {
            std::cout << "il piu' piccolo e'" << c << std:endl;
        }
    }
}
void stampaNome(string nome){



}
bool isBetween(int a,int b,int c){
    std::cout << "inserisci il primo numero a " << std::endl;
    std::cin >> a;
    std::cout << "inserisci il secondo numero b " << std::endl;
    std::cin >> b;
    std::cout << "inserisci il terzo numero c " << std::endl;
    std::cin >> c;
    if(a < b && b < c){
        std::cout << " b e' compreso tra a & c" << std::enld;
    } else {
        std::cout << "b non e' compreso tra a & c" << std::endl;
    }

}
void equazione(int a,int b,int c){
    std::cout << "inserisci il coefficente a " << std::endl;
    std::cin >> a;
    std::cout << "inserisci il coefficente b " << std::endl;
    std::cin >> b;
    std::cout << "inserisci il coefficente c " << std::endl;
    std::cin >> c;

    int delta = b * b - 4 * a * c;
    if(delta < 0) {
        std::cout "l'equazione non ha soluzioni reali " << endl;
    } else if(delta == 0){
        int x = -b / (2 * a);
        std::cout << "l'equazione ha soluzione doppia x = " << x << std::endl;
    } else {
        int x1 = (-b + sqrt(delta)) / (2 * a);
        int x2 = (-b - sqrt(delta)) / (2 * a);
        std::cout << "l'equazione ha due soluzioni x1 = " << x1 << "e x2 = " << x2 << std::endl;
    }
    return 0;

}
bool bisestile(int anno){
    std::cout << "inserisci anno " << std::endl;
    std::cin >> anno;
    if((anno % 4 == 0 && anno % 100 != 0) || anno % 400 == 0){
        std::cout << " e' un anno bisestile " << std::endl;
    } else {
        std::cout << anno << " non e' un anno bisestile " << std::endl;
    }

}
void stampaTabelline(int n){
    for(int i = 1; i <= 10; i++){
        std::cout << 7 << "x " << 7 * i << std::endl;
         }
         return 0;
}

void stampaTabelline(int n,int m){


}
void stampaPari(int quanti){
    for(int i=0; i<=100; i++){
        if(i % 2 == 0){
            std::cout << i << std::endl;
        }
    }
    return 0;
}
