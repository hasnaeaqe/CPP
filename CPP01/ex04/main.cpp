#include <iostream>
#include <fstream>
#include <string>


std::string replaceinString(std::string line, std::string s1, std::string s2)
{
    std::string result;
    size_t posdep = 0;
    size_t foundpos;
    while ((foundpos= line.find(s1, posdep)) != std::string::npos)
    {
        result =  line.substr(posdep, foundpos-posdep);
        result += s2;

        posdep += foundpos;
    }
    result =  line.substr(posdep);


}
int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout<<"Usage : filename s1 s2" <<std::endl;
        return (1);
    }
    std:: string filename = argv[1];
    std:: string s1 = argv[2];
    std:: string s2 = argv[3];


    std::ifstream inputfile(filename);
    if (!inputfile.is_open())
    {
        std::cout<<"Error while opening the file!"<<std::endl;
        return (1);
    }

    std::string outfile = filename+".replace";
    std::ofstream outputfile(outfile);
    if (!outputfile.is_open())
    {
        std::cout<<"Error while opening the file out!"<<std::endl;
        return (1);
    }

    std::string line;
    while (std::getline(inputfile, line))
    {
        std::string process = replaceinString(line, s1, s2);
        outputfile<<process;
        //eof

    }
    return (0);
}