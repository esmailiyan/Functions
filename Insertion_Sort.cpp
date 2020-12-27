void Insertion_Sort(int a[], int n) {
	for (int i=1 ; i<n ; i++)
		for (int j=i ; j>0 ; j--)
			if (a[j] < a[j-1])
				swap(a[j], a[j-1]);
	return;
}
