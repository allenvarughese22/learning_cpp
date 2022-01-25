#User function Template for python3

class Solution:
    ##Complete this function
    #Function to find the sum of contiguous subarray with maximum sum.
    def maxSubArraySum(self,arr,N):
        largest_array = []
        largest_sum = [arr[0]]


        for i in range(0,len(arr)):
    
            if sum(largest_array)<0 :
                largest_array = []
        
                largest_array.append(arr[i])
               # print("new_largest array",largest_array)
                if sum(largest_array)>= sum(largest_sum):
                    largest_sum = []
                    largest_sum.insert(0,sum(largest_array))
               # print('largest_sum', largest_sum)
               
       
            else:
                        
                largest_array.append(arr[i])
                if sum(largest_array)>= sum(largest_sum):
                    largest_sum = []
                    largest_sum.insert(0,sum(largest_array))
                #print('largest_sum', largest_sum)
        
        return largest_sum[-1]
          

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