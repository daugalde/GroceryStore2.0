#pragma once
#include <iostream>

using namespace std;

class Store {

private:

	List* aisles;
	List invetory;
	List clients;
	List* sales;
	List* hotItems;

public:

	Store() {
		sales = new List();
		hotItems = new List();
	}

	Store(List* aisles) {
		this->aisles = aisles;
	}

	List* getAisles() {
		return aisles;
	};

	void setAiles(List* aisles) {
		this->aisles = aisles;
	};

	List* getSales() {
		return sales;
	};

	void setSales(List* sales) {
		this->sales = sales;
	};

	List* getHotItems() {
		return hotItems;
	};

	void setHotItems(List* hotItems) {
		this->hotItems = hotItems;
	};

	List getInventory() {
		return invetory;
	};

	void setInventory(List invetory) {
		this->invetory = invetory;
	};

	List getClients() {
		return clients;
	};

	void setClients(List clients) {
		this->clients = clients;
	};

	friend class List;

};