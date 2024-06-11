#include "ex1.h"
#include <iostream>

void splitWords(const char* inputArray, int length, char words[][12], int& wordCount) {
    std::setlocale(LC_ALL, "Rus");

    int wordIndex = 0, charIndex = 0;
    bool inWord = false;

    for (int i = 0; i < length; ++i) {
        if (inputArray[i] != ' ') {
            words[wordIndex][charIndex++] = inputArray[i];
            inWord = true;
        }
        else {
            if (inWord) {
                words[wordIndex][charIndex] = '\0'; // ��������� ������� ������ ��������
                wordIndex++;
                charIndex = 0;
                inWord = false;
            }
        }
    }
    // ��������� ��������� ������ ��������, ���� ������ �� ����������� ��������
    if (inWord) {
        words[wordIndex][charIndex] = '\0';
        wordIndex++;
    }

    wordCount = wordIndex; // ������������� ���������� ����
}