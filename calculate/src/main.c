#include <stdio.h>
#include <dlfcn.h>
#include <errno.h>
#include <dirent.h>
#include <string.h>


int main(int argc, char* argv[])
{
	void *ext_library;	
	double value_1,value_2;

	printf("Input value_1 = ");
	scanf("%lf", &value_1);

	printf("Input value_2 = ");
	scanf("%lf", &value_2);

	char *oper = NULL;
	double (*powerfunc)(double x, double y);

	DIR *dir = NULL;

	dir = opendir("lib"); 
	if (errno == ENOTDIR){

	    perror("opendir");
	    return 1;

	}

	struct dirent *entry = NULL;
	while ((entry = readdir(dir)) != NULL)
	{
		char file_path[262] = {0};
		if (entry->d_name[0] == '.')
		{
			continue;
		}

		sprintf(file_path, "./lib/%s", entry->d_name);
		ext_library = dlopen(file_path,RTLD_LAZY);
		if (!ext_library)
		{
			fprintf(stderr,"dlopen() error: %s\n", dlerror());
			return 1;
		}
		oper = dlsym(ext_library, "func_name");
		powerfunc = dlsym(ext_library, oper);

		printf("%s \n", oper);
		printf("%s(%1.2lf,%1.2lf) = %1.2lf\n",oper,value_1,value_2,(*powerfunc)(value_1,value_2));
		dlclose(ext_library);
	}

	return 0;	
}
