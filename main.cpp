
#include <iostream>

using namespace std;
void view(int* A) {
 for (int i=0; i<3; i++) {
 cout << A[i] << ".";
        }
 cout << endl << endl;
        }
int* randomDate(){
    int *a = new int[3];
    a[0]=rand()%29+1;
    a[1] = rand()%12+1;
    a[2] = rand()%45+1975;
    return a;
        }

int main()
  {
    int *random =randomDate();
    int *birth = new int[3];
    cout<<"Enter day, month and year: " << endl;
    for(int i = 0; i<3; i++){
        cin >> birth[i];
        }
    cout<<endl;
    view(random);
    view(birth);
    if(random[0]==birth[0]&random[1]==birth[1]&random[2]==birth[2]){
        cout << "You're lucky!";
        }
    else{
        cout<<"wrong";
    }
    
}

