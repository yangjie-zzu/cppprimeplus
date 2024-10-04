#ifndef LIST_H_
#define LIST_H_
typedef const char * Item;

class List {
    private:
        static const int MAX = 10;
        Item items[MAX];
        int top;
    public:
        List();
        void add(const Item & item);
        bool isempty() const;
        bool isfull() const;
        void visit(void (*pf)(Item &));
};
#endif