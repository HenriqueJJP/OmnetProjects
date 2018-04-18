simple TicTest extends TxcTest{
    parameters:
        @display ( "i =, cyan" );
        SendMsgOnInit = true;
}
//
// TODO documentation
//
network RedeTicTest
{
    submodules:
        tic: TicTest;
        toc: TicTest;
    connections:
}