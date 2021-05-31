#include "MathTeacherBuilder.h"
#include "EnglishTeacherBuilder.h"
#include "Director.h"

// 通过Director利用不同的具体构建器都采用相同的步骤一步步构建出不同的具体的老师类对象
int main() {
    std::shared_ptr<TeacherAbstractBuilder> builder = std::make_shared<MathTeacherBuilder>();
    std::shared_ptr<Director> director = std::make_shared<Director>(builder);

    director->Create();
    auto mathTeacher1 = builder->GetTeacher();
    builder->PrintSkillList();

    std::cout << "\n";

    builder = std::make_shared<EnglishTeacherBuilder>();
    director = std::make_shared<Director>(builder);

    director->Create();
    auto englishTeacher1 = builder->GetTeacher();
    builder->PrintSkillList();

    return 0;
}