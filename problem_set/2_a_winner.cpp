/*
  Contest 2
  Problem A : Winner
  Author: Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 14/01/2020
 */

#include <cstdio>
#include <vector>
#include <map>
#include <string>

struct PositionalScore {
    int position;
    int score;

    PositionalScore(int pos, int sc) {
        position = pos;
        score = sc;
    }
};

int main() {
    std::map < std::string, int > score_list;
    std::map < std::string, std::vector<PositionalScore> > score_positions;

    int N = 0;
    scanf("%d", &N);

    for (int i = 0; i < N; ++i) {
        char name[64] = { 0 };
        int score = 0;

        scanf("%s %d", &name, &score);

        score_list[name] += score;

        PositionalScore pos_score(i, score_list[name]);
        score_positions[name].push_back(pos_score);
    }

    int max_score = 0;
    for (std::map < std::string, int >::const_iterator it = score_list.begin();
         it != score_list.end(); ++it) {
        if (it->second > max_score)
            max_score = it->second;
    }

    int min_position = N;
    std::string name;
    for (std::map < std::string, int >::const_iterator it = score_list.begin();
         it != score_list.end(); ++it) {
        if (it->second == max_score) {
            std::vector <PositionalScore> positions = score_positions[it->first];

            for (std::size_t i = 0; i < positions.size(); ++i) {
                if (positions[i].score >= max_score && positions[i].position < min_position) {
                    name = it->first;
                    min_position = positions[i].position;
                }
            }
        }
    }

    printf("%s\n", name.c_str());

    return 0;
}
