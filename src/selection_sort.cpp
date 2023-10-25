#include "selection_sort.h"

template <typename T>
void selection_sort(std::vector<T>& v) {
  if (v.size() <= 1) return;

  for (int i = 0; i < v.size() - 1; i++) {
    int min_pos = i;

    for (int j = i + 1; j < v.size(); j++) {
      if (v[j] < v[min_pos]) min_pos = j;
    }

    if (min_pos != i) {
      T tmp = v[min_pos];
      v[min_pos] = v[i];
      v[i] = tmp;
    }
  }
}