#include <omp.h>
#include "sort.h"

int main()
{
	double start1;
	double end1;
	double start2;
	double end2;
	while (true)
	{
		int n = 0;
		cout << "Size:" << endl;
		cin >> n; //Если размер массива много больше 100000 время выполнения не стоит ожидания
		int *arr = new int[n]; //Динамичный массив

		fill_array_random(arr, n, 0, 100);

		start1 = omp_get_wtime();

		sort(arr, n);

		end1 = omp_get_wtime();
		double time1 = end1 - start1;

		cout << n << ":" << time1 << " (ss)"; //Вывод

		fill_array_random(arr, n, 0, 100); //Перезаполнение массива

		start2 = omp_get_wtime();

		quick_sort(arr, 0, n - 1);

		end2 = omp_get_wtime();
		double time2 = end2 - start2;

		cout << ", " << time2 << " (qs)" << endl; //Вывод
		delete[] arr;
	}
	return 0;
}