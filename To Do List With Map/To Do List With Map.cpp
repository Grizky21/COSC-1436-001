#include <iostream>
#include <map>
#include <string>

#include "ToDoList.h"

using namespace std;

int main()
{
    map<int, string> toDoList =
    {
        {1, "Ponder the meaning of life"},
        {2, "Take action"},
        {3, "Nap...ZzZZz"}
    };

  //  cout << "The First item on your list is: " << taskNumberMappedToTask[1] << "\n";

    addStuffToDoList(toDoList);

    printToDoList(toDoList);
    
}
