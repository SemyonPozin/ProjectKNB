using namespace std;
#include <iostream>
#include "writeStoneLeft.h"
#include "writeStoneRight.h"
#include "writeScissorsLeft.h"
#include "writeScissorsRight.h"
#include "writePaperRight.h"
#include "writePaperLeft.h"

int main()
{
    srand(time(NULL));
    int compScore = 0, userScore = 0;
    while (true) {
        setlocale(LC_CTYPE, "Russian");
        char userChoose, compChooseKNB, userChooseKNB;
        cout << "Выберите вариант использования программы." << endl;
        cout << "1-Играть" << endl;
        cout << "2-Посмотреть счет" << endl;
        cout << "3-Выйти" << endl;
        cin >> userChoose;
        if (!((userChoose == '1') || (userChoose == '2') || (userChoose == '3'))) {
            cout << "Ошибка! Неверный вариант использования" << endl;
            continue;
        }

            switch (userChoose)
            {
            case 49:
                cout << "Выберите камень(1), ножницы(2) или бумагу(3)." << endl;
                cout << "Чтобы выйти в меню выберите 4." << endl;
                while (true) {
                    compChooseKNB = rand() % 3 + 1;
                    cin >> userChooseKNB;
                    if (userChooseKNB == '4')
                        break;
                    if ((userChooseKNB != '1') && (userChooseKNB != '2') && (userChooseKNB != '3') && (userChooseKNB != '4')) {
                        cout << "Неправильный выбор!" << endl;
                        break;
                    }
                    if (compChooseKNB == 1) {
                        writeStoneLeft();
                    }
                    else
                        if (compChooseKNB == 2) {
                            writeScissorsLeft();
                        }
                        else
                            if (compChooseKNB == 3) {
                                writePaperLeft();
                            }
                    cout << endl << endl << endl;
                    if (userChooseKNB == '1') {
                        writeStoneRight();
                    }
                    else
                        if (userChooseKNB == '2') {
                            writeScissorsRight();
                        }
                        else
                            if (userChooseKNB == '3') {
                                writePaperRight();
                            }
                    cout << endl << endl;
                    if ((compChooseKNB == 1 && userChooseKNB == '2') || (compChooseKNB == 2 && userChooseKNB == '3') || (compChooseKNB == 3 && userChooseKNB == '1')) {
                        cout << "Вы проиграли!" << endl;
                        compScore++;
                    }
                    else
                        if ((userChooseKNB == '1' && compChooseKNB == 2) || (userChooseKNB == '2' && compChooseKNB == 3) || (userChooseKNB == '3' && compChooseKNB == 1)) {
                            cout << "Вы выиграли!" << endl;
                            userScore++;
                        }
                        else
                            if ((userChooseKNB == '1' && compChooseKNB == 1) || (userChooseKNB == '2' && compChooseKNB == 2) || (userChooseKNB == '3' && compChooseKNB == 3)) {
                                cout << "Ничья!" << endl;
                            }
                }
                break;

            case 50:
                cout << "Компьютер " << compScore << " : " << "Вы " << userScore << endl;
                break;

            case 51:
                return 0;

            default:
                cout << "Ошибка! Неверный вариант использования" << endl;
                break;
            }   
    }
}

