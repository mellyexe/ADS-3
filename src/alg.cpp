// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int count = 0;
  int left = 0, right = size-1;
  int mid = 0;

  while (left <= right) {
    mid = (left + right) / 2;
    if (arr[mid] == value) {
	    count++;
	    int temp = mid - 1;
	    while (temp >= left && arr[temp] == value) {
	      count++;
        temp--;
      }
      temp = mid + 1;
      while (temp <= right && arr[temp] == value) {
        count++;
        temp++;
      }
      return count;
    }
    else if (arr[mid] < value)
      left = mid + 1;
    else if (arr[mid] > value)
      right = mid - 1;
  }
  return 0;
}
