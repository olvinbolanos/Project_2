// Project 2 CPSC 351
#include <iostream>     // std::cout
#include <pthread.h>    // calls thread_func
#include <stdio.h>      // print out to terminal
#include <stdlib.h>
#include <algorithm>    // std::sort
#include <vector>       // std::vector
#include<time.h>        // srand() and rand()

void *thread_func(void *arg){
  int j = 0;
    for (int i= 0; i< 10; i++) {
         j++;
   }
   printf("j is %d\n", j);
   pthread_exit(0);
}


int main (int argc, char* argv[]) {
  // make sure to check parameters == 3
  int term_counter;
  printf("Program Name Is: %s",argv[0]);
    if(argc<=2)
        printf("\nNo Extra Command Line Argument Passed Other Than Program Name");
    if(argc==3) {
      printf("\nNumber Of Arguments Passed: %d",argc);
        printf("\n----Following Are The Command Line Arguments Passed----");
        for(term_counter=0;term_counter<argc;term_counter++)
            printf("\nargv[%d]: %s",term_counter,argv[term_counter]);
    }

  pthread_t p1, p2, p3;
  int sz = atoi(argv[1]);
  int random_range = atoi(argv[2]);
  int split_arr_num = atoi(argv[3]);
  pthread_attr_t attr; /* Set of thread attributes */
  /* get the default attributes */
  pthread_attr_init(&attr);
  //printf("Enter the size of array::");
  //scanf("%d",&sz);

  //int randArray[];
  std::vector<int> myvector(sz);        //  ask for random #
  //i=myvector.begin()+1;
  //int randArray[sz];

  int split_num = 1;
  srand(time(0));
  for (int i=0; i<myvector.size(); ++i) {
    myvector[i]=rand()%random_range;   //Generate number between 0 to 99
    std::cout << "\n Split # " << split_num++ << ": ";
    std::cout << "\nElement number " << myvector[i] << " ";
  }
  // using default comparison (operator <):

  std::sort (myvector.begin(), myvector.begin()+split_arr_num);
  // using object as comp
  std::sort (myvector.begin() + split_arr_num, myvector.end());

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
  // end of first part


  // for the last part print out an array that will accumulate all the
  // times the for loop is used and push in the amount and print out
  // and print out using + values '+'
  // print out content:
  // 1st round of our program the first round consists of two merges in parallel:
  // (Split #1 and Split #2) and (Split #3 and Split #4).!! Woopie!!

  int counter2 = 0;
  int sub_counter= 0;
  int split_num3 = 1;
  int split_num4 = 2;
  for (std::vector<int>::iterator j=myvector.begin(); j!=myvector.end(); ++j) {
      if(counter2 % 10 == 0) {  // will get
        std::cout << "\n Split # (" << split_num3  << " + "<< split_num4 << "): ";
        split_num3 += 2;
        split_num4 += 2;
      }

    std::cout << *j << " ";
    counter2++;
    sub_counter++;
    //split_num4 += 2;
  }
  std::cout << '\n';

  return 0;
}
