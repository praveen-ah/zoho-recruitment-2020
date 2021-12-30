#include<stdio.h>
#include<string.h>
int main()
{
  char word[100],temp[100];
  int len, in_len, mid,k=0;

  printf("Enter the word: ");
  scanf("%s",word);
  
  len = strlen(word);
  in_len = strlen(word);
  mid=len/2;

  for(int i=mid;i<len;i++)
  {
    temp[k++] = word[i];
  }
  for(int i=0;i<len;i++)
  {
    temp[k++] = word[i];
  }

  for(int i=0;i<len;i++)
  {
    k=0;
    for(int j=0;j<len;j++)
    {
      if(j < in_len-1)
      printf(" ");
      if(j >= in_len-1)
      printf("%c",temp[k++]);
    }
    in_len--;
    printf("\n");
  }
 
    return 0;   
}
