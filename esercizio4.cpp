#include <iostream>;
/*scrivi un programma in C++ che chieda all'utente di inserire 10 numeri
e determini il numero piu' grande tra questi*/
int main()
{
    int i;
    int lista[100];
    int max = 0; 
    std::cout << " dammi 10 numeri " << std::endl;
    for (i = 0; i < 10; i++)
        std::cin >> lista[i];

    for (i = 0; i < 10; i++)
    {
        if (lista[i] > max)
            max = lista[i];
    }
    std::cout << " il numero piu' grande e'" << max << std::endl;
}