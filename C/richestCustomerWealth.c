int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
    int colSize = *accountsColSize;
    int max = 0;
    for(int i = 0; i < accountsSize; ++i ){
        int cust = 0;
        for(int j = 0; j < colSize; ++j){
            cust = cust + accounts[i][j];
        }
        if(cust > max){
            max = cust;
        }
    }
    return max;
}
