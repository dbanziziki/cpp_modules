#if !defined(__MUTANTSTACK_H__)
#define __MUTANTSTACK_H__

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
   private:
   public:
    MutantStack() : MutantStack<T>::stack(){};
    MutantStack(MutantStack const &src) : MutantStack<T>::stack(src){};
    ~MutantStack(){};

    MutantStack<T> &operator=(MutantStack const &rhs) {
        MutantStack<T>::stack::oparator = (rhs);
    }

    typedef typename MutantStack<T>::stack::container_type::iterator iterator;
    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); };

    typedef typename MutantStack<T>::stack::container_type::const_iterator
        const_iterator;
    const_iterator cbegin() const { return this->c.cbegin(); }
    const_iterator cend() const { return this->c.cend(); };

    typedef typename MutantStack<T>::stack::container_type::reverse_iterator
        reverse_iterator;
    reverse_iterator rbegin() { return this->c.rbegin(); }
    reverse_iterator rend() { return this->c.rend(); }

    typedef
        typename MutantStack<T>::stack::container_type::const_reverse_iterator
            const_reverse_iterator;
    const_reverse_iterator crbegin() const { return this->c.crbegin(); }
    const_reverse_iterator crend() const { return this->c.crend(); }
};

#endif  // __MUTANTSTACK_H__
