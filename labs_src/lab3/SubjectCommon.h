#pragma once
#include "Repository.h"
#include "JobObjects.h"
#include <ctime>
#include <filesystem>
namespace fs = std::filesystem;
using std::to_string;

class SubjectCommon {
private:
    string _newNameFile, _flag;
    time_t _seconds;
public:
    SubjectCommon(JobObjects files, Repository& path);

};


