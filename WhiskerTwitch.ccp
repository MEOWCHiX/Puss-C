#include <thread>
#include <iostream>

void twitch(int whiskerNumber) {
    std::cout << "Whisker " << whiskerNumber << " twitched!" << std::endl;
}

int main() {
    std::thread whiskers[6];
    for(int i = 0; i < 6; ++i) {
        whiskers[i] = std::thread(twitch, i+1);
    }
    for(auto& whisker : whiskers) {
        whisker.join();
    }
    return 0;
}
