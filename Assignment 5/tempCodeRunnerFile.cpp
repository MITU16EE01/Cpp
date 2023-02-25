int bin,dec=0,count  = 0;
    cout<<"Enter the binary number: ";
    cin>>bin;
    int temp = bin;
    
    while (bin>0)
    {
        int last = bin%10;
        if (last != 0){
            dec += pow(2,count);
        }
        bin /= 10;
        count += 1;