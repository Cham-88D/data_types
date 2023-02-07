#include <iostream>

/**
 * This program shows usage of char types
 * char, wchar_t, char8_t, char16_t, and char32_t
 * char type technically stores integers and not characters
 * char8_t is new with c++  20      8 bit
 * char_16 can store UTF-16        16 bit
 * char_32 can store UTF-32        32 bit
 * wchar_t  in the Microsoft compiler, it represents a 16-bit wide character used to store Unicode encoded as UTF-16LE  16bit
 * signed char    (-128 - 127)     8bit
 * unsigned char  (0-255)          8bit
 * char8_t, char16_t, and char32_t are unsigned char  types
 */

int main(){

    char ch1 {'a'}; // char ch1{u8'a'};
    wchar_t  ch2{ L'b' };
    char16_t ch3{ u'c' };
    char32_t ch4{ U'd' };
    char8_t  ch5{u8'e'};
    unsigned char ch6{65}; // ASCII character code for 'A'
    signed char ch7{-65};

    std::cout<< ch1 << std::endl;
    std::cout<< ch6 <<std::endl;
    std::cout<< ch7 <<std::endl;

    //std::wcout only for wchar_t
    std::wcout << ch2 << std::endl;


    //we can use static casting or unary + or unsigned int()  to print int values of  wchar_t,char8_t, char16_t, and char32_t
    std::cout << +ch3 << std::endl;
    std::cout << static_cast<unsigned int>(ch4) << std::endl;
    std::cout << unsigned(ch5) << std::endl;


    std::cout << std::endl;

    char value = 65 ; // ASCII character code for 'A'
    std::cout << "value : " << value << std::endl; //print character  A
    std::cout << "value(int) : " << static_cast<int>(value) << std::endl; //print int value


    //size of char in bytes

    //One byte in memory : 2^8 = 256 different values (0 ~ 255)

    std::cout << std::endl;
    std::cout<<"size of char "<< sizeof(char )<<std::endl;
    std::cout<<"size of char "<< sizeof(wchar_t )<<std::endl;
    std::cout<<"size of char "<< sizeof(char8_t )<<std::endl;
    std::cout<<"size of char "<< sizeof(char16_t )<<std::endl;
    std::cout<<"size of char "<< sizeof(char32_t )<<std::endl;




    return 0;
}