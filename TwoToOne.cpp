#include<iostream>
class TwoToOne
{
public:
    static std::string longest(const std::string &s1, const std::string &s2);
    std::string s1 = "anc";
    std::string s2 = "bcd";
};
 std::string TwoToOne::longest(const std::string &s1, const std::string &s2){
     std::string ss1 = s1; 
     std::string ss2 = s2; 
     std::cout << "longest function" << std::endl;         
    return ss1 + ss2;         
         }

int main(){
    TwoToOne a;
    std::cout << "Class should be displayed soon\n";
    std::cout << a.longest << std::endl;

}
