// Copyright 2021 NNTU-CS
int sort(int *arr, int len) {
for (int i = 0, i < len, i++) {
        for (int j = i; j < len - 1 - i; j++) {
                if (arr[j] > arr[j+1]) {
                        swap(arr[j], arr[j + 1]);
                }
        }
}
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
                count += cbinsearch(arr, len, value - arr[l], l + 1);
                l++;
        }
  return count;
}
