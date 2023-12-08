#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n; // Вводимо розміру масиву
    cin >> n; // Зчитуємо розміру масиву з консолі
    vector<int> numbers(n); // Створення вектору цілих чисел розміром n
    
    // Цикл, який заповнює вектора nubmers елементами, які користувач вводить з консолі
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    
    // Початок циклу, який перебирає можливі значення розмежувального індексу k
    for (int k = 1; k < n; k++) { 
        int sum_left = 0;
        int sum_right = 0;
        
        // Цикл, який обчислює суми елементів зліва від k (від лівої частини масиву)
        for (int i = 0; i < k; i++) {
            sum_left += numbers[i];
        }
        // Цикл, який обчислює суми елементів справа від k (від правої частини масиву)
        for (int i = k; i < n; i++) {
            sum_right += numbers[i];
        }
        // Виводимо "TAK", якщо сумма лівого розбиття масиву = сумі правого робиття масиву.
        if (sum_left == sum_right) {
            cout << "TAK" << endl;
            
            return 0;
        }
    }
    cout << "NI" << endl; // Виводимо "NI", якщо сумма лівого розбиття масиву != сумі правого робиття масиву.
    return 0;
    
}