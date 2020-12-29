#include <iostream>
#include <time.h>
#include <random>

using namespace std;

class Sort
{
public:
  void bubble (int arr[], int n)
  {
    int new;
    for (int i = 0; i < n - 1; i++)
      {
	for (int j = 0; j < n - i - 1; j++)
	  {
	    if (arr[j] > arr[j + 1])
	      {
		new = arr[j];
		arr[j] = arr[j + 1];
		arr[j + 1] = new;
	      }
	  }
      }
    for (i = 0; i < n; i++)
      {
	cout << arr[i] << " ";
      }
  }

  void inserts (int arr[], int n)
  {
    int new, last;
    for (int i = 1; i < n; i++)
      {
	new = arr[i];
	last = i - 1;
	while (last >= 0 && arr[last] > new)
	  {
	    arr[last + 1] = arr[last];
	    arr[last] = new;
	    last = last - 1;
	  }
      }
    for (i = 0; i < n; i++)
      {
	cout << arr[i] << " ";
      }
  }

  void merger (int arr[], int n, int new)
  {
      new=0;
      if (n <= new)
        return;
    int mid = new + (n - new) / 2;
    SortUnsorted(arr, new, mid);
    SortUnsorted(arr, mid + 1, n);

    int[] buf = Arrays.copyOf(arr, arr.length);

    for (int k = new; k <= n; k++)
        buf[k] = arr[k];

    int i = new, j = mid + 1;
    for (int k = new; k <= n; k++) {

        if (i > mid) {
            arr[k] = buf[j];
            j++;
        } else if (j > n) {
            arr[k] = buf[i];
            i++;
        } else if (buf[j] < buf[i]) {
            arr[k] = buf[j];
            j++;
        } else {
            arr[k] = buf[i];
            i++;
        }
    }
  }

  void shaker (int arr[], int n)
  {
    bool check = true;
    int r = n - 1;
    int l = 1;
    while (check == false);
    {
      bool check = true;
      for (int i = l; i <= r; i++)
	{
	  if (arr[i - 1] > arr[i])
	    {
	      swap (arr[i - 1], arr[i]);
	      check = false;
	    }
	}
      r = r - 1;
      for (int i = r; i >= l; i--)
	{
	  if (arr[i] < arr[i - 1])
	    {
	      swap (arr[i], arr[i - 1]);
	      check = false;
	    }
	}
      l++;
    }

    for (i = 0; i < n; i++)
      {
	cout << arr[i] << " ";
      }
  }

  void shell (int arr[], int n)
  {
    int i, j, middle;
    int new;
    for (middle = n / 2; middle > 0; middle = middle / 2)
      {
	for (i = middle; i < n; i++)
	  {
	    new = arr[i];
	    for (j = i; j >= middle; j = j - middle)
	      {
		if (new < arr[j - middle])
		  {
		    arr[j] = arr[j - middle];
		  }
	      }
	    arr[j] = new;
	  }
      }
    for (i = 0; i < n; i++)
      {
	cout << arr[i] << " ";
      }
  }

  void quick_sort (int arr[], int n)
  {
    int i = 0;
    int j = n - 1;
    int middle = arr[n / 2];
    while (i <= j);
    {
      while (arr[i] < middle)
	{
	  i++;
	}
      while (arr[j] > middle)
	{
	  j--;
	}
      if (i <= j)
	{
	  int new = arr[i];
	  arr[i] = arr[j];
	  arr[j] = new;
	  i++;
	  j--;
	}
    }

    if (j > 0)
      {
	quick_sort (arr, j + 1);
      }
    if (i < n)
      {
	quickt_sort (&arr[i], n - i);
      }

    for (i = 0; i < n; i++)
      {
	cout << arr[i] << " ";
      }
  }

  void heap (int arr[], int n)
  {
    for (int i = n / 2 - 1; i >= 0; i--)
      {
	heapify (arr, n, i);
      }
    for (int i = n - 1; i >= 0; i--)
      {
	swap (arr[0], arr[i]);
	heapify (arr, i, 0);
      }
  }

  void heapify (int arr[], int n, int i)
  {
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && arr[r] > arr[largest])
      {
	largest = l;
      }
    if (r < n && arr[r] > arr[largest])
      {
	largest = r;
      }
    if (largest != i)
      {
	swap (arr[i], arr[largest]);
	heapify (arr, n, largest);
      }
  }
