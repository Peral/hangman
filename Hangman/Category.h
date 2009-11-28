// header file

#include <string>
#include <vector>

class Category{
    private:
        int id;         // category's id
        string name;    // category's name
        string desc;    // description
        vector <int> phraseId;  // phrases belong to this category

    public:
        Category(); // default constructor
        Category(string name,string desc);
        int addPhrase(int id);
        int deletePhrase(int id);
        int deletePhrase(string answer);
        int setName(string name);
        int setDesc(string desc);
        string getName();
        string getDesc();
};
