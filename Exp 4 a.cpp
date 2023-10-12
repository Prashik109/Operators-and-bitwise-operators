/*PRASHIK MAGHADE
PRN: 22070123109
Experiment no: 4(a)
*/


#include <iostream>
using namespace std;
int main(){
    int i= 68, j,set,reset;
    set = (68|8); // | --> Bitwise OR --> 0|1 = 1 --> Set means to convert 0 to 1 Bitwise OR
    reset= (68&191); // & --> Bitwise AND --> 0&1 = 0 , 1&1 = 1 --> Reset means to convert 1 to 0, using Bitwise AND
    cout<<"Value of set is: "<<set<<endl<<"Value of set is: "<<reset;
    return 0;
}
/*
Output:
Value of set is: 76
Value of set is: 4
*/
