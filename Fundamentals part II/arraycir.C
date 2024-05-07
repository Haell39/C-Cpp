// CPP program to demonstrate use of circular 
// array using extra memory space 
#include <bits/stdc++.h> 
using namespace std; 
void print(char a[], int n, int ind) 
{ 
	// Create an auxiliary array of twice size. 
	char b[(2 * n)]; 

	// Copy a[] to b[] two times 
	for (int i = 0; i < n; i++) 
		b[i] = b[n + i] = a[i]; 

	// print from ind-th index to (n+i)th index. 
	for (int i = ind; i < n + ind; i++) 
		cout << b[i] << " "; 
} 

// Driver code 
int main() 
{ 
	char a[] = { 'A', 'B', 'C', 'D', 'E', 'F' }; 
	int n = sizeof(a) / sizeof(a[0]); 
	print(a, n, 3); 
	return 0; 
} 
