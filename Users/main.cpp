// Make a class named "User" and code some actions for it, like following other user or posting something.

#include <iostream>
#include <ctime>
#include <list>

using namespace std;

class User {
    public:
        string username;
        string email;
        string password;
        int followers = 0;
        list<string> followers_list;        

        void post(string title, string content) {
            time_t t = time(0);
            tm* now = localtime(&t);
            cout << title << "\n";
            cout << content << "\n";
            cout << "Posted by " << username << ", " << (now->tm_year + 1900) << "/" << (now->tm_mon + 1) << "/" << now->tm_mday;
        }

        User create(string username, string email, string password) {
            User user;
            user.username = username;
            user.email = email;
            user.password = password;

            return user;
        }

        void follow(User &user_to) {
            user_to.followers ++;
            user_to.followers_list.push_front(username);
        }

        void unfollow(User &user_to) {
            user_to.followers --;
            user_to.followers_list.remove(username);
        }

        list<string> fetch_followers() {
            return followers_list;
        }

};


int main() {
    User user = User().create("doca_f", "docafavarato@gmail.com", "favarato11");
    User user_1 = User().create("gabe", "docafavarato@gmail.com", "favarato11");
}