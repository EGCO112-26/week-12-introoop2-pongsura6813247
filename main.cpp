#include <iostream>
using namespace std;

#include "student.h"

int main(int argc, char* argv[]) {

    int N = (argc - 1) / 2;
    student a[N];
  // Set age and set name for the first two ppl
    int i, age;
    string n;
   // 1. Ask for N names and N age using cin

  int index = 1;
  for (i=0;i<N;i++){
    n = argv[index++];
    a[i].set_name(n);

    age = stoi(argv[index++]);
    a[i].set_age(age);
  }

  //2. Print name and age of all N ppl
  cout << "----------"<<endl;
  for(i=0;i<N;i++){
    a[i].display();
  }

  
  
  
  //3. Print name and age of 
  //the youngest person
  //Find what the age of the youngest person
 int youngest=a[0].get_age();
    for (i=1;i<N;i++){
        if(a[i].get_age() < youngest){
          youngest=a[i].get_age();
        }
    }

    //sort(a,N);
  
  // Print all info for the yougest person
 
  
  
  //4. Change input from cin to argv

  cout << "Youngest student" << endl;
    for (i = 0; i < N; i++) {
        if (a[i].get_age() == youngest) {
            a[i].display();
        }
    }

    return 0;
    
  }