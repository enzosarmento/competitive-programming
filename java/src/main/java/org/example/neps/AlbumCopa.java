package org.example.neps;

import java.util.HashSet;
import java.util.Scanner;

public class AlbumCopa {
    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        var n = sc.nextInt();
        var m = sc.nextInt();
        var set = new HashSet<Integer>();

        for (int i = 0; i < m; i++) {
            set.add(sc.nextInt());
        }

        var ans = n - set.size();
        System.out.println(ans);
    }
}
