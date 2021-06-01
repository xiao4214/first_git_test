#include "workerManager.h"
#include <stdlib.h>

WorkerManager::WorkerManager ()
{
}

WorkerManager::~WorkerManager ()
{
}

void WorkerManager::Show_Menu ()
{
		std::cout << "***************************************************" << std::endl;
		std::cout << "******** wecome to employee manager system ********" << std::endl;
		std::cout << "******** 0. exit to system ************************" << std::endl;
		std::cout << "******** 1. add employee info *********************" << std::endl;
		std::cout << "******** 2. show employee info ********************" << std::endl;
		std::cout << "******** 3. del employee info *********************" << std::endl;
		std::cout << "******** 4. update employee info ******************" << std::endl;
		std::cout << "******** 5. search employee info ******************" << std::endl;
		std::cout << "******** 6. sort employee info ********************" << std::endl;
		std::cout << "******** 7. empty  ********************************" << std::endl;
		std::cout << "***************************************************" << std::endl;
}

void WorkerManager::ExitSystem ()
{
		std::cout << "wecome back !" << std::endl;
		//system ("pause");
		exit (0);
}

