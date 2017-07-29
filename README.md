# c-sorting-algorithms

📦 A collection of sorting algorithms written in C.

## Table of contents

* [Why sorting algorithms?](#why-sorting-algorithms)
* [Why C?](#why-c)
* [Arguments](#arguments)
   * [arr](#arr)
   * [n](#n)
* [Time complexity](#time-complexity)
   * [Big O](#big-o)
* [Algorithms](#algorithms)

## <a name="why-sorting-algorithms"></a> Why sorting algorithms?

Most languages already have a sort method implemented in standard libraries, so why learn sorting algorithms?
 
Learning sorting algorithms teaches you algorithm design. You will learn how to use paradigms like [divide and conquer](https://en.wikipedia.org/wiki/Divide_and_conquer_algorithm), how to measure algorithm complexity and when to use different sorting algorithms to maximize efficiency.

## <a name="why-c"></a> Why C?

C is a low level high level language. It's close enough to the metal that we still have to consider memory management. Being able to see how we manage memory in the algorithm makes it easier to calculate the running time. At the same time it's a high level language, so the syntax is human readable. A lot of languages are based on C, so the syntax will be familiar to many developers.

## <a name="arguments"></a>Arguments

### <a name="arr"></a>arr

Array to be sorted. Arrays in C are [passed by reference](https://stackoverflow.com/a/1106977/4939630), so changes are made to the array in place.

### <a name="n"></a>n

Number of elements in `arr`. 

## <a name="time-complexity"></a> Time complexity

Time complexity is a way of measuring how long an algorithm takes to run.

It's important to consider how long an algorithm takes to run. A poorly written algorithm could take tens of thousands of times longer to finish than a well written algorithm. In production, that difference matters.

So how do we measure it?

Measuring the running time of an algorithm absolutely (i.e. in milliseconds), isn't useful because the amount of time varies between hardware. An algorithm could take 1200ms to complete on my machine, and 4000ms on a slow computer.

Instead, we measure the *relative* running time.

To do this, we count the number of operations performed in the algorithm.

### <a name="big-o"></a> Big O

Big O notation measures the relative time an algorithm takes to run given the worst case. In our sorting algorithms example, the worst case depends on the algorithm. It is whatever case would cause the algorithm to take the longest time to complete.

only cares about the big picture. Generally we only care about the rough running time.

Here's a table to use as a reference when looking through the algorithms in this project:

Big-O | Name | Description
------| ---- | -----------
**O(1)** | constant | **This is the best.** The algorithm always takes the same amount of time, regardless of how much data there is. Example: looking up an element of an array by its index.
**O(log n)** | logarithmic | **Pretty great.** These kinds of algorithms halve the amount of data with each iteration. If you have 100 items, it takes about 7 steps to find the answer. With 1,000 items, it takes 10 steps. And 1,000,000 items only take 20 steps. This is super fast even for large amounts of data. Example: binary search.
**O(n)** | linear | **Good performance.** If you have 100 items, this does 100 units of work. Doubling the number of items makes the algorithm take exactly twice as long (200 units of work). Example: sequential search.
**O(n log n)** | "linearithmic" | **Decent performance.** This is slightly worse than linear but not too bad. Example: the fastest general-purpose sorting algorithms.
**O(n^2)** | quadratic | **Kinda slow.** If you have 100 items, this does 100^2 = 10,000 units of work. Doubling the number of items makes it four times slower (because 2 squared equals 4). Example: algorithms using nested loops, such as insertion sort.
**O(n^3)** | cubic | **Poor performance.** If you have 100 items, this does 100^3 = 1,000,000 units of work. Doubling the input size makes it eight times slower. Example: matrix multiplication.
**O(2^n)** | exponential | **Very poor performance.** You want to avoid these kinds of algorithms, but sometimes you have no choice. Adding just one bit to the input doubles the running time. Example: traveling salesperson problem.
**O(n!)** | factorial | **Intolerably slow.** It literally takes a million years to do anything.

## <a name="algorithms"></a> Algorithms

- [Bubble sort](/bubble_sort.h)
- [Bucket sort](/bucket_sort.h)
- [Cocktail sort](/cocktail_sort.h)
- [Comb sort](/comb_sort.h)
- [Counting sort](/counting_sort.h)
- [Gnome sort](/gnome_sort.h)
- [Heap sort](/heap_sort.h)
- [Insertion sort](/insertion_sort.h)
- [Merge sort](/merge_sort.h)
- [Odd-even sort](/odd_even_sort.h)
- [Quick sort](/quick_sort.h)
- [Radix sort](/radix_sort.h)
- [Shell sort](/shell_sort.h)
- [Tree sort](/tree_sort.h)