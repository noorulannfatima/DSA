int r1;
    cout<<"Enter the no of r1 : "<<endl;
    cin>>r1;
    int c1;
    cout<<"Enter the no of c1 : "<<endl;
    cin>>c1;

    int A[r1][c1];
    cout<<"Enter elements of first 2D Array : "<<endl;
    for (int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>A[i][j];
        }
    }
    int r2;
    cout<<"Enter the no of r2 : "<<endl;
    cin>>r2;
    int c2;
    cout<<"Enter the no of c2 : "<<endl;
    cin>>c2;

    int B[r2][c2];
    cout<<"Enter elements of second 2D Array : "<<endl;
    for (int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>B[i][j];
        }
    }