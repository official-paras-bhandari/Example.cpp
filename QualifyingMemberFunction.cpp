#include <iostream>
using namespace std;
class Entity{
    public:
    int getMemnber() const;
    private:
    int member=1;
};
int Entity::getMemnber() const{
    this->member=15;//Where this pointer is pointing to Class Entity which can access the datamember and member functions
    return member;
}
int main(){
Entity entity1;
cout<< entity1.getMemnber();
return 0;
}