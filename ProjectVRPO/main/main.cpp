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
        int userChoose, compChooseKNB, userChooseKNB;
        cout << "Выберите вариант использования программы." << endl;
        cout << "1-Играть" << endl;
        cout << "2-Посмотреть счет" << endl;
        cout << "3-Выйти" << endl;
        cin >> userChoose;
        switch (userChoose)
        {
        case 1:
            cout << "Выберите камень(1), ножницы(2) или бумагу(3)."<<endl;
            cout << "Чтобы выйти в меню выберите 4." << endl;
            while (true) {
                compChooseKNB = rand() % 3 + 1;
                cin >> userChooseKNB;
                if (userChooseKNB == 4)
                    break;
                if ((userChooseKNB != 1) && (userChooseKNB != 2) && (userChooseKNB != 3) && (userChooseKNB != 4)) {
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
                if (userChooseKNB == 1) {
                    writeStoneRight();
                }
                else
                if (userChooseKNB == 2) {
                    writeScissorsRight();
                }
                else
                if (userChooseKNB == 3) {
                    writePaperRight();
                }
                cout << endl << endl;
                if ((compChooseKNB == 1 && userChooseKNB == 2) || (compChooseKNB == 2 && userChooseKNB == 3) || (compChooseKNB == 3 && userChooseKNB == 1)) {
                    cout << "Вы проиграли!" << endl;
                    compScore++;
                }
                else
                    if ((userChooseKNB == 1 && compChooseKNB == 2) || (userChooseKNB == 2 && compChooseKNB == 3) || (userChooseKNB == 3 && compChooseKNB == 1)) {
                        cout << "Вы выиграли!" << endl;
                        userScore++;
                    }
                    else
                        if (userChooseKNB == compChooseKNB) {
                            cout << "Ничья!" << endl;
                        }
            }
            break;

        case 2:
            cout << "Компьютер " << compScore << " : " << "Ты " << userScore << endl;
            break;

        case 3:
            return 0;

        default:
            cout << "Ошибка! Неверный вариант использования" << endl;
            break;
        }
    }
}

