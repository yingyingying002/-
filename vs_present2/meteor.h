#pragma once
#include "BaseValue.h"


struct STAR     //С����
{
	int x, y, r;
	int speed;          //�ٶ�
	COLORREF color;     //��ɫ
};

struct METEOR	//����
{
	int x, y, speed;//���� �ٶ�
	int id; //��Ӧ����ʽ
};

struct METEOR_IMG { //����ʽת�������ش洢
	int xy[100][50];
};

class Meteor {
public:
	Meteor();
	void init();
	void moveStar();
	void moveMeteor();
	void drawStar();
	void drawMeteor();
	bool out_extra_text(DWORD cur_time);
private:
	DWORD meteor_begin_time;
	void check();//����������Ƿ��ص�
	STAR star[STARNUM];
	METEOR meteor[METEORNUM];
	IMAGE MeteorImg[METEORKIND]; //���ǵ�20����ʽ
};