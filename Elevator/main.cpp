#include <iostream>

class Elevator 
{
    public:
        int max_floor = 10;
        int min_floor = 0;
        int floor = 1;

        void run()
        {
            int floor_choice;
            while (true)
            {
                std::cout << "You are at floor " << floor << ". " << "Go to: ";
                std::cin >> floor_choice;

                if ((floor_choice > max_floor) || (floor_choice < min_floor))
                {
                    std::cout << "Invalid floor. " << "Max: " << max_floor << " / Min: " << min_floor << "\n";
                }

                else if (floor_choice > floor)
                {
                    for (int i = floor; i < floor_choice + 1; i++)
                    {
                        std::cout << i << "\n";
                    }
                    floor = floor_choice;
                }

                else if (floor_choice < floor)
                {
                    for (int i = floor; i > floor_choice - 1; i--)
                    {
                        std::cout << i << "\n";
                    }
                    floor = floor_choice;
                }
            }
        }
};

int main() {
    Elevator elevator;
    elevator.run();
    return 0;
}