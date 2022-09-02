#include <iostream>
using namespace std;
class Entity{
    public:
    void setmember(int member);
    int getmember() const;
    void printstring();
    private:
    int _member=15;
};

int Entity::getmember() const{
return _member;
}

void Entity::setmember(int member){
_member = member;
}

void printstring(const Entity &entity){//Reference to the const Entity where entity can access all the data member and member functions and it is parameter                  
   cout<< entity.getmember()<< endl;//by adding const only we can call getmember because it const member function,..take less memory
}

int main(){    
Entity entity1;
printstring(entity1);//Passing Object to the printstring()Method.
const Entity entity2;//by adding const only we can call getmember because it const member function,..take less memory
cout<< entity2.getmember();//Note:Object const can only call the const qualified function
return 0;
}
