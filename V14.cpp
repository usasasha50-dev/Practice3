#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<double> numbers = {8.5, 16.3, 21.7, 13.2, 27.8};

    cout << "1. Початковий список: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it)
    {
        cout << *it << " ";
    }

    numbers.push_front(2.5);
    numbers.push_back(34.5);
    numbers.pop_front();
    cout << "\n2. Після змін: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it)
    {
        cout << *it << " ";
    }

    cout << "\n3. У зворотному порядку: ";
    for (auto it = numbers.rbegin(); it != numbers.rend(); ++it)
    {
        cout << *it << " ";
    }

    for (auto it = numbers.begin(); it != numbers.end(); ++it)
    {
        *it = *it - 2.0;
    }
    cout << "\n4. Після зменшення на 2.0: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it)
    {
        cout << *it << " ";
    }

    auto it = numbers.begin();
    while (it != numbers.end())
    {
        if (*it > 25)
        {
            it = numbers.erase(it);
        }
        else
        {
            ++it;
        }
    }
    it = numbers.begin();
    while (it != numbers.end())
    {
        if (*it < 15)
        {
            numbers.insert(it, 1.0);
        }
        ++it;
    }
    cout << "\n5. Після видалення та вставки: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it)
    {
        cout << *it << " ";
    }

    double sum = 0;
    int count = 0;
    for (auto it = numbers.begin(); it != numbers.end(); ++it)
    {
        if (*it <= 18)
        {
            sum += *it;
            count++;
        }
    }
    double average = sum / count;
    cout << "\n6. Середнє значення: " << average << endl;
    cout << "Список у зворотному порядку: ";
    for (auto it = numbers.rbegin(); it != numbers.rend(); ++it)
    {
        cout << *it << " ";
    }

    return 0;
}