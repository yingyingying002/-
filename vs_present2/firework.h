#pragma once

#include "BaseValue.h"
#define FIREGAP 20
#define JETGAP 200
#define min_radium 120
#define max_radium 240

struct JET {
	int x, y;//���������
	int hx, hy;//��ը����
	IMAGE img[2];//��������״̬
	DWORD lastime;
};

struct FIREWORK {
	int r, max_r;//�뾶 ���ը�뾶
	int x, y;//��ըλ��
	int img[240][240];//�洢������Ϣ
	DWORD lastime;
};

class FireWork {
public:
	FireWork();
	void init(int i);
	void test();
	bool out_extra_text(DWORD cur_time);
private:
	void showJet(int num);
	void showFire(int num);//����Ϊ�̻�id
	DWORD *pMem;
	JET jet[FIRENUM];
	FIREWORK firework[FIRENUM];
	bool jetflag[FIRENUM];
	bool fireflag[FIRENUM];
	DWORD fire_begin_time;
};

