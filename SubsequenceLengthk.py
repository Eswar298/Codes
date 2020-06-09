Sum of all subsequences of length K
Given an array arr[]and an integer K, the task is to find the sum of all K length subsequences from the given array.

Example:

Input: arr[] = {2, 3, 4}, K = 2
Output: 18
Explanation:
There are 3 possible subsequences of length 2 which are {2, 3}, {2, 4} and {3, 4}
The sum of all 2 length subsequences is 5 + 6 + 7 = 18

To solve the problem mentioned above we have to consider all K length subsequence that is “n choose k”, i.e.  nCk .

The count of total element in all K length subsequences is k * nCk, possibility of appearing of each element is same.
So each element appears ((k * nCk) / n ) times and it contributes arr[i] * ( (k*nCk)/n )  in the result.
Hence, the sum of all K length subsequence is sum(array) * ( (k * nCk) / n )

# Python3 implementation to find sum 
# of all subsequences of length K 

# Function to find nCr 
def nCr(n, r): 
	
	return fact(n) / (fact(r) *
					fact(n - r)) 

# Function that returns 
# factorial of n 
def fact(n): 
	
	res = 1
	for i in range(2, n + 1): 
		res = res * i 
	return res 
	
# Function for finding sum 
# of all K length subsequences 
def sumSubsequences(arr, n, k): 
	
	sum = 0
	
	# Calulate the sum of array 
	for i in range(0, n): 
		sum = sum + arr[i] 
	
	# Calculate nCk	 
	kLengthSubSequence = nCr(n, k) 
	ans = sum * ((k * kLengthSubSequence) / n); 
	
	# Return the final result 
	return ans 

# Driver Code 
arr = [ 7, 8, 9, 2 ] 
k = 2
n = len(arr) 

print(sumSubsequences(arr, n, k)) 

