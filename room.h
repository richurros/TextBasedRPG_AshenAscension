#pragma once
#include <iostream>
#include <string> 
#include <vector>
using namespace std;

class Room
{
private:
    string name;
    string description;
    string NPCDialogue;
    string NPCName;
    string NPCsAvailable;
    string locationsAvailable;
    string itemsAvailable;
    string itemName;
    bool itemsTaken;
    vector<string> connectedRooms;


public:
    Room();
    Room(string name, string description, string NPCsAvailable, string locationsAvailable, string NPCDialogue, string NPCName, string Items, string ItemName);
    string getName() { return name; }
    void setName(string name);
    string getDescription() { return description; }
    string getNPCsAvailable() { return NPCsAvailable; }
    string getLocationsAvailable() { return locationsAvailable; }
    string getNPCDialogue() { return NPCDialogue; }
    string getItemName() { return itemName; }
    string getItemsAvailable() { return itemsAvailable; }
    string getNPCName() { return NPCName; }
    void setItemStatus(bool b);
    bool getItemStatus() { return itemsTaken; }
    vector<string> getConnectedRooms() { return connectedRooms; }
    void setConnectedRooms(vector<string> cr);
    void setConnectedRoom(string r);
    bool validMove(string r);
};

