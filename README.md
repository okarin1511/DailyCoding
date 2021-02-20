# DailyCoding

### DAY-1:

#### Problem: Numbers with exactly 3 divisors

Given a number N, print all numbers in the range from 1 to N having exactly 3 divisors. 
##### https://www.geeksforgeeks.org/numbers-exactly-3-divisors/

### My Solution:

You can find my solution [here](https://github.com/okarin1511/DailyCoding/tree/main/Day-1)

Expected Time Complexity: O(n^2/2)

Expected Auxiliary Space: O(1)
#

### DAY-2:

#### Problem: Modular multiplicative inverse

Given two integers ‘a’ and ‘m’, find modular multiplicative inverse of ‘a’ under modulo ‘m’.
The modular multiplicative inverse is an integer ‘x’ such that. 

a x ≅ 1 (mod m)
The value of x should be in {0, 1, 2, … m-1}, i.e., in the range of integer modulo m.
The multiplicative inverse of “a modulo m” exists if and only if a and m are relatively prime (i.e., if gcd(a, m) = 1).

##### https://www.geeksforgeeks.org/multiplicative-inverse-under-modulo-m/

### My Solution:

You can find my solution [here](https://github.com/okarin1511/DailyCoding/tree/main/Day-2)

Expected Time Complexity: O(m)

Expected Auxiliary Space: O(1)
#

### DAY-3:

#### Problem: Find the first repeating element in an array of integers

Given an array of integers, find the first repeating element in it. We need to find the element that occurs more than once and whose index of first occurrence is smallest. 

##### https://www.geeksforgeeks.org/find-first-repeating-element-array-integers/

### My Solution:

You can find my solution [here](https://github.com/okarin1511/DailyCoding/tree/main/Day-3)

Expected Time Complexity: O(n^2-n)

Expected Auxiliary Space: O(1)
#

### DAY-4:

#### Problem: Rearrange an array so that arr[i] becomes arr[arr[i]] with O(1) extra space

Given an array arr[] of size n where every element is in range from 0 to n-1. Rearrange the given array so that arr[i] becomes arr[arr[i]]. This should be done with O(1) extra space. 

##### https://www.geeksforgeeks.org/rearrange-given-array-place/

### My Solution:

You can find my solution [here](https://github.com/okarin1511/DailyCoding/tree/main/Day-4)

Expected Time Complexity: O(n)

Expected Auxiliary Space: O(1)
#

### DAY-5: 

#### Problem: Trapping Rain Water

Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.

##### https://www.geeksforgeeks.org/trapping-rain-water/

### My Solution:

You can find my solution [here](https://github.com/okarin1511/DailyCoding/tree/main/Day-5)

Expected Time Complexity: O(N)

Expected Auxiliary Space: O(N)

Constraints:

3 <= N <= 107

0 <= Ai <= 108
#

### DAY-6: 

#### Problem: Merge two sorted arrays with O(1) extra space

We are given two sorted arrays. We need to merge these two arrays such that the initial numbers (after complete sorting) are in the first array and the remaining numbers are in the second array. Extra space allowed in O(1).

##### https://www.geeksforgeeks.org/merge-two-sorted-arrays-o1-extra-space/

### My Solution:

You can find my solution [here](https://github.com/okarin1511/DailyCoding/tree/main/Day-6)

Expected Time Complexity:  O((n+m) log(n+m))

Expected Auxilliary Space: O(1)
 
Constraints:

1 <= X, Y <= 5*104

0 <= arr1i, arr2i <= 109
#

### DAY-7: 

#### Problem: Search an element in a sorted and rotated array

An element in a sorted array can be found in O(log n) time via binary search. But suppose we rotate an ascending order sorted array at some pivot unknown to you beforehand. So for instance, 1 2 3 4 5 might become 3 4 5 1 2. Devise a way to find an element in the rotated array in O(log n) time.

##### https://www.geeksforgeeks.org/search-an-element-in-a-sorted-and-pivoted-array/

### My Solution:

You can find my solution [here](https://github.com/okarin1511/DailyCoding/tree/main/Day-7)

Expected Time Complexity: O(log N).

Expected Auxiliary Space: O(1).

Constraints:

1 ≤ N ≤ 107

0 ≤ Ai ≤ 108

1 ≤ K ≤ 108
#

### DAY-8: 

#### Problem: Merge Sort

Like QuickSort, Merge Sort is a Divide and Conquer algorithm. It divides the input array into two halves, calls itself for the two halves, and then merges the two sorted halves. The merge() function is used for merging two halves. The merge(arr, l, m, r) is a key process that assumes that arr[l..m] and arr[m+1..r] are sorted and merges the two sorted sub-arrays into one. See the following C implementation for details.

##### https://www.geeksforgeeks.org/merge-sort/

### My Solution:

You can find my solution [here](https://github.com/okarin1511/DailyCoding/tree/main/Day-8)

Expected Time Complexity: O(n) (Only for the merge() function)

Expected Auxiliary Space: O(n)
#

### DAY-9: 

#### Problem: Union of two sorted arrays

Given two sorted arrays, find their union

##### https://www.geeksforgeeks.org/union-and-intersection-of-two-sorted-arrays-2/

### My Solution:

You can find my solution [here](https://github.com/okarin1511/DailyCoding/tree/main/Day-9)

Expected Time Complexity: O(n+m)

Expected Auxiliary Space: O(n+m)
#

### DAY-10: 

#### Problem: Intersection of two sorted arrays

Given two sorted arrays, find their intersection

##### https://www.geeksforgeeks.org/union-and-intersection-of-two-sorted-arrays-2/

### My Solution:

You can find my solution [here](https://github.com/okarin1511/DailyCoding/tree/main/Day-10)

Expected Time Complexity: O(n+m)

Expected Auxiliary Space: O(n+m)
#

### DAY-11: 

#### Problem: Minimum number of swaps required to sort an array

Given an array of n distinct elements, find the minimum number of swaps required to sort the array. 

##### https://www.geeksforgeeks.org/minimum-number-swaps-required-sort-array/

### My Solution:

You can find my solution [here](https://github.com/okarin1511/DailyCoding/tree/main/Day-11)

Expected Time Complexity: O(nlogn) 

Expected Auxiliary Space: O(n)
#

### DAY-12: 

#### Problem: Repeatedly search an element by doubling it after every successful search

Given an array “a[]” and integer “b”. Find whether b is present in a[] or not. If present, then double the value of b and search again. We repeat these steps until b is not found. Finally we return value of b.

##### geeksforgeeks.org/repeatedly-search-element-doubling-every-successful-search/

### My Solution:

You can find my solution [here](https://github.com/okarin1511/DailyCoding/tree/main/Day-12)

Expected Time Complexity: O(n) 

Expected Auxiliary Space: O(n)
#

### DAY-13: 

#### Minimum Number of Platforms Required for a Railway/Bus Station.

Given arrival and departure times of all trains that reach a railway station, the task is to find the minimum number of platforms required for the railway station so that no train waits.

##### https://www.geeksforgeeks.org/minimum-number-platforms-required-railwaybus-station/

### My Solution:

You can find my solution [here](https://github.com/okarin1511/DailyCoding/tree/main/Day-13)

Expected Time Complexity: O(nlogn) 

Expected Auxiliary Space: O(n)
#

### DAY-14: 

#### Median of two sorted arrays of different sizes

Given two sorted arrays, a[] and b[], the task is to find the median of these sorted arrays, in O(log n + log m) time complexity, when n is the number of elements in the first array, and m is the number of elements in the second array. 

##### https://www.geeksforgeeks.org/median-of-two-sorted-arrays-of-different-sizes/

### My Solution:

You can find my solution [here](https://github.com/okarin1511/DailyCoding/tree/main/Day-14)

Expected Time Complexity: O(n*m) 

Expected Auxiliary Space: O(1)
#

### DAY-15: 

#### Median of two sorted arrays of different sizes

Given an array A[] consisting 0s, 1s, and 2s. The task is to write a function that sorts the given array. The functions should put all 0s first, then all 1s and all 2s in last.  

##### http://geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/

### My Solution:

You can find my solution [here](https://github.com/okarin1511/DailyCoding/tree/main/Day-15)

Expected Time Complexity: O(n) 

Expected Auxiliary Space: O(1)
#

### DAY-16: 

#### Different Operations on Matrices 

Perform arithmetic operations on 2 given matrices. 

##### https://www.geeksforgeeks.org/different-operation-matrices/

### My Solution:

You can find my solution [here](https://github.com/okarin1511/DailyCoding/tree/main/Day-16)
#


### DAY 17:

#### Minimise the maximum difference of adjacent elements after at most k insertions

Given an array of N elements, the task is to minimize the maximum difference of adjacent elements by inserting at most K elements in the array. 

##### https://www.geeksforgeeks.org/minimize-the-maximum-difference-of-adjacent-elements-after-at-most-k-insertions/

### My Solution: 

You can find my solution [here](https://github.com/okarin1511/DailyCoding/tree/main/Day-17)
#

### DAY 18:

#### Determinant of a matrix

Given a matrix of N size, the task is to find the determinant of the matrix. 

##### https://www.geeksforgeeks.org/determinant-of-a-matrix/

### My Solution: 

You can find my solution [here](https://github.com/okarin1511/DailyCoding/tree/main/Day-18)
#

### DAY 19:

#### Find the transpose of a matrix

Given a matrix of N size, the task is to find the transpose of the matrix. 

https://www.geeksforgeeks.org/program-to-find-transpose-of-a-matrix/

### My Solution: 

You can find my solution [here](https://github.com/okarin1511/DailyCoding/tree/main/Day-19)
#

### DAY 20:

#### Rotate a matrix by 90 degree in clockwise direction without using any extra space

Given a square matrix, turn it by 90 degrees in clockwise direction without using any extra space.

https://www.geeksforgeeks.org/rotate-a-matrix-by-90-degree-in-clockwise-direction-without-using-any-extra-space/

### My Solution: 

You can find my solution [here](https://github.com/okarin1511/DailyCoding/tree/main/Day-20)

#

