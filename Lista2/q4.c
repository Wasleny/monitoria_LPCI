#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vMax, vMotorista, vAcimadoPermitido;

    printf("Informe a velocidade permitida na avenida (km/h) e a velocidade do motorista (km/h): ");
    scanf("%d%d", &vMax, &vMotorista);
    vAcimadoPermitido = vMotorista - vMax;

    if (vAcimadoPermitido > 0) {
        printf("Valor da multa: R$ %.2f", vAcimadoPermitido * 5.0);
    } else{
        printf("Não há multa.");
    }

    return 0;
}