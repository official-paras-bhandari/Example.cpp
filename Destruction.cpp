#include <iostream>
using namespace std;
class Entity{
    public:
    Entity(){
        member = new int(5);
    }
    ~Entity(){
        cout << "Destruction is invoked" << endl;
        delete member;
    }
    private:
    int* member;
};

int main(){
    Entity entity1,entity2;//2 Destruction is callled here
    Entity *entity3 = new Entity();
    delete entity3;//Destruction is called for entity3
    return 0;
}