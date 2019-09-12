#include <cstdio>
void reverse(int a[], int start, int end){
	for(int i=start; i<=(start+end)/2; i++){
		int tmp = a[i];
		a[i] = a[start+end-i];
		a[start+end-i] = tmp;
	}
}
int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	m %= n;
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	reverse(a, 0, n-m-1);
	reverse(a, n-m, n-1);
	reverse(a, 0, n-1);
	printf("%d", a[0]);
	for(int i=1; i<n; i++){
		printf(" %d", a[i]);
	}
	printf("\n");
	return 0;
}
