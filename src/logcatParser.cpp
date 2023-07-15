#include <iostream>
#include <string>
using namespace std;


const std::string PID_FLAG = "-pid";
const std::string VID_FLAG = "-vid";
const std::string TIME_RANGE_FLAG = "-time";


void parseCommandLineArgumeant(int argc, char* argv[], int & pidFiilter, int & vidFilter, std::string & startTime, std::string & endTime){
    std::cout<<"+++++++++++++++++ parseCommandLineArgumeant +++++++++++++++++++ "<<std::endl;

    for(int i = 1 ; i< argc; ++i)
    {
        std::string arg = argv[i];

        if(arg == PID_FLAG && (i+1) < argc)
        {
            std::cout<<"Indra"<<std::endl;
            pidFiilter = std::stoi(argv[i+1]);
            std::cout<<"pidFiilter :"<<pidFiilter<<std::endl;
            ++i;
        }
        else if(arg == VID_FLAG && (i+1) < argc){
            vidFilter = std::stoi(argv[i+1]);
            ++i;
        }
        else if(arg == TIME_RANGE_FLAG && (i+2) < argc){
            startTime = argv[i+1];
            endTime = argv[i+2];
            std::cout<<"startTime "<<startTime<<std::endl;
            std::cout<<"endTime "<<endTime<<std::endl;
            i += 2;
        }
    }
}


int main(int argc, char* argv[])
{
    if(argc < 2)
    {
        std::cout<<"Please provide proper input"<<std::endl;
        return 1;
    }

    std::string logFilePath = argv[1];

    //Parse command line arguments
    int pidFilter = -1;
    int vidFilter = -1;
    std::string startTime;
    std::string endTime;
    parseCommandLineArgumeant(argc, argv, pidFilter, vidFilter, startTime, endTime);

    std::cout<<"Log Parser"<<std::endl;
    return 0;
}