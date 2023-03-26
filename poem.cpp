/** 
* Spring 2023 - Lab 09
* Last name: Cataluna
* First name: Kert Harvey
* GitHub username: kertharv
* Instructor: Genady Maryash
* Recitation Instructor: Prof. Zamansky
*/

#include <iostream>
using namespace std;

string * createAPoemDynamically() 
{
    string *p = new string;
    *p = "Roses are red, violets are blue";
    return p;
}

int main() 
{
    while(true) {
        string *p;
        p = createAPoemDynamically();

        // assume that the poem p is not needed at this point
        delete p;
    }
}