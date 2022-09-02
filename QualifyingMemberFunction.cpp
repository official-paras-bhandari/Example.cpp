#include <iostream>
using namespace std;
class Entity{
    public:
    int getMemnber() const;
    private:
    int member=1;
};
int Entity::getMemnber() const{
    this->member=15;
    return member;
}
int main(){
Entity entity1;
cout<< entity1.getMemnber();
return 0;
}