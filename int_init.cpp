#include <iostream>

/**
 * This shows 3 types of integer initialization methods
 * (These also can be used for float and double)
 * 1) Braced initialization
 * 2) Functional initialization
 * 3) Assignment  initialization
 */

int main() {

    int data; // this variable  might contain garbage value

    //Braced initialization

     int data1{}; // {}  initials to 0 or integer value can be given
     int data2{10}; // {10}  initials to 10
     int a{data1+data2}; // this way also applicable

  /* int data3{1.5};
   * In braced initialization values with decimal points should not be given.
   * It leads to a compile-time error (error: narrowing conversion of '1.5e+0' from 'double' to 'int' )
   */

    //Functional initialization

   /* int data4();
    * ()  initials to 1 or integer value can be given
    * Rather than using empty () it is good to use  int data4(0);
    */

      int data5(10); // (10)  initials to 10
      int data6(1.5);
   /* Implicit conversion from 'double' to 'int' changes value from 1.5 to 1
    * Less-safer than Braced initialization due to info loss
    */

   /* int b(data4+data5);
    * this way also applicable
    * How-ever in this situation  functional initialization cause a compile-time error (pointer to a function used in arithmetic)
    * before using data4() it should be like data4(0)
    */

      int data4(0);
      int b(data4+data5);


      //Assignment  initialization

      int data7 = 100;
      int data8 = 2;
      int data9 = data7+data8;
      int c = 2.9; //Implicit conversion from 'double' to 'int' changes value from 2.9 to 2


      return 0;
}
