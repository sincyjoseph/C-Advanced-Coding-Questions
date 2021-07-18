Method 1 - Using two for loops to compare each character of a string with other characters. The time complexity of this approach is O(n2).
  
#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[100] = "cprograammingcodee";
    int len = strlen(str);
    int flag;
    
    /*Two loops to compare each character with other character*/
    for(int i=0; i<len; i++){
        flag=0;
        for(int j=0; j < len; j++){
            /*If it is equal and indexes is not same*/
            if((str[i]==str[j]) && (i != j)){
                flag=1;
                break;
            }
        }
        if(flag == 0){
            printf("First non-repeating character is %c", str[i]);
            break;
        }
    }
    if(flag == 1){
        printf("Did'nt find any non-repeating character");
    }
    return 0;
}
