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

  printf("\nElements of the array::");

  /*
  for(i=0;i<sz;i++)
  {
    printf("\nElement number %d::%d",i+1,myvector[i]);
  }
  */
  // using default comparison (operator <):
  /*
  std::sort (myvector.begin(), myvector.begin()+5);
  // using object as comp
  std::sort (myvector.begin() + 5, myvector.end());
  */
  // using function as comp
  //std::sort (myvector.begin()+5, myvector.end());             // 12 32 45 71(26 33 53 80)

  // print out content:
  std::cout << "myvector contains:";
  for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
    std::cout << "\n " << *it;
  std::cout << '\n';
  // print out content:
  /*
  int counter = 0;
  int split_num = 1;
  int split_num2 = 2;
  for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it) {
      if(counter % 5 == 0) {
        std::cout << "\n Split # " << split_num++ << ": ";
      } else if(counter % 10 == 0) {
        std::cout << "\n Split # " << split_num++ << ": ";
      }
    std::cout << *it << " ";
    counter++;
  }
  std::cout << '\n';
*/
  return 0;
}
