
#include "StudentManager.h"


int main()
{

	vector<Student> ret = StudentManager::GetInstance()->get_students();

	
	for (auto& t : ret)
	{
		cout << t.student_id << ' ' << t.student_name << ' ' << t.class_id << endl;
	}

    

	return 0;
}
