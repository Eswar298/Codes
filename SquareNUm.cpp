.Given the arrays a and b and array b contains squares  of numbers that are present in a. 
I/P:   11 4 7 8 9 6 
       49  36  64  81  16  121 
O/p: yes 
27


class Same {
public:
  static bool comp(std::vector<int>, std::vector<int>);
};

bool Same::comp(std::vector<int> a, std::vector<int> b) {
  for (auto& v : a) {
    v = v * v;
  }
  std::sort(a.begin(), a.end());
  std::sort(b.begin(), b.end());
  return a == b;
}
