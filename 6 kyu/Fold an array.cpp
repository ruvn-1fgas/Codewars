class Kata
{
public:
    std::vector<int> foldArray(std::vector<int> array, int runs)
{
    for (int i = 0; i < runs; i++)
    {
        int count = array.size() % 2 == 0 ? array.size() / 2 : array.size() / 2 + 1;
        if (array.size() % 2 == 0)
            for (int j = 0; j < count; j++)
                array[j] += array[array.size() - 1 - j];
        else
            for (int j = 0; j < count - 1; j++)
              array[j] += array[array.size() - 1 - j];
        std::vector<int> temp;
        for (int i = 0; i < count; i++)
            temp.push_back(array[i]);
        array = temp;
    }
    return array;
}
};
