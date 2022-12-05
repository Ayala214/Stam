// שיעור 16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//תרגיל 2
int main()
{
	int vec1[5] = { 7,20,28,3,5 };
	int vec2[5] = { 4,15,10,3,7 };
	int* vec3[5] = { 0 };
	int i, j = 0, k, tmp;
	for (i = 0; i < 5; i++)
	{
		vec3[j] = (int*)malloc((sizeof(int) * (100 - vec1[i]) / vec2[i]) + 2);
		*(vec3[j]) = vec1[i];
		tmp = vec1[i];
		for (k = 1;; k++)
		{

			*(vec3[j] + k) = tmp += vec2[i];
			if (*(vec3[j] + k) > 100)
			{
				*(vec3[i] + k) = -1;
				j++;
				break;
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		
		for (j = 0;*(vec3[i] + j) != -1; j++)
			printf("%d ",* (vec3[i] + j));
		printf("-1 \n");
		}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
