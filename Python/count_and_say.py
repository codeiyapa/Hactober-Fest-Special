//Author : Naresh Kumar B
// Problem :Count and Say - Leetcode Problem

class Solution():
    def countAndSay(self, n):
        x = "1"
        if n == 1:
            return x
        elif n>1:
            for i in range(n-1):
                x = self.count(x)
            return x
                
    def count(self,x):
        temp = ""
        curr = ""
        count,j = 0,0
        while j<len(x):
            if curr =="":
                curr=x[j]
                count=1
                j+=1
            elif curr == x[j]:
                count+=1
                j+=1
            else:
                temp+= str(count) + curr
                curr=""
                count = 0
        temp+=str(count) + curr
        return temp
     