#pragma once
//我们使用原型模式来模拟农产品包装完成并出厂的过程
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
		cout << "进行烤鸡包装：" << endl;
		cout << "尺寸" << width << "x" << length << "x" << height << endl;
		cout << "颜色" << color << endl;
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
		cout << "进行卤猪肉包装：" << endl;
		cout << "尺寸" << width << "x" << length << "x" << height << endl;
		cout << "颜色" << color << endl;
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