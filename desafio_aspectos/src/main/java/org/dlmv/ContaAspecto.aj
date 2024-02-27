package org.dlmv;

public aspect ContaAspecto {
    final int SALDO_MINIMO = 10;

    pointcut chamarSacar(int montante, Conta conta) :
    call(boolean Conta.sacar(int)) && args(montante) && target(conta);

     before(int montante, Conta conta) : chamarSacar(montante, conta) {
     }

      boolean around(int montante, Conta conta) :
        chamarSacar(montante, conta) {
          if (conta.saldo < montante) {
              return false;
          }
          return proceed(montante, conta);
      }

      after(int montante, Conta saldo) : chamarSacar(montante, saldo) {
      }
}
