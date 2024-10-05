#ifndef SERVIVO_H
#define SERVIVO_H
class SerVivo{
    public:
        // Funcion Virtual
        // Para que sea pura se le asigna un cero y con esto esta clase se convierte en abstracta
        virtual void alimentarse() = 0;
};
#endif