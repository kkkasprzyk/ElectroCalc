#pragma once
#include <cstdint>
#include <string>
#include <string>
using namespace std;
class Number
{
private:
	long long int value;//value in decimal representation - always
public:

	// Funkcja Binary to Decimal
	auto binstr2int(char * bs);
	
	// Funkcja Decimal To Binary 
	auto uint32_to_binarystr(uint32_t n);
	
	//Funkcja dodawania
	auto  add(uint32_t k, uint32_t f);
	
	// Funkcja odejmowania
	auto  mns(uint32_t k_1, uint32_t f_1);
	
	// Funkcja mno¿enia
	auto mltp(uint32_t k_2, uint32_t f_2);
	
	// Funkcja dzielenia  (Trzeba dopracowaæ dzielenie przez zero zeby b³êdu nie wali³o)
	auto division(uint32_t k_3, uint32_t f_3);
	
	//Funkcja Decimal To Hexadecimal
	auto decToHexa(long long int n);

	// Funkcja Hexadecimal To Decimal
	auto hexToDecimal(string hexVal);

	//Funkcja Decimal To Octal
	auto decimalToOctal(long long int n);

	//Funkcja Decimal To Octal
	auto octalToDecimal(int n);

    auto wybor_systemu(int liczba_switch);

	// zeby zrobic konwersje do decymalnej to zamiast ponizszych metod zrobil bym konstruktor na tej klasie, ktore utworza obiekt Number bazujac na wartosci i podstawie (bin, hex lub dec)
    

};

