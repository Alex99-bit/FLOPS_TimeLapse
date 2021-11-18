
class Tempo{
	private:
		int h[2],m[2],s[2],d,x=1;
		GotoXY pos;
	public:
		Tempo();
		void time_lapse();
};

Tempo::Tempo(){
	for(int i=0;i<2;i++){
		h[i]=0;
		m[i]=0;
		s[i]=0;
	}
}

void Tempo::time_lapse(){
	do{
		pos.go_xy(1,1);
		cout<<" "<<d<<":"<<h[0]<<h[1]<<":"<<m[0]<<m[1]<<":"<<s[0]<<s[1];
	/*	printf("\n %d:%d%d:%d%d:%d%d",d,h[0],h[1],m[0],m[1],s[0],s[1]);	*/
		Sleep(1000);
		s[1]++;
		if(s[1]==10){
			s[0]++;
			s[1]=0;
			if(s[0]==6 && s[1]==0){
				s[0]=0;
				m[1]++;
				if(m[1]==10){
					m[0]++;
					m[1]=0;
					if(m[0]==60 && m[1]==0){
						m[0]=0;
						h[1]++;
						if(h[1]==10){
							h[0]++;
							h[1]=0;
							if(h[0]==2 && h[1]==4){
								h[0]=0;
								d++;
							}
						}
					}
				}
			}
		}
	}while(x==1);
}
