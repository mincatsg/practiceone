//2 设计一个汽车类
class car{
    public int chezhong;
    public int lungeshu;
    public int getchezhong(){
        return chezhong;
    }
    public int getlungeshu(){
        return lungeshu;
    }
}
class kache extends car{
    public int zaizhongliang;
    public int getchezhong(){
        return chezhong;
    }
    public int getlungeshu(){
        return lungeshu;
    }
    public int getzaizhongliang(){
        return zaizhongliang;
    }

}
class mianbaoche extends kache{
    public int zaikeliang;
    public int getchezhong(){
        return chezhong;
    }
    public int getlungeshu(){
        return lungeshu;
    }
    public int getzaizhongliang(){
        return zaizhongliang;
    }
    public int getzaikeliang(){
        return zaikeliang;
    }
}
public class qiche{
    public static void main(String args[]){
        car car1=new car();
        kache kache1=new kache();
        mianbaoche mianbaoche1=new mianbaoche();
        car1.chezhong=190;
        kache1.chezhong=350;
        mianbaoche1.zaikeliang=8;
        System.out.println("chezhong of car1:"+car1.getchezhong());
        System.out.println("zaikeliang of mianbaoche1:"+mianbaoche1.getzaikeliang());
    }
}