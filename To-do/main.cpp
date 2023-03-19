#include <iostream>
#include <vector>

class todoList
{
    public:
        std::vector<std::string> todo;

        void add()
        {
            std::string add_todo;
            std::cout << "Task: ";
            std::cin >> add_todo;
            std::cout << "\n";

            this->todo.push_back(add_todo);
        }

        void remove()
        {
            int index;
            std::cout << "Remove item from index: ";
            std::cin >> index;
            std::cout << "\n";

            this->todo.erase(this->todo.begin() + index);
        }

        void show()
        {
            std::cout << "Your tasks" << "\n" << "----------" << "\n";
            for (int i = 0; i < this->todo.size(); i++)
            {
                std::cout << i << " - " << this->todo[i] << "\n";
            }
        }

        void run()
        {
            while (true)
            {
                int action;
                std::cout << "[1] Show your tasks / [2] Erase a task / [3] Add a new task" << "\n" << "> ";
                std::cin >> action;

                switch (action)
                {
                    case 1:
                        this->show();
                        break;
                    case 2:
                        this->remove();
                        break;
                    case 3:
                        this->add();
                }
            }
        }
};


int main()
{
    todoList todo;
    todo.run();
    return 0;
}