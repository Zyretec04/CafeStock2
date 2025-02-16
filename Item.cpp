#include "Item.h"

Item::Item(int id, String^ name, String^ category, int quantity) {
	itemID = id;
	itemName = name;
	itemCategory = category;
	itemQuantity = quantity;
}