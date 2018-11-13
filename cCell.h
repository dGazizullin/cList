#ifndef CCELL_H
#define CCELL_H


class cCell
{
    public:
        cCell();
        virtual ~cCell();
        int getD();
        void setD(int data);
    private:
        int data;
};

#endif // CCELL_H
