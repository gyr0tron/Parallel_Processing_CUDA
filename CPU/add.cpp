#include <iostream>
#include <math.h>
#include <chrono>

using namespace std;
using namespace std::chrono;

void add(int n, float *x, float *y)
{
  for (int i = 0; i < n; i ++)
      y[i] = x[i] + y[i];
}

int main(void)
{
  int N = 1<<20;
  float *x = new float[N];
  float *y = new float[N];

  for (int i = 0; i < N; i++) {
    x[i] = 1.0f;
    y[i] = 2.0f;
  }

  auto start = high_resolution_clock::now();

  add(N, x, y);
  
  auto stop = high_resolution_clock::now();

  delete [] x;
  delete [] y;

  auto duration = duration_cast<microseconds>(stop - start);
  
  cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;
  return 0;
}
