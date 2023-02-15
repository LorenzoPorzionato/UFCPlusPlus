#include <iostream>
/*leggi n numeri e stampa i numeri minori di 5 */
using namespace std;

int main() {
    int n;
    int i;
    int lista [10];
   std:: cout <<"dammi un  numero" << std:: endl;
    std:: cin >> n;
    std:: cout << "dammi " << n << " numeri" << std:: endl;
    for(i=0;i<n;i++)
    std::cin >> lista [i];
    for(i=0;i<n;i++)
    if(lista[i] < 5)
    std::cout << "il numero " << lista[i] << " e' minore di 5" << std:: endl;


}