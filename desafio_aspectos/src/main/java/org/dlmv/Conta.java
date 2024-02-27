package org.dlmv;

public class Conta {
    int saldo = 20;

    public boolean sacar(int montante) {
        if (saldo < montante) {
            return false;
        }
        saldo = saldo - montante;
        return true;
    }
}