#ifndef __foo_bar_h__
#define __foo_bar_h__

template<class T>
class Bar
{
    public:

        inline Bar(T *instance)
        {
        }

    private:
        T* m_instance;
};

#endif
