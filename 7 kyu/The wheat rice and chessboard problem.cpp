unsigned int squaresNeeded(long long n) {
          if (n == 0) return 0;
            int num = 1;
            long long rice = 1;
            while (rice < n)
            {
                rice *= 2;
                num++;
            }
            if(rice > n) return num - 1;
            else return num;
  
            return num;
}
