int bsearch(int *array, int n, int item)
{
  // Discard zero array
    if (n <= 0)
        return -1;
 
    int low = 0;
    int high = n-1;      
     
  return bsearch_util(array, low, high, item); 
}


int bsearch_util(int array[], int low , int high, int item)
{
  mid = (low + (high - low))/2;
  
  if ( array [mid] == item)
  {
      return mid;
  }
  if (array[mid] < item)
  {
    low = mid;
    return bsearch_util(array, low, high, item); 
  }
  if (array[mid] > item)
  {
    high = mid;
    return bsearch_util(array, low, high, item); 
  }
  
   return -1;
}
