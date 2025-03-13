package org.example.neps;

import java.util.ArrayList;
import java.util.Scanner;

public class DroneEntrega {
    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        var listValues = new ArrayList<Integer>();
        for (int i = 0; i < 3; i++) {
            var value = sc.nextInt();
            listValues.add(value);
        }
        var H = sc.nextInt();
        var L = sc.nextInt();
        listValues.sort(Integer::compareTo);
        var mid = listValues.get(1);
        var min = listValues.get(0);

        if (H == L) {
            if (mid <= H) {
                System.out.println("S");
            } else {
                System.out.println("N");
            }
        } else if (H > L) {
            if (mid <= H && min <= L) {
                System.out.println("S");
            } else {
                System.out.println("N");
            }
        } else {
            if (mid <= L && min <= H) {
                System.out.println("S");
            } else {
                System.out.println("N");
            }
        }
        sc.close();
    }
}
