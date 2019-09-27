int main(int argv, char **argc)
{
    string log;


    int success = 1111;
    string save;
    while (true)
    {
        cout << success << " successful execution. do you want to save outputlog(y/n)?" << endl;
        cin >> save;
        saveFile(save);

    }
    return success;
}

//determines whether or not 
void saveFile(string save)
{
    if (save == "y")
    {
        ofstream clout; //because i always say clout instead of c-out haha issa joke
                        //also see: https://twitter.com/dausMcChar/status/1168976276046143488?s=20
        clout.open(argc[1] +".txt", ofstream::append);
        clout << argc[2] + ": simulation" + rand() << endl;
        clout << log << "\ns#0124abcd";
        break;
    }
    if (save == "n")
    {
        break;
    }
}
