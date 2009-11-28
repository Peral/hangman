
class Phrase{
    private:
        int id;         //Phrase's id
        string answer;
        string question;
        int catId;

    public:
        Phrase(int id, int catId);
        Phrase(int id, int catId,string answer, string question);
        int setAnswer(string answer);
        int setQuestion(string question);
};
