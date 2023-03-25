// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
    int cnt = 0;
    for (int i = 0; i < len - 1; i++) {
      for (int j = i + 1; j < len; j++) {
          if ((*(arr + i) + *(arr + j)) == value) cnt++;
      }
    }
    return cnt;
}

int countPairs2(int* arr, int len, int value) {
    int cnt = 0, max = len - 1;
    while (arr[max] > value) max--;
    for (int i = 0; i < max; i++) {
        for (int j = max; j > i; j--) {
            if (arr[i] + arr[j] == value) cnt++;
        }
    }
    return cnt;
}

int countPairs3(int *arr, int len, int value) {
  int cnt = 0;
  for (int i = 0; i < l - 1; i++) {
    int last = l;
    int first = i;
    while (first < last - 1) {
      int mid = (first + last) / 2;
      if (arr[i] + arr[mid] == value) {
        cnt++;
        int middle = mid + 1;
        while (arr[i] + arr[middle] == value && middle < last) {
          cnt++;
          middle++;
        }
        middle = mid - 1;
        while (arr[i] + arr[middle] == value && middle > first) {
          cnt++;
          middle--;
        }
        break;
      }
      if (arr[i] + arr[mid] > value) {
        last = mid;
      } else {
        first = mid;
      }
    }
  }
  return cnt;
}
