#pragma once

using namespace System;

public ref class Item
{
public:
	int itemID;
	String^ itemName;
	String^ itemCategory;
	int itemQuantity;

	Item(int id, String^ name, String^ category, int quantity);
};

