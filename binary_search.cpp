int binarySearch(int array[], int low , int high, int item)
{
  if ( low <= high)
  {
  int mid = low + (high - low)/2;
  
  if ( array [mid] == item)
  {
      return mid;
  }
  if (array[mid] < item)
  {
    low = mid;
    return binarySearch(array, low, high, item); 
  }
  if (array[mid] > item)
  {
    high = mid-1;
    return binarySearch(array, low, high, item); 
  }
 }
   return -1;
}


int main(void)
{
	int arr[] = {2, 3, 4, 10, 40};
	int n = sizeof(arr)/ sizeof(arr[0]);
	int x = 10;
	int result = binarySearch(arr, 0, n-1, x);
	(result == -1)? printf("Element is not present"
									" in array")
			: printf("Element is present at "
								"index %d", result);
	return 0;
}
