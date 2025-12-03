#include <iostream>
#include <fstream>
#include <string>


std::string replaceinString(std::string& line, std::string& s1, std::string& s2)
{
    if (s1.empty())
        return (line);
    std::string result;
    size_t posdep = 0;
    size_t foundpos;
    while ((foundpos= line.find(s1, posdep)) != std::string::npos)
    {
        result.append(line, posdep, foundpos-posdep);
        result.append(s2);

        posdep = foundpos +s1.length();
    }
    // result =  line.substr(posdep);
      result.append(line, posdep, line.length() - posdep);
    return (result);
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


    std::ifstream inputfile(filename .c_str());
    if (!inputfile.is_open())
    {
        std::cout<<"Error while opening the file!"<<std::endl;
        return (1);
    }

    std::string outfile = filename+".replace";
    std::ofstream outputfile(outfile .c_str());
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
    inputfile.close();
    outputfile.close();

    return (0);
}