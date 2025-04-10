/***************************************************
Author: Caitlynn Johnson
Program: HW4
Date Created: April 9th, 2025
Date Last Modified: April 9th, 2025
Usage: No Command Line Arguments

Problem: Create SocialMediaAccount with int maxFollowers, int maxFollowed, T handler,
T followers, T followed, int followerCount, int followedCount, bool private, constructors,
setter + getters, addFollower, addFollowed, displayFollower, and displayFollowed.
Create class called Twitter with int retweetCount + get/set functions and a function called RT(),
Create class called Instagram with int like COunt + get/set functions and a function called Like().
Experiment with these parameters in the main.cpp.
****************************************************/

#include <iostream>
#include "SocialMediaAccount.h"
#include "Twitter.h"
#include "Instagram.h"

struct Profile {
    int userId;
    string userName;
};

int main() {
    Twitter <string> TS ("TwitterString");
    Twitter <Profile> TP (Profile{1, "TwitterProfile"});

    Instagram <string> IS ("InstagramString");
    Instagram <Profile> IP (Profile{2, "InstagramProfile"});

    TS.addFollower("Aokkun");
    TS.addFollowed("Lemon_Lime");

    TS.setPrivate(false);

    TS.displayFollowers();
    TS.displayFollowed();

    Profile newFollower = {3, "It's-Mizi-!"};
    TP.addFollower(newFollower);
    TP.addFollowed({4, "It's-Mizi-!"});

    TP.setPrivate(false);

    TP.displayFollowers();
    TP.displayFollowed();

    IS.Likes();
    cout << "Number Of Likes: " << IS.getLikeCount();

    IP.Likes();
    cout << "Number Of Likes: " << IP.getLikeCount();

    return 0;
};
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.