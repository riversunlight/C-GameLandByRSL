#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define ENTER 13


void opening(void) {
	int flag = 1;
	int op = 0;
	int key;

	do {
		while (flag) {
			printf("==========�ʕ��W�߃Q�[��==========\n");
			printf("%sSTART\n", (op == 1) ? "          " : "        ��");
			printf("%sRULE\n", (op == 0) ? "          " : "        ��");
			if (_kbhit()) {
				key = _getch();
				switch (key) {
				case 'w':
				case '8':
					op--;
					break;
				case 's':
				case '2':
					op++;
					break;
				case ENTER:
					flag = 0;
					break;
				}
				op = (op + 2) % 2;
			}
			system("cls");
		}
		switch (op) {
		case 1:
			//���[���\��
			printf("1.�����Ă���ʕ�������ē��_�Q�b�g!���_�������̂�����̂Œ���!\n");
			printf("2,�݂���(�Z) 10�_ �����S(��) 20�_  �p�C�i�b�v��(��)30�_ �X�C�J(��) 40�_\n");
			printf("3,�ŃL�m�R(��) -10�_ ���e(x) -40�_\n");
			printf("4.a�ō��ړ��Ad�ŉE�ړ�  �[����[�փ��[�v�\(�t�ɂ��Â炢��������܂���)\n");
			while (1) {
				if (_kbhit()) {
					key = _getch();
					flag = 1;
					system("cls");
					break;
				}
			}
			break;
		}
	} while (op);
}

int ending(int op) {
	int flag = 1;
	int key;
	while (1) {
		printf("%snew game\n", (op == 0) ? "��" : "  ");
		printf("%send\n", (op == 1) ? "��" : "  ");
		system("cls");
		if (_kbhit()) {
			key = _getch();
			switch (key) {
			case 'w':
				op--;
				break;
			case 's':
				op++;
				break;
			case 13:
				flag = 0;
				break;
			}
			op = (op + 2) % 2;
			if (flag == 0)
				break;
		}
	}
	return op;
}

void end_sen(void){
	printf("*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n");
	printf("                     !!!!!�I��!!!!!\n");
	printf("*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n");
	Sleep(5000);
}