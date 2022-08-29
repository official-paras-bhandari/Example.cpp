#include <iostream>
using namespace std;
struct Entity{
    int member = 0;
    void campare(const Entity &other){//Referecning to const Entity so it called other.
        if(this == &other){//THis object is equal to another object...
        
            cout << "This object are identical:";
        }
        else{
            cout << "This object are not identical";
        }

    }
};
int main(){
    Entity entity1 ,entity2;
    entity1.campare(entity2);
    return 0;
}