A Milkman serves milk in packaged bottles of varied sizes. The possible size of the bottles are {1, 5, 7 and 10} litres. 
He wants to supply the desired quantity using as fewer bottles as possible irrespective of the size. 
Your objective is to help him find the minimum number of bottles required to supply the given demand for milk.
  
Input Format:
The first line contains the number of test cases N
Next N lines, each contains a positive integer Li which corresponds to the demand of milk.

Output Format:
For each input Li, print the minimum number of bottles required to fulfill the demand

Constraints:
1 <= N <= 1000 Li > 0 1 <= i <= N


Sample Input and Output:
2
17
65     
2    7 

Explanation:

Number of test cases is 2

For 17 = 10*1 + 7*1 = 2

For 65 = 10*6 + 5*1 = 7

Few more examples:

For 99 = 10*9 + 7*1 + 1*2 = 12

For 63 = 10*6 + 1*3 =9
  

Solution:

#include <stdio.h>
int main()
{
 int n,b=0,i,m,s=0;
 scanf("%d",&m);
 for( i=0;i<m;i++)
 {
 scanf("%d",&n);
 b=n/10;
 n=n%10;
 s=s+b;
 b=0;
 b=n/7;
 n=n%7;             
 s=s+b;
 b=0;
 b=n/5;
 n=n%5;
 s=s+b;
 b=0;
 b=n/1;
 s=s+b;
 printf("%d\n",s);
 s=0;
 b=0;
 }
 return 0;
}
