#ifndef SQUAD_HPP_
# define SQUAD_HPP_

# include <cstdlib>

# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad
{
    public:
    Squad(void);
    Squad(const Squad &src);
    Squad   &operator= (const Squad &rhs);
    ~Squad(void);

    virtual int push(ISpaceMarine *marine);

    virtual int getCount(void) const;
    virtual ISpaceMarine *getUnit(int n) const;

    private:
    typedef struct        s_container
    {
        ISpaceMarine          *unit;
        struct s_container    *next;
    }                     t_container;

    int _nbr_units;
    t_container *_squad;

    void _copyUnits(const Squad &src);
    void _destroyUnits(void);
    bool _unitAlreadyIn(ISpaceMarine *marine, t_container *squad);
};

#endif