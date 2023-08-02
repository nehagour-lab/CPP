#include<iostream>
#include<ctime>
using namespace std;    
int main () {

bool end {false};
    srand (time(0));
    const size_t namelength {15};
    char name[namelength]{};
    cout<<"Whats your name ?";
    cin.getline(name,namelength);
    const char *prediction[] {
        "a lot of kinds running in the backyard!",
        "a lot of empty beer bootles on your work table.",
        "you Partying too much with kids wearing weird clothes.",
        "you running away from something really scary",
        "clouds gathering in the sky and an army standing ready for war",
        "dogs running around in a deserted empty city",
        "a lot of cars stuck in a terrible traffic jam",
        "you sitting in the dark typing lots of lines of code on your dirty computer",
        "you yelling at your boss. And oh no! You get fired!",
        "you laughing your lungs out. I've never seen this before." ,
        "Uhm , I don't see anything!"
    };
    while(!end){
        cout<<"Hey "<< name << "  I see  that\n";
        size_t rand_num = static_cast<size_t>(rand()% size(prediction));
        cout<<prediction[rand_num]<<"\n";

        cout<<"Do you want anything else? [Y | N]\n";
        char go_on;
        cin>>go_on;
        end = ((go_on == 'Y') || (go_on == 'y'))?false:true;
         
    }
}

