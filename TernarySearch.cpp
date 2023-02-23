#include <bits/stdc++.h>
using namespace std;
int TernarySearch(int x, int *a, int n){
    int i = 1, j = n;
	while(i < j) {
		int m1 = i + (j - i)/3;
		int m2 = j - (j - i + 3)/3;// để làm tròn xuống; hay nói cách khác là: chọn điểm m2 thụt xuống 1 chút để tránh việc lặp vô hạn
		if(x > a[m2]) i = m2 + 1;
		else if(x < a[m1])  j = m1 - 1;
		else
		{
			i = m1;
			j = m2;
		}
	}
	if (x == a[i]) return i; // nx: nếu phần tử cần tìm có nhiều giá trị giống nhau; nếu chúng ở giữa hoặc cuối mảng thì thuật này sẽ tìm ra ptu đầu tiên
	else return 0;// nếu chúng ở đầu mảng thì thuật này sẽ tìm ra ptu cuối cùng.
}
int main ()
{
	int n, x;
    cin >> n >> x;
	int a[n+1];
	for (int i = 1; i <= n; i++) {
            cin >> a[i];
	}
	cout << TernarySearch(x, a, n);
}
