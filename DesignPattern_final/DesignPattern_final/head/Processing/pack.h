#pragma once
//����ʹ��ԭ��ģʽ��ģ��ũ��Ʒ��װ��ɲ������Ĺ���
#include<iostream>
using namespace std;

class Package {
public:
	Package() {}
	virtual ~Package() {}

	virtual Package* Clone() = 0;
};

class VegetablePackage : public Package {
public:
	VegetablePackage(int w, int l, int h, string c) : width(w),
		length(l), height(h), color(c) {
		cout << "���п�����װ��" << endl;
		cout << "�ߴ�" << width << "x" << length << "x" << height << endl;
		cout << "��ɫ" << color << endl;
	}
	virtual ~VegetablePackage() {}

	VegetablePackage(const VegetablePackage& vp) {
		width = vp.width;
		length = vp.length;
		height = vp.height;
		color = vp.color;
	}

	virtual VegetablePackage* Clone();

private:
	int width;
	int length;
	int height;
	string color;
};

class MeatPackage : public Package {
public:
	MeatPackage(int w, int l, int h, string c) : width(w),
		length(l), height(h), color(c) {
		cout << "����±�����װ��" << endl;
		cout << "�ߴ�" << width << "x" << length << "x" << height << endl;
		cout << "��ɫ" << color << endl;
	}
	virtual ~MeatPackage() {}

	MeatPackage(const MeatPackage& vp) {
		width = vp.width;
		length = vp.length;
		height = vp.height;
		color = vp.color;
	}

	virtual MeatPackage* Clone();

private:
	int width;
	int length;
	int height;
	string color;
};