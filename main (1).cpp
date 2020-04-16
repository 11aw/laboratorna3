/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

using namespace std;
void view(int* A, int length) {
 for (int i=0; i<length; i++) {
 cout << A[i] << " ";
 }
 cout << endl << endl;
}
void createFirst(int length){
    int *q = new int[length];
    for(int i = 0; i<length; i++){
        q[i] = rand()%29+1;
    }
    view(q, length);
}
void createSecond(int length){
    int *w = new int[length];
    for(int i = 0; i<length; i++){
       w[i] = rand()%11+1;
    }
    view(w, length);
}
void createThird(int length){
    int *e = new int[length];
    for(int i = 0; i<length; i++){
        e[i] = rand()%4+1999;
    }
    view(e, length);
}


int main()
{
    int length1 = 10;
    int length2 = 10;
    int length3 = 10;
    createFirst(length1);
    createSecond(length2);
    createThird(length3);
}
