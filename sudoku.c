int isValidSudoku(const char** A, int n1) {
    
    int i=0,j=0,k=0;
    int numbers[10]={-1};
    for(i=0;i<9;i++)
    {
        init(numbers);
        for(j=0;j<9;j++)
        {  
            int number=-1;
            if(A[i][j]=='.')
            {
                continue;
            }
            else
            {
                number=A[i][j]-48;
            }
            if(numbers[number]==1)
                return 0;
            numbers[number]=1;
        }
    }
    
    for(i=0;i<9;i++)
    {
        init(numbers);
        for(j=0;j<9;j++)
        {
            int number=-1;
            if(A[j][i]=='.')
            {
                continue;
            }
            else
            {
                number=A[j][i]-48;
            }
            if(numbers[number]==1)
                return 0;
            numbers[number]=1;
        }
    }
    
    for(i=0;i<9;i++)
    {
        j=(i-i%3);
        init(numbers);
        for(;j<(i-i%3)+3;j++)
        {
            k=(i%3)*3;
            
            for(;k<(i%3)*3+3;k++)
            {
                // printf("%d %d %c",j,k,A[i][j]);
                int number=-1;
            if(A[j][k]=='.')
            {
                continue;
            }
            else
            {
                number=A[j][k]-48;
            }
            if(numbers[number]==1)
                return 0;
            numbers[number]=1;
            }
        }
    }
    
    return 1;
}

void init(int numbers[10])
{   int i=0;
    for(i=0;i<10;i++)
    {
        numbers[i]=-1;
    }
}
