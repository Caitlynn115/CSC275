#ifndef TWITTER_H
#define TWITTER_H
#include "SocialMediaAccount.h"

template <class T>

class Twitter : public SocialMediaAccount <T> {
private:
    int retweetCount;

public:
    Twitter(T user, bool privacy = true) : SocialMediaAccount <T>(user, privacy), retweetCount(0) {}

    void setRetweetCount(int count) {
        retweetCount = count;
    }

    int getRetweetCount() {
        return retweetCount;
    }

    void RT() {
        retweetCount++;
    }
};

#endif //TWITTER_H