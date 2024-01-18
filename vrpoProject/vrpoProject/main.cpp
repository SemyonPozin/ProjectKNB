#include <iostream>
#include "writeScissorsLeft.h"
#include "writePaperLeft.h"
#include "writeStone.h"
#include "writeScissorsRight.h"
#include "writePaperRight.h"
#include "writeStoneLeft.h"
#include "writeStoneRight.h"
using namespace std;

int main()
{
    srand(time(NULL));

    writeScissorsLeft();
    writeScissorsRight();
    writePaperLeft();
    writePaperRight();
    writeStoneLeft();
    writeStoneRight();
        
    while (true) {
        setlocale(LC_CTYPE, "Russian");
        int userChoose, compChooseKNB, userChooseKNB;
        cout << "�������� ������� ������������� ���������." << endl;
        cout << "1-������" << endl;
        cout << "2-�����" << endl;
        cin >> userChoose;
        switch (userChoose)
        {
        case 1:
            cout << "�������� ������(1), �������(2) ��� ������(3)." << endl;
            cout << "����� ����� � ���� �������� 4." << endl;
            while (true) {
                compChooseKNB = rand() % 3 + 1;
                cin >> userChooseKNB;
                if ((userChooseKNB != 1) && (userChooseKNB != 2) && (userChooseKNB != 3) && (userChooseKNB != 4)) {
                    cout << "������������ �����!" << endl;
                    break;
                }
                if ((compChooseKNB == 1 && userChooseKNB == 2) || (compChooseKNB == 2 && userChooseKNB == 3) || (compChooseKNB == 3 && userChooseKNB == 1)) {
                    cout << "�� ���������!" << endl;
                }
                else
                    if ((userChooseKNB == 1 && compChooseKNB == 2) || (userChooseKNB == 2 && compChooseKNB == 3) || (userChooseKNB == 3 && compChooseKNB == 1)) {
                        cout << "�� ��������!" << endl;
                    }
                    else
                        if (userChooseKNB == compChooseKNB) {
                            cout << "�����!" << endl;
                        }
                        else
                            if (userChooseKNB == 4)
                                break;
            }
            break;
        case 2:
            return 0;
        default:
            cout << "������! �������� ������� �������������" << endl;
            break;
        }
    }
}