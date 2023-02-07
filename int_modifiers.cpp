#include <iostream>

/**
 * This shows different modifiers for ints
 *
 * type                     size         range
 *
 * int	                    4 bytes	    -2147483648 to 2147483647 (both + - )
 * signed int               4 bytes	    -2147483648 to 2147483647 (both + - )
 * unsigned int             4 bytes	     0 to 4294967295 (+ only )
 *
 * short int                2 bytes	    -32768 to 32767 (both + - )
 * signed short int	        2 bytes	    -32768 to 32767 (both + - )
 * unsigned short int	    2 bytes	     0 to 65,535 (+ only )
 *
 * long int	                8 bytes	    -9223372036854775808 to 9223372036854775807
 * signed long int	        8 bytes	    -9223372036854775808 to 9223372036854775807
 * unsigned long int	    8 bytes	     0 to 18446744073709551615
 * long long int	        8 bytes	     -(2^63) to (2^63)-1
 * unsigned long long int	8 bytes	     0 to 18,446,744,073,709,551,615
 */


int main() {

    //int

    int a{100};
    int b{-100};

    /* signed and unsigned automatically infers that type to be int
     *
     * signed int x; can be written as signed x;
     * unsigned int x; can be written as unsigned x;
     */

    signed c{200};
    signed d{-200};

    unsigned e{300};
    //unsigned f{-300}; //Compile error (narrowing conversion of '-20' from 'int' to 'unsigned int')

    //Check how much memory it takes to store the value
    std::cout<<"Size of int "<< sizeof(a) <<std::endl;
    std::cout<<"Size of signed int "<< sizeof(c) <<std::endl;
    std::cout<<"Size of unsigned int "<< sizeof(e) <<std::endl;
    std::cout<<std::endl;

    //short

    short a1{10};
    short b1{-10};

    /* short automatically infers that type to be int
     *
     * short int x; can be written as short x;
     */

    short signed c1{20};
    short signed d1{-20};

    short unsigned e1{30};


    //Check how much memory it takes to store the value
    std::cout<<"Size of short int "<< sizeof(a1) <<std::endl;
    std::cout<<"Size of short signed int "<< sizeof(c1) <<std::endl;
    std::cout<<"Size of short unsigned int "<< sizeof(e1) <<std::endl;
    std::cout<<std::endl;

    //long

    long a2{100000};
    long b2{-100000};

    /* long automatically infers that type to be int
     *
     * long int x; can be written as long x;
     */

    long signed c2{200000};
    long signed d2{-200000};
    long unsigned e2{300000};

    long long f2{400000};
    long long signed g2{400000};
    long long unsigned h2{400000};

    //Check how much memory it takes to store the value
    std::cout<<"Size of long int "<< sizeof(a2) <<std::endl;
    std::cout<<"Size of long signed int "<< sizeof(c2) <<std::endl;
    std::cout<<"Size of long unsigned int "<< sizeof(e2) <<std::endl;
    std::cout<<std::endl;
    std::cout<<"Size of long long  int "<< sizeof(f2) <<std::endl;
    std::cout<<"Size of long long signed int "<< sizeof(g2) <<std::endl;
    std::cout<<"Size of long long unsigned int "<< sizeof(h2) <<std::endl;
    std::cout<<std::endl;


    return 0;
}

