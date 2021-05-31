
#include "MathTeacherBuilder.h"
#include "EnglishTeacherBuilder.h"
#include "Director.h"

// 通过Director利用不同的具体构建器都采用相同的步骤一步步构建出不同的具体的老师类对象
int main() {
    std::shared_ptr<TeacherAbstractBuilder> builder = std::make_shared<MathTeacherBuilder>();
//    std::shared_ptr<Director> director = static_cast<std::shared_ptr<Director>>(new Director(builder));
    std::shared_ptr<Director> director = std::make_shared<Director>(builder);

    builder = static_cast<std::shared_ptr<TeacherAbstractBuilder>>(new EnglishTeacherBuilder());
//    director = std::make_shared<Director>(director);
//
//    builder = new EnglishTeacherBuilder();
//    director = new Director(builder);

    return 0;
}