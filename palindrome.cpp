

bool isPalindrome(int x)
{
  int c=0,i;
    int*arr;
    arr=(int*)malloc(x* sizeof(int));
    if(x>=0)
    {
       while (x!=0)
       {
          arr[c]=x%10;
           x=x/10;
           c++;
       }
       for(i=0;i<c/2;i++)
       {
          if(arr[i]==arr[c-i-1]);
           {
            return true;
           }
           
       } 
    }
        else 
        {return false;
        }
    
    return true;
}
