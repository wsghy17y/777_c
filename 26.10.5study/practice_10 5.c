#define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include<time.h>
# include<stdlib.h>
void printarr(int arr[], int lenth)
{
    for (int i = 0; i < lenth; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int BinarySearch(int arr[], int lenth)
{
    int target;
    scanf("%d", &target);
    int min = 0, max = lenth - 1;
    while (min <= max)
    {
        int mid = min + (target - arr[min]) / (arr[max] - arr[min]) * (max - min);
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            min = mid + 1;
        }
        else
        {
            max = mid - 1;
        }
    }
    return -1;
}
//int main()
//{
//    ¥Ú¬“ ˝◊È
//    srand(time(NULL));
//    int arr[5] = { 1, 2, 3, 4, 5 };
//    int lenth = sizeof(arr) / sizeof(int);
//    printarr(arr, lenth);
//    for (int i = 0; i < lenth; i++)
//    {
//        int j = rand() % lenth;
//        int temp = arr[i];
//        arr[i] = arr[j];
//        arr[j] = temp;
//    }
//    printarr(arr, lenth);
//    return 0;

/*int main()
{   
    —∞’“target±Í“˝
    int arr[] = { 7, 23, 79, 81, 103, 127, 131, 147 };
    int lenth = sizeof(arr) / sizeof(int);
    printarr(arr, lenth);
    int index = BinarySearch(arr, lenth);
    printf("%d", index);
    return 0;
}*/

//int main()
//{
//    √∞≈›≈≈–Ú
//    int arr[] = { 3, 5, 1, 4, 2, 7, 10, 17, 20, 100, 2222, 1534, 520, 1314 };
//    int lenth = sizeof(arr) / sizeof(int);
//    for (int i = 0; i < lenth - 1; i++)
//    {
//        for (int j = 0; j < lenth - 1 - i; j++)
//        {
//            int temp = arr[j];
//            if (arr[j] > arr[j + 1])
//            {
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//    return 0;
//}

/*int main()
{
    //—°‘Ò≈≈–Ú
    int arr[] = { 3, 5, 1, 4, 2, 1000, 2222, 333, 7, 9, 17, 520 };
    int lenth = sizeof(arr) / sizeof(int);
    for (int i = 0; i < lenth - 1; i++)
    {
        for (int j = 1 + i; j < lenth; j++) 
        {
            if (arr[i] > arr[j]) 
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printarr(arr,lenth);
    return 0;
}*/
