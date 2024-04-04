#include "database.h"

// 엔트리를 생성한다.
Entry *create(Type type, std::string key, void *value){
    Entry* ent;
    ent->type=type;
    ent->key=key;
    ent->value=value;

    return ent;
}

// 데이터베이스를 초기화한다.
void init(Database &database){
    database.count=0;
    database.head=0;
}

// 데이터베이스에 엔트리를 추가한다.
void add(Database &database, Entry *entry){
    Node* currNode=database.head;
    for(int i=0; i<=database.count; i++){
        if(currNode->next==nullptr){
            Node* newNode;
            currNode->next=newNode;
            newNode->e=entry;
        }
        currNode=currNode->next;
    }
    database.count++;
}

// 데이터베이스에서 키에 해당하는 엔트리를 찾는다.
Entry *get(Database &database, std::string &key){
    Node* currNode=database.head;
    for(int i=0; i<=database.count; i++){
        if((currNode->e->key).compare(key)==0)
            return currNode->e;
        currNode=currNode->next;
    }
    return nullptr;
}

// 데이터베이스에서 키에 해당하는 엔트리를 제거한다.
void remove(Database &database, std::string &key){

}

// 데이터베이스를 해제한다.
void destroy(Database &database){

}