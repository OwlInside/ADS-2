// Copyright 2021 NNTU-CS
int sort(int *arr, int len) {
for (int i = 0; i < len; i++) {
        for (int j = len - i; j > i; j++) {
                if (arr[j - 1] > arr[j]) {
                        int tmp = arr[j - 1];
                        arr[j - 1] = arr[j];
                        arr[j] = tmp;
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
        int count = 0;
        for (int i = 0; i < len - 1; i++) {
                int l = i + 1, r = len;
                while (l < r) {
                        int midd = (l + r) / 2;
                        if (arr[midd] == (value - arr[i])) {
                                while (arr[midd - 1] == (value - arr[i])) {
                                        midd--;
                                }
                                while (arr[midd] == (value - arr[i])) {
                                        midd++;
                                        count++;
                                }
                                break;
                        } else if (arr[midd] > (value - arr[i])) {
                                r = midd;
                        } else {
                                l = midd + 1;
                        }
                }
        }
  return count;
}
