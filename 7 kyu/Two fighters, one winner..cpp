std::string declareWinner(Fighter* a, Fighter* b, std::string firstAttacker)
{
    while (a->getHealth() > 0 && b->getHealth() > 0)
    {
        if(firstAttacker == a->getName())
        {
            b->setHealth(b->getHealth() - a->getDamagePerAttack());
            if (b->getHealth() <= 0)
                break;
            a->setHealth(a->getHealth() - b->getDamagePerAttack());
            if (a->getHealth() <= 0)
                break;
        }
        else
        {
            a->setHealth(a->getHealth() - b->getDamagePerAttack());
            if (a->getHealth() <= 0)
                break;
            b->setHealth(b->getHealth() - a->getDamagePerAttack());
            if (b->getHealth() <= 0)
                break;
        }
    }
    return a->getHealth() > b->getHealth() ? a->getName() : b->getName();
}
