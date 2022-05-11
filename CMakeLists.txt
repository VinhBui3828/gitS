cmake_minimum_required(VERSION 2.8) # Проверка версии CMake.
									# Если версия установленой программы
									# старее указаной, произайдёт аварийный выход.

project(Hello)				# Название проекта

set(SOURCE_EXE
src/student.cpp
src/StudList.cpp
 main.cpp)			# Установка переменной со списком исходников

include_directories(src)			# Расположение заголовочных файлов

add_executable(Student ${SOURCE_EXE})	# Создает исполняемый файл с именем main
