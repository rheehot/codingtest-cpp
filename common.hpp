#include <iostream>
#include <vector>
#include <cstdlib>
#include <unordered_map>
#include <tuple>
#include <algorithm>

using namespace std;

template <typename T>
ostream& operator<<(ostream& out, const vector<T>& v) {
  out << "{";
  size_t last = v.size() - 1;
  for (size_t i = 0; i < v.size(); ++i) {
    out << v[i];
    if (i != last)
      out << ", ";
  }
  out << "}";
  return out;
}
