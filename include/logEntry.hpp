#ifndef LOGENTRY_HPP
#define LOGENTRY_HPP
#include <string>
#pragma once

class logEntry
{
public:
    logEntry();
    ~logEntry();

    std::string data;
    std::string time;
    int processId;
    int threadId;
    std::string logLevel;
    std::string tag;
    std::string message;


private:

};

#endif