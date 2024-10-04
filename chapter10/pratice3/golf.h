#ifndef GOLF_H_
#define GOLF_H_
const int len = 40;
class Golf {
    private:
        char fullname[len];
        int handicap;
    public:
        Golf() {};
        Golf(const char * name, int hc);
        int setgolf();
        void setHandicap(int hc);
        void show() const;
};
#endif