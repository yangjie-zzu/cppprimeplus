#ifndef PLORG_H_
#define PLORG_H_
class Plorg {
    private:
        char name[19];
        int ci;
    public:
        Plorg(const char * n = "Plorga", int c = 50);
        void show() const;
        void update(int c);
};
#endif