// Copyright 2021 NNTU-CS
int sort(int *arr, int len) {
for (int i = 0; i < len; i++) {
        for (int j = (len - i); j > i; j++) {
                if (arr[j - 1] > arr[j]) {
                        int tmp = arr[j - 1];
                        arr[j - 1] = arr[j];
                        arr[j] = tmp;
                }
        }
}
}
int binsearch(int *arr, int r, int l, int x) {
        if (r >= l) {
                int midd = l + (r - l) / 2;
                    if (arr midd == x) {
                            return midd;
                    }
        }
        if (arr[midd] > x) 
                return binsearch(arr, l, midd - 1, x);
        else
                return binseach(arr, r, midd + 1, x);
}
        
int countPairs1(int *arr, int len, int value) {
        int count = 0;
        for (int i = 0; i < len; i++) {
                for (int j = i + 1; j < len; j++) {
                        if (arr[i] + arr[j] == value) {
                                count++;
                        }
                }
        }
        if (count != 0)
                return count;
        else
                return 0;
}

int countPairs2(int *arr, int len, int value) {
        int count = 0;
        for (int i = 0; i < len; i++) {
                for (int j = len - 1; j < len; j--) {
                        if (arr[i] + arr[j] == value) {
                                count++;
                        }
                }
        }
        if (count != 0)
                return count;
        else
                return 0;
}

int countPairs3(int *arr, int len, int value) {
        int count = 0, l = 0, r = len - 1;
        while (arr[r] > value) {
                r--;
        }
        while (l != r) {
                count += binsearch(arr, len, value - arr[l], l + 1);
                l++;
        }
  return count;
}
