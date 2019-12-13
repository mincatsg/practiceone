package list;

import java.util.ArrayList;
import java.util.List;

import static java.util.Collections.shuffle;

public class DemoCard {
    //构造花色
    public static final String []Suits = {"♠","♥","♣","♦"};
    //构造新的牌
    public static List<Card> newDeck(){
        List<Card> deck = new ArrayList<>(52);
        for(int i = 0; i < 4; i++){
            String suits = Suits[i];
            Card card1 = new Card();
            card1.suit = suits;
            card1.rank = "A";
            deck.add(card1);
            for(int j = 2; j <= 10; j++){
                Card card = new Card();
                card.suit = suits;
                card.rank = j + "";
                deck.add(card);
            }
            Card card2 = new Card();
            card2.suit = suits;
            card2.rank = "J";
            deck.add(card2);
            Card card3 = new Card();
            card3.suit = suits;
            card3.rank = "Q";
            deck.add(card3);
            Card card4 = new Card();
            card4.suit = suits;
            card4.rank = "K";
            deck.add(card4);
        }
        return deck;
    }

    public static  List<List<Card>> handCard(List<Card> deck){
        List<List<Card>> hands = new ArrayList<>();
        hands.add(new ArrayList<>());
        for (int i = 10; i < 25; i += 5) {
                hands.get(0).add(deck.remove(i));
        }
        return hands;
    }



    public static void main(String[] args) {
        List<Card> deck = newDeck();
        System.out.println("新牌:");
        System.out.println(deck);
        shuffle(deck);
        System.out.println("打乱顺序的牌:");
        System.out.println(deck);

        System.out.println("A 手中的牌:");
        System.out.println(handCard(deck));
        System.out.println("B 手中的牌:");
        System.out.println(handCard(deck));
        System.out.println("C 手中的牌:");
        System.out.println(handCard(deck));
    }
}
