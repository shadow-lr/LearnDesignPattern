#include "Aggregate.h"
#include "Iterator.h"

int main() {
    std::vector<Book> books;
    books.emplace_back(Book("哈利波特"));
    books.emplace_back(Book("小王子"));
    books.emplace_back(Book("Real Time Render"));
    books.emplace_back(Book("Ray Tracing One Week"));
    books.emplace_back(Book("CUDA!"));

    std::shared_ptr<Aggregate<Book>> aggregate = std::make_shared<ConcreteAggreaget<Book>>(books);
    std::shared_ptr<Iterator<Book>> iterator = std::make_shared<ConcreteIterator<Book>>(aggregate);

    while (iterator->HasNext()) {
        std::cout << iterator->GetCurIndex() << "\n";
        std::cout << iterator->next().GetName() << "\n";
    }
}