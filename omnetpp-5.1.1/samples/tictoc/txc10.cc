//
// This file is part of an OMNeT++/OMNEST simulation example.
//
// Copyright (C) 2003 Ahmet Sekercioglu
// Copyright (C) 2003-2015 Andras Varga
//
// This file is distributed WITHOUT ANY WARRANTY. See the file
// `license' for details on this and other legal matters.
//

#include <stdio.h>
#include <string.h>
#include <omnetpp.h>

using namespace omnetpp;

/**
 * Let's make it more interesting by using several (n) `tic' modules,
 * and connecting every module to every other. For now, let's keep it
 * simple what they do: module 0 generates a message, and the others
 * keep tossing it around in random directions until it arrives at
 * module 2.
 */
class Txc10 : public cSimpleModule
{
  protected:
    virtual void forwardMessage(cMessage *msg);
    virtual void initialize() override;
    virtual void handleMessage(cMessage *msg) override;
};

Define_Module(Txc10);

void Txc10::initialize()
{
    if (getIndex() == 0) {// Pega o indice do 1 submodulo p ele gerar a msg
        // Boot the process scheduling the initial message as a self-message.
        char msgname[20]; // cria um vetor de char de 20 posições
        sprintf(msgname, "tic-%d", getIndex()); //
        cMessage *msg = new cMessage(msgname);  //cria o objeto da msg de até 20 caracters
        scheduleAt(0.0, msg);// cronometra o tempo de saida da msg, atraso de 0.0
    }
}

void Txc10::handleMessage(cMessage *msg)// INvocado toda vez que houver uma msg a ser entregue
{
    if (getIndex() == 3) { //Pega o id do 4 submodulo
        // Message arrived.
        EV << "Message " << msg << " arrived.\n";
        delete msg; //Quando a msg chegar ao 4 submodulo tic[3] seu handleMessage apagará a msg
    }
    else {
        // We need to forward the message.
        forwardMessage(msg);// Se a msg não chegar a tic[3], precisamos encaminhar a msg
    }
}

void Txc10::forwardMessage(cMessage *msg)// Função que invoca handleMessage() sempre que uma msg
                                        // chega ao nó
{
    // In this example, we just pick a random gate to send it on.
    // We draw a random number between 0 and the size of gate `out[]'.
    int n = gateSize("out"); // n recebe o tamanho do portão
    int k = intuniform(0, n-1); // Gera um numero de portao aleatorio entre 0 e n-1(tamanho do gate out)

    EV << "Forwarding message " << msg << " on port out[" << k << "]\n";
    send(msg, "out", k); // Envia a msg no numero de porta que foi gerado
}

