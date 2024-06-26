﻿/* Введите массив символов из 12 элементов. Вывести все слова, содержащиеся в тексте, как отдельные массивы 
символов(без пробелов)
Требования:
выполнить каждое задание в отдельной функции, в которую будут передаваться необходимые параметры;
весь ввод и вывод в консоль осуществляется в функции main(): 
функции выполняют операции и возвращают нужные значения (передаётся массив символов или строка, например);
придерживаться принципа модульности: 
для функций заданиия один создать отдельный файл, например, 
ex1.h для объявления функций и ex1.cpp для реализации, 
для задания 2, соответственно, ex2 (разрешается давать другие имена подключаемым модулям);
использовать функции сторонних или стандартных библиотек для обработки строк запрещено 
(так же как и std::string).
*/

#include <iostream>
#include "ex1.h"

using namespace std;

void main() {
    setlocale(LC_ALL, "Rus");
    const int arrayLength = 12;
    char inputArray[arrayLength + 1]; // +1 для завершающего нуля
    cout << "Введите массив символов из 12 элементов: ";
    cin.getline(inputArray, arrayLength + 1);

    char words[12][12]; // Предположим, что максимальное количество слов не больше 12
    int wordCount = 0;

    splitWords(inputArray, arrayLength, words, wordCount);

    cout << "Слова, содержащиеся в тексте:" << std::endl;
    for (int i = 0; i < wordCount; ++i) {
        cout << words[i] << std::endl;
    }
}
