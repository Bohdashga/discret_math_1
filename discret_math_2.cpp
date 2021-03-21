#include <iostream>
#include <string>
using namespace std;

// Функція друку всіх різних комбінацій довжини k
void recur(int arr[], string out, int i, int n, int k)
{
    // неправильні дані
    if (k > n)
        return;

    //  випадок: розмір комбінації k
    if (k == 0) {
        cout << out << endl;
        return;
    }

    // починаємо від наступного індексу до останнього індексу
    for (int j = i; j < n; j++)
    {
        // додаємо поточний елемент arr [j] до рішення та повторюємо для наступного індексу
        recur(arr, out + " " + to_string(arr[j]), j + 1, n, k - 1);

    }
}

int main()
{
    int n;
    int k;
    cout << "Enter N ";
    cin >> n;
    cout << "Enter K";
    cin >> k;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
     // обробляємо елементи зліва направо
    recur(arr, "", 0, n, k);

    return 0;
}



