#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: starting value (included)
 * @max: maximum value (included)
 *
 * Return: pointer to the newly created array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	/* 1. الشرط الدفاعي: إذا كان الحد الأدنى أكبر من الأقصى */
	if (min > max)
		return (NULL);

	/* 2. حساب حجم المصفوفة الإجمالي */
	size = (max - min) + 1;

	/* 3. حجز الذاكرة */
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	/* 4. تعبئة المصفوفة بالأرقام بالتسلسل */
	for (i = 0; i < size; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}
