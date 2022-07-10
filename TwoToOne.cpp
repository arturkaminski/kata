#include<iostream>
#include<string>
class TwoToOne
{
public:
    std::string longest( std::string &s1,  std::string &s2);
    std::string alpha( std::string &a);
    std::string remov( std::string &b);
    std::string s1 = "ancajdhfbkx";
    std::string s2 = "bcd";
};
std::string TwoToOne::alpha(std::string &a){
     for ( std::string::iterator it=a.begin(); it!=a.end(); ++it){
        for ( std::string::iterator it2=a.begin()-1; it2!=a.end(); ++it2){
            if(*it < *it2){
                int temp = *it;
                *it = *it2;
                *it2 = temp;
            }
        }
     }
     return a;
}
std::string TwoToOne::remov(std::string &b)
{
    std::string s = b;
    std::string temp = "";
    temp += s.at(0);
 
    for (int i = 1; i < s.length(); i++) {
        if (!(temp.find(s.at(i)) < temp.length()))
            temp = temp + s.at(i);
    }
//    std::cout << temp;
    return temp;
}

std::string TwoToOne::longest( std::string &s1,  std::string &s2){
     std::string ss = s1 + s2;
     std::cout << "\nss1 before iteration\n";
//     std::string xx =  alpha(ss);
     std::cout << "\nreturn display\n";
     return ss;
}
int main(){
    TwoToOne a;
    std::cout << "Class should be displayed soon\n";
    std::cout << a.longest(a.s1, a.s2) << std::endl;
    std::string x = a.longest(a.s1, a.s2);
    std::string y = a.alpha(x);
    std::cout << y << std::endl;
    std::string z = a.remov(y);
    std::cout << z << std::endl;
}
