#ifndef SOCIALMEDIAACCOUNT_H
#define SOCIALMEDIAACCOUNT_H
#include <iostream>
using namespace std;

int maxFollowers = 1000;
int maxFollowed = 1000;

template <class T>

class SocialMediaAccount {
private:
    T handler;
    T followers[maxFollowers];
    T followed[maxFollowed];
    int * followerCount;
    int * followedCount;
    bool privacy;

public:
    SocialMediaAccount();
    SocialMediaAccount(T user);

    void setFollowerCount(int n) {
        this -> followerCount = n;
    }
    void setFollowedCount(int n) {
        this -> followedCount = n;
    }
    void setHandler(T user) {
        this -> handler = user;
    }
    void setPrivate(bool privacy) {
        this -> privacy = privacy;
    }
    int getFollowerCount() {
        return this -> followerCount;
    }
    int getFollowedCount() {
        return this -> followedCount;
    }
    T getHandler() {
        return this->handler;
    }
    bool getPrivate() {
        return this -> privacy;
    }

    void addFollower(T user);

    void addFollowed(T user) {
        if (this -> followedCount < maxFollowed) {
            followed [followedCount] = user;
            this -> followedCount ++;
        }
    }

    void displayFollowers() {
        if (!this -> privacy) {
            for (int i = 0; i < this -> followerCount; i++) {
                cout << "Followers: " << followers[i];
            }
        }

        else {
            cout << "Account Is Protected";
        }
    }
};

#endif //SOCIALMEDIAACCOUNT_H