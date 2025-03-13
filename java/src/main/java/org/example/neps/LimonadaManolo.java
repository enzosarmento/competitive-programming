package org.example.neps;

import java.util.Scanner;

public class LimonadaManolo {
    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        var n = sc.nextInt();
        var c = sc.nextInt();

        var ans = 0;
        for (int i = 0; i < n; i++) {
            ans += c;
            c--;
            if (c < 1) {
                c = 1;
            }
        }
        System.out.println(ans);
    }
}
