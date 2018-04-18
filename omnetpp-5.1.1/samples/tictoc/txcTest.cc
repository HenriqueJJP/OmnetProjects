/*
 * txcTest.cc
 *
 *  Created on: 1 de abr de 2018
 *      Author: junior
 */

#include <string.h>
#include <omnetpp.h>

using namespace omnetpp;

class TxcTest : public cSimpleModule{
private :
    int contador;

protected:
    // The following redefined virtual function holds the algorithm.
    virtual void initialize() override;
    virtual void handleMessage(cMessage *msg) override;
    virtual void forwardMessage(cMessage *msg);
};

Define_Module(TxcTest); //Mesmo nome do simple TxcTest do arquivo tictocTest.ned

void TxcTest::initialize(){ //aqui criamos o objeto de msg para enviar ao gate out (ve arquivo tictocTest.ned)
    // Initialize is called at the beginning of the simulation.
        // To bootstrap the tic-toc-tic-toc process, one of the modules needs
        // to send the first message. Let this be `tic'.
        // Am I Tic or Toc?

    contador = par("limit"); //adicionando a quantidade de vezes da troca de msg
        if (strcmp("tic", getName()) == 0) {
            // create and send first message on gate "out". "tictocMsg" is an
            // arbitrary string which will be the name of the message object.
            cMessage *msg = new cMessage("tictocMsg");//cria o objeto da msg. Msg "tictocMsg"

            if(par("SendMsgOnInit").boolValue()==true){ //Avalia se o valor de SendMsgOnInit é verdadeiro conforme
                                                       //O que foi especificado no arquivo .ned. Se verdadeiro envia.
            send(msg, "out");//envia a msg
            //send(msg, "out2");

            }
            WATCH(contador);

            // cMessage e suas subclasses são responsaveis por representar msg (pacotes, frames, jobs etc)
            // e eventos (timers, timeouts)
        }
    }


void TxcTest::handleMessage(cMessage *msg){ //metod responsavel por conter a msg a ser entregue ao modulo
    // The handleMessage() method is called whenever a message arrives
        // at the module. Here, we just send it to the other module, through
        // gate `out'. Because both `tic' and `toc' does the same, the message
        // will bounce between the two.
   contador--;
   if(contador==0){
       EV << getName() << "'s counter reached zero, deleting message\n";
       delete msg;
   } else{
        send(msg, "out"); // send out the message
        //send(msg, "out2");

        EV <<"Sending initial message\n";
        EV <<"Received message '"<< msg->getName()<<"', sending it out againn\n";//entrega a msg
    }
     }
