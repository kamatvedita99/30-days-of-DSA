int number,k=0,rem;
	string numstr;
	cout<<"enter no"<<endl;
	cin>>number;
	
	while(number>0){
		rem= number%26;
		numstr[k++]=char(rem-1+65);
		cout<<numstr<<endl;
		number/=10;
