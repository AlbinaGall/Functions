#include <ctime>
#include "UniqRandom.h"

void UniqRandom(int arr[], const int n, int MinRand, int MaxRand)
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (MaxRand - MinRand) + MinRand;
	
        int a = arr[i];
        int b = arr[i];
        for (int i = 0; i < n; i++)
        {
            if (a == 1 && b == 1)
            {
                continue;
            }
        }
    }
}
