# CPSC 351 Project_2 (200 Points)
Olvin Bolanos
### Write a C++ program to run a multi-threaded merge sort  ### algorithm using pthreads.

For the input data, you should generate random numbers within a limit. Let us say you generated n random numbers. Split your input of n numbers into p equal-sized (almost) segments. All but one segment will contain floor(n/p) numbers.

Let us say you generated n = 25 random numbers within a limit of 0 - 100:

77  89  18  47  43  60  32  28  42  52  1  52  83  65  55  6  39  65  62  12  33  40  19  53  46

Let p = 5.

The data will be split as:


Compile: clang++ -pthread multi_threaded_merge_sort.cpp -o test
Example Run: ./test 25 100 5

Enable multiple processors in the virtual machine, for example: 4.

Goal 1: From the command line, the program should read in the count of numbers to be sorted, n, upper limit on the range of numbers, u and the number of segments they will be divided in, p.

Goal 2: The main should generate n random numbers within a limit of 1 - u (inclusive). On different runs, a different set of random numbers should be generated.

Hint: Use functions rand and srand for this.

These random numbers should be stored in a global data structure: a dynamic array or an std::vector, called arr. This original array should be printed from main.

Goal 3: The input should be divided into p segments. Do not make new arrays for these segments. All but one segment will contain floor(n/p) numbers. The main should create p concurrent threads, one thread per segment. Each thread should call the same thread function, with its respective argument/s. In this function, the thread should sort its corresponding segment, using C++ sort() function. You should have the threads operate on the same original array, arr, although each thread operates on its respective segment. After each thread has sorted its respective segment, it should print from within its thread function “Sorted floor(n/p) (example) numbers”. And then in the next line, it should print the sorted segment of numbers.

You will encounter race conditions in this task, possibly at several places.
To solve it:
You should and are allowed to use mutex locks in thread function, such as pthread_mutex_lock and pthread_mutex_unlock.

 But most importantly you are allowed to use the mutex locks ONLY in the thread function. Care should be taken that using these mutex locks DOES NOT BREAK the condition of parallel sorting. In other words, the concurrent threads should be sorting their respective segments in parallel.


If you encounter race conditions in main, you are NOT allowed to use ANY pthread library synchronization primitives including but not limited to: semaphores, mutexes, mutex locks such as pthread_mutex_lock and pthread_mutex_unlock and conditional variables such as pthread_cond_wait and pthread_cond_signal etc. You should solve that race condition (if any) in main, using another way, such as C++ language constructs.
