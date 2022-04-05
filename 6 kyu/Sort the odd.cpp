class Kata
{
public:
    std::vector<int> sortArray(std::vector<int> array)
    {
        for(int i = 0; i < array.size(); i++)
        {
          for(int j = 0; j < array.size(); j++)
          {
                if(array[i] % 2 == 1 && array[j] % 2 == 1 )
                {
                    if (array[j] > array[i])
                        std::swap(array[j], array[i]);
                }
          }
        }

        return array;
    }
};
