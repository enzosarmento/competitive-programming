package org.example.neps;

import java.util.Scanner;
import java.util.TreeMap;
import java.util.Vector;

public class Aeroporto {
    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        var map = new TreeMap<Integer, Integer>();
        int a;
        int v;
        while ((a = sc.nextInt()) != 0 && (v = sc.nextInt()) != 0) {
            if (!map.containsKey(v)) {
                map.put(v, 1);
            } else {
                map.put(v, map.get(v) + 1);
            }
        }

        for (int i = 1; i <= map.size(); i++) {
            System.out.println("Teste " + i);
            for (var key : map.keySet()) {
                //System.out.print(key + " ");
                System.out.print(map.get(key) + " ");
            }
            System.out.println();
        }
    }
}
