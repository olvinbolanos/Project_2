# CPSC 351 Project_2 (200 Points)
Olvin Bolanos
### Write a C++ program to run a multi-threaded merge sort  ### algorithm using pthreads.

For the input data, you should generate random numbers within a limit. Let us say you generated n random numbers. Split your input of n numbers into p equal-sized (almost) segments. All but one segment will contain floor(n/p) numbers.

Let us say you generated n = 25 random numbers within a limit of 0 - 100:

77  89  18  47  43  60  32  28  42  52  1  52  83  65  55  6  39  65  62  12  33  40  19  53  46

Let p = 5.

The data will be split as:
