#include<iostream>
#include <climits>
using namespace std;

// FOR THE SECOND LARGEST ELEMENT 

// OPTIMAL APPROACH -> initialize the largest and slargest with int_min and then run the for loop so that if arr[i]>largest then slargest =largest and largest =arr[i]
// or else if condition such that if arr[i]>slargest && arr[i]!=largest then slargest = arr[i] so that return the slargest 
int secondlargestelement(int arr[],int n){
 if(n<2)
	return -1;
    int largest=INT_MIN,SLargest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]> largest){
            SLargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>SLargest && arr[i]!=largest){
            SLargest=arr[i];
        };

    };
    return SLargest;
}

// For second smallest element
// OPTIMAL APPROACH -> SAME AS ABOVE BUT IN PLACE OF SLARGEST WE USED AND CHANGE THE CONDITION ACCORDINGLY FOR THE SSMALEST ELEMENT

int secondsmallestelement(int arr[],int n){
    if(n<2)
    return -1;
    int smallest = INT_MAX, ssmallest = INT_MAX;
    for(int i=0;i<n;i++){
        if(smallest>arr[i]){
            ssmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]<ssmallest && arr[i] != smallest){
            ssmallest=arr[i];
        }
    }
    return ssmallest;
}

int main(){
    int arr[]={3,5,6,1,9};
    int n=6;
    cout<<"Second largest element in the array is:"<<secondlargestelement(arr,n)<<endl;
    cout<<"Second smallest element in the array is:"<<secondsmallestelement(arr,n);
    return 0;

}

// BRUTE FORCE APPROACH ->[this approach only works if there are no duplicates]
// Intuition:
// What do we do to find the largest or the smallest element present in an array? We ideally sort them and the first element would be the smallest of all while the last element would be the largest. Can we find the second-smallest and second-largest using a similar approach?

// Approach:
// Sort the array in ascending order
// The element present at the second index is the second smallest element
// The element present at the second index from the end is the second largest element

// Time Complexity: O(NlogN), For sorting the array
// Space Complexity: O(1)








// BETTER APPROACH ->Intuition:
// Even though we want to have just the second smallest and largest elements, we are still sorting the entire array for that and thus increasing the time complexity. Can we somehow try to not sort the array and still get our answer?

// Approach:
// Find the smallest and largest element in the array in a single traversal
// After this, we once again traverse the array and find an element that is just greater than the smallest element we just found.
// Similarly, we would find the largest element which is just smaller than the largest element we just found
// Indeed, this is our second smallest and second largest element.

// Complexity Analysis

// Time Complexity: O(N), We do two linear traversals in our array

// Space Complexity: O(1)









// OPTIMAL APPROACH -> Intuition:
// In the previous solution, even though we were able to bring down the time complexity to O(N), we still needed to do two traversals to find our answer. Can we do this in a single traversal by using smart comparisons on the go?

// Approach:
// We would require four variables: small,second_small, large, and second_large. Variable small and second_small are initialized to INT_MAX while large and second_large are initialized to INT_MIN.

// Second Smallest Algo:

// If the current element is smaller than ‘small’, then we update second_small and small variables
// Else if the current element is smaller than ‘second_small’ then we update the variable ‘second_small’
// Once we traverse the entire array, we would find the second smallest element in the variable second_small.
// Here’s a quick demonstration of the same.
// Second Largest Algo:

// If the current element is larger than ‘large’ then update second_large and large variables
// Else if the current element is larger than ‘second_large’ then we update the variable second_large.
// Once we traverse the entire array, we would find the second largest element in the variable second_large.
// Here’s a quick demonstration of the same.

// Time Complexity: O(N), Single-pass solution

// Space Complexity: O(1)

