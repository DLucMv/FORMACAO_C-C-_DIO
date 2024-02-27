import org.aspectj.lang.annotation.Before;
import org.dlmv.Conta;
import org.junit.Test;

import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertTrue;

public class ContaUniTest {
    private Conta conta;

    @Before("")
    public void before() {
        conta = new Conta();
    }

    @Test
    public void givenBalance20AndMinBalance10_whenWithdraw5_thenSuccess() {
        assertTrue(conta.sacar(5));
    }

    @Test
    public void givenBalance20AndMinBalance10_whenWithdraw100_thenFail() {
        assertFalse(conta.sacar(100));
    }
}
