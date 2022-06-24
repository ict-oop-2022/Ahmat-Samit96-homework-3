#pragma once
#include "JobObject.h"
#include <ctime>
#include "Repository.h"
#include <filesystem>
namespace fs = std::filesystem;


class SubjectSingle {
private:
    JobObject _copyFile;
    string _newNameFile;
    time_t _seconds;
public:
    SubjectSingle(JobObject file, Repository& path);

    string getNewNameFile();

};


