 #include "Number.h"
#include <iostream>

// Zawar³em tutaj wszystkie deklaracje moich funkcji , brakuje mi jeszcze flo³ciiika(floata) // 

//Funkcja Binary to decimal
auto Number::binstr2int(char* bs)
{
    long long ret = 0;
    long long  val = 1;

    while (*bs) {
        if (*bs++ == '1') ret = ret + val;
        val = val * 2;
    }
    return ret;
}

//Funkcja Decimal To Binary 
auto Number::uint32_to_binarystr(uint32_t n) {
    if (n != UINT32_MAX) {
        int expb2 = 0;              // Exponent of 2.      
        static char binarystr[33];  // 32 bits + 1 termination NULL char.
        binarystr[32] = '\0';       // Add terminating NULL char.
        memset(binarystr, '0', 32); // Initialize 32-bit string as 0.
        while (n != 0) {                         // Continue until n has been completely represented by a sum of powers of 2.
            while (1 << expb2 <= n) { expb2++; } // Find the power of 2 that yields a result greater than n. 
            expb2 -= 1;                          // Once this number is found, we are sure that the previous power yields the largest power of 2 less than n.
            n -= 1 << expb2;                     // We've found a power of 2 to represent this "chunk" of n. Reduce n by the same amount.
            binarystr[31 - expb2] = '1';         // Set the bit at the index with expb2 digits following it to 1.
            expb2 = 0;                           // Reset exponent of 2 and repeat.
        }
        return binarystr;
    }
    else {
       
        static char binarystr[33];
        binarystr[32] = '\0';
        memset(binarystr, '1', 32);
        return binarystr;
    }
}


//FUNKCJA DODAWANIA 
auto Number::add(uint32_t k, uint32_t f)
{
    uint32_t result_add = k + f;
    return uint32_to_binarystr(result_add);
}

// Funkcja odejmowania
auto Number::mns(uint32_t k_1, uint32_t f_1) {
    uint32_t result_add_1 = k_1 - f_1;
    return uint32_to_binarystr(result_add_1);
}

// Funkcja mno¿enia
auto Number::mltp(uint32_t k_2, uint32_t f_2) {
    uint32_t result_add_2 = k_2 * f_2;
    return uint32_to_binarystr(result_add_2);
}

// Funkcja dzielenia  (Trzeba dopracowaæ dzielenie przez zero zeby b³êdu nie wali³o)
auto Number::division(uint32_t k_3, uint32_t f_3) {
    if (f_3 == 0) {
        cout << "Nie wolno dzieliæ przez zero " << endl;
        uint32_t poprawka = 0;
        cin >> poprawka;
        uint32_t result_add_3 = k_3 / poprawka;
        return uint32_to_binarystr(result_add_3);
    }
    else {
        uint32_t result_add_5 = k_3 / f_3;
        return uint32_to_binarystr(result_add_5);
    }

}


//Funkcja Decimal To Hexadecimal
auto Number::decToHexa(long long int n)
{
    // char array to store hexadecimal number
    char hexaDeciNum[100];

    // counter for hexadecimal number array
    long long int i = 0;
    while (n != 0) {
        // temporary variable to store remainder
        long long  int temp = 0;

        // storing remainder in temp variable.
        temp = n % 16;

        // check if temp < 10
        if (temp < 10) {
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else {
            hexaDeciNum[i] = temp + 55;
            i++;
        }

        n = n / 16;
    }

    // printing hexadecimal number array in reverse order
    for (int j = i - 1; j >= 0; j--)
        cout << hexaDeciNum[j];
}

// Funkcja Hexadecimal To Decimal
auto Number::hexToDecimal(string hexVal)
{
    long long int len = hexVal.size();

    // Initializing base value to 1, i.e 16^0
    long long int base = 1;

    long long int dec_val = 0;

    // Extracting characters as digits from last
    // character
    for (int i = len - 1; i >= 0; i--) {
        // if character lies in '0'-'9', converting
        // it to integral 0-9 by subtracting 48 from
        // ASCII value
        if (hexVal[i] >= '0' && hexVal[i] <= '9') {
            dec_val += (int(hexVal[i]) - 48) * base;

            // incrementing base by power
            base = base * 16;
        }

        // if character lies in 'A'-'F' , converting
        // it to integral 10 - 15 by subtracting 55
        // from ASCII value
        else if (hexVal[i] >= 'A' && hexVal[i] <= 'F') {
            dec_val += (int(hexVal[i]) - 55) * base;

            // incrementing base by power
            base = base * 16;
        }
    }
    return dec_val;
}


//Funkcja Decimal To Octal
auto Number::decimalToOctal(long long int n) {
    long long int remainder;
    long long int octal = 0, i = 1;

    while (n != 0) {
        remainder = n % 8;
        n = n / 8;
        octal = octal + (remainder * i);
        i = i * 10;
    }
    return octal;
}

//Funkcja Decimal To Octal
auto Number::octalToDecimal(int n)
{
    long long int num = n;
    long long int dec_value = 0;

    // Initializing base value to 1, i.e 8^0
    long long  base = 1;

    long long temp = num;
    while (temp) {

        // Extracting last digit
        long long int last_digit = temp % 10;
        temp = temp / 10;

        // Multiplying last digit with appropriate
        // base value and adding it to dec_value
        dec_value += last_digit * base;

        base = base * 8;
    }

    return dec_value;
}

auto Number::wybor_systemu(int liczba_switch) {
    long long a{ 0 };
    char x[64];
    //float flt;
    long long int dec, h_d;
    string hex;
    cout << "\n 1.BIN \n" << "2.OCTAL \n" << "3.HEX \n" << "4.DEC \n" << endl;
    cout << "Podaj system liczby :"; cin >> liczba_switch;
    switch (liczba_switch)
    {
    case 1: {  //BINARNIE
        cout << "Podaj liczbe w BIN-> "; cin >> x;
        long long int b_d = binstr2int(x);;
        return b_d;
        break;
    }
    case 2: {  //OCTALNIE 
        cout << "Podaj liczbe w OCTAL-> "; cin >> a;
        long long int o_b = octalToDecimal(a);
        return o_b;
        break;
    }
    case 3: {  //HEXADECIMAL
        cout << "Podaj liczbe w HEX-> "; cin >> hex;
        long long int h_d = hexToDecimal(hex);
        cout << "hex to decimal - >" << h_d;
        return h_d;
        break;
    }

    case 4: {  //DECIMAL
        cout << "Podaj liczbe w DEC-> "; cin >> dec;
        return dec;
        break;
    }

    case 5: {  //FLOAT
       /* auto flt=0;
        cout << "Podaj liczbe w FLOAT(liczbe z przecinkiem)-> "; cin >> flt;
        return flt;
        break*/
    }


    }
}