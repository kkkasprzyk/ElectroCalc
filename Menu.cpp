#include "Menu.h"
#include <iostream>
#include<stdio.h>
#include <string>
#include "Number.h"
#include "ElectroCalculator.cpp"
using namespace std;
//tu trzeba wpakowac logike ktora zdecyduje jakie dzialania beda 
//wyprintuje menu, zapyta o dane
using namespace std;

void Menu::printMenu()
{
	
    //cout << "TUTA22J" << dectooct(-10);
    //printf("%s\n%s\n",s2);
    int liczba{ 0 }, a{ 0 }, b{ 0 };
    //  cout << "###############################  Kalkulator Elektronika  ############################" << endl;

    cout << "\n 1.Dodawanie \n" << "2.Odejmowanie \n" << "3.Mnozenie \n" << "4.Dzielnie \n" << "5.Zamiana z dec,hex,octal,bin na dec,hex,octal,bin,float \n" << endl;
    cout << "Wybierz dzialanie :";
    cin >> liczba;
    Number pierwsza,druga,wynik;
    switch (liczba)
    {
        //DODAWANIE
    case 1: {
        cout << "Dodawanie: \n";
        pierwsza.wybor_systemu(liczba);
        b = druga.wybor_systemu(liczba);

        cout << "Wynik binarnie->" << wynik.add(a, b) << endl;;
        cout << "Wynik decymalnie->" << a + b << endl;;
        cout << "Wynik hexadecymalnie->"; wynik.decToHexa(a + b);
        cout << "\nWynik octal->" << wynik.decimalToOctal((a + b)) << endl;
        //return main();
    }
          break;
          //ODEJMOWANIE
    case 2:

        cout << "Odejmowanie: \n";
        a = pierwsza.wybor_systemu(liczba);
        b = druga.wybor_systemu(liczba);
        //cout << "Wynik binarnie->" << mns(a, b) << endl;;
        cout << "Wynik decymalnie->" << a - b << endl;;
        cout << "Wynik hexadecymalnie->"; wynik.decToHexa(a - b);
        cout << "\nWynik octal->" << wynik.decimalToOctal((a - b)) << endl;
        //return main();
        break;
        //MNO¯ENIE
    case 3:
        cout << "Mno¿enie: \n";
        a = pierwsza.wybor_systemu(liczba);
        b = druga.wybor_systemu(liczba);
        cout << "Wynik binarnie->" << wynik.mltp(a, b) << endl;;
        cout << "Wynik decymalnie->" << a * b << endl;;
        cout << "Wynik hexadecymalnie->"; wynik.decToHexa(a * b);
        cout << "\nWynik octal->" << wynik.decimalToOctal((a * b)) << endl;
        //return main();
        break;
        //DZIELENIE
    case 4:
        cout << "Dzielenie: \n";
        a = pierwsza.wybor_systemu(liczba);
        b = druga.wybor_systemu(liczba);
        cout << "Wynik binarnie->" << wynik.division(a, b) << endl;;
        cout << "Wynik decymalnie->" << a / b << endl;;
        cout << "Wynik hexadecymalnie->"; wynik.decToHexa(a / b);
        cout << "\nWynik octal->" << wynik.decimalToOctal((a / b)) << endl;
        //return main();
        break;
        //TEST FUNKCJI (to jest opcja do poprawki na opcje float)
    case 5:
        cout << "Test Funkcji" << std::endl;
        //char x[32];
        uint32_t x;
        cout << " Podaj wartoœæ uint "; cin >> x;
        cout << "Wynik uint to binary /n";
        //cout << uint32_to_binarystr(x);
        //return main();
        break;

    }
    //return 0;


}



