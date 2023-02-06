#include <iostream>
using namespace std;
int main() {
  int n;
  std::cin>>n;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i ; j++) {
      printf("  ");
    }
    int ele = i;
    for (int j = 1; j <=i; j++) {
      printf("%d ", ele++);
    }
    
    for (int j = ele-2; j >=i ; j--) {
      printf("%d ", j);
    }
    printf("\n");
  }
  return 0;
}