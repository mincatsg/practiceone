package list;

public class Card {
    public String rank;  //牌值
    public String suit;  //花色

    @Override
    public String toString() {
        return String.format("[%s %s]", suit, rank);
    }
}
