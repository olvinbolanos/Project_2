// sort algorithm example
#include <stdio.h>      // print out to terminal
#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector

int main () {
  int myints[] = {32,71,12,45,26,80,53,33,13, 18};

  std::vector<int> myvector (myints, myints + 10);               // 32 71 12 45 26 80 53 33

  // using default comparison (operator <):
  std::sort (myvector.begin(), myvector.begin()+2);

  // using object as comp
  std::sort (myvector.begin() + 2, myvector.end());
  // using function as comp
  //std::sort (myvector.begin()+5, myvector.end());             // 12 32 45 71(26 33 53 80)



  // print out content:
  int counter = 0;
  int split_num = 1 ;
  for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it) {

    if(counter % 5 == 0) {
      std::cout << "\n Split # " << split_num++ << ": ";
    }
    std::cout << *it << " ";
    counter++;
  }
  std::cout << '\n';
  return 0;
}
