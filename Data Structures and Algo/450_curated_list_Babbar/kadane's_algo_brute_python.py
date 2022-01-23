#**********imp*****************
#code running but giving time out error in python
#****************************

"""Given an array Arr[] of N integers. Find the contiguous sub-array
(containing at least one number) which
has the maximum sum and return its sum."""
#User function Template for python3

class Solution:
    ##Complete this function
    #Function to find the sum of contiguous subarray with maximum sum.
    def maxSubArraySum(self,ar,N):
        #initializing the array and index value
        s=[]
        start = 0
        end = 0
        #brute summation
        for j in range(len(ar)):
            
            sum_ar=0
            for i in range(j,len(ar)):
        
                sum_ar += ar[i]
                if len(s)>0:
                    
                    if sum_ar> max(s):
                        start = j
                        end = i
                    
                s.append(sum_ar)
        ans = [start,end]
        final_list=[]
        for i in range(ans[0],ans[1]+1):
            
            final_list.append(ar[i])
        return sum(final_list)

#{ 
#  Driver Code Starts
#Initial Template for Python 3

import math

 
def main():
        T=int(input())
        while(T>0):
            
            n=int(input())
            
            arr=[int(x) for x in input().strip().split()]
            
            ob=Solution()
            
            print(ob.maxSubArraySum(arr,n))
            
            T-=1


if __name__ == "__main__":
    main()
# } Driver Code Ends