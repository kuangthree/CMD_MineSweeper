#include<iostream>
#include<time.h>
#include<conio.h>
#include<Windows.h>
#include<string>
#include<math.h>
#include<fstream>
using namespace std;
int length = 30, width = 30, lnum = 50;//ȫ�ֱ��������ó�ʼ���ȣ���ȣ�������
bool vol = true;//������������
const string cirnum[8] = { "��","��","��","��","��","��","��","��" };//����string���飬��ȫ�����ֱ�ʾ������Χ�׵�����
void swap(int &a, int &b)//���彻������
{
	int tem = a;
	a = b;
	b = tem;
}
int random(double start, double end)//�������������
{
	return int(start + (end - start)*rand() / (RAND_MAX + 1.0));
}
int main()
{
	ofstream ranko("phb.dat", ios::app);//����һ�����а��ļ�����β��д������
	ranko << "";
	system("color 78");//���ñ�����ɫ
	srand(unsigned(time(0)));//�������������
	while (1)
	{
		int select = 1;//�����ʼѡ����
		while (1)
		{
			system("Cls");
			cout << "_________________________________\n";//�������
			cout << "|                               |\n";
			cout << "|     ɨ�� C++��ϰ              |\n";
			cout << "|                               |\n";
			cout << "| BY  ECNU ������               |\n";
			cout << "|                               |\n";
			switch (select)//��ѡ�����������
			{
			case 1:
			{
				cout << "|     ����ʼ��Ϸ                |\n";
				cout << "|                               |\n";
				cout << "|     ���޸�����                |\n";
				cout << "|                               |\n";
				cout << "|     �����а�                  |\n";
				cout << "|                               |\n";
				cout << "|     ���˳���Ϸ                |\n";
				break;
			}
			case 2:
			{
				cout << "|     ����ʼ��Ϸ                |\n";
				cout << "|                               |\n";
				cout << "|     ���޸�����                |\n";
				cout << "|                               |\n";
				cout << "|     �����а�                  |\n";
				cout << "|                               |\n";
				cout << "|     ���˳���Ϸ                |\n";
				break;
			}
			case 3:
			{
				cout << "|     ����ʼ��Ϸ                |\n";
				cout << "|                               |\n";
				cout << "|     ���޸�����                |\n";
				cout << "|                               |\n";
				cout << "|     �����а�                  |\n";
				cout << "|                               |\n";
				cout << "|     ���˳���Ϸ                |\n";
				break;
			}
			case 4:
			{
				cout << "|     ����ʼ��Ϸ                |\n";
				cout << "|                               |\n";
				cout << "|     ���޸�����                |\n";
				cout << "|                               |\n";
				cout << "|     �����а�                  |\n";
				cout << "|                               |\n";
				cout << "|     ���˳���Ϸ                |\n";
				break;
			}
			}
			cout << "|                               |\n";
			cout << "|_______________________________|\n";
			cout << "W:�� S:�� SPACE:ȷ��\n��ȫ��������Ϸ�����ر����뷨";
			bool oth = true, conf = false;//��ѡ����岼��ֵ
			while (oth)
			{
				char an = _getch();//��ȡ���̰���
				if (an == 'w' || an == 'W')
				{
					select--;//ѡ������
					oth = false;
				}
				else if (an == 's' || an == 'S')
				{
					select++;
					oth = false;//����
				}
				else if (an == ' ')
				{
					conf = true;//ȷ��ѡ��
					oth = false;
				}
				if (select > 4)select -= 4;
				else if (select < 1)select += 4;//��ֹ����
			}
			if (conf)//������˿ո������ѡ����в���
			{
				if (select == 1)
				{
					break;//ֱ������ѭ����ʼ��Ϸ
				}
				else if (select == 2)
				{
					system("Cls");//������������ý���
					while (1)
					{
						cout << "�������������ȣ�Ĭ��30 ȡֵ��Χ15~30����";
						cin >> length;
						if (length >= 15 && length <= 30)break;
					}
					while (1)
					{
						cout << "������������ȣ�Ĭ��30 ȡֵ��Χ15~30����";
						cin >> width;
						if (width >= 15 && width <= 30)break;
					}
					while (1)
					{
						cout << "�������׵�������Ĭ��50 ȡֵ��Χ10~50����";
						cin >> lnum;
						if (lnum >= 10 && lnum <= 50)break;
					}
					while (1)
					{
						cout << "�������Ƿ���������Ĭ�Ͽ�����1.���� 0.�رգ�";
						cin >> vol;
						if (vol == 1 || vol == 0)break;
					}
				}
				else if (select == 3)//��ȡ���а�����
				{
					system("Cls");
					ifstream rank("phb.dat");
					int ranks[1000];
					int iph = 0;
					while (!rank.eof())
					{
						rank >> ranks[iph];
						iph++;
					}
					iph--;
					int f = 0;
					while (1)
					{
						for (int i = 0; i < iph; i++)
						{
							if (ranks[i]<ranks[i + 1])
							{
								swap(ranks[i], ranks[i + 1]);
							}
						}
						if (f == iph)break;
						f++;
					}
					for (int i = 0; i <= iph; i++)
					{
						cout << "��" << i + 1 << "��: " << ranks[i] << "��\n";
					}
					system("pause");
				}
				else if (select == 4)
				{
					return 1;//�˳�����
				}
			}
		}
		while (1)//�ڶ���ѭ������Ϸ��ʼ
		{
			system("Cls");//����
			int lei[100][100];//��¼�׵�λ�õĶ�ά����
			for (int l = 0; l < width; l++)
			{
				for (int w = 0; w < length; w++)
				{
					lei[l][w] = 0;//��ʼ��
				}
			}
			for (int leish = 0; leish < lnum; leish++)
			{
				lei[leish%length][leish / length] = 1;
			}//����һ������Ϊ����
			for (int leish = 0; leish < lnum; leish++)
			{
				int sj1 = random(0, length), sj2 = random(0, width);
				swap(lei[leish%length][leish / length], lei[sj1][sj2]);
			}//����һ�еĸ����������������ӽ��н���
			for (int s = 0; s < (length*width); s++)
			{
				int sj1 = random(0, length);
				int sj2 = random(0, width);
				int sj3 = random(0, length);
				int sj4 = random(0, width);
				swap(lei[sj1][sj2], lei[sj3][sj4]);
			}//���������������һ�����ң��õ������lei����
			int ln[100][100];//������ʾ������Χ�׵���Ŀ������
			for (int l = 0; l < 100; l++)
			{
				for (int w = 0; w < 100; w++)
				{
					ln[l][w] = 0;//��ʼ��
				}
			}
			for (int l = 0; l < width; l++)//�ж�ÿ��������Χ���׵���������ֵ��������
			{
				for (int w = 0; w < length; w++)
				{
					if (lei[w][l] != 1)
					{
						if (lei[w - 1][l] == 1)
						{
							ln[w][l]++;
						}
						if (lei[w - 1][l - 1] == 1)
						{
							ln[w][l]++;
						}
						if (lei[w][l - 1] == 1)
						{
							ln[w][l]++;
						}
						if (lei[w + 1][l + 1] == 1)
						{
							ln[w][l]++;
						}
						if (lei[w][l + 1] == 1)
						{
							ln[w][l]++;
						}
						if (lei[w + 1][l] == 1)
						{
							ln[w][l]++;
						}
						if (lei[w + 1][l - 1] == 1)
						{
							ln[w][l]++;
						}
						if (lei[w - 1][l + 1] == 1)
						{
							ln[w][l]++;
						}
					}
				}
			}
			int map[100][100], flag[100][100];//�����ж������Ƿ����ͱ�ǵ��׵�����
			for (int i1 = 0; i1 < 100; i1++)
			{
				for (int i2 = 0; i2 < 100; i2++)
				{
					map[i1][i2] = 0;
					flag[i1][i2] = 0;//һ���ʼ��
				}
			}
			int bx = 0, by = 0, outcome, success = 0, flagn = 0;//������λ�ã���Ϸ������ɹ������Ŀ���ܱ����Ŀ
			long long ustime = time(NULL);
			while (1)
			{
				system("Cls");
				cout << "������" << lnum - flagn << endl;
				for (int li = 0; li < length; li++)
				{
					cout << "--";
				}
				cout << endl;
				for (int i2 = 0; i2 < width; i2++)//�������������������������
				{
					for (int i1 = 0; i1 < length; i1++)
					{
						if (i1 == bx&&i2 == by)
						{
							cout << "��";
						}
						else if (flag[i1][i2] == 1)
						{
							cout << "��";
						}
						else if (map[i1][i2] == 0)
						{
							cout << "��";
						}
						else if (map[i1][i2] == 1)
						{
							if (ln[i1][i2]>0)
								cout << cirnum[ln[i1][i2] - 1];
							else
								cout << "  ";
						}
					}
					cout << "|" << endl;
				}
				for (int li = 0; li < length; li++)
				{
					cout << "--";
				}
				cout << endl;
				cout << "WSAD���������ƶ�����1���ٵ�ͼ����2��ǵ���λ�ã���3ȡ�����\n";
				char an = _getch();
				int f5 = 0;
				if (an == 'w' || an == 'W')
				{
					if (by > 0)by--;
				}
				else if (an == 's' || an == 'S')
				{
					if (by < width - 1)by++;
				}
				else if (an == 'a' || an == 'A')
				{
					if (bx > 0)bx--;
				}
				else if (an == 'd' || an == 'D')
				{
					if (bx < length - 1)bx++;
				}
				else if (an == '1'&&map[bx][by] == 0)
				{
					if (lei[bx][by] == 1)
					{
						outcome = 1;
						break;
					}
					else
					{
						if (vol)
						{
							cout << "\a";
						}
						f5 = 1;
						map[bx][by] = 5;
					}
				}
				else if (an == '2'&&map[bx][by] == 0)
				{
					if (vol)
					{
						Beep(400, 200);
					}
					flag[bx][by] = 1;
					if (lei[bx][by] == 1)success++;
					flagn++;
				}
				else if (an == '3'&&flag[bx][by] == 1)
				{
					flag[bx][by] = 0;
					if (lei[bx][by] == 1)success--;
					flagn--;
				}
				if (f5)
				{
					while (1)
					{
						int none = 0;
						for (int i2 = 0; i2 < width; i2++)
						{
							for (int i1 = 0; i1 < length; i1++)
							{
								if (map[i1][i2] == 5)//���ٵ�ͼ
								{
									none = 1;
									map[i1][i2] = 1;
									if (flag[i1][i2] == 1)flag[i1][i2] = 0;
									if (ln[i1][i2] == 0)
									{
										if (map[i1 - 1][i2] == 0)map[i1 - 1][i2] = 5;
										if (map[i1 + 1][i2] == 0)map[i1 + 1][i2] = 5;
										if (map[i1][i2 + 1] == 0)map[i1][i2 + 1] = 5;
										if (map[i1][i2 - 1] == 0)map[i1][i2 - 1] = 5;
									}
								}
							}
						}
						if (!none)break;
					}
				}
				if (success >= lnum)
				{
					outcome = 0;
					break;
				}
			}
			system("Cls");
			for (int li = 0; li < length; li++)
			{
				cout << "--";
			}
			cout << endl;
			for (int w = 0; w < width; w++)
			{
				for (int l = 0; l < length; l++)
				{
					if (lei[l][w] == 1)
					{
						cout << "��";
					}
					else if (ln[l][w] > 0)
					{
						cout << cirnum[ln[l][w] - 1];
					}
					else
					{
						cout << "  ";
					}

				}
				cout << "|" << endl;
			}
			for (int li = 0; li < length; li++)
			{
				cout << "--";
			}
			cout << endl;
			if (!outcome)
			{
				if (vol)
				{
					cout << "\a";
				}
				long long endtime = time(NULL);
				cout << "������ʤ������ʱ" << endtime - ustime << "��\n";
				cout << "���֡�����ƽ��X10000/���������+��ʱX10����:";
				double score;
				score = (lnum*lnum) * 10000 / (width*length + (endtime - ustime) * 10);
				cout << score << endl;
				ranko << score << endl;
			}
			else
			{
				if (vol)
				{
					Beep(500, 1500);
				}
				cout << "��Ϸʧ�ܣ�\n";
			}
			cout << "����������¿�ʼ����B���أ���E�˳�\n";
			char an = _getch();
			if (an == 'B' || an == 'b')
			{
				break;
			}
			else if (an == 'e' || an == 'E')
			{
				return 0;
			}
			system("pause");
		}
	}
	return 0;
}