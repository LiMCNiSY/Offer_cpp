class Solution {
public:
    //��⣺������
    double myPow(double x, int n) {
        double res=1.0;
        int i=n;
        while(i){
            if(i&1)res*=x;  //i�ĵ�λ���ڣ�res*x
            x*=x;           //x����Ϊ����ƽ������Ϊ������ÿλ�Ĳ����ƽ����ϵ
            i/=2;           //i��0����
        }
        return n<0?1/res:res;
    }
};

