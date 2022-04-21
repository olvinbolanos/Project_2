// Project 2 CPSC 351
#include <iostream>     // std::cout
#include <stdio.h>      // print out to terminal
#include <stdlib.h>
#include <algorithm>    // std::sort
#include <vector>       // std::vector
#include<time.h>        // srand() and rand()

int main (void) {
  int sz;
  printf("Enter the size of array::");
  scanf("%d",&sz);

  //int randArray[];
  std::vector<int> myvector(sz);        //  ask for random #
  //i=myvector.begin()+1;
  //int randArray[sz];

  int split_num = 1;
  srand(time(0));
  for (int i=0; i<myvector.size(); ++i) {
    myvector[i]=rand()%100;   //Generate number between 0 to 99
    std::cout << "\n Split # " << split_num++ << ": ";
    std::cout << "\nElement number " << myvector[i] << " ";
  }
  // using default comparison (operator <):

  std::sort (myvector.begin(), myvector.begin()+5);
  // using object as comp
  std::sort (myvector.begin() + 5, myvector.end());

  // using function as comp
  //std::sort (myvector.begin()+5, myvector.end());             // 12 32 45 71(26 33 53 80)

  // print out content:
  //for (auto elem:myvector){}
  /*
  std::cout << "myvector contains:";
  for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
    std::cout << " " << *it;
  std::cout << '\n';
  */
  // print out content:
  // First part of our program completed!! Woopie!!
  /*
  int counter = 0;
  int split_num2 = 1;
  for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it) {
      if(counter % 5 == 0) {
        std::cout << "\n Split # " << split_num2++ << ": ";
      }
    std::cout << *it << " ";
    counter++;
  }
  std::cout << '\n';
  */
  // print out content:
  // 1st round of our program the first round consists of two merges in parallel:
  // (Split #1 and Split #2) and (Split #3 and Split #4).!! Woopie!!
  int counter2 = 0;
  int sub_counter= 0;
  int split_num3 = 1;
  int split_num4 = 2;
  for (std::vector<int>::iterator j=myvector.begin(); j!=myvector.end(); ++j) {
      if(counter2 % 5 == 0) {
        if(sub_counter % 10 == 0) {
          std::cout << "\n Split # (" << split_num3++  << " + "<< split_num4 << "): ";
        }
      }
    std::cout << *j << " ";
    counter2++;
    sub_counter++;
  }
  std::cout << '\n';

  return 0;
}
