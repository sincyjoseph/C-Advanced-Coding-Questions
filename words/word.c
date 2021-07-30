Implement function sort_words that sorts an array of words that contain lowercase characters from english alphabet, in descending order, and is efficient with respect to time used.

For example, the array { "cherry", "orange", "apple" } should, after sorting, become { "orange", "cherry", "apple" }.
  
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void sort_words(char *words[], int count)
{
    // Waiting to be implemented
    char *x;
    
    for (int i=0; i<count; i++)
    {
        for(int j=i+1; j<count; j++)
        {
            if((char)(*words[i]) < (char)(*words[j]))
            {
                x = words[j];
                words[j] = words[i];
                words[i] = x;
            }
        }
    }
}

#ifndef RunTests
int main()
{
    char *words[] = { "cherry", "orange", "apple" };

    sort_words(words, 3);

    for (int i = 0; i < 3; i++)
    {
        printf("%s ", words[i]);
    }
}
#endif
