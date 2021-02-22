#include <stdio.h>

/* заголовочный файл для работы с динамическими библиотеками */
#include <dlfcn.h>

int main(int argc, char* argv[]){

	void *ext_library;	// хандлер внешней библиотеки
	double value_1,value_2;

	printf("Input value_1 = ");
	scanf("%lf", &value_1);

	printf("Input value_2 = ");
	scanf("%lf", &value_2);

	double (*powerfunc)(double x, double y);

	//загрузка библиотеки
	ext_library = dlopen("/home/jw/Рабочий стол/lessonfebruary/calculate/libpowers.so",RTLD_LAZY);
	if (!ext_library){
		//если ошибка, то вывести ее на экран
		fprintf(stderr,"dlopen() error: %s\n", dlerror());
		return 1;
	};

	//загружаем из библиотеки требуемую процедуру
	powerfunc = dlsym(ext_library, argv[1]);


	//выводим результат работы процедуры
	printf("%s(%1.2lf,%1.2lf) = %1.2lf\n",argv[1],value_1,value_2,(*powerfunc)(value_1,value_2));

	//закрываем библиотеку
	dlclose(ext_library);
};
