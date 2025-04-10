#ifndef INSTAGRAM_H
#define INSTAGRAM_H
#include "SocialMediaAccount.h"

template <class T>

class Instagram : public SocialMediaAccount<T> {
private:
    int likeCount:

public:
    Instagram(T user, bool privacy = true) : SocialMediaAccount<T>(user, privacy), likeCount(0) {}

    void setLikeCount(int count) {
        likeCount = count;
    }

    int getLikeCount() {
        return likeCount;
    }

    void Likes() {
        likeCount++;
    }
};

#endif //INSTAGRAM_H