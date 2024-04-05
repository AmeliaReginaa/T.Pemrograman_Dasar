#include <iostream>

int score = 0;

void add_score(int increment) {
    score += increment;
    std::cout << "score diubah ke : " << score << std::endl;
}

int main() {
    std::cout << "score sebelum diubah : " << score << std::endl;
    add_score(5);
    add_score(5);
    add_score(5);
    add_score(5);
    add_score(5);
    add_score(5);
    std::cout << "score setelah diubah : " << score << std::endl;
    return 0;
}


