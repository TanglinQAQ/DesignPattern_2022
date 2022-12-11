#pragma once
class cattle {
public:
	virtual void show() = 0;
};

class chicken {
public:
	virtual void show() = 0;
};

class pig {
public:
	virtual void show() = 0;
};

class Wang_cattle :public cattle {
public:
	void show();
};

class Wang_chicken :public chicken {
public:
	void show();
};

class Wang_pig :public pig {
public:
	void show();
};

class Li_cattle :public cattle {
public:
	void show();
};

class Li_chicken :public chicken {
public:
	void show();
};

class Li_pig :public pig {
public:
	void show();
};

class Farming_AbstractFactory {
public:
	virtual cattle* getCattle() = 0;
	virtual chicken* getChicken() = 0;
	virtual pig* getPig() = 0;
};

class WangFarming_Factory :public Farming_AbstractFactory {
public:
	cattle* getCattle();
	chicken* getChicken();
	pig* getPig();
};

class LiFarming_Factory :public Farming_AbstractFactory {
public:
	cattle* getCattle();
	chicken* getChicken();
	pig* getPig();
};