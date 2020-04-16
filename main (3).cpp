/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <time.h>
using namespace std;
void view(const int*, int);
void createVect(int*&, int); 
void view(const int* X, int size) {
 cout << "Масив " << endl;
 for (int i=0; i<size; i++) {
 cout << X[i] << '\t';
 }
 cout << endl << endl;
}

void createVect(int*&X, int size) {
 srand((time(NULL)));
 for(int i=0; i<size; i++)
 X[i] = rand()%20-10;
}
//Варіант 26+4(6)
int maxElem(int* x, int size){
    int max = 0;
    for(int i = 0; i<size; i++){
        if(x[i]>max){
            max=x[i];
        }
    }
    return max;
}

int main() {
 int n;
 int *pA, *pB, *pC;
 cout << "Set the number of elements ->";
 cin >> n;
 pA = new int[n];
 createVect(pA, n); 
 view(pA, n); 
 cout<<"maxElem: " << maxElem(pA, n) << endl;
 cout << "Set the number of elements ->";
 cin >> n;
 pB = new int[n];
 createVect(pB, n);
 view(pB, n);
 cout<<"maxElem: " << maxElem(pB, n)<< endl;
 cout << "Set the number of elements ->";
 cin >> n;
 pC = new int[n];
 createVect(pC, n);
 view(pC, n);
 cout<<"maxElem: " << maxElem(pC, n)<< endl;
 delete []pA; 
 delete []pB;
 delete []pC;
 return 0;
}