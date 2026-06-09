#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> rounded_scores; 
    rounded_scores.reserve(student_scores.size()); 
    
    for (double score : student_scores) {
        rounded_scores.push_back(static_cast<int>(score));
    }
    
    return rounded_scores;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    int n{0};

    for(int a : student_scores){
        if(a<=40){
            n++;
        }
    }
    return n;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    int step = (highest_score - 40) / 4;
    
    int d_threshold = 41;
    int c_threshold = 41 + step;
    int b_threshold = 41 + step * 2;
    int a_threshold = 41 + step * 3;
    
    return {d_threshold, c_threshold, b_threshold, a_threshold};
}

std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    
    std::vector<std::string> ranking_list;
    
    for (size_t i = 0; i < student_names.size(); ++i) {
        std::string rank_info = std::to_string(i + 1) + ". " + 
                                student_names[i] + ": " + 
                                std::to_string(student_scores[i]);
                                
        ranking_list.push_back(rank_info);
    }
    
    return ranking_list;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    for (size_t i = 0; i < student_scores.size(); ++i) {
        if (student_scores[i] == 100) {
            return student_names[i]; 
        }
    }
    
    return "";
}
