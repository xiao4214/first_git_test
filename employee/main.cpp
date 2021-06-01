#include <iostream>
#include "workerManager.h"

int main (void)
{
		WorkerManager  wm;
		int choice = 0;

		while (true)
		{
				wm.Show_Menu ();
				std::cout << "please input your choice: " << std::endl;
				std::cin >> choice;

				switch (choice)
				{
						case 0:  // exit 
								wm.ExitSystem ();
								break;
						case 1:
								break;
						case 2:
								break;
						case 3:
								break;
						case 4:
								break;
						case 5:
								break;
						case 6:
								break;
						case 7:
								break;
				}
		}


		return 0;
}
