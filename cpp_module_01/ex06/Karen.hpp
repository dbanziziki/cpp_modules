#ifndef __KAREN_H_
# define __KAREN_H_

#include <iostream>

class Karen
{
private:
    void    debug( void );
    void    warning( void );
    void    info( void );
    void    error( void );
public:
    Karen( void );
    ~Karen();

    void    complain( std::string level );
};


#endif