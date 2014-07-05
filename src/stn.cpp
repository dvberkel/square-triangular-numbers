#include <iostream>

signed long long s0 = 0;
signed long long s1 = 1;

signed long long s(signed long long s0, signed long long s1) {
  return 6 * s1 - s0;
}

signed long long t0 = 0;
signed long long t1 = 1;

signed long long t(signed long long t0, signed long long t1) {
  return 6 * t1 - t0 + 2;
}

int main(){
  for (int index = 0; index < 20; index++) {
    signed long long sn = s(s0, s1);
    s0 = s1;
    s1 = sn;
    signed long long tn = t(t0, t1);
    t0 = t1;
    t1 = tn;
    std::cout << sn << "," << tn << std::endl;
  }
  return 0;
}
