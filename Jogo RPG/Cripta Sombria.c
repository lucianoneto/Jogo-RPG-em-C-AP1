#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    char op_menu,sair_menu;
    /////////////////////////////////////////////////////////////////////////////////
    char menu_introducao,menu_introducao2;
    /////////////////////////////////////////////////////////////////////////////////
    char op_criacao='0',op_luta=0,op_encontro=0,nome_p[30];
    int cont1,aux1=0,luta=1,tempo_recarga=0,tempo_recargamax=0,raca=0,game_over=0,genero=0,genero1=0;
    float vida_pmax=0,vida_p=1,ataque_p=0,defesa_p=0,ataquef_p=35.0;
    /////////////////////////////////////////////////////////////////////////////////
    char cont_mochila_char,mochila[5][50]= {{"Po��o de Vida Pequena"},{"Vazio"},{"Vazio"},{"Vazio"},{"Vazio"}},tesouro,menutesouro,tesouro2,tesouro3,menutesouro2,armadilha,armadilha1,mochilavariavel,mochilavariavel1,armadilha3,armadilha4;
    int char_int=0,cont_mochila,cont_mochila2,item_escolha=0,teste_mochila=0,cont_pot_dano=0,cont_pot_defesa=0,pre_teste,cont_item=0,add_item=0,armazenar;
    /////////////////////////////////////////////////////////////////////////////////
    float vida_goblin=30,ataque_goblin=20;
    float vida_esqueleto=35,ataque_esqueleto=22;
    float vida_aranha=18,ataque_aranha=25;
    float vida_esqueletoE=42,ataque_esqueletoE=28;
    float vida_zumbi=22,ataque_zumbi=30;
    float vida_mumia=60,ataque_mumia=25;
    float vida_orc=70,ataque_orc=40;
    float vida_troll=40,ataque_troll=35;
    /////////////////////////////////////////////////////////////////////////////////
    float vida_boss=350,ataque_boss=50;
    char menuboss,menuboss2,menuboss3;
    int interativo,interativo2,interativo3;
    /////////////////////////////////////////////////////////////////////////////////
    system("cls");
    do
    {
        system("cls");
        printf("\n\n\n\n\n\n________________________________________________________________________________________________________________________________________________________________________\n\n\n\n\n\n");
        printf("\n\t\t\t\t\t\t\t\t\t| CRIPTA SOMBRIA  |\t\t\t\t\t\t\n\n\n\n\n");
        printf("\t\t\t\t\t\t\t*********************************************************\n");
        printf("\t\t\t\t\t\t\t*\t\t                              \t\t*\n");
        printf("\t\t\t\t\t\t\t*\t\t(1)- ENTRAR NA CRIPTA!!!      \t\t*\n");
        printf("\t\t\t\t\t\t\t*\t\t                              \t\t*\n");
        printf("\t\t\t\t\t\t\t*\t\t(2)- Cr�ditos!                \t\t*\n");
        printf("\t\t\t\t\t\t\t*\t\t                              \t\t*\n");
        printf("\t\t\t\t\t\t\t*\t\t(0)- SAIR DO JOGO!            \t\t*\n");
        printf("\t\t\t\t\t\t\t*\t\t                              \t\t*\n");
        printf("\t\t\t\t\t\t\t*********************************************************\n");
        printf("\n\n\n\n\n\n________________________________________________________________________________________________________________________________________________________________________\n\n\n\n\n\n");
        setbuf(stdin,NULL);
        scanf("%c",&op_menu);
        if (op_menu=='0')
        {
            do
            {
                system("cls");
        printf("\n\n\n\n\n\n________________________________________________________________________________________________________________________________________________________________________\n\n\n\n\n\n");
                printf("\nTem certeza que n�o deseja jogar mais ?\n");
                printf("\n (1)- SIM!\t\t(2)- N�O!\n");
        printf("\n\n\n\n\n\n________________________________________________________________________________________________________________________________________________________________________\n\n\n\n\n\n");
                setbuf(stdin,NULL);
                scanf("%c",&sair_menu);
                if (sair_menu=='1')
                {
                    system("cls");
        printf("\n\n\n\n\n\n________________________________________________________________________________________________________________________________________________________________________\n\n\n\n\n\n");
                    printf("\nAt� a pr�xima aventura, a Cripta o aguarda . . . \n\n");
        printf("\n\n\n\n\n\n________________________________________________________________________________________________________________________________________________________________________\n\n\n\n\n\n");
                }
                else if (sair_menu=='2')
                    op_menu='9';
                else
                {
                    printf("\nEscolha Inv�lida!\n");
                    system("PAUSE");
                    system("cls");
                }
            }
            while((sair_menu!='1') && (sair_menu!='2'));
        }
        else if (op_menu=='1')
        {
            ////////////////////////////////////////////////////////
            printf("\nRole-playing game, tamb�m conhecido como RPG, � um tipo de jogo em que os jogadores assumem pap�is de personagens e criam narrativas colaborativamente.\n");
            printf("Voc� deseja ir para um menu de introdu��o do jogo, ou gostaria de come�ar a jogar agora ?\n");
            printf("--Pressione 1 para introdu��o\n");
            printf("--Pressione 0 para come�ar a jogar\n");
            do
            {
                setbuf(stdin,NULL);
                scanf("%c",&menu_introducao);
                switch (menu_introducao)
                {
                case '0':
                    break;
                case '1':
                {
                    do
                    {
                        printf ("\nEscolha a op��o que deseja abrir:\n");
                        printf ("[1]SISTEMA DE ATAQUE\n");
                        printf("[2]SISTEMA DE CRIA��O DE PERSONAGENS\n");
                        printf("[3]SISTEMA DE A��O DO JOGO\n");
                        printf("[4]SISTEMA DE VIDA\n");
                        printf("[5]SISTEMA DE ARMAZENAR ITENS\n");
                        printf("[6]SISTEMA DE INTERA��O DO JOGO\n");
                        printf("[0]SAIR\n");

                        setbuf(stdin,NULL);
                        scanf("%c",&menu_introducao2);
                        switch (menu_introducao2)
                        {
                        case '0':
                            menu_introducao='0';
                            break;
                        case '1':
                        {
                            printf("\nO jogo possui dois modos de ataques, um forte e um simples, sendo que o simples pode ser utilizado toda hora, e o forte tem um pequeno tempo de recarga para ser utilizado novamente.Tamb�m possui um sistema de defesa em que o jogador vai poder intercalar entre as escolhas, atacar ou defender. Cada ra�a possui um n�vel de defesa diferente, ou seja, alguma delas pode ter mais defesa que a outra, do mesmo jeito que uma vai ter mais ataque que a outra.\n");
                            break;
                        }
                        case '2':
                        {
                            printf("\nVoc� vai poder escolher qual vai ser a ra�a de seu personagem, sendo as op��es:\n");
                            printf("\n\n--Humano\n");
                            printf("--An�o\n");
                            printf("--Elfo\n");
                            printf("\n\nE al�m disso, escolher� seu 'nick', que � o nome do seu personagem dentro do jogo, e o seu g�nero.\n");
                            break;
                        }
                        case '3':
                        {
                            printf("\nO RPG � jogado por meio de op��es que o jogo d� para o usu�rio, ou seja, dar� op��es do tipo:\n");
                            printf("\n\n[1]Ataque\n");
                            printf("[2]Ataque forte\n");
                            printf("[3]Defesa\n");
                            printf("[4]Mochila\n");
                            printf("\n\nEm que ele pode fazer a escolha que quiser por meio dessas op��es, cada op��o pode determinar um futuro diferente para o jogador.O jogo todo � baseado nesse sistema de escolhas.\n");
                            break;
                        }
                        case '4':
                        {
                            printf("\nO jogador vai levar dano durante o jogo inteiro por causa das criaturas que tem na Cripta, ent�o ele vai ter que administrar bem suas po��es de vida que v�o poder serem utilizadas pela mochila, se suas po��es acabarem e acontecer do jogador morrer, ele simplesmente perde o jogo, n�o tem um sistema de ressurrei��o.\n");
                            break;
                        }
                        case '5':
                        {
                            printf("\nA mochila do jogo caber� 5 itens, sendo assim, o jogador precisa administrar seu espa�o muito bem.O jogo n�o permite que os itens ficam dentro um do outro como nos RPGs de costume, ou seja, se voc� tem duas po��es de vida, elas ir�o ocupar 2 espa�os diferentes.Os equipamentos do personagem n�o ficar�o na mochila, e sim no corpo dele, ent�o n�o ocupar�o espa�o.\n");
                            break;
                        }
                        case '6':
                        {
                            printf("\nO jogo procura interagir com o personagem de diversas maneiras, em que far� com que ele pense para nao tomar uma decis�o errada, por exemplo:\n");
                            printf("\n\n--Pode aparecer perguntas para o jogador responder do nada, sendo que se ele acertar, pode ser premiado, mas se errar pode haver puni��es.\n");
                            printf("--O jogo possui armadilhas para que o usu�rio pense nas op��es de escolha para sair, pode sair ileso ou ferido, e vale lembrar que o sistema de vida do jogo � dif�cil, se ela zerar, � Game Over.\n");
                            printf("--N�o ter� intera��es com personagens n�o-jog�veis dentro do jogo.\n");
                            break;
                        }
                        default:
                            printf("Escolha uma das op��es dadas:\n");
                            break;
                        }
                    }
                while(menu_introducao2!='0');
                }
                break;
                default:
                    printf("Escolha uma das op��es dadas!\n");
                    break;
                }
            }
            while(menu_introducao!='0');
            ///////////////////////////////////////////////////////
            system("cls");
        printf("\n\n\n\n\n\n________________________________________________________________________________________________________________________________________________________________________\n\n\n\n\n\n");
            printf("\n Entrando na Cripta . . . \n");
        printf("\n\n\n\n\n\n________________________________________________________________________________________________________________________________________________________________________\n\n\n\n\n\n");
            system("PAUSE");
            system("cls");
///////////////////////////////////////////////////////////////////******************************************************************************/////////////////////////////////////////////////////////////////
            printf("\nIntrodu��o : A Cripta!!!\n");
            printf("\n\n\nVoc� acorda em um local desconhecido, sua cabe�a d�i e voc� se sente perdido.\n\nVoc� andando lentamente avista uma figura que se aproxima . . .\n\nUma figura sombria encanpuzada, te encarando ... Voc� sente calafrios, ent�o pergunta :\t-Quem � voc�? Que lugar � esse? Como vim parar aqui? \n\n");
            system("pause");
            system("cls");
            printf("\n\n\nO estranho devolve de maneira ir�nica : -A pergunta correta a se fazer �: Quem � voc� ... hahahaaha.... Bem Vindo a Cripta crian�a.\n");
            system("pause");
            system("cls");
            printf("\n\n\nVoc� pensa consigo mesmo : -Realmente, quem sou eu...\tE se esfor�a para buscar em sua mem�ria . . .");
            system("pause");
            system("cls");
            printf("\n\n*********************************************************************| CRIA��O DE PERSONAGEM |*********************************************************************\n\n");
            system("pause");
            printf("\nSeleciona sua Ra�a :\n\n");
            printf("\n\n\n(1)- Humano\n\n");
            printf("\n*Os humanos que formam grandes civiliza��es, construiram enormes monumentos, apesar de n�o serem t�o habilidosos no combate, a qualidade de seus equipamentos � indiscut�vel, tendo uma grande vantagem de armadura.\n");
            printf("\nAtaque [16.0] | Vida [130.0] | Defesa [16.5] | Tempo de Recarga [3 turnos]\n");
            printf("\n\n\n(2)- An�o\n\n");
            printf("\n*Os an�es, s�o seres brutos, que vivem nas montanhas, apesar de n�o possuirem muita t�cnica de combate, a sua resist�ncia criada durantes os longos anos de trabalho pesado lhes favorecem quando se trata de vitalidade.\n");
            printf("\nAtaque [14.0] | Vida [150.0]  | Defesa [14.5] | Tempo de Recarga [4 turnos]\n");
            printf("\n\n\n(3)- Elfo\n\n");
            printf("\n*Os elfos, decentes da natureza, masterizaram seu combate de forma �gil, o que lhes falta na resist�ncia e defesa pesada, eles compens�o em sua habilidade em combate, com acertos certeiros que dilacera seus inimigos.\n");
            printf("\nAtaque [20.0] | Vida [120.0] | Defesa [12.5] | Tempo de Recarga [2 turnos]\n");
            do
            {
                setbuf(stdin,NULL);
                scanf("%c",&op_criacao);
                if (op_criacao>'9')
                    op_criacao='6';
                switch (op_criacao)
                {
                case '1':
                    ataque_p=16.0;
                    vida_pmax=130.0;
                    defesa_p=16.5;
                    tempo_recargamax=3;
                    raca=1;
                    break;
                case '2':
                    ataque_p=14.0;
                    vida_pmax=150.0;
                    defesa_p=14.5;
                    tempo_recargamax=4;
                    raca=1;
                    break;
                case '3':
                    ataque_p=20.0;
                    vida_pmax=120.0;
                    defesa_p=12.5;
                    tempo_recargamax=2;
                    raca=1;
                    break;
                default:
                    printf("\nSelecione umas das op��es dadas!\n");
                    break;
                }
            }
            while(raca!=1);
            system("cls");
            printf("\n\n\nSelecione seu G�nero");
            printf("(1)- Masculino  |   (2)- Feminino\n");
            do
            {
                scanf(" %c",&op_criacao);
                switch (op_criacao)
                {
                case '1':
                    genero=1;
                    genero1=1;
                    break;
                case '2':
                    genero=2;
                    genero1=1;
                    break;
                default:
                    printf("Selecione umas das op��es dadas!");
                    break;
                }
            }
            while(genero1!=1);
            system("cls");
            if (genero==1)
                printf("Digite o nome do seu aventureiro : \n\n");
            else
                printf("Digite o nome da sua aventureira : \n\n");
            setbuf(stdin,NULL);
            gets(nome_p);
            system("cls");
            printf("\n*********************************************************************| Agora sua jornada come�a pela Cripta . . . |*********************************************************************\n");
            printf("\n\n\n\n_____________________________________________________________________________________________\n\n\n\n");
            printf("\t- %s\n",nome_p);
            if (genero==1)
                printf("\t- Homem\n");
            else
                printf("\t- Mulher\n");
            if (vida_pmax==130)
                printf("\t- Humano\n");
            else if (vida_pmax==150)
                printf("\t- An�o\n");
            else if (vida_pmax==120)
                printf("\t- Elfo\n");

            printf("\n\n\n\n_____________________________________________________________________________________________\n\n\n\n");
            system("pause");
            system("cls");
            vida_p=vida_pmax;
            ////////////////////////////////////////////////////////////////////////*****************************************///////////////////////////////////////////////////////
            printf("\nCap�tulo 1 : O In�cio de uma Jornada!!!\n");
            printf("\n*************************************************************| Agora sua jornada come�a pela Cripta . . . |*************************************************************\n");
            printf("\nSem saber o porque de estar aqui, ou se quer como veio parar nesse lugar, ainda sente uma liga��o com ele, algo de alguma forma no fundo dessa Cripta o chama, e voc� responde esse chamado . . .\n");
            printf("\nVoc� olha para tr�s e v� a escada de onde veio, olha ao redor e percebe que est� em uma esp�cie de grande sal�o com enormes colunas ornamentadas, por�m est�o bem desgastadas, parece abandonado... \n");
            printf("\nEnt�o voc� decide verificar a integridade de seus equipamentos : \n");
            system("pause");
            system("cls");
            printf("\nSua armadura e espada parecem intactos, algo sobre as escritas na l�mina da arma lhe da uma sensa��o de nostalgia ...\n\nVoc� abre sua mochila e n�o encontra muito ...\n");
            printf("\nMOCHILA :\n");
            for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                printf ("\t(%i)- %s\n",cont_mochila+1,mochila[cont_mochila]);
            printf("\nPor �ltimo encontra um objeto estranho em seu bolso, com um anel met�lico em volta, e runas que n�o consegue compreender entalhadas em seu acabamento, tem uma vaga lembran�a de que esse amuleto est� relacionado com sua chegada a Cripta.\n");
            printf("\nAp�s checar seus equipamentos voc� estava comendo quando sente uma presen�a, ent�o se vira. . .\n");
            system("pause");
            printf("\nUm goblim se egueirando para te pegar desprevinido, voc� se lan�a para o lado, se preparando para o combate, ele produz um barulho estridente com uma adaga em m�os vai para cima de voc� ...");
            system("pause");
            system("cls");
            strcpy(mochila[2],"Vazio");
            ////////////////////////////////////////////
            printf ("\n______________________________________________________________________________________________________________________________________________________________________\n");
            printf ("\n\t Descri��o: Goblins s�o uma esp�cie baixa e feia , a terceira ra�a n�o humana mais comum do mundo. Vivem no subsolo e enxergam no escuro. Considerados pequenos monstros \n");
            printf ("\n\t Ataque: Corpo a Corpo \n \t Arma: Adaga  \n \t Dano: 20 ATK \n \t Vida: 30 HP\n");
            printf ("\n______________________________________________________________________________________________________________________________________________________________________\n");
            printf("\n\n*********************************************************************| COMBATE |*********************************************************************\n\n");
            luta=1;
            do
            {
                printf("\n|\t[1]Atacar(%.2f)\t|\t[2]Defender(%.2f + 2,00)\t|\t[3]Ataque Forte(%.2f)\t|\t[4]Mochila\t|\t\n",ataque_p,defesa_p,ataquef_p);
                scanf("%i",&op_luta);
                if (tempo_recarga!=0 && op_luta!=3)
                    tempo_recarga--;
                switch (op_luta)
                {
                case 1:
                    ataque_goblin=20;
                    printf("\nVoc� ataca o inimigo!\n");
                    vida_goblin=vida_goblin-ataque_p;
                    printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_p,vida_goblin);
                    vida_p=(vida_p-(ataque_goblin-defesa_p));
                    printf("\nVoce bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",defesa_p,(ataque_goblin-defesa_p),vida_p);
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case 2:
                    ataque_goblin=20;
                    printf("\nVoce se defende!\n");
                    vida_p=(vida_p-(ataque_goblin-(defesa_p+2)));
                    printf("\nVoc� bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",(defesa_p+2),(ataque_goblin-(defesa_p+2)),vida_p);
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case 3:
                    ataque_goblin=20;
                    if (tempo_recarga!=0)
                    {
                        printf("\nSeu ataque forte est� carregando...\n");
                    }
                    else if (tempo_recarga==0)
                    {
                        printf("\nVoc� usa seu ataque forte, causando dano extra por�m se deixando vulner�vel!\n");
                        vida_goblin=vida_goblin-ataquef_p;
                        printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida!\n",ataquef_p,vida_goblin);
                        vida_p=(vida_p-ataque_goblin);
                        printf("\nVoc� recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_goblin,vida_p);
                        tempo_recarga=tempo_recargamax;
                    }
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }

                    break;
                case 4:
                    item_escolha=0;
                    for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                        if (strcmp(mochila[cont_mochila],"Vazio")==0)
                            teste_mochila++;
                    if (teste_mochila==5)
                    {
                        printf("\nVoc� n�o possu� nenhum item!\n");
                        item_escolha++;
                        pre_teste=1;
                        //Voltar para escolha de a��o
                    }
                    if (pre_teste!=1)
                    {
                        do
                        {
                            do
                            {
                                printf("\nMOCHILA :\n");
                                for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                                    printf ("\t(%i)- %s\n",cont_mochila+1,mochila[cont_mochila]);
                                printf("\n (6)- Sair da Mochila!\n");
                                printf("\nSelecione algum item que deseja utilizar ...\n\n");
                                setbuf(stdin,NULL);
                                scanf("%c",&cont_mochila_char);
                                cont_mochila_char--;
                                if (cont_mochila_char=='0')
                                {
                                    cont_mochila=0;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='1')
                                {
                                    cont_mochila=1;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='2')
                                {
                                    cont_mochila=2;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='3')
                                {
                                    cont_mochila=3;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='4')
                                {
                                    cont_mochila=4;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='5')
                                {
                                    system("cls");
                                    printf("\nSaindo da mochila...\n");
                                    char_int++;
                                    item_escolha++;
                                    system("PAUSE");
                                }
                                else
                                {
                                    system("cls");
                                    printf("\nEscolha um item v�lido!\n");
                                    system("pause");
                                    system("cls");
                                }
                            }
                            while(char_int==0);
                            ////////////////////////////////////////////////////
                            if (strcmp(mochila[cont_mochila],"Vazio")==0)
                            {
                                system("cls");
                                printf("\nSlot selecionado est� vazio.\n");
                                system("pause");
                                system("cls");
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Vida Pequena")==0)
                            {
                                printf("\nPo��o de Vida Pequena utilizada, +30 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<30; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual � %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Vida M�dia")==0)
                            {
                                printf("\nPo��o de Vida M�dia utilizada, +50 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<50; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual � %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Vida Grande")==0)
                            {
                                printf("\nPo��o de Vida Grande utilizada, +70 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<70; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual � %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Recupera��o Completa")==0)
                            {
                                printf("\nPo��o de Recupera��o Completa utilizada, seu personagem est� com a vida m�xima agora...\n");
                                vida_p=vida_pmax;
                                printf("\nSua vida atual � %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Dano")==0)
                            {
                                printf("\nPo��o de Dano utilizada, seu personagem possu� +2 de dano em seus ataques normais at� o final da luta...\n");
                                cont_pot_dano++;
                                printf("\nSeu ataque era de %.2f e agora � %.2f .\n",ataque_p,ataque_p+2);
                                ataque_p+=2;
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Defesa")==0)
                            {
                                printf("\nPo��o de Defesa utilizada, seu personagem possu� +2 de defesa at� o final da luta ...\n");
                                cont_pot_defesa++;
                                printf("\nSua defesa era de %.2f agora � %.2f .\n",defesa_p,defesa_p+2);
                                defesa_p+=2;
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                        }
                        while (item_escolha==0);
                    }
                }
                if (vida_goblin<=0)
                {
                    system("cls");
                    printf("\n************************************************************\n");
                    printf("\nVoc� vence a batalha!\n");
                    printf("\n************************************************************\n");
                    system("pause");
                    system("cls");
                    luta=0;
                    vida_goblin=30;
                }
            }
            while(luta!=0);
            //////////////////////////////////////////////////
            while (cont_pot_dano>0)
            {
                cont_pot_dano--;
                ataque_p-=2;
            }
            while (cont_pot_defesa>0)
            {
                cont_pot_dano--;
                ataque_p-=2;
            }
            //////////////////////////////////////////////////
            printf("\n\nSua vida atual � %.2f, seu ataque � %.2f e sua defesa � %.2f .\n\n",vida_p,ataque_p,defesa_p);
            system("pause");
            system("cls");
            ////////////////////////////////////////////////////////////////***********************************************************
            printf("\nAinda ofegante tenta se sintonizar com a realidade, e realiza que n�o poder� vacilar, n�o aqui, ent�o se endireita tenta focar sua mente e segue em frente, para uma porta no final do sal�o ...\n");
            printf("\nVoc� verifica a pr�xima sala... ela n�o � t�o grande,percebe que existem coisas jogadas pelo ch�o mas parece livre, ent�o atravessa a grande porta de metal...\n");
            system("pause");
            system("cls");
            printf("\nVasculhando o local, voc� encontra umas anota��es perto de uma mochila rasgada, apesar de n�o entender o que significam, encontra um s�mbolo que se parece ser o n�mero '4', e pensa o porque de aquilo estar ali...\n");
            printf("\nSaindo da sala segue para um corredor, as paredes de pedra parecem bem �midas, o lugar � empoeirado e parece ter v�rias pilhas de ossos espalhadas.\n");
            printf("\n� percept�vel que h� algo errado com esse lugar, e voc� n�o est� t�o surpreso, esperava isso, s� n�o pode dizer certamente o que foi fazer ali.");
            system("pause");
            system("cls");
            printf("\nCaminhando pelos longos corredores de pedra, com ilumina��o a base de tochas, voc� se depara com a entrada para uma sala ...\n");
            printf("\nDeseja entrar na sala ?\n");
            printf("\n\t(1)- Sim! \t (2)- N�o!");
////////////////////////
            do
            {
                setbuf(stdin,NULL);
                scanf("%c",&tesouro);
                switch(tesouro)
                {
                case '1':
                    printf("\n\nEnquanto caminhava pelo corredor, voce pisa em uma placa de pressao e ela ativa ...\n");
                    printf("Voce precisa agir rapido!!! O que voce faz?\n\n");
                    printf("\n|\t[1]Se abaixa.\t|\t[2]Rola para frente.\t|\t[3]Se esquiva para o lado.\t|\t\n");
                    menutesouro='0';
                    break;
                case '2':
                    menutesouro='0';
                    break;
                default:
                    printf("Op��o inv�lida!\n");
                    if(tesouro=='0')
                        menutesouro='1';
                }
            }
            while(menutesouro!='0');
            if (tesouro=='1')
            {
                do
                {
                    setbuf(stdin,NULL);
                    scanf("%c",&tesouro2);
                    switch(tesouro2)
                    {
                    case '1':
                        printf("\nVoc� rapidamente se joga ao ch�o, cortando seu braco em um espinho pr�ximo, perdendo 5 de vida.\n");
                        vida_p=(vida_p-5);
                        printf("\nPor esta decis�o, voc� desvia das flechas que subtamente apareceram em seu caminho, mas acaba machucado.\n");
                        menutesouro2='0';
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    case '2':
                        printf("\nVoc� utiliza sua grande agilidade para em um rapido movimento rolar para frente.\n");
                        printf("\nAs flechas que subtamente apareceram nao te atingem, voce sai ileso.\n");
                        menutesouro2='0';
                        break;
                    case '3':
                        printf("\nVoce num reflexo desliza para o lado.\n");
                        printf("\nFlechas surgem e voce e pego de surpresa, perdendo 15 de vida.\n");
                        vida_p=(vida_p-15);
                        menutesouro2='0';
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    default:
                        printf("Op��o inv�lida!\n");
                        if (tesouro2=='0')
                            menutesouro2='1';

                    }

                }
                while(menutesouro2!='0');


                printf("Voc� encontrou um ba� do tesouro nessa sala cheia de armadilhas!! Nele cont�m Po��o de Vida Grande\n");
                system("pause");
                system("cls");

                do
                {
                    if (cont_item>=5)
                    {
                        printf("\nTodos os espa�os da mochila est�o cheios!\n");
                        add_item++;
                    }
                    else if (strcmp(mochila[cont_item],"Vazio")==0)
                    {
                        strcpy(mochila[cont_item],"Po��o de Vida Grande");//item que vai ser recebido
                        add_item++;
                    }
                    cont_item++;
                }
                while (add_item==0);
                cont_item=0;
                menutesouro='0';

            }
///////////////////////

            printf("\nSaindo da sala voc� segue caminhando... O corredor come�a a enlarguecer, e olhando para os lados v� diversas portas feitas de um metal enferrujando, no entanto n�o parece ser uma boa id�ia explorar esse lugar...\n");
            printf("\nAtrav�s das grades das portas parece haver criaturas, � melhor n�o se arriscar, voc� segue sorrateiramente ... encontra diversos esqueletos pendurados ou pregados ao longo dessa sala que parece intermin�vel ...\n");
            printf("\nSe esgueirando pelo lado direito da sala voc� enxerga movimenta��o do outro lado, ent�o se esconde nas sombras de uma gigante coluna retangular...\n");
            system("pause");
            printf("\nN�o consegue ver o que era, mas ja se foi, se sente aliviado ... no entanto quando voc� vai sair de cobertura percebe que o esqueleto escorado na parede ao seu lado est� diferente, ele n�o est� pendurado ...\n");
            system("pause");
            system("cls");
            printf("\nEle ent�o grune e tenta te acertar com a espada em sua m�o, por sorte voc� escapa dessa, mas agora precisa se defender . . .\n");
            printf ("\n______________________________________________________________________________________________________________________________________________________________________\n");
            printf ("\n \t Descri��o: Criaturas de ossos trazidas � vida por magia necrom�ntica, os esqueletos s�o seres vazios ainda capazes de interagir de forma simpl�ria, \n         seja protegendo e obedecendo ordens b�scicas de seus conjuradores ou atacando os inimigos a quem foram criados para destruir, nada al�m disso.");
            printf ("\n\t Ataque: Corpo a Corpo \n \t Arma: Arco e flecha  \n \t Dano: 22 ATK \n \t Vida: 35 HP\n");
            printf ("\n______________________________________________________________________________________________________________________________________________________________________\n");
            printf("\n\n*********************************************************************| COMBATE |*********************************************************************\n\n");
            luta=1;
            do
            {
                printf("\n|\t[1]Atacar(%.2f)\t|\t[2]Defender(%.2f + 2,00)\t|\t[3]Ataque Forte(%.2f)\t|\t[4]Mochila\t|\t\n",ataque_p,defesa_p,ataquef_p);
                scanf("%i",&op_luta);
                if (tempo_recarga!=0 && op_luta!=3)
                    tempo_recarga--;
                switch (op_luta)
                {
                case 1:
                    ataque_esqueleto=20;
                    printf("\nVoc� ataca o inimigo!\n");
                    vida_esqueleto=vida_esqueleto-ataque_p;
                    printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_p,vida_esqueleto);
                    vida_p=(vida_p-(ataque_esqueleto-defesa_p));
                    printf("\nVoce bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",defesa_p,(ataque_esqueleto-defesa_p),vida_p);
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case 2:
                    ataque_esqueleto=20;
                    printf("\nVoce se defende!\n");
                    vida_p=(vida_p-(ataque_esqueleto-(defesa_p+2)));
                    printf("\nVoc� bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",(defesa_p+2),(ataque_esqueleto-(defesa_p+2)),vida_p);
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case 3:
                    ataque_esqueleto=20;
                    if (tempo_recarga!=0)
                    {
                        printf("\nSeu ataque forte est� carregando...\n");
                    }
                    else if (tempo_recarga==0)
                    {
                        printf("\nVoc� usa seu ataque forte, causando dano extra por�m se deixando vulner�vel!\n");
                        vida_esqueleto=vida_esqueleto-ataquef_p;
                        printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida!\n",ataquef_p,vida_esqueleto);
                        vida_p=(vida_p-ataque_esqueleto);
                        printf("\nVoc� recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_esqueleto,vida_p);
                        tempo_recarga=tempo_recargamax;
                    }
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case 4:
                    item_escolha=0;
                    for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                        if (strcmp(mochila[cont_mochila],"Vazio")==0)
                            teste_mochila++;
                    if (teste_mochila==5)
                    {
                        printf("\nVoc� n�o possu� nenhum item!\n");
                        item_escolha++;
                        pre_teste=1;
                        //Voltar para escolha de a��o
                    }
                    if (pre_teste!=1)
                    {
                        do
                        {
                            do
                            {
                                printf("\nMOCHILA :\n");
                                for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                                    printf ("\t(%i)- %s\n",cont_mochila+1,mochila[cont_mochila]);
                                printf("\n (6)- Sair da Mochila!\n");
                                printf("\nSelecione algum item que deseja utilizar ...\n\n");
                                setbuf(stdin,NULL);
                                scanf("%c",&cont_mochila_char);
                                cont_mochila_char--;
                                if (cont_mochila_char=='0')
                                {
                                    cont_mochila=0;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='1')
                                {
                                    cont_mochila=1;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='2')
                                {
                                    cont_mochila=2;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='3')
                                {
                                    cont_mochila=3;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='4')
                                {
                                    cont_mochila=4;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='5')
                                {
                                    system("cls");
                                    printf("\nSaindo da mochila...\n");
                                    char_int++;
                                    item_escolha++;
                                    system("PAUSE");
                                }
                                else
                                {
                                    system("cls");
                                    printf("\nEscolha um item v�lido!\n");
                                    system("pause");
                                    system("cls");
                                }
                            }
                            while(char_int==0);
                            ////////////////////////////////////////////////////
                            if (strcmp(mochila[cont_mochila],"Vazio")==0)
                            {
                                system("cls");
                                printf("\nSlot selecionado est� vazio.\n");
                                system("pause");
                                system("cls");
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Vida Pequena")==0)
                            {
                                printf("\nPo��o de Vida Pequena utilizada, +30 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<30; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual � %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Vida M�dia")==0)
                            {
                                printf("\nPo��o de Vida M�dia utilizada, +50 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<50; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual � %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Vida Grande")==0)
                            {
                                printf("\nPo��o de Vida Grande utilizada, +70 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<70; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual � %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Recupera��o Completa")==0)
                            {
                                printf("\nPo��o de Recupera��o Completa utilizada, seu personagem est� com a vida m�xima agora...\n");
                                vida_p=vida_pmax;
                                printf("\nSua vida atual � %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Dano")==0)
                            {
                                printf("\nPo��o de Dano utilizada, seu personagem possu� +2 de dano em seus ataques normais at� o final da luta...\n");
                                cont_pot_dano++;
                                printf("\nSeu ataque era de %.2f e agora � %.2f .\n",ataque_p,ataque_p+2);
                                ataque_p+=2;
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Defesa")==0)
                            {
                                printf("\nPo��o de Defesa utilizada, seu personagem possu� +2 de defesa at� o final da luta ...\n");
                                cont_pot_defesa++;
                                printf("\nSua defesa era de %.2f agora � %.2f .\n",defesa_p,defesa_p+2);
                                defesa_p+=2;
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                        }
                        while (item_escolha==0);
                    }
                }
                if (vida_esqueleto<=0)
                {
                    system("cls");
                    printf("\n************************************************************\n");
                    printf("\nVoc� vence a batalha!\n");
                    printf("\n************************************************************\n");
                    system("pause");
                    system("cls");
                    luta=0;
                    vida_esqueleto=35;
                }
            }
            while(luta!=0);
            //////////////////////////////////////////////////
            while (cont_pot_dano>0)
            {
                cont_pot_dano--;
                ataque_p-=2;
            }
            while (cont_pot_defesa>0)
            {
                cont_pot_dano--;
                ataque_p-=2;
            }
            //////////////////////////////////////////////////
            printf("\nVoc� encontrou uma Po��o de Vida M�dia com o inimigo!\n");
            do
            {
                if (cont_item>=5)
                {
                    printf("\nTodos os espa�os da mochila est�o cheios!\n");
                    add_item++;
                }
                else if (strcmp(mochila[cont_item],"Vazio")==0)
                {
                    strcpy(mochila[cont_item],"Po��o de Vida M�dia");//item que vai ser recebido
                    add_item++;
                }
                cont_item++;
            }
            while (add_item==0);
            cont_item=0;
            add_item=0;
            printf("\n\nSua vida atual � %.2f, seu ataque � %.2f e sua defesa � %.2f .\n\n",vida_p,ataque_p,defesa_p);
            system("pause");
            system("cls");
            /////////////////////////////////////////////////////////////////////////////////
            printf("\nVoc� ainda n�o pode parar pra ver seus itens devido ao perigo eminente, � preciso apenas seguir em frente...\n");
            printf("\nCom vida por�m amea�ado nesse lugar voc� quer sair logo dali, � poss�vel ver a sa�da, no entanto ...");
            printf("\nAparece um Goblin para atrapalhar sua sa�da!!!");
            system("pause");
            system("cls");
            printf ("\n______________________________________________________________________________________________________________________________________________________________________\n");
            printf ("\n\t Descri��o: Goblins s�o uma esp�cie baixa e feia , a terceira ra�a n�o humana mais comum do mundo. Vivem no subsolo e enxergam no escuro. Considerados pequenos monstros \n");
            printf ("\n\t Ataque: Corpo a Corpo \n \t Arma: Adaga  \n \t Dano: 20 ATK \n \t Vida: 30 HP\n");
            printf ("\n______________________________________________________________________________________________________________________________________________________________________\n");
            printf("\n\n*********************************************************************| COMBATE |*********************************************************************\n\n");
            luta=1;
            do
            {
                printf("\n|\t[1]Atacar(%.2f)\t|\t[2]Defender(%.2f + 2,00)\t|\t[3]Ataque Forte(%.2f)\t|\t[4]Mochila\t|\t\n",ataque_p,defesa_p,ataquef_p);
                scanf("%i",&op_luta);
                if (tempo_recarga!=0 && op_luta!=3)
                    tempo_recarga--;
                switch (op_luta)
                {
                case 1:
                    ataque_goblin=20;
                    printf("\nVoc� ataca o inimigo!\n");
                    vida_goblin=vida_goblin-ataque_p;
                    printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_p,vida_goblin);
                    vida_p=(vida_p-(ataque_goblin-defesa_p));
                    printf("\nVoce bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",defesa_p,(ataque_goblin-defesa_p),vida_p);
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case 2:
                    ataque_goblin=20;
                    printf("\nVoce se defende!\n");
                    vida_p=(vida_p-(ataque_goblin-(defesa_p+2)));
                    printf("\nVoc� bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",(defesa_p+2),(ataque_goblin-(defesa_p+2)),vida_p);
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case 3:
                    ataque_goblin=20;
                    if (tempo_recarga!=0)
                    {
                        printf("\nSeu ataque forte est� carregando...\n");
                    }
                    else if (tempo_recarga==0)
                    {
                        printf("\nVoc� usa seu ataque forte, causando dano extra por�m se deixando vulner�vel!\n");
                        vida_goblin=vida_goblin-ataquef_p;
                        printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida!\n",ataquef_p,vida_goblin);
                        vida_p=(vida_p-ataque_goblin);
                        printf("\nVoc� recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_goblin,vida_p);
                        tempo_recarga=tempo_recargamax;
                    }
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case 4:
                    item_escolha=0;
                    for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                        if (strcmp(mochila[cont_mochila],"Vazio")==0)
                            teste_mochila++;
                    if (teste_mochila==5)
                    {
                        printf("\nVoc� n�o possu� nenhum item!\n");
                        item_escolha++;
                        pre_teste=1;
                        //Voltar para escolha de a��o
                    }
                    if (pre_teste!=1)
                    {
                        do
                        {
                            do
                            {
                                printf("\nMOCHILA :\n");
                                for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                                    printf ("\t(%i)- %s\n",cont_mochila+1,mochila[cont_mochila]);
                                printf("\n (6)- Sair da Mochila!\n");
                                printf("\nSelecione algum item que deseja utilizar ...\n\n");
                                setbuf(stdin,NULL);
                                scanf("%c",&cont_mochila_char);
                                cont_mochila_char--;
                                if (cont_mochila_char=='0')
                                {
                                    cont_mochila=0;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='1')
                                {
                                    cont_mochila=1;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='2')
                                {
                                    cont_mochila=2;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='3')
                                {
                                    cont_mochila=3;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='4')
                                {
                                    cont_mochila=4;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='5')
                                {
                                    system("cls");
                                    printf("\nSaindo da mochila...\n");
                                    char_int++;
                                    item_escolha++;
                                    system("PAUSE");
                                }
                                else
                                {
                                    system("cls");
                                    printf("\nEscolha um item v�lido!\n");
                                    system("pause");
                                    system("cls");
                                }
                            }
                            while(char_int==0);
                            ////////////////////////////////////////////////////
                            if (strcmp(mochila[cont_mochila],"Vazio")==0)
                            {
                                system("cls");
                                printf("\nSlot selecionado est� vazio.\n");
                                system("pause");
                                system("cls");
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Vida Pequena")==0)
                            {
                                printf("\nPo��o de Vida Pequena utilizada, +30 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<30; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual � %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Vida M�dia")==0)
                            {
                                printf("\nPo��o de Vida M�dia utilizada, +50 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<50; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual � %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Vida Grande")==0)
                            {
                                printf("\nPo��o de Vida Grande utilizada, +70 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<70; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual � %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Recupera��o Completa")==0)
                            {
                                printf("\nPo��o de Recupera��o Completa utilizada, seu personagem est� com a vida m�xima agora...\n");
                                vida_p=vida_pmax;
                                printf("\nSua vida atual � %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Dano")==0)
                            {
                                printf("\nPo��o de Dano utilizada, seu personagem possu� +2 de dano em seus ataques normais at� o final da luta...\n");
                                cont_pot_dano++;
                                printf("\nSeu ataque era de %.2f e agora � %.2f .\n",ataque_p,ataque_p+2);
                                ataque_p+=2;
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Defesa")==0)
                            {
                                printf("\nPo��o de Defesa utilizada, seu personagem possu� +2 de defesa at� o final da luta ...\n");
                                cont_pot_defesa++;
                                printf("\nSua defesa era de %.2f agora � %.2f .\n",defesa_p,defesa_p+2);
                                defesa_p+=2;
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                        }
                        while (item_escolha==0);
                    }
                }
                if (vida_goblin<=0)
                {
                    system("cls");
                    printf("\n************************************************************\n");
                    printf("\nVoc� vence a batalha!\n");
                    printf("\n************************************************************\n");
                    system("pause");
                    system("cls");
                    luta=0;
                    vida_goblin=30;
                }
            }
            while(luta!=0);
            //////////////////////////////////////////////////
            while (cont_pot_dano>0)
            {
                cont_pot_dano--;
                ataque_p-=2;
            }
            while (cont_pot_defesa>0)
            {
                cont_pot_dano--;
                ataque_p-=2;
            }
            printf("Voce ganha Po��o de Vida M�dia ao derrotar o Goblin.\n");
            do
            {
                if (cont_item>=5)
                {
                    printf("\nTodos os espa�os da mochila est�o cheios!\n");
                    add_item++;
                }
                else if (strcmp(mochila[cont_item],"Vazio")==0)
                {
                    strcpy(mochila[cont_item],"Po��o de Vida M�dia");//item que vai ser recebido
                    add_item++;
                }
                cont_item++;
            }
            while (add_item==0);
            cont_item=0;
            //////////////////////////////////////////////////
            printf("\n\nSua vida atual � %.2f, seu ataque � %.2f e sua defesa � %.2f .\n\n",vida_p,ataque_p,defesa_p);
            system("pause");
            system("cls");

            printf("\nChegando a sa�da um barulho de correntes ecoa pela sala ... voc� olha pra cima e parece uma armadilha, diversas correntes com l�minas descem do teto . . . voc� pode correr em frente para a sa�da ou ficar para tr�s e enfrentar seja o que for que ativou esse dispositivo.");
            printf("\n\t(1)- Correr para a sa�da! \t (2)- Evitar a armadilha!");

            do
            {
                setbuf(stdin,NULL);
                scanf("%c",&armadilha3);
                switch(armadilha3)
                {
                case '1':
                    printf("Armadilha causou muito dano!!!Sua vida � de %.2f\n",vida_p-20);
                    vida_p-=20;
                    printf("Al�m de tomar dano da armadilha, aparece uma aranha!!\n");
                    armazenar=1;
                    armadilha4='0';
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case '2':
                    printf("Decidiu ficar para desativar a armadilha n� ? Mas aparece um Esqueleto de Elite para enfrent�-lo!\n");
                    armazenar=2;
                    armadilha4='0';
                    break;
                default:
                    printf("Op��o inv�lida\n");
                    if (armadilha3=='0')
                        armadilha4='1';
                }
            }
            while(armadilha4!='0');
            ///////////////////////
            if (armazenar==1)
            {
                printf ("\n______________________________________________________________________________________________________________________________________________________________________\n");
                printf ("\n\t A aranha Aracne � uma aranha gigantesca, do tamanho do ser humano. Possui pernas fortiss�mas, de modo que possa saltar em seus alvos e cravar suas presas nele \n \t Ataque: Corpo a Corpo, Imobiliza��o  \n \t Dano:25 ATK   \n \t Vida: 18 HP");
                printf ("\n______________________________________________________________________________________________________________________________________________________________________\n");
                printf("\n\n*********************************************************************| COMBATE |*********************************************************************\n\n");
                luta=1;
                do
                {
                    printf("\n|\t[1]Atacar(%.2f)\t|\t[2]Defender(%.2f + 2,00)\t|\t[3]Ataque Forte(%.2f)\t|\t[4]Mochila\t|\t\n",ataque_p,defesa_p,ataquef_p);
                    scanf("%i",&op_luta);
                    if (tempo_recarga!=0 && op_luta!=3)
                        tempo_recarga--;
                    switch (op_luta)
                    {
                    case 1:
                        ataque_aranha=25;
                        printf("\nVoc� ataca o inimigo!\n");
                        vida_aranha=vida_aranha-ataque_p;
                        printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_p,vida_aranha);
                        vida_p=(vida_p-(ataque_aranha-defesa_p));
                        printf("\nVoce bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",defesa_p,(ataque_aranha-defesa_p),vida_p);
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    case 2:
                        ataque_aranha=25;
                        printf("\nVoce se defende!\n");
                        vida_p=(vida_p-(ataque_aranha-(defesa_p+2)));
                        printf("\nVoc� bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",(defesa_p+2),(ataque_aranha-(defesa_p+2)),vida_p);
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    case 3:
                        ataque_aranha=25;
                        if (tempo_recarga!=0)
                        {
                            printf("\nSeu ataque forte est� carregando...\n");
                        }
                        else if (tempo_recarga==0)
                        {
                            printf("\nVoc� usa seu ataque forte, causando dano extra por�m se deixando vulner�vel!\n");
                            vida_aranha=vida_aranha-ataquef_p;
                            printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida!\n",ataquef_p,vida_aranha);
                            vida_p=(vida_p-ataque_aranha);
                            printf("\nVoc� recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_aranha,vida_p);
                            tempo_recarga=tempo_recargamax;
                        }
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    case 4:
                        item_escolha=0;
                        for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                            if (strcmp(mochila[cont_mochila],"Vazio")==0)
                                teste_mochila++;
                        if (teste_mochila==5)
                        {
                            printf("\nVoc� n�o possu� nenhum item!\n");
                            item_escolha++;
                            pre_teste=1;
                            //Voltar para escolha de a��o
                        }
                        if (pre_teste!=1)
                        {
                            do
                            {
                                do
                                {
                                    printf("\nMOCHILA :\n");
                                    for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                                        printf ("\t(%i)- %s\n",cont_mochila+1,mochila[cont_mochila]);
                                    printf("\n (6)- Sair da Mochila!\n");
                                    printf("\nSelecione algum item que deseja utilizar ...\n\n");
                                    setbuf(stdin,NULL);
                                    scanf("%c",&cont_mochila_char);
                                    cont_mochila_char--;
                                    if (cont_mochila_char=='0')
                                    {
                                        cont_mochila=0;
                                        char_int++;
                                    }
                                    else if (cont_mochila_char=='1')
                                    {
                                        cont_mochila=1;
                                        char_int++;
                                    }
                                    else if (cont_mochila_char=='2')
                                    {
                                        cont_mochila=2;
                                        char_int++;
                                    }
                                    else if (cont_mochila_char=='3')
                                    {
                                        cont_mochila=3;
                                        char_int++;
                                    }
                                    else if (cont_mochila_char=='4')
                                    {
                                        cont_mochila=4;
                                        char_int++;
                                    }
                                    else if (cont_mochila_char=='5')
                                    {
                                        system("cls");
                                        printf("\nSaindo da mochila...\n");
                                        char_int++;
                                        item_escolha++;
                                        system("PAUSE");
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("\nEscolha um item v�lido!\n");
                                        system("pause");
                                        system("cls");
                                    }
                                }
                                while(char_int==0);
                                ////////////////////////////////////////////////////
                                if (strcmp(mochila[cont_mochila],"Vazio")==0)
                                {
                                    system("cls");
                                    printf("\nSlot selecionado est� vazio.\n");
                                    system("pause");
                                    system("cls");
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Vida Pequena")==0)
                                {
                                    printf("\nPo��o de Vida Pequena utilizada, +30 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<30; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual � %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Vida M�dia")==0)
                                {
                                    printf("\nPo��o de Vida M�dia utilizada, +50 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<50; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual � %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Vida Grande")==0)
                                {
                                    printf("\nPo��o de Vida Grande utilizada, +70 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<70; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual � %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Recupera��o Completa")==0)
                                {
                                    printf("\nPo��o de Recupera��o Completa utilizada, seu personagem est� com a vida m�xima agora...\n");
                                    vida_p=vida_pmax;
                                    printf("\nSua vida atual � %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Dano")==0)
                                {
                                    printf("\nPo��o de Dano utilizada, seu personagem possu� +2 de dano em seus ataques normais at� o final da luta...\n");
                                    cont_pot_dano++;
                                    printf("\nSeu ataque era de %.2f e agora � %.2f .\n",ataque_p,ataque_p+2);
                                    ataque_p+=2;
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Defesa")==0)
                                {
                                    printf("\nPo��o de Defesa utilizada, seu personagem possu� +2 de defesa at� o final da luta ...\n");
                                    cont_pot_defesa++;
                                    printf("\nSua defesa era de %.2f agora � %.2f .\n",defesa_p,defesa_p+2);
                                    defesa_p+=2;
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                            }
                            while (item_escolha==0);
                        }
                    }
                    if (vida_aranha<=0)
                    {
                        system("cls");
                        printf("\n************************************************************\n");
                        printf("\nVoc� vence a batalha!\n");
                        printf("\n************************************************************\n");
                        system("pause");
                        system("cls");
                        luta=0;
                        vida_aranha=18;
                        armazenar=0;
                        //////////////////////////////////////////////////
                        printf("\nVoc� encontrou uma Po��o de Vida M�dia com o inimigo!\n");
                        do
                        {
                            if (cont_item>=5)
                            {
                                printf("\nTodos os espa�os da mochila est�o cheios!\n");
                                add_item++;
                            }
                            else if (strcmp(mochila[cont_item],"Vazio")==0)
                            {
                                strcpy(mochila[cont_item],"Po��o de Vida M�dia");//item que vai ser recebido
                                add_item++;
                            }
                            cont_item++;
                        }
                        while (add_item==0);
                        cont_item=0;
                        add_item=0;
                        printf("\n\nSua vida atual � %.2f, seu ataque � %.2f e sua defesa � %.2f .\n\n",vida_p,ataque_p,defesa_p);
                        system("pause");
                        system("cls");
                        /////////////////////////////////////////////////////////////////////////////////
                    }
                }
                while(luta!=0);
                //////////////////////////////////////////////////
                while (cont_pot_dano>0)
                {
                    cont_pot_dano--;
                    ataque_p-=2;
                }
                while (cont_pot_defesa>0)
                {
                    cont_pot_dano--;
                    ataque_p-=2;
                }

            }
            if (armazenar==2)
            {


                ////////COLOCAR LUTA CONTRA ESQUELETO ELITE
                printf ("\n______________________________________________________________________________________________________________________________________________________________________\n");
                printf ("\n \t Descri��o: Criaturas de ossos trazidas � vida por magia necrom�ntica, os esqueletos s�o seres vazios ainda capazes de interagir de forma simpl�ria, \n         seja protegendo e obedecendo ordens b�scicas de seus conjuradores ou atacando os inimigos a quem foram criados para destruir, nada al�m disso.");
                printf ("\n\t Ataque: Corpo a Corpo \n \t Arma: Arco e flecha de ossos  \n \t Dano: 28 ATK \n \t Vida: 42 HP\n");
                printf ("\n______________________________________________________________________________________________________________________________________________________________________\n");
                printf("\n\n*********************************************************************| COMBATE |*********************************************************************\n\n");
                luta=1;
                do
                {
                    printf("\n|\t[1]Atacar(%.2f)\t|\t[2]Defender(%.2f + 2,00)\t|\t[3]Ataque Forte(%.2f)\t|\t[4]Mochila\t|\t\n",ataque_p,defesa_p,ataquef_p);
                    scanf("%i",&op_luta);
                    if (tempo_recarga!=0 && op_luta!=3)
                        tempo_recarga--;
                    switch (op_luta)
                    {
                    case 1:
                        ataque_esqueletoE=28;
                        printf("\nVoc� ataca o inimigo!\n");
                        vida_esqueletoE=vida_esqueletoE-ataque_p;
                        printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_p,vida_esqueletoE);
                        vida_p=(vida_p-(ataque_esqueletoE-defesa_p));
                        printf("\nVoce bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",defesa_p,(ataque_esqueletoE-defesa_p),vida_p);
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    case 2:
                        ataque_esqueletoE=28;
                        printf("\nVoce se defende!\n");
                        vida_p=(vida_p-(ataque_esqueletoE-(defesa_p+2)));
                        printf("\nVoc� bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",(defesa_p+2),(ataque_esqueletoE-(defesa_p+2)),vida_p);
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    case 3:
                        ataque_esqueletoE=28;
                        if (tempo_recarga!=0)
                        {
                            printf("\nSeu ataque forte est� carregando...\n");
                        }
                        else if (tempo_recarga==0)
                        {
                            printf("\nVoc� usa seu ataque forte, causando dano extra por�m se deixando vulner�vel!\n");
                            vida_esqueletoE=vida_esqueletoE-ataquef_p;
                            printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida!\n",ataquef_p,vida_esqueletoE);
                            vida_p=(vida_p-ataque_esqueletoE);
                            printf("\nVoc� recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_esqueletoE,vida_p);
                            tempo_recarga=tempo_recargamax;
                        }
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    case 4:
                        item_escolha=0;
                        for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                            if (strcmp(mochila[cont_mochila],"Vazio")==0)
                                teste_mochila++;
                        if (teste_mochila==5)
                        {
                            printf("\nVoc� n�o possu� nenhum item!\n");
                            item_escolha++;
                            pre_teste=1;
                            //Voltar para escolha de a��o
                        }
                        if (pre_teste!=1)
                        {
                            do
                            {
                                do
                                {
                                    printf("\nMOCHILA :\n");
                                    for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                                        printf ("\t(%i)- %s\n",cont_mochila+1,mochila[cont_mochila]);
                                    printf("\n (6)- Sair da Mochila!\n");
                                    printf("\nSelecione algum item que deseja utilizar ...\n\n");
                                    setbuf(stdin,NULL);
                                    scanf("%c",&cont_mochila_char);
                                    cont_mochila_char--;
                                    if (cont_mochila_char=='0')
                                    {
                                        cont_mochila=0;
                                        char_int++;
                                    }
                                    else if (cont_mochila_char=='1')
                                    {
                                        cont_mochila=1;
                                        char_int++;
                                    }
                                    else if (cont_mochila_char=='2')
                                    {
                                        cont_mochila=2;
                                        char_int++;
                                    }
                                    else if (cont_mochila_char=='3')
                                    {
                                        cont_mochila=3;
                                        char_int++;
                                    }
                                    else if (cont_mochila_char=='4')
                                    {
                                        cont_mochila=4;
                                        char_int++;
                                    }
                                    else if (cont_mochila_char=='5')
                                    {
                                        system("cls");
                                        printf("\nSaindo da mochila...\n");
                                        char_int++;
                                        item_escolha++;
                                        system("PAUSE");
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("\nEscolha um item v�lido!\n");
                                        system("pause");
                                        system("cls");
                                    }
                                }
                                while(char_int==0);
                                ////////////////////////////////////////////////////
                                if (strcmp(mochila[cont_mochila],"Vazio")==0)
                                {
                                    system("cls");
                                    printf("\nSlot selecionado est� vazio.\n");
                                    system("pause");
                                    system("cls");
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Vida Pequena")==0)
                                {
                                    printf("\nPo��o de Vida Pequena utilizada, +30 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<30; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual � %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Vida M�dia")==0)
                                {
                                    printf("\nPo��o de Vida M�dia utilizada, +50 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<50; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual � %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Vida Grande")==0)
                                {
                                    printf("\nPo��o de Vida Grande utilizada, +70 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<70; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual � %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Recupera��o Completa")==0)
                                {
                                    printf("\nPo��o de Recupera��o Completa utilizada, seu personagem est� com a vida m�xima agora...\n");
                                    vida_p=vida_pmax;
                                    printf("\nSua vida atual � %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Dano")==0)
                                {
                                    printf("\nPo��o de Dano utilizada, seu personagem possu� +2 de dano em seus ataques normais at� o final da luta...\n");
                                    cont_pot_dano++;
                                    printf("\nSeu ataque era de %.2f e agora � %.2f .\n",ataque_p,ataque_p+2);
                                    ataque_p+=2;
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Defesa")==0)
                                {
                                    printf("\nPo��o de Defesa utilizada, seu personagem possu� +2 de defesa at� o final da luta ...\n");
                                    cont_pot_defesa++;
                                    printf("\nSua defesa era de %.2f agora � %.2f .\n",defesa_p,defesa_p+2);
                                    defesa_p+=2;
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                            }
                            while (item_escolha==0);
                        }
                    }
                    if (vida_esqueletoE<=0)
                    {
                        system("cls");
                        printf("\n************************************************************\n");
                        printf("\nVoc� vence a batalha!\n");
                        printf("\n************************************************************\n");
                        system("pause");
                        system("cls");
                        luta=0;
                        vida_esqueletoE=42;
                        //////////////////////////////////////////////////
                        printf("\nVoc� encontrou uma Po��o de Vida Grande com o inimigo!\n");
                        do
                        {
                            if (cont_item>=5)
                            {
                                printf("\nTodos os espa�os da mochila est�o cheios!\n");
                                add_item++;
                            }
                            else if (strcmp(mochila[cont_item],"Vazio")==0)
                            {
                                strcpy(mochila[cont_item],"Po��o de Vida Grande");//item que vai ser recebido
                                add_item++;
                            }
                            cont_item++;
                        }
                        while (add_item==0);
                        cont_item=0;
                        add_item=0;
                        /////////////////////////////////////////////////////////////////////////////////
                    }
                }
                while(luta!=0);
                //////////////////////////////////////////////////
                while (cont_pot_dano>0)
                {
                    cont_pot_dano--;
                    ataque_p-=2;
                }
                while (cont_pot_defesa>0)
                {
                    cont_pot_dano--;
                    ataque_p-=2;
                }
                //////////////////////////////////////////////////
                printf("\n\nSua vida atual � %.2f, seu ataque � %.2f e sua defesa � %.2f .\n\n",vida_p,ataque_p,defesa_p);
                system("pause");
                system("cls");
            }

            printf("\nCom a porta para aquele lugar que mais parecia uma pris�o fechada, existe apenas uma entrada para esse cub�culo que voc� se encontra, voc� pode usar sua mochila ...\n");
            printf("\n\t(1)- Usar mochila! \t (2)- N�o usar!");
////////////////
            do
            {
                setbuf(stdin,NULL);
                scanf("%c",&mochilavariavel);
                switch(mochilavariavel)
                {
                case '1':
                    item_escolha=0;
                    for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                        if (strcmp(mochila[cont_mochila],"Vazio")==0)
                            teste_mochila++;
                    if (teste_mochila==5)
                    {
                        printf("\nVoc� n�o possu� nenhum item!\n");
                        item_escolha++;
                        pre_teste=1;
                        //Voltar para escolha de a��o
                    }
                    if (pre_teste!=1)
                    {
                        do
                        {
                            do
                            {
                                printf("\nMOCHILA :\n");
                                for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                                    printf ("\t(%i)- %s\n",cont_mochila+1,mochila[cont_mochila]);
                                printf("\n (6)- Sair da Mochila!\n");
                                printf("\nSelecione algum item que deseja utilizar ...\n\n");
                                setbuf(stdin,NULL);
                                scanf("%c",&cont_mochila_char);
                                cont_mochila_char--;
                                if (cont_mochila_char=='0')
                                {
                                    cont_mochila=0;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='1')
                                {
                                    cont_mochila=1;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='2')
                                {
                                    cont_mochila=2;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='3')
                                {
                                    cont_mochila=3;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='4')
                                {
                                    cont_mochila=4;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='5')
                                {
                                    system("cls");
                                    printf("\nSaindo da mochila...\n");
                                    char_int++;
                                    item_escolha++;
                                    system("PAUSE");
                                }
                                else
                                {
                                    system("cls");
                                    printf("\nEscolha um item v�lido!\n");
                                    system("pause");
                                    system("cls");
                                }
                            }
                            while(char_int==0);
                            ////////////////////////////////////////////////////
                            if (strcmp(mochila[cont_mochila],"Vazio")==0)
                            {
                                system("cls");
                                printf("\nSlot selecionado est� vazio.\n");
                                system("pause");
                                system("cls");
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Vida Pequena")==0)
                            {
                                printf("\nPo��o de Vida Pequena utilizada, +30 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<30; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual � %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Vida M�dia")==0)
                            {
                                printf("\nPo��o de Vida M�dia utilizada, +50 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<50; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual � %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Vida Grande")==0)
                            {
                                printf("\nPo��o de Vida Grande utilizada, +70 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<70; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual � %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Recupera��o Completa")==0)
                            {
                                printf("\nPo��o de Recupera��o Completa utilizada, seu personagem est� com a vida m�xima agora...\n");
                                vida_p=vida_pmax;
                                printf("\nSua vida atual � %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Dano")==0)
                            {
                                printf("\nPo��o de Dano utilizada, seu personagem possu� +2 de dano em seus ataques normais at� o final da luta...\n");
                                cont_pot_dano++;
                                printf("\nSeu ataque era de %.2f e agora � %.2f .\n",ataque_p,ataque_p+2);
                                ataque_p+=2;
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Defesa")==0)
                            {
                                printf("\nPo��o de Defesa utilizada, seu personagem possu� +2 de defesa at� o final da luta ...\n");
                                cont_pot_defesa++;
                                printf("\nSua defesa era de %.2f agora � %.2f .\n",defesa_p,defesa_p+2);
                                defesa_p+=2;
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                        }
                        while (item_escolha==0);
                    }
                    mochilavariavel1='0';
                    break;
                case '2':
                    system("pause");
                    system("cls");
                    mochilavariavel1='0';
                    break;
                default:
                    printf("Op��o inv�lida!\n");
                }
            }
            while(mochilavariavel1!='0');
////////////////////

            printf("\nExiste uma esp�cie de di�rio no ch�o... voc� o pega...\n");
            system("pause");
            printf("\nNele voc� l� sobre um her�i que tentou se aventurar por essa Cripta, e buscava algum objetivo no final dela, tem algo sobre um ciclo a ser quebrado, mas � dif�cil entender com as p�ginas t�o mofadas...\n");
            printf("\nVoc� come�a a se lembrar... sua casa, seu lar, seus treinamentos com seu mestre, seus companheiros, sua vinda at� a Cripta, e um branco...\n");
            system("pause");
            system("cls");
            printf("\n- � isso, eu tenho um prop�sito, eu preciso cumprir com as expectativas de meu mestre, preciso me tornar um her�i, eu posso n�o lembrar de tudo ainda, mas vou at� o fim disso, � o que esperam de mim...\n");
            printf("\nInspirado pelas mem�rias que retomou, voc� tem um senso de que � necessitado para alguma causa, as pessoas com as quais voc� se importa e se importam contigo dependem disso, voc� precisa ter sucesso...\n");
            system("pause");
            system("cls");
            ////////////////////////////////////////////////////////////////////////////////////////////////////////////fim capitulo 1****
            printf("\nCap�tulo 2 : Se aprofundando na Cripta!!!\n");
            printf("\n*************************************************************| Sua jornada continua no pr�ximo n�vel da Cripta . . . |*************************************************************\n");
            printf("\n... Ap�s continuar descendo na Cripta, voc� se encotra cada vez mais perto de seu objetivo final...\n");
            printf("\nE nesse caminho voc� encontrou uma Po��o de Vida M�dia...\n");
            do
            {
                if (cont_item>=5)
                {
                    printf("\nTodos os espa�os da mochila est�o cheios!\n");
                    add_item++;
                }
                else if (strcmp(mochila[cont_item],"Vazio")==0)
                {
                    strcpy(mochila[cont_item],"Po��o de Vida M�dia");//item que vai ser recebido
                    add_item++;
                }
                cont_item++;
            }
            while (add_item==0);
            cont_item=0;
            add_item=0;
            printf("\nSeus status e equipamentos agora s�o :\n");
            ////////////////////////////
            printf("\n\n\n\n_____________________________________________________________________________________________\n\n\n\n");
            printf("\nVida M�xima: %.2f \t Vida Atual: %.2f \t Ataque: %.2f \t Defesa: %.2f \n",vida_pmax,vida_p,ataque_p,defesa_p);
            printf("\nMOCHILA :\n");
            for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                printf ("\t(%i)- %s\n",cont_mochila+1,mochila[cont_mochila]);
            printf("\n\n\n\n_____________________________________________________________________________________________\n\n\n\n");
            system("pause");
            system("cls");
            printf("\nContinuando a retomar suas mem�rias, voc� se lembra de seu mestre Hirko, que o treinou para que conclu�sse essa miss�o, mesmo sem lembrar de qual era e o porque, voc� sabe que as respotas est�o aqui em algum lugar...\n");
            printf("\nVoc� ja est� caminhando a algum tempo, e desde que desceu mais na Cripta ela parece estar se modificando, as paredes de pedras cinzentas agora s�o blocos de calc�rio, tem areia pelo ch�o al�m de teias de aranha por todo lado.\n");
            printf("\nAparenta estar em uma catacumba, e desde que entrou est� a caminhar com uma tocha para iluminar seu caminho...\n");
            system("pause");
            system("cls");
            printf("\nAgora descendo mais um lance de escadas voc� encontra escritas e desenhos que parecem contar uma hist�ria...\n");
            printf("\nNela um animal afugentado percorre uma floresta perdida, tentando encontrar uma sa�da, mas sempre volta ao mesmo local, com muito medo dos seus arredores, mas a �nica coisa que o persegue � sua pr�pria sombra...\n");
            printf("\nIsso lhe ecoa na mente, mas n�o parece fazer muito sentido...\n");
            system("pause");
            system("cls");
            printf("\nEnt�o voc� decide partir, quando virando o final do corredor voc� enxerga uma sombra se mexendo e parece ser um inimigo, ser� melhor usar o elemento surpresa para ataca-lo ou tentar se esgueirar...\n");
            system("pause");
            printf("\n\t (1)- Atacar! \t (2)- Esgueirar-se!");
            armadilha4='1';
            do
            {
                setbuf(stdin,NULL);
                scanf("%c",&armadilha3);
                switch(armadilha3)
                {
                case '1':
                    armazenar=1;
                    armadilha4='0';
                    break;
                case '2':
                    printf("Voc� encontrou uma Po��o Pequena de Vida logo a frente!!\n");
                    armazenar=2;
                    armadilha4='0';
                    break;
                default:
                    printf("Op��o inv�lida\n");
                    if (armadilha3=='0')
                        armadilha4='1';
                }
            }
            while(armadilha4!='0');
            if (armazenar==1)
            {
                luta=1;
                printf ("\n______________________________________________________________________________________________________________________________________________________________________\n");
                printf ("\n\t Descri��o: M�mia � um cad�ver, cuja pele e �rg�os foram preservados intencionalmente ou acidentalmente pela exposi��o de produtos qu�micos. Est�o dispostas a exterminar qualquer tipo de ser \n \t Arma: N�o tem \n \t Dano: 25 ATK \n \t Vida: 60 HP");
                printf ("\n______________________________________________________________________________________________________________________________________________________________________\n");
                printf("\n\n*********************************************************************| COMBATE |*********************************************************************\n\n");
                do
                {
                    printf("\n|\t[1]Atacar(%.2f)\t|\t[2]Defender(%.2f + 2,00)\t|\t[3]Ataque Forte(%.2f)\t|\t[4]Mochila\t|\t\n",ataque_p,defesa_p,ataquef_p);
                    scanf("%i",&op_luta);
                    if (tempo_recarga!=0 && op_luta!=3)
                        tempo_recarga--;
                    switch (op_luta)
                    {
                    case 1:
                        ataque_mumia=25;
                        printf("\nVoc� ataca o inimigo!\n");
                        vida_mumia=vida_mumia-ataque_p;
                        printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_p,vida_mumia);
                        vida_p=(vida_p-(ataque_mumia-defesa_p));
                        printf("\nVoce bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",defesa_p,(ataque_mumia-defesa_p),vida_p);
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    case 2:
                        ataque_mumia=25;
                        printf("\nVoce se defende!\n");
                        vida_p=(vida_p-(ataque_mumia-(defesa_p+2)));
                        printf("\nVoc� bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",(defesa_p+2),(ataque_mumia-(defesa_p+2)),vida_p);
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    case 3:
                        ataque_mumia=25;
                        if (tempo_recarga!=0)
                        {
                            printf("\nSeu ataque forte est� carregando...\n");
                        }
                        else if (tempo_recarga==0)
                        {
                            printf("\nVoc� usa seu ataque forte, causando dano extra por�m se deixando vulner�vel!\n");
                            vida_mumia=vida_mumia-ataquef_p;
                            printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida!\n",ataquef_p,vida_mumia);
                            vida_p=(vida_p-ataque_mumia);
                            printf("\nVoc� recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_mumia,vida_p);
                            tempo_recarga=tempo_recargamax;
                        }
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    case 4:
                        item_escolha=0;
                        for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                            if (strcmp(mochila[cont_mochila],"Vazio")==0)
                                teste_mochila++;
                        if (teste_mochila==5)
                        {
                            printf("\nVoc� n�o possu� nenhum item!\n");
                            item_escolha++;
                            pre_teste=1;
                            //Voltar para escolha de a��o
                        }
                        if (pre_teste!=1)
                        {
                            do
                            {
                                do
                                {
                                    printf("\nMOCHILA :\n");
                                    for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                                        printf ("\t(%i)- %s\n",cont_mochila+1,mochila[cont_mochila]);
                                    printf("\n (6)- Sair da Mochila!\n");
                                    printf("\nSelecione algum item que deseja utilizar ...\n\n");
                                    setbuf(stdin,NULL);
                                    scanf("%c",&cont_mochila_char);
                                    cont_mochila_char--;
                                    if (cont_mochila_char=='0')
                                    {
                                        cont_mochila=0;
                                        char_int++;
                                    }
                                    else if (cont_mochila_char=='1')
                                    {
                                        cont_mochila=1;
                                        char_int++;
                                    }
                                    else if (cont_mochila_char=='2')
                                    {
                                        cont_mochila=2;
                                        char_int++;
                                    }
                                    else if (cont_mochila_char=='3')
                                    {
                                        cont_mochila=3;
                                        char_int++;
                                    }
                                    else if (cont_mochila_char=='4')
                                    {
                                        cont_mochila=4;
                                        char_int++;
                                    }
                                    else if (cont_mochila_char=='5')
                                    {
                                        system("cls");
                                        printf("\nSaindo da mochila...\n");
                                        char_int++;
                                        item_escolha++;
                                        system("PAUSE");
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("\nEscolha um item v�lido!\n");
                                        system("pause");
                                        system("cls");
                                    }
                                }
                                while(char_int==0);
                                ////////////////////////////////////////////////////
                                if (strcmp(mochila[cont_mochila],"Vazio")==0)
                                {
                                    system("cls");
                                    printf("\nSlot selecionado est� vazio.\n");
                                    system("pause");
                                    system("cls");
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Vida Pequena")==0)
                                {
                                    printf("\nPo��o de Vida Pequena utilizada, +30 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<30; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual � %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Vida M�dia")==0)
                                {
                                    printf("\nPo��o de Vida M�dia utilizada, +50 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<50; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual � %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Vida Grande")==0)
                                {
                                    printf("\nPo��o de Vida Grande utilizada, +70 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<70; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual � %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Recupera��o Completa")==0)
                                {
                                    printf("\nPo��o de Recupera��o Completa utilizada, seu personagem est� com a vida m�xima agora...\n");
                                    vida_p=vida_pmax;
                                    printf("\nSua vida atual � %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Dano")==0)
                                {
                                    printf("\nPo��o de Dano utilizada, seu personagem possu� +2 de dano em seus ataques normais at� o final da luta...\n");
                                    cont_pot_dano++;
                                    printf("\nSeu ataque era de %.2f e agora � %.2f .\n",ataque_p,ataque_p+2);
                                    ataque_p+=2;
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Defesa")==0)
                                {
                                    printf("\nPo��o de Defesa utilizada, seu personagem possu� +2 de defesa at� o final da luta ...\n");
                                    cont_pot_defesa++;
                                    printf("\nSua defesa era de %.2f agora � %.2f .\n",defesa_p,defesa_p+2);
                                    defesa_p+=2;
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                            }
                            while (item_escolha==0);
                        }
                    }
                    if (vida_mumia<=0)
                    {
                        system("cls");
                        printf("\n************************************************************\n");
                        printf("\nVoc� vence a batalha!\n");
                        printf("\n************************************************************\n");
                        system("pause");
                        system("cls");
                        luta=0;
                        vida_mumia=60;
                    }
                }
                while(luta!=0);
                //////////////////////////////////////////////////
                while (cont_pot_dano>0)
                {
                    cont_pot_dano--;
                    ataque_p-=2;
                }
                while (cont_pot_defesa>0)
                {
                    cont_pot_dano--;
                    ataque_p-=2;
                }
                //////////////////////////////////////////////////
                printf("\n\nSua vida atual � %.2f, seu ataque � %.2f e sua defesa � %.2f .\n\n",vida_p,ataque_p,defesa_p);
                system("pause");
                printf("A M�mia deixou cair uma ma�� que d� aumento de +10 na sua vida m�xima!!\n");
                vida_pmax+=10;
                printf("Sua vida m�xima que antes era %.2f, agora � de : %.2f",(vida_pmax-10),vida_pmax);
            }
            if (armazenar==2)
            {

                do
                {
                    if (cont_item>=5)
                    {
                        printf("\nTodos os espa�os da mochila est�o cheios!\n");
                        add_item++;
                    }
                    else if (strcmp(mochila[cont_item],"Vazio")==0)
                    {
                        strcpy(mochila[cont_item],"Po��o de Vida Pequena");//item que vai ser recebido
                        add_item++;
                    }
                    cont_item++;
                }
                while (add_item==0);
                cont_item=0;
                printf("A Po��o de Vida foi adicionada a mochila!\n");
            }
            cont_item=0;
            add_item=0;
            system("pause");
            system("cls");
            printf("\nAp�s seguir um pouco mais a frente voc� se depara com tr�s passagens, e acaba sendo obrigado a escolher um caminho . . .\n");
            printf("\n\t (1)- Da esquerda! \t (2)- Do meio! \t (3)- Da direita!\n");
            //////////////////////Esquerda varios filhotes de arnhas pula em ti, voce sai da sala se batendo e rola no chao -15 de vida. Direita um zumbi levanta do chao e te ataca
            // Meio uma armadilha aciona
            // COMBATE COM O ZUMBI
            armadilha4='1';
            do
            {
                setbuf(stdin,NULL);
                scanf("%c",&armadilha3);
                switch(armadilha3)
                {
                case '1':
                    armazenar=1;
                    armadilha4='0';
                    break;
                case '2':
                    armazenar=2;
                    armadilha4='0';
                    break;
                case '3':
                    armazenar=3;
                    armadilha4='0';
                    break;
                default:
                    printf("Op��o inv�lida\n");
                    if (armadilha3=='0')
                        armadilha4='1';
                }
            }
            while(armadilha4!='0');

            if (armazenar==1)
            {
                vida_p=vida_p-15;
                printf("V�rios filhotes de aranha pulam em voc�!!! Voc� perde 15 de vida, sua vida atual � de %.2f\n",vida_p);
                system("pause");
                system("cls");
                if (vida_p<=0)
                {
                    system("cls");
                    printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                    system("pause");
                    system("cls");
                    exit(0);
                }
            }
            if (armazenar==2)
            {
                vida_p=vida_p-15;
                printf("Voc� sem querer pisou num piso que ativou uma armadilha, uma flecha vem em alta velocidade e te atinge, fazendo-o perder 15 de vida, sua vida atual � de %.2f\n",vida_p);
                system("pause");
                system("cls");
                if (vida_p<=0)
                {
                    system("cls");
                    printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                    system("pause");
                    system("cls");
                    exit(0);
                }
            }
            if (armazenar==3)
            {
                luta=1;
                printf ("\n______________________________________________________________________________________________________________________________________________________________________\n");
                printf ("\n\t Descri��o: � um zumbi que possui uma velocidade acima da normal, compar�vel com a de um humano comum. Suas mordidas podem arrancar m�os e peda�os grandes de membros\n\t Arma: Espada de Cr�nios \n\t Dano: 30 ATK \n\t Vida: 22 HP");
                printf ("\n______________________________________________________________________________________________________________________________________________________________________\n");
                printf("\n\n*********************************************************************| COMBATE |*********************************************************************\n\n");
                do
                {
                    printf("\n|\t[1]Atacar(%.2f)\t|\t[2]Defender(%.2f + 2,00)\t|\t[3]Ataque Forte(%.2f)\t|\t[4]Mochila\t|\t\n",ataque_p,defesa_p,ataquef_p);
                    scanf("%i",&op_luta);
                    if (tempo_recarga!=0 && op_luta!=3)
                        tempo_recarga--;
                    switch (op_luta)
                    {
                    case 1:
                        ataque_zumbi=30;
                        printf("\nVoc� ataca o inimigo!\n");
                        vida_zumbi=vida_zumbi-ataque_p;
                        printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_p,vida_zumbi);
                        vida_p=(vida_p-(ataque_zumbi-defesa_p));
                        printf("\nVoce bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",defesa_p,(ataque_zumbi-defesa_p),vida_p);
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    case 2:
                        ataque_zumbi=30;
                        printf("\nVoce se defende!\n");
                        vida_p=(vida_p-(ataque_zumbi-(defesa_p+2)));
                        printf("\nVoc� bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",(defesa_p+2),(ataque_zumbi-(defesa_p+2)),vida_p);
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    case 3:
                        ataque_zumbi=30;
                        if (tempo_recarga!=0)
                        {
                            printf("\nSeu ataque forte est� carregando...\n");
                        }
                        else if (tempo_recarga==0)
                        {
                            printf("\nVoc� usa seu ataque forte, causando dano extra por�m se deixando vulner�vel!\n");
                            vida_zumbi=vida_zumbi-ataquef_p;
                            printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida!\n",ataquef_p,vida_zumbi);
                            vida_p=(vida_p-ataque_zumbi);
                            printf("\nVoc� recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_zumbi,vida_p);
                            tempo_recarga=tempo_recargamax;
                        }
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    case 4:
                        item_escolha=0;
                        for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                            if (strcmp(mochila[cont_mochila],"Vazio")==0)
                                teste_mochila++;
                        if (teste_mochila==5)
                        {
                            printf("\nVoc� n�o possu� nenhum item!\n");
                            item_escolha++;
                            pre_teste=1;
                            //Voltar para escolha de a��o
                        }
                        if (pre_teste!=1)
                        {
                            do
                            {
                                do
                                {
                                    printf("\nMOCHILA :\n");
                                    for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                                        printf ("\t(%i)- %s\n",cont_mochila+1,mochila[cont_mochila]);
                                    printf("\n (6)- Sair da Mochila!\n");
                                    printf("\nSelecione algum item que deseja utilizar ...\n\n");
                                    setbuf(stdin,NULL);
                                    scanf("%c",&cont_mochila_char);
                                    cont_mochila_char--;
                                    if (cont_mochila_char=='0')
                                    {
                                        cont_mochila=0;
                                        char_int++;
                                    }
                                    else if (cont_mochila_char=='1')
                                    {
                                        cont_mochila=1;
                                        char_int++;
                                    }
                                    else if (cont_mochila_char=='2')
                                    {
                                        cont_mochila=2;
                                        char_int++;
                                    }
                                    else if (cont_mochila_char=='3')
                                    {
                                        cont_mochila=3;
                                        char_int++;
                                    }
                                    else if (cont_mochila_char=='4')
                                    {
                                        cont_mochila=4;
                                        char_int++;
                                    }
                                    else if (cont_mochila_char=='5')
                                    {
                                        system("cls");
                                        printf("\nSaindo da mochila...\n");
                                        char_int++;
                                        item_escolha++;
                                        system("PAUSE");
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("\nEscolha um item v�lido!\n");
                                        system("pause");
                                        system("cls");
                                    }
                                }
                                while(char_int==0);
                                ////////////////////////////////////////////////////
                                if (strcmp(mochila[cont_mochila],"Vazio")==0)
                                {
                                    system("cls");
                                    printf("\nSlot selecionado est� vazio.\n");
                                    system("pause");
                                    system("cls");
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Vida Pequena")==0)
                                {
                                    printf("\nPo��o de Vida Pequena utilizada, +30 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<30; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual � %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Vida M�dia")==0)
                                {
                                    printf("\nPo��o de Vida M�dia utilizada, +50 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<50; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual � %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Vida Grande")==0)
                                {
                                    printf("\nPo��o de Vida Grande utilizada, +70 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<70; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual � %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Recupera��o Completa")==0)
                                {
                                    printf("\nPo��o de Recupera��o Completa utilizada, seu personagem est� com a vida m�xima agora...\n");
                                    vida_p=vida_pmax;
                                    printf("\nSua vida atual � %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Dano")==0)
                                {
                                    printf("\nPo��o de Dano utilizada, seu personagem possu� +2 de dano em seus ataques normais at� o final da luta...\n");
                                    cont_pot_dano++;
                                    printf("\nSeu ataque era de %.2f e agora � %.2f .\n",ataque_p,ataque_p+2);
                                    ataque_p+=2;
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Defesa")==0)
                                {
                                    printf("\nPo��o de Defesa utilizada, seu personagem possu� +2 de defesa at� o final da luta ...\n");
                                    cont_pot_defesa++;
                                    printf("\nSua defesa era de %.2f agora � %.2f .\n",defesa_p,defesa_p+2);
                                    defesa_p+=2;
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                            }
                            while (item_escolha==0);
                        }
                    }
                    if (vida_zumbi<=0)
                    {
                        system("cls");
                        printf("\n************************************************************\n");
                        printf("\nVoc� vence a batalha!\n");
                        printf("\n************************************************************\n");
                        system("pause");
                        system("cls");
                        luta=0;
                        vida_zumbi=22;
                        //////////////////////////////////////////////////
                        printf("\nVoc� encontrou uma Po��o de Vida M�dia com o inimigo!\n");
                        do
                        {
                            if (cont_item>=5)
                            {
                                printf("\nTodos os espa�os da mochila est�o cheios!\n");
                                add_item++;
                            }
                            else if (strcmp(mochila[cont_item],"Vazio")==0)
                            {
                                strcpy(mochila[cont_item],"Po��o de Vida M�dia");//item que vai ser recebido
                                add_item++;
                            }
                            cont_item++;
                        }
                        while (add_item==0);
                        cont_item=0;
                        add_item=0;
                        /////////////////////////////////////////////////////////////////////////////////
                    }
                }
                while(luta!=0);
                //////////////////////////////////////////////////
                while (cont_pot_dano>0)
                {
                    cont_pot_dano--;
                    ataque_p-=2;
                }
                while (cont_pot_defesa>0)
                {
                    cont_pot_dano--;
                    ataque_p-=2;
                }
                //////////////////////////////////////////////////
                printf("\n\nSua vida atual � %.2f, seu ataque � %.2f e sua defesa � %.2f .\n\n",vida_p,ataque_p,defesa_p);
                system("pause");
                system("cls");
            }
            printf("Voc� perdeu sua tocha gra�as a esse ocorrido, mas n�o foi um grande problema...\n");
            system("pause");
            system("cls");
            printf("\nDepois desse evento infortuno, voc� por sorte encontra uma tocha presa a parede, ent�o pensa ser um bom momento para usar sua mochila agora que parece seguro e pegar a tocha para ajudar a iluniar o caminho...\n");
            printf("\n\t (1)- Usar mochila! \t (2)- N�o usar!");
            //////////////////////se usar mochila ap�s fechar � pego desprevinido por uma aranha e entra em combate
            armadilha4='1';
            do
            {
                setbuf(stdin,NULL);
                scanf("%c",&armadilha3);
                switch(armadilha3)
                {
                case '1':
                    armazenar=1;
                    armadilha4='0';
                    break;
                case '2':
                    armazenar=2;
                    armadilha4='0';
                    break;
                default:
                    printf("Op��o inv�lida\n");
                    if (armadilha3=='0')
                        armadilha4='1';
                }
            }
            while(armadilha4!='0');
            if (armazenar==1)
            {
                item_escolha=0;
                for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                    if (strcmp(mochila[cont_mochila],"Vazio")==0)
                        teste_mochila++;
                if (teste_mochila==5)
                {
                    printf("\nVoc� n�o possu� nenhum item!\n");
                    item_escolha++;
                    pre_teste=1;
                    //Voltar para escolha de a��o
                }
                if (pre_teste!=1)
                {
                    do
                    {
                        do
                        {
                            printf("\nMOCHILA :\n");
                            for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                                printf ("\t(%i)- %s\n",cont_mochila+1,mochila[cont_mochila]);
                            printf("\n (6)- Sair da Mochila!\n");
                            printf("\nSelecione algum item que deseja utilizar ...\n\n");
                            setbuf(stdin,NULL);
                            scanf("%c",&cont_mochila_char);
                            cont_mochila_char--;
                            if (cont_mochila_char=='0')
                            {
                                cont_mochila=0;
                                char_int++;
                            }
                            else if (cont_mochila_char=='1')
                            {
                                cont_mochila=1;
                                char_int++;
                            }
                            else if (cont_mochila_char=='2')
                            {
                                cont_mochila=2;
                                char_int++;
                            }
                            else if (cont_mochila_char=='3')
                            {
                                cont_mochila=3;
                                char_int++;
                            }
                            else if (cont_mochila_char=='4')
                            {
                                cont_mochila=4;
                                char_int++;
                            }
                            else if (cont_mochila_char=='5')
                            {
                                system("cls");
                                printf("\nSaindo da mochila...\n");
                                char_int++;
                                item_escolha++;
                                system("PAUSE");
                            }
                            else
                            {
                                system("cls");
                                printf("\nEscolha um item v�lido!\n");
                                system("pause");
                                system("cls");
                            }
                        }
                        while(char_int==0);
                        ////////////////////////////////////////////////////
                        if (strcmp(mochila[cont_mochila],"Vazio")==0)
                        {
                            system("cls");
                            printf("\nSlot selecionado est� vazio.\n");
                            system("pause");
                            system("cls");
                        }
                        else if (strcmp(mochila[cont_mochila],"Po��o de Vida Pequena")==0)
                        {
                            printf("\nPo��o de Vida Pequena utilizada, +30 de vida ...\n");
                            for (cont_mochila2=0; cont_mochila2<30; cont_mochila2++)
                                if (vida_p<vida_pmax)
                                    vida_p++;
                            printf("\nSua vida atual � %.2f .\n",vida_p);
                            strcpy(mochila[cont_mochila],"Vazio");
                            item_escolha++;
                        }
                        else if (strcmp(mochila[cont_mochila],"Po��o de Vida M�dia")==0)
                        {
                            printf("\nPo��o de Vida M�dia utilizada, +50 de vida ...\n");
                            for (cont_mochila2=0; cont_mochila2<50; cont_mochila2++)
                                if (vida_p<vida_pmax)
                                    vida_p++;
                            printf("\nSua vida atual � %.2f .\n",vida_p);
                            strcpy(mochila[cont_mochila],"Vazio");
                            item_escolha++;
                        }
                        else if (strcmp(mochila[cont_mochila],"Po��o de Vida Grande")==0)
                        {
                            printf("\nPo��o de Vida Grande utilizada, +70 de vida ...\n");
                            for (cont_mochila2=0; cont_mochila2<70; cont_mochila2++)
                                if (vida_p<vida_pmax)
                                    vida_p++;
                            printf("\nSua vida atual � %.2f .\n",vida_p);
                            strcpy(mochila[cont_mochila],"Vazio");
                            item_escolha++;
                        }
                        else if (strcmp(mochila[cont_mochila],"Po��o de Recupera��o Completa")==0)
                        {
                            printf("\nPo��o de Recupera��o Completa utilizada, seu personagem est� com a vida m�xima agora...\n");
                            vida_p=vida_pmax;
                            printf("\nSua vida atual � %.2f .\n",vida_p);
                            strcpy(mochila[cont_mochila],"Vazio");
                            item_escolha++;
                        }
                        else if (strcmp(mochila[cont_mochila],"Po��o de Dano")==0)
                        {
                            printf("\nPo��o de Dano utilizada, seu personagem possu� +2 de dano em seus ataques normais at� o final da luta...\n");
                            cont_pot_dano++;
                            printf("\nSeu ataque era de %.2f e agora � %.2f .\n",ataque_p,ataque_p+2);
                            ataque_p+=2;
                            strcpy(mochila[cont_mochila],"Vazio");
                            item_escolha++;
                        }
                        else if (strcmp(mochila[cont_mochila],"Po��o de Defesa")==0)
                        {
                            printf("\nPo��o de Defesa utilizada, seu personagem possu� +2 de defesa at� o final da luta ...\n");
                            cont_pot_defesa++;
                            printf("\nSua defesa era de %.2f agora � %.2f .\n",defesa_p,defesa_p+2);
                            defesa_p+=2;
                            strcpy(mochila[cont_mochila],"Vazio");
                            item_escolha++;
                        }
                    }
                    while (item_escolha==0);
                }
                printf("Ao fechar a mochila voc� se depara com uma aranha!!\n");
                system("pause");
                system("cls");
                luta=1;
                printf ("\n______________________________________________________________________________________________________________________________________________________________________\n");
                printf ("\n\t A aranha Aracne � uma aranha gigantesca, do tamanho do ser humano. Possui pernas fortiss�mas, de modo que possa saltar em seus alvos e cravar suas presas nele \n \t Ataque: Corpo a Corpo, Imobiliza��o  \n \t Dano:25 ATK   \n \t Vida: 18 HP");
                printf ("\n______________________________________________________________________________________________________________________________________________________________________\n");
                printf("\n\n*********************************************************************| COMBATE |*********************************************************************\n\n");
                do
                {
                    printf("\n|\t[1]Atacar(%.2f)\t|\t[2]Defender(%.2f + 2,00)\t|\t[3]Ataque Forte(%.2f)\t|\t[4]Mochila\t|\t\n",ataque_p,defesa_p,ataquef_p);
                    scanf("%i",&op_luta);
                    if (tempo_recarga!=0 && op_luta!=3)
                        tempo_recarga--;
                    switch (op_luta)
                    {
                    case 1:
                        ataque_aranha=25;
                        printf("\nVoc� ataca o inimigo!\n");
                        vida_aranha=vida_aranha-ataque_p;
                        printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_p,vida_aranha);
                        vida_p=(vida_p-(ataque_aranha-defesa_p));
                        printf("\nVoce bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",defesa_p,(ataque_aranha-defesa_p),vida_p);
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    case 2:
                        ataque_aranha=25;
                        printf("\nVoce se defende!\n");
                        vida_p=(vida_p-(ataque_aranha-(defesa_p+2)));
                        printf("\nVoc� bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",(defesa_p+2),(ataque_aranha-(defesa_p+2)),vida_p);
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    case 3:
                        ataque_aranha=25;
                        if (tempo_recarga!=0)
                        {
                            printf("\nSeu ataque forte est� carregando...\n");
                        }
                        else if (tempo_recarga==0)
                        {
                            printf("\nVoc� usa seu ataque forte, causando dano extra por�m se deixando vulner�vel!\n");
                            vida_aranha=vida_aranha-ataquef_p;
                            printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida!\n",ataquef_p,vida_aranha);
                            vida_p=(vida_p-ataque_aranha);
                            printf("\nVoc� recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_aranha,vida_p);
                            tempo_recarga=tempo_recargamax;
                        }
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    case 4:
                        item_escolha=0;
                        for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                            if (strcmp(mochila[cont_mochila],"Vazio")==0)
                                teste_mochila++;
                        if (teste_mochila==5)
                        {
                            printf("\nVoc� n�o possu� nenhum item!\n");
                            item_escolha++;
                            pre_teste=1;
                            //Voltar para escolha de a��o
                        }
                        if (pre_teste!=1)
                        {
                            do
                            {
                                do
                                {
                                    printf("\nMOCHILA :\n");
                                    for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                                        printf ("\t(%i)- %s\n",cont_mochila+1,mochila[cont_mochila]);
                                    printf("\n (6)- Sair da Mochila!\n");
                                    printf("\nSelecione algum item que deseja utilizar ...\n\n");
                                    setbuf(stdin,NULL);
                                    scanf("%c",&cont_mochila_char);
                                    cont_mochila_char--;
                                    if (cont_mochila_char=='0')
                                    {
                                        cont_mochila=0;
                                        char_int++;
                                    }
                                    else if (cont_mochila_char=='1')
                                    {
                                        cont_mochila=1;
                                        char_int++;
                                    }
                                    else if (cont_mochila_char=='2')
                                    {
                                        cont_mochila=2;
                                        char_int++;
                                    }
                                    else if (cont_mochila_char=='3')
                                    {
                                        cont_mochila=3;
                                        char_int++;
                                    }
                                    else if (cont_mochila_char=='4')
                                    {
                                        cont_mochila=4;
                                        char_int++;
                                    }
                                    else if (cont_mochila_char=='5')
                                    {
                                        system("cls");
                                        printf("\nSaindo da mochila...\n");
                                        char_int++;
                                        item_escolha++;
                                        system("PAUSE");
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("\nEscolha um item v�lido!\n");
                                        system("pause");
                                        system("cls");
                                    }
                                }
                                while(char_int==0);
                                ////////////////////////////////////////////////////
                                if (strcmp(mochila[cont_mochila],"Vazio")==0)
                                {
                                    system("cls");
                                    printf("\nSlot selecionado est� vazio.\n");
                                    system("pause");
                                    system("cls");
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Vida Pequena")==0)
                                {
                                    printf("\nPo��o de Vida Pequena utilizada, +30 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<30; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual � %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Vida M�dia")==0)
                                {
                                    printf("\nPo��o de Vida M�dia utilizada, +50 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<50; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual � %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Vida Grande")==0)
                                {
                                    printf("\nPo��o de Vida Grande utilizada, +70 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<70; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual � %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Recupera��o Completa")==0)
                                {
                                    printf("\nPo��o de Recupera��o Completa utilizada, seu personagem est� com a vida m�xima agora...\n");
                                    vida_p=vida_pmax;
                                    printf("\nSua vida atual � %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Dano")==0)
                                {
                                    printf("\nPo��o de Dano utilizada, seu personagem possu� +2 de dano em seus ataques normais at� o final da luta...\n");
                                    cont_pot_dano++;
                                    printf("\nSeu ataque era de %.2f e agora � %.2f .\n",ataque_p,ataque_p+2);
                                    ataque_p+=2;
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Defesa")==0)
                                {
                                    printf("\nPo��o de Defesa utilizada, seu personagem possu� +2 de defesa at� o final da luta ...\n");
                                    cont_pot_defesa++;
                                    printf("\nSua defesa era de %.2f agora � %.2f .\n",defesa_p,defesa_p+2);
                                    defesa_p+=2;
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                            }
                            while (item_escolha==0);
                        }
                    }
                    if (vida_aranha<=0)
                    {
                        system("cls");
                        printf("\n************************************************************\n");
                        printf("\nVoc� vence a batalha!\n");
                        printf("\n************************************************************\n");
                        system("pause");
                        system("cls");
                        luta=0;
                        vida_aranha=18;
                    }
                }
                while(luta!=0);
                //////////////////////////////////////////////////
                while (cont_pot_dano>0)
                {
                    cont_pot_dano--;
                    ataque_p-=2;
                }
                while (cont_pot_defesa>0)
                {
                    cont_pot_dano--;
                    ataque_p-=2;
                }
            }
            printf("\nAgora pronto para seguir, com a tocha em m�os voc� segue andando pela Cripta...\n");
            system("pause");
            system("cls");
            printf("\nVoc� encontra uma mochila perto a um cadaver, voc� primeiramente checa se ele est� realmente morto e ele realmente aparenta estar... Ent�o voc� vasculha a mochila...\n");
            printf("\nNela voc� adquiri 1 Po��o de Vida Grande e 1 Po��o de Defesa, al�m de algumas anota��es...\n");
            cont_item=0;
            add_item=0;
            do
            {
                if (cont_item>=5)
                {
                    printf("\nTodos os espa�os da mochila est�o cheios!\n");
                    add_item++;
                }
                else if (strcmp(mochila[cont_item],"Vazio")==0)
                {
                    strcpy(mochila[cont_item],"Po��o de Vida Grande");//item que vai ser recebido
                    add_item++;
                }
                cont_item++;
            }
            while (add_item==0);
            cont_item=0;
            add_item=0;
            do
            {
                if (cont_item>=5)
                {
                    printf("\nTodos os espa�os da mochila est�o cheios!\n");
                    add_item++;
                }
                else if (strcmp(mochila[cont_item],"Vazio")==0)
                {
                    strcpy(mochila[cont_item],"Po��o de Defesa");//item que vai ser recebido
                    add_item++;
                }
                cont_item++;
            }
            while (add_item==0);
            cont_item=0;
            add_item=0;
            system("pause");
            system("cls");
            printf("\nANOTA��ES: -...Ent�o � preciso tomar cuidado, diversos desafios est�o por vir... mas no final � preciso enfrentar... se n�o coseguir derrota-lo... Acho que estou ficando louco, tenho a impress�o que � imposs�vel sair daqui.\n");
            printf("\nVoc� reflete sobre o que conseguiu ler, e lembra que de fato havia alguma obst�culo final a ser derrotado, seu mestre havia dito a ele -'...no final, algo o aguarda, voc� vai entender o real desafio quando alcan�ar teu objetivo...'.\n");
            printf("\nEnt�o voc� levanta e segue seu caminho...\n");
            system("pause");
            system("cls");
            /////////////////////ENIGMA
            printf("\nCaminhando pelos corredores voc� avista saida para uma �rea maior com tochas e grandes est�tuas que aparentam ser eg�pcias\n");
            printf("\nVoc� entra nessa nova sala, andando com cautela voc� atravessa entre as est�tuas gigantes com labaredas de fogo at� uma enorme porta que bloqueia seu caminho, e nela uma escrita...\n");
            printf("\nExiste tamb�m um mecanismo no ch�o de placa de press�o que quando voc� pisa uma est�tua ao seu lado se vira para ti...\n");
            system("pause");
            printf("\n'Ao amanhecer, possu� quatro patas, ao entardecer apenas duas e ao anoitecer possu� tr�s . . . ' \n");
            printf("\n -Uma charada..., eu ja escutei essa antes... preciso descobrir a resposta para seguir meu caminho...e algo me diz que � melhor eu n�o errar...\n");
            printf("\n -Patas... � prov�vel que seja um animal...\n");
            printf("\n\t (1)- Esfinge! \t (2)- Macaco! \t (3)- Homem! \t (4)- Camelo! \t (5)- Cobra \t (6)- Falc�o\n");
            ////////////////////se errar toma flechada -20 de vida/ textinho pra cada opcao/ e texto dele realizando quando escolhe a 3 do pq � a certa
            armadilha4='1';
            do
            {
                setbuf(stdin,NULL);
                scanf("%c",&armadilha3);
                switch(armadilha3)
                {
                case '1':
                    armazenar=1;
                    break;
                case '2':
                    armazenar=2;
                    break;
                case '3':
                    armazenar=3;
                    armadilha4='0';
                    break;
                case '4':
                    armazenar=4;
                    break;
                case '5':
                    armazenar=5;
                    break;
                case '6':
                    armazenar=6;
                    break;
                default:
                    printf("Op��o inv�lida\n");
                    if (armadilha3=='0')
                        armadilha4='1';
                }
                if (armazenar==1)

                {
                    printf("Esfinge? Resposta errada....\n");
                    printf("Voc� leva 20 de dano com uma flechada\n");
                    vida_p=vida_p-20;
                    printf("Sua vida atual � de %.2f",vida_p);
                }
                if (vida_p<=0)
                {
                    system("cls");
                    printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                    system("pause");
                    system("cls");
                    exit(0);
                }
                if (armazenar==2)

                {
                    printf("Macaco? Resposta errada....\n");
                    printf("Voc� leva 20 de dano com uma flechada\n");
                    vida_p=vida_p-20;
                    printf("Sua vida atual � de %.2f",vida_p);
                }
                if (vida_p<=0)
                {
                    system("cls");
                    printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                    system("pause");
                    system("cls");
                    exit(0);
                }
                if (armazenar==4)

                {
                    printf("Camelo? Resposta errada....\n");
                    printf("Voc� leva 20 de dano com uma flechada\n");
                    vida_p=vida_p-20;
                    printf("Sua vida atual � de %.2f",vida_p);
                }
                if (vida_p<=0)
                {
                    system("cls");
                    printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                    system("pause");
                    system("cls");
                    exit(0);
                }
                if (armazenar==5)

                {
                    printf("Cobra? Resposta errada....\n");
                    printf("Voc� leva 20 de dano com uma flechada\n");
                    vida_p=vida_p-20;
                    printf("Sua vida atual � de %.2f",vida_p);
                }
                if (vida_p<=0)
                {
                    system("cls");
                    printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                    system("pause");
                    system("cls");
                    exit(0);
                }
                if (armazenar==6)

                {
                    printf("Falc�o? Resposta errada....\n");
                    printf("Voc� leva 20 de dano com uma flechada\n");
                    vida_p=vida_p-20;
                    printf("Sua vida atual � de %.2f",vida_p);
                }
                if (vida_p<=0)
                {
                    system("cls");
                    printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                    system("pause");
                    system("cls");
                    exit(0);
                }
            }
            while(armadilha4!='0');
            if (armazenar==3)

            {
                printf("Resposta certa !!\n");
                printf("O homem ao nascer anda com 4 patas, vulgo engatinhando, no meio de sua vida com 2 patas, vulgo com os p�s, e quando est� velho, usa bengala, o que o faz ter 3 patas\n");
            }
            ////////////////////FIM ENGIMA
            printf("\nAs portas se abrem e uma ventania passa por voc�... ent�o, com sua tocha em m�os voc� segue pela porta e desce pela escadaria . . . \n");
            system("pause");
            system("cls");
            ///////////////////////////////////////////////////////////////////////////////////////////////////////fim capitulo 2****
            printf("\nCap�tulo 3 : A descida para a escurid�o!!!\n");
            printf("\n*************************************************************| Voc� continua a se aprofundar na Cripta . . . |*************************************************************\n");
            printf("\n... Voc� segue descendo nas profundezas da Cripta, saindo daquela �rea anterior sente que desafios maiores ainda est�o por vir...\n");
            printf("\nEnt�o decide para um momento para repor as energias e olhar seu equipamento atual :\n");
            printf("\nSeus status e equipamentos agora s�o :\n");
            printf("\n\n\n\n_____________________________________________________________________________________________\n\n\n\n");
            printf("\nVida M�xima: %.2f \t Vida Atual: %.2f \t Ataque: %.2f \t Defesa: %.2f \n",vida_pmax,vida_p,ataque_p,defesa_p);
            printf("\nMOCHILA :\n");
            for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                printf ("\t(%i)- %s\n",cont_mochila+1,mochila[cont_mochila]);
            printf("\n\n\n\n_____________________________________________________________________________________________\n\n\n\n");
            printf("\nDeseja utilizar a mochila?\n");
            printf("\n\t (1)- Usar mochila! \t (2)- N�o usar!\n");
            armadilha4='1';
            do
            {
                setbuf(stdin,NULL);
                scanf("%c",&armadilha3);
                switch(armadilha3)
                {
                case '1':
                    armazenar=1;
                    armadilha4='0';
                    break;
                case '2':
                    armadilha4='0';
                    break;
                default:
                    printf("Op��o inv�lida\n");
                    if (armadilha3=='0')
                        armadilha4='1';
                }
            }
            while(armadilha4!='0');
            if (armazenar==1)
            {

                item_escolha=0;
                for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                    if (strcmp(mochila[cont_mochila],"Vazio")==0)
                        teste_mochila++;
                if (teste_mochila==5)
                {
                    printf("\nVoc� n�o possu� nenhum item!\n");
                    item_escolha++;
                    pre_teste=1;
                    //Voltar para escolha de a��o
                }
                if (pre_teste!=1)
                {
                    do
                    {
                        do
                        {
                            printf("\nMOCHILA :\n");
                            for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                                printf ("\t(%i)- %s\n",cont_mochila+1,mochila[cont_mochila]);
                            printf("\n (6)- Sair da Mochila!\n");
                            printf("\nSelecione algum item que deseja utilizar ...\n\n");
                            setbuf(stdin,NULL);
                            scanf("%c",&cont_mochila_char);
                            cont_mochila_char--;
                            if (cont_mochila_char=='0')
                            {
                                cont_mochila=0;
                                char_int++;
                            }
                            else if (cont_mochila_char=='1')
                            {
                                cont_mochila=1;
                                char_int++;
                            }
                            else if (cont_mochila_char=='2')
                            {
                                cont_mochila=2;
                                char_int++;
                            }
                            else if (cont_mochila_char=='3')
                            {
                                cont_mochila=3;
                                char_int++;
                            }
                            else if (cont_mochila_char=='4')
                            {
                                cont_mochila=4;
                                char_int++;
                            }
                            else if (cont_mochila_char=='5')
                            {
                                system("cls");
                                printf("\nSaindo da mochila...\n");
                                char_int++;
                                item_escolha++;
                                system("PAUSE");
                            }
                            else
                            {
                                system("cls");
                                printf("\nEscolha um item v�lido!\n");
                                system("pause");
                                system("cls");
                            }
                        }
                        while(char_int==0);
                        ////////////////////////////////////////////////////
                        if (strcmp(mochila[cont_mochila],"Vazio")==0)
                        {
                            system("cls");
                            printf("\nSlot selecionado est� vazio.\n");
                            system("pause");
                            system("cls");
                        }
                        else if (strcmp(mochila[cont_mochila],"Po��o de Vida Pequena")==0)
                        {
                            printf("\nPo��o de Vida Pequena utilizada, +30 de vida ...\n");
                            for (cont_mochila2=0; cont_mochila2<30; cont_mochila2++)
                                if (vida_p<vida_pmax)
                                    vida_p++;
                            printf("\nSua vida atual � %.2f .\n",vida_p);
                            strcpy(mochila[cont_mochila],"Vazio");
                            item_escolha++;
                        }
                        else if (strcmp(mochila[cont_mochila],"Po��o de Vida M�dia")==0)
                        {
                            printf("\nPo��o de Vida M�dia utilizada, +50 de vida ...\n");
                            for (cont_mochila2=0; cont_mochila2<50; cont_mochila2++)
                                if (vida_p<vida_pmax)
                                    vida_p++;
                            printf("\nSua vida atual � %.2f .\n",vida_p);
                            strcpy(mochila[cont_mochila],"Vazio");
                            item_escolha++;
                        }
                        else if (strcmp(mochila[cont_mochila],"Po��o de Vida Grande")==0)
                        {
                            printf("\nPo��o de Vida Grande utilizada, +70 de vida ...\n");
                            for (cont_mochila2=0; cont_mochila2<70; cont_mochila2++)
                                if (vida_p<vida_pmax)
                                    vida_p++;
                            printf("\nSua vida atual � %.2f .\n",vida_p);
                            strcpy(mochila[cont_mochila],"Vazio");
                            item_escolha++;
                        }
                        else if (strcmp(mochila[cont_mochila],"Po��o de Recupera��o Completa")==0)
                        {
                            printf("\nPo��o de Recupera��o Completa utilizada, seu personagem est� com a vida m�xima agora...\n");
                            vida_p=vida_pmax;
                            printf("\nSua vida atual � %.2f .\n",vida_p);
                            strcpy(mochila[cont_mochila],"Vazio");
                            item_escolha++;
                        }
                        else if (strcmp(mochila[cont_mochila],"Po��o de Dano")==0)
                        {
                            printf("\nPo��o de Dano utilizada, seu personagem possu� +2 de dano em seus ataques normais at� o final da luta...\n");
                            cont_pot_dano++;
                            printf("\nSeu ataque era de %.2f e agora � %.2f .\n",ataque_p,ataque_p+2);
                            ataque_p+=2;
                            strcpy(mochila[cont_mochila],"Vazio");
                            item_escolha++;
                        }
                        else if (strcmp(mochila[cont_mochila],"Po��o de Defesa")==0)
                        {
                            printf("\nPo��o de Defesa utilizada, seu personagem possu� +2 de defesa at� o final da luta ...\n");
                            cont_pot_defesa++;
                            printf("\nSua defesa era de %.2f agora � %.2f .\n",defesa_p,defesa_p+2);
                            defesa_p+=2;
                            strcpy(mochila[cont_mochila],"Vazio");
                            item_escolha++;
                        }
                    }
                    while (item_escolha==0);
                }
            }

            system("cls");
            printf("\nDurante essa transi��o, voc� veio explorando os arredores e se depara com uma mesa de madeira que parecia ser de um alquimista...\n");
            system("pause");
            printf("\nVoc� deseja interagir com ela, quem sabe n�o encontra uma po��o...\n");
            printf("\n\t (1)- Iteragir! \t (2)- Passar direto!\n");
            armadilha4='1';
            do
            {
                setbuf(stdin,NULL);
                scanf("%c",&armadilha3);
                switch(armadilha3)
                {
                case '1':
                    armazenar=1;
                    armadilha4='0';
                    break;
                case '2':
                    armadilha4='0';
                    break;
                default:
                    printf("Op��o inv�lida\n");
                    if (armadilha3=='0')
                        armadilha4='1';
                }
            }
            while(armadilha4!='0');
            if (armazenar==1)
            {
                printf("Voc� conseguiu uma Po��o de Recupera��o Completa!!\n");
                vida_p-=45;
                printf("Mas como consequ�ncia, encostou sua m�o em um �cido e perdeu 45 de vida, sua vida atual � de %.2f\n",vida_p);
                do
                {
                    if (cont_item>=5)
                    {
                        printf("\nTodos os espa�os da mochila est�o cheios!\n");
                        add_item++;
                    }
                    else if (strcmp(mochila[cont_item],"Vazio")==0)
                    {
                        strcpy(mochila[cont_item],"Po��o de Recupera��o Completa");//item que vai ser recebido
                        add_item++;
                    }
                    cont_item++;
                }
                while (add_item==0);
                cont_item=0;
                add_item=0;
                system("pause");
            }
            if (vida_p<=0)
            {
                system("cls");
                printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                system("pause");
                system("cls");
                exit(0);
            }
            printf("\nContinuando seu caminho � poss�vel ver a mudan�a no cen�rio...\n");
            printf("\nAs paredes parecem o interior de uma caverna, o espa�o aumentou relativamente, machas de sangues s�o frequentes, cabe�as penduradas, alguns amuletos de adora��o como ornametons improvisados com ossos e estacas de madeira...\n");
            system("pause");
            system("cls");
            printf("\nDerrepente uma lan�a � jogada em sua dire��o, voc� apenas tem tempo de sair em parte do caminho, tomando -20 de dano...\n");
            system("pause");
            vida_p-=20;
            printf("\nUm troll avan�a em sua dire��o com tudo empunhando um tronco gigante . . .\n");
            system("pause");
            system("cls");
            ////////////////////////////combate com troll lanceiro/

            printf ("\n______________________________________________________________________________________________________________________________________________________________________\n");
            printf ("\n\t Descri��o: � uma criatura grande e forte, mas ao mesmo tempo lento e primitivo, preferem ficar sozinhos e isolados para ca�ar sua comida. \n\t Arma: Tronco de �rvore \n\t Dano: 35 ATK \n\t Vida: 40 HP");
            printf ("\n______________________________________________________________________________________________________________________________________________________________________\n");
            printf("\n\n*********************************************************************| COMBATE |*********************************************************************\n\n");
            luta=1;
            do
            {
                printf("\n|\t[1]Atacar(%.2f)\t|\t[2]Defender(%.2f + 2,00)\t|\t[3]Ataque Forte(%.2f)\t|\t[4]Mochila\t|\t\n",ataque_p,defesa_p,ataquef_p);
                scanf("%i",&op_luta);
                if (tempo_recarga!=0 && op_luta!=3)
                    tempo_recarga--;
                switch (op_luta)
                {
                case 1:
                    ataque_troll=35;
                    printf("\nVoc� ataca o inimigo!\n");
                    vida_troll=vida_troll-ataque_p;
                    printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_p,vida_troll);
                    vida_p-=(ataque_troll-defesa_p);
                    printf("\nVoce bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",defesa_p,ataque_troll-defesa_p,vida_p);
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case 2:
                    ataque_troll=35;

                    printf("\nVoce se defende!\n");
                    vida_p=(vida_p-(ataque_troll-(defesa_p+2)));
                    printf("\nVoc� bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",(defesa_p+2),(ataque_troll-(defesa_p+2)),vida_p);
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case 3:

                    ataque_troll=35;
                    if (tempo_recarga!=0)
                    {
                        printf("\nSeu ataque forte est� carregando...\n");
                    }
                    else if (tempo_recarga==0)
                    {
                        printf("\nVoc� usa seu ataque forte, causando dano extra por�m se deixando vulner�vel!\n");
                        vida_troll=vida_troll-ataquef_p;
                        printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida!\n",ataquef_p,vida_troll);
                        vida_p=(vida_p-ataque_troll);
                        printf("\nVoc� recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_troll,vida_p);
                        tempo_recarga=tempo_recargamax;
                    }
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case 4:
                    item_escolha=0;
                    for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                        if (strcmp(mochila[cont_mochila],"Vazio")==0)
                            teste_mochila++;
                    if (teste_mochila==5)
                    {
                        printf("\nVoc� n�o possu� nenhum item!\n");
                        item_escolha++;
                        pre_teste=1;
                        //Voltar para escolha de a��o
                    }
                    if (pre_teste!=1)
                    {
                        do
                        {
                            do
                            {
                                printf("\nMOCHILA :\n");
                                for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                                    printf ("\t(%i)- %s\n",cont_mochila+1,mochila[cont_mochila]);
                                printf("\n (6)- Sair da Mochila!\n");
                                printf("\nSelecione algum item que deseja utilizar ...\n\n");
                                setbuf(stdin,NULL);
                                scanf("%c",&cont_mochila_char);
                                cont_mochila_char--;
                                if (cont_mochila_char=='0')
                                {
                                    cont_mochila=0;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='1')
                                {
                                    cont_mochila=1;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='2')
                                {
                                    cont_mochila=2;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='3')
                                {
                                    cont_mochila=3;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='4')
                                {
                                    cont_mochila=4;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='5')
                                {
                                    system("cls");
                                    printf("\nSaindo da mochila...\n");
                                    char_int++;
                                    item_escolha++;
                                    system("PAUSE");
                                }
                                else
                                {
                                    system("cls");
                                    printf("\nEscolha um item v�lido!\n");
                                    system("pause");
                                    system("cls");
                                }
                            }
                            while(char_int==0);
                            ////////////////////////////////////////////////////
                            if (strcmp(mochila[cont_mochila],"Vazio")==0)
                            {
                                system("cls");
                                printf("\nSlot selecionado est� vazio.\n");
                                system("pause");
                                system("cls");
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Vida Pequena")==0)
                            {
                                printf("\nPo��o de Vida Pequena utilizada, +30 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<30; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual � %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Vida M�dia")==0)
                            {
                                printf("\nPo��o de Vida M�dia utilizada, +50 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<50; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual � %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Vida Grande")==0)
                            {
                                printf("\nPo��o de Vida Grande utilizada, +70 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<70; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual � %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Recupera��o Completa")==0)
                            {
                                printf("\nPo��o de Recupera��o Completa utilizada, seu personagem est� com a vida m�xima agora...\n");
                                vida_p=vida_pmax;
                                printf("\nSua vida atual � %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Dano")==0)
                            {
                                printf("\nPo��o de Dano utilizada, seu personagem possu� +2 de dano em seus ataques normais at� o final da luta...\n");
                                cont_pot_dano++;
                                printf("\nSeu ataque era de %.2f e agora � %.2f .\n",ataque_p,ataque_p+2);
                                ataque_p+=2;
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Defesa")==0)
                            {
                                printf("\nPo��o de Defesa utilizada, seu personagem possu� +2 de defesa at� o final da luta ...\n");
                                cont_pot_defesa++;
                                printf("\nSua defesa era de %.2f agora � %.2f .\n",defesa_p,defesa_p+2);
                                defesa_p+=2;
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                        }
                        while (item_escolha==0);
                    }
                }
                if (vida_troll<=0)
                {
                    system("cls");
                    printf("\n************************************************************\n");
                    printf("\nVoc� vence a batalha!\n");
                    printf("\n************************************************************\n");
                    system("pause");
                    system("cls");
                    luta=0;
                    vida_troll=40;
                }
            }
            while(luta!=0);
            //////////////////////////////////////////////////
            while (cont_pot_dano>0)
            {
                cont_pot_dano--;
                ataque_p-=2;
            }
            while (cont_pot_defesa>0)
            {
                cont_pot_dano--;
                ataque_p-=2;
            }
            //////////////////////////////////////////////////
            printf("\n\nSua vida atual � %.2f, seu ataque � %.2f e sua defesa � %.2f .\n\n",vida_p,ataque_p,defesa_p);
            system("pause");
            system("cls");
            //////////////////////////
            printf("O Troll dropou uma Po��o de dano!!\n");
            do
            {
                if (cont_item>=5)
                {
                    printf("\nTodos os espa�os da mochila est�o cheios!\n");
                    add_item++;
                }
                else if (strcmp(mochila[cont_item],"Vazio")==0)
                {
                    strcpy(mochila[cont_item],"Po��o de Dano");//item que vai ser recebido
                    add_item++;
                }
                cont_item++;
            }
            while (add_item==0);
            cont_item=0;
            add_item=0;
            system("pause");
            system("cls");
            printf("\nOfegante ap�s a luta, voc� procura um local para descansar... e percebe que existe uma abertura mais a frente...\n");
            printf("\nVoc� entra e se senta, decide comer um pouco de comida que havia achado mais cedo...\n");
            system("pause");
            system("cls");
            printf("\nRefletindo um pouco sobre o que est� acontecendo voc� v� mensagens de socorro nas paredes marcadas a sangue...\n");
            printf("\nVoc� tenta manter sua cabe�a centrada no objetivo, mas at� isso come�a a ser duvidoso para ti... parece que um incerteza come�a a tomar conta de ti...\n");
            system("pause");
            system("cls");
            printf("\n -Preciso continuar, preciso chegar ao final, n�o importa o que eu pense, tenho que fazer isso por eles...\n");
            printf("\nMas at� sobre 'eles',as pessoas das quais voc� se importa, voc� come�a a se questionar, ser� que realmente vale a pena levar isso adiante por conta deles, voc� nem sabe aonde quer chegar...\n");
            system("pause");
            system("cls");
            printf("\nSe levantando, voc� repara em um tipo de altar de adora��o e decide verifica-lo...\n");
            printf("\nEle � constituido de madeiras e cordas que amarram ossos a ele, num formato bem estranho, com um desenho ao fundo, parece ser para alguma divindade...\n");
            printf("\nCertamente pertence as criaturas aqui embaixo, ser� que deve interagir com isso . . .\n");
            printf("\n\t (1)- Interagir! \t (2)- Seguir seu caminho! \t (3)- Destruir o altar!\n");
            armadilha4='1';
            do
            {
                setbuf(stdin,NULL);
                scanf("%c",&armadilha3);
                switch(armadilha3)
                {
                case '1':
                    armazenar=1;
                    armadilha4='0';
                    break;
                case '2':
                    armazenar=2;
                    armadilha4='0';
                    break;
                case '3':
                    armazenar=3;
                    armadilha4='0';
                    break;
                default:
                    printf("Op��o inv�lida\n");
                    if (armadilha3=='0')
                        armadilha4='1';
                }
            }
            while(armadilha4!='0');
            if (armazenar==1)
            {
                vida_pmax+=5;
                vida_p=vida_pmax;
                printf("Ao interagir com o Altar voc� recuperou sua vida totalmente e ainda ganhou um b�nus de +5, sua vida � de %.2f\n",vida_p);
            }
            if (armazenar==2)
            {
                printf("Um zumbi surge de uma pilha de ossos e te ataca!!\n");
                //////////////LUTA COM ZUMBI

                printf ("\n______________________________________________________________________________________________________________________________________________________________________\n");
                printf ("\n\t Descri��o: � um zumbi que possui uma velocidade acima da normal, compar�vel com a de um humano comum. Suas mordidas podem arrancar m�os e peda�os grandes de membros\n\t Arma: Espada de Cr�nios \n\t Dano: 30 ATK \n\t Vida: 22 HP");
                printf ("\n______________________________________________________________________________________________________________________________________________________________________\n");
                printf("\n\n*********************************************************************| COMBATE |*********************************************************************\n\n");
                luta=1;
                do
                {
                    printf("\n|\t[1]Atacar(%.2f)\t|\t[2]Defender(%.2f + 2,00)\t|\t[3]Ataque Forte(%.2f)\t|\t[4]Mochila\t|\t\n",ataque_p,defesa_p,ataquef_p);
                    scanf("%i",&op_luta);
                    if (tempo_recarga!=0 && op_luta!=3)
                        tempo_recarga--;
                    switch (op_luta)
                    {
                    case 1:
                        ataque_zumbi=30;
                        printf("\nVoc� ataca o inimigo!\n");
                        vida_zumbi=vida_zumbi-ataque_p;
                        printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_p,vida_zumbi);
                        vida_p=(vida_p-(ataque_zumbi-defesa_p));
                        printf("\nVoce bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",defesa_p,(ataque_zumbi-defesa_p),vida_p);
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    case 2:
                        ataque_zumbi=30;
                        printf("\nVoce se defende!\n");
                        vida_p=(vida_p-(ataque_zumbi-(defesa_p+2)));
                        printf("\nVoc� bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",(defesa_p+2),(ataque_zumbi-(defesa_p+2)),vida_p);
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    case 3:
                        ataque_zumbi=30;
                        if (tempo_recarga!=0)
                        {
                            printf("\nSeu ataque forte est� carregando...\n");
                        }
                        else if (tempo_recarga==0)
                        {
                            printf("\nVoc� usa seu ataque forte, causando dano extra por�m se deixando vulner�vel!\n");
                            vida_zumbi=vida_zumbi-ataquef_p;
                            printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida!\n",ataquef_p,vida_zumbi);
                            vida_p=(vida_p-ataque_zumbi);
                            printf("\nVoc� recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_zumbi,vida_p);
                            tempo_recarga=tempo_recargamax;
                        }
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    case 4:
                        item_escolha=0;
                        for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                            if (strcmp(mochila[cont_mochila],"Vazio")==0)
                                teste_mochila++;
                        if (teste_mochila==5)
                        {
                            printf("\nVoc� n�o possu� nenhum item!\n");
                            item_escolha++;
                            pre_teste=1;
                            //Voltar para escolha de a��o
                        }
                        if (pre_teste!=1)
                        {
                            do
                            {
                                do
                                {
                                    printf("\nMOCHILA :\n");
                                    for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                                        printf ("\t(%i)- %s\n",cont_mochila+1,mochila[cont_mochila]);
                                    printf("\n (6)- Sair da Mochila!\n");
                                    printf("\nSelecione algum item que deseja utilizar ...\n\n");
                                    setbuf(stdin,NULL);
                                    scanf("%c",&cont_mochila_char);
                                    cont_mochila_char--;
                                    if (cont_mochila_char=='0')
                                    {
                                        cont_mochila=0;
                                        char_int++;
                                    }
                                    else if (cont_mochila_char=='1')
                                    {
                                        cont_mochila=1;
                                        char_int++;
                                    }
                                    else if (cont_mochila_char=='2')
                                    {
                                        cont_mochila=2;
                                        char_int++;
                                    }
                                    else if (cont_mochila_char=='3')
                                    {
                                        cont_mochila=3;
                                        char_int++;
                                    }
                                    else if (cont_mochila_char=='4')
                                    {
                                        cont_mochila=4;
                                        char_int++;
                                    }
                                    else if (cont_mochila_char=='5')
                                    {
                                        system("cls");
                                        printf("\nSaindo da mochila...\n");
                                        char_int++;
                                        item_escolha++;
                                        system("PAUSE");
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("\nEscolha um item v�lido!\n");
                                        system("pause");
                                        system("cls");
                                    }
                                }
                                while(char_int==0);
                                ////////////////////////////////////////////////////
                                if (strcmp(mochila[cont_mochila],"Vazio")==0)
                                {
                                    system("cls");
                                    printf("\nSlot selecionado est� vazio.\n");
                                    system("pause");
                                    system("cls");
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Vida Pequena")==0)
                                {
                                    printf("\nPo��o de Vida Pequena utilizada, +30 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<30; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual � %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Vida M�dia")==0)
                                {
                                    printf("\nPo��o de Vida M�dia utilizada, +50 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<50; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual � %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Vida Grande")==0)
                                {
                                    printf("\nPo��o de Vida Grande utilizada, +70 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<70; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual � %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Recupera��o Completa")==0)
                                {
                                    printf("\nPo��o de Recupera��o Completa utilizada, seu personagem est� com a vida m�xima agora...\n");
                                    vida_p=vida_pmax;
                                    printf("\nSua vida atual � %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Dano")==0)
                                {
                                    printf("\nPo��o de Dano utilizada, seu personagem possu� +2 de dano em seus ataques normais at� o final da luta...\n");
                                    cont_pot_dano++;
                                    printf("\nSeu ataque era de %.2f e agora � %.2f .\n",ataque_p,ataque_p+2);
                                    ataque_p+=2;
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Defesa")==0)
                                {
                                    printf("\nPo��o de Defesa utilizada, seu personagem possu� +2 de defesa at� o final da luta ...\n");
                                    cont_pot_defesa++;
                                    printf("\nSua defesa era de %.2f agora � %.2f .\n",defesa_p,defesa_p+2);
                                    defesa_p+=2;
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                            }
                            while (item_escolha==0);
                        }
                    }
                    if (vida_zumbi<=0)
                    {
                        system("cls");
                        printf("\n************************************************************\n");
                        printf("\nVoc� vence a batalha!\n");
                        printf("\n************************************************************\n");
                        system("pause");
                        system("cls");
                        luta=0;
                        vida_zumbi=22;
                    }
                }
                while(luta!=0);
                //////////////////////////////////////////////////
                while (cont_pot_dano>0)
                {
                    cont_pot_dano--;
                    ataque_p-=2;
                }
                while (cont_pot_defesa>0)
                {
                    cont_pot_dano--;
                    ataque_p-=2;
                }
                //////////////////////////////////////////////////
                printf("\n\nSua vida atual � %.2f, seu ataque � %.2f e sua defesa � %.2f .\n\n",vida_p,ataque_p,defesa_p);
                system("pause");
                system("cls");
                printf("O Zumbi dropou Po��o de Vida M�dia e Po��o de Defesa!!\n");
                system("pause");
                system("cls");
                do
                {
                    if (cont_item>=5)
                    {
                        printf("\nTodos os espa�os da mochila est�o cheios!\n");
                        add_item++;
                    }
                    else if (strcmp(mochila[cont_item],"Vazio")==0)
                    {
                        strcpy(mochila[cont_item],"Po��o de Vida M�dia");//item que vai ser recebido
                        add_item++;
                    }
                    cont_item++;
                }
                while (add_item==0);
                cont_item=0;
                add_item=0;

                do
                {
                    if (cont_item>=5)
                    {
                        printf("\nTodos os espa�os da mochila est�o cheios!\n");
                        add_item++;
                    }
                    else if (strcmp(mochila[cont_item],"Vazio")==0)
                    {
                        strcpy(mochila[cont_item],"Po��o de Defesa");//item que vai ser recebido
                        add_item++;
                    }
                    cont_item++;
                }
                while (add_item==0);
                cont_item=0;
                add_item=0;
            }
            if (armazenar==3)
            {
                vida_p-=20;
                printf("Ao destruir o Altar voc� levou 20 de dano, sua vida � de %.2f\n",vida_p);
                ataque_p+=1;
                defesa_p+=1;
                printf("Mas aumentou seu ataque e sua defesa em 1, sendo agora respectivamente: %.2f e %.2f\n",ataque_p,defesa_p);
            }
            if (vida_p<=0)
            {
                system("cls");
                printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                system("pause");
                system("cls");
                exit(0);
            }
            printf("\nSaindo do lugar onde voc� estava, voc� escuta um barulho estranho se aproximando, quando percebe um bando de orcs correndo pelo corredor v�o na sua dire��o ...\n");
            printf("\nA unica op��o a correr, ent�o voc� guarda sua espada e come�a a correr o mais r�pido poss�vel...\n");
            system("pause");
            system("cls");
            printf("\nPassa por diversas salas e objetos estranhos, virando nas curvas que encontra, at� chegar a uma pilha de corpos numa entrada estranha, e tem a chance de se esconder ali...\n");
            printf("\nVoc� n�o conseguiria correr mais, ent�o sem pensar entra passa pelas teias entra ali e entra na pilha tentando ficar im�vel, o bando passa por ali, o ch�o treme...\n");
            system("pause");
            system("cls");
            printf("\nQuando a �rea parece estar livre de inimigos voc� sai da pilha de corpos, por�m o local parecia o covil de uma aranha...\n");
            printf("\nEla desce do teto e cai entre voc� e a sa�da, ela parece diferente, bem maior que outras aranhas vai ser preciso tomar um cuidado extra . . .\n");

            ////////////////////LUTA CONTR ARANHA GIGANTE

            printf ("\n______________________________________________________________________________________________________________________________________________________________________\n");
            printf ("\n\t A aranha Aracne � uma aranha gigantesca, do tamanho do ser humano. Possui pernas fortiss�mas, de modo que possa saltar em seus alvos e cravar suas presas nele \n \t Ataque: Corpo a Corpo, Imobiliza��o  \n \t Dano:25 ATK   \n \t Vida: 18 HP");
            printf ("\n______________________________________________________________________________________________________________________________________________________________________\n");
            printf("\n\n*********************************************************************| COMBATE |*********************************************************************\n\n");
            luta=1;
            do
            {
                printf("\n|\t[1]Atacar(%.2f)\t|\t[2]Defender(%.2f + 2,00)\t|\t[3]Ataque Forte(%.2f)\t|\t[4]Mochila\t|\t\n",ataque_p,defesa_p,ataquef_p);
                scanf("%i",&op_luta);
                if (tempo_recarga!=0 && op_luta!=3)
                    tempo_recarga--;
                switch (op_luta)
                {
                case 1:
                    ataque_aranha=25;
                    printf("\nVoc� ataca o inimigo!\n");
                    vida_aranha=vida_aranha-ataque_p;
                    printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_p,vida_aranha);
                    vida_p=(vida_p-(ataque_aranha-defesa_p));
                    printf("\nVoce bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",defesa_p,(ataque_aranha-defesa_p),vida_p);
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case 2:
                    ataque_aranha=25;
                    printf("\nVoce se defende!\n");
                    vida_p=(vida_p-(ataque_aranha-(defesa_p+2)));
                    printf("\nVoc� bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",(defesa_p+2),(ataque_aranha-(defesa_p+2)),vida_p);
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case 3:
                    ataque_aranha=25;
                    if (tempo_recarga!=0)
                    {
                        printf("\nSeu ataque forte est� carregando...\n");
                    }
                    else if (tempo_recarga==0)
                    {
                        printf("\nVoc� usa seu ataque forte, causando dano extra por�m se deixando vulner�vel!\n");
                        vida_aranha=vida_aranha-ataquef_p;
                        printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida!\n",ataquef_p,vida_aranha);
                        vida_p=(vida_p-ataque_aranha);
                        printf("\nVoc� recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_aranha,vida_p);
                        tempo_recarga=tempo_recargamax;
                    }
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case 4:
                    item_escolha=0;
                    for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                        if (strcmp(mochila[cont_mochila],"Vazio")==0)
                            teste_mochila++;
                    if (teste_mochila==5)
                    {
                        printf("\nVoc� n�o possu� nenhum item!\n");
                        item_escolha++;
                        pre_teste=1;
                        //Voltar para escolha de a��o
                    }
                    if (pre_teste!=1)
                    {
                        do
                        {
                            do
                            {
                                printf("\nMOCHILA :\n");
                                for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                                    printf ("\t(%i)- %s\n",cont_mochila+1,mochila[cont_mochila]);
                                printf("\n (6)- Sair da Mochila!\n");
                                printf("\nSelecione algum item que deseja utilizar ...\n\n");
                                setbuf(stdin,NULL);
                                scanf("%c",&cont_mochila_char);
                                cont_mochila_char--;
                                if (cont_mochila_char=='0')
                                {
                                    cont_mochila=0;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='1')
                                {
                                    cont_mochila=1;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='2')
                                {
                                    cont_mochila=2;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='3')
                                {
                                    cont_mochila=3;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='4')
                                {
                                    cont_mochila=4;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='5')
                                {
                                    system("cls");
                                    printf("\nSaindo da mochila...\n");
                                    char_int++;
                                    item_escolha++;
                                    system("PAUSE");
                                }
                                else
                                {
                                    system("cls");
                                    printf("\nEscolha um item v�lido!\n");
                                    system("pause");
                                    system("cls");
                                }
                            }
                            while(char_int==0);
                            ////////////////////////////////////////////////////
                            if (strcmp(mochila[cont_mochila],"Vazio")==0)
                            {
                                system("cls");
                                printf("\nSlot selecionado est� vazio.\n");
                                system("pause");
                                system("cls");
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Vida Pequena")==0)
                            {
                                printf("\nPo��o de Vida Pequena utilizada, +30 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<30; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual � %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Vida M�dia")==0)
                            {
                                printf("\nPo��o de Vida M�dia utilizada, +50 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<50; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual � %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Vida Grande")==0)
                            {
                                printf("\nPo��o de Vida Grande utilizada, +70 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<70; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual � %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Recupera��o Completa")==0)
                            {
                                printf("\nPo��o de Recupera��o Completa utilizada, seu personagem est� com a vida m�xima agora...\n");
                                vida_p=vida_pmax;
                                printf("\nSua vida atual � %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Dano")==0)
                            {
                                printf("\nPo��o de Dano utilizada, seu personagem possu� +2 de dano em seus ataques normais at� o final da luta...\n");
                                cont_pot_dano++;
                                printf("\nSeu ataque era de %.2f e agora � %.2f .\n",ataque_p,ataque_p+2);
                                ataque_p+=2;
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Defesa")==0)
                            {
                                printf("\nPo��o de Defesa utilizada, seu personagem possu� +2 de defesa at� o final da luta ...\n");
                                cont_pot_defesa++;
                                printf("\nSua defesa era de %.2f agora � %.2f .\n",defesa_p,defesa_p+2);
                                defesa_p+=2;
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                        }
                        while (item_escolha==0);
                    }
                }
                if (vida_aranha<=0)
                {
                    system("cls");
                    printf("\n************************************************************\n");
                    printf("\nVoc� vence a batalha!\n");
                    printf("\n************************************************************\n");
                    system("pause");
                    system("cls");
                    luta=0;
                    vida_aranha=18;
                }
            }
            while(luta!=0);
            //////////////////////////////////////////////////
            while (cont_pot_dano>0)
            {
                cont_pot_dano--;
                ataque_p-=2;
            }
            while (cont_pot_defesa>0)
            {
                cont_pot_dano--;
                ataque_p-=2;
            }
            //////////////////////////////////////////////////
            printf("\n\nSua vida atual � %.2f, seu ataque � %.2f e sua defesa � %.2f .\n\n",vida_p,ataque_p,defesa_p);
            system("pause");
            system("cls");
            defesa_p+=2;
            printf("A luta contra a Aranha Gigante dropou o Peitoral de Mithril, que aumentou sua defesa em 2, sua defesa agora � de %.2f\n",defesa_p);
            system("pause");
            system("cls");

            printf("\nAinda meio tonto, voc� sai do covil da aranha e segue para uma escadaria de pedregulhos que leva para baixo...\n");
            printf("\nAo final do corredor que voc� se esncontra existe um outro altar, esse parece diferente dos outros... existem escritas nele e em volta, por�m voc� n�o as entende...\n");
            printf("\nExistem dois buracos, que s�o poss�veis de colocar a m�o . . .\n");
            printf("\n\t (1)- Colocar a m�o no esquerdo! \t (2)- Colocar a m�o no direito! \t (3)- Colocar em ambos! \t (4)- Seguir teu caminho!\n");
            armadilha4='1';
            do
            {
                setbuf(stdin,NULL);
                scanf("%c",&armadilha3);
                switch(armadilha3)
                {
                case '1':
                    armazenar=1;
                    armadilha4='0';
                    break;
                case '2':
                    armazenar=2;
                    armadilha4='0';
                    break;
                case '3':
                    armazenar=3;
                    armadilha4='0';
                    break;
                case '4':
                    armadilha4='0';
                    break;
                default:
                    printf("Op��o inv�lida\n");
                    if (armadilha3=='0')
                        armadilha4='1';
                }
            }
            while(armadilha4!='0');
            if (armazenar==1)
            {
                printf("Voc� encontrou uma Po��o de Vida Pequena!!\n");
                do
                {
                    if (cont_item>=5)
                    {
                        printf("\nTodos os espa�os da mochila est�o cheios!\n");
                        add_item++;
                    }
                    else if (strcmp(mochila[cont_item],"Vazio")==0)
                    {
                        strcpy(mochila[cont_item],"Po��o de Vida Pequena");//item que vai ser recebido
                        add_item++;
                    }
                    cont_item++;
                }
                while (add_item==0);
                cont_item=0;
                add_item=0;

            }
            if (armazenar==2)
            {
                printf("Voc� encontrou uma Po��o de Defesa!!\n");
                do
                {
                    if (cont_item>=5)
                    {
                        printf("\nTodos os espa�os da mochila est�o cheios!\n");
                        add_item++;
                    }
                    else if (strcmp(mochila[cont_item],"Vazio")==0)
                    {
                        strcpy(mochila[cont_item],"Po��o de Defesa");//item que vai ser recebido
                        add_item++;
                    }
                    cont_item++;
                }
                while (add_item==0);
                cont_item=0;
                add_item=0;
            }
            if (armazenar==3)
            {
                printf("Colocando a m�o nos 2, o Altar se quebrou e voc� levou 20 de dano!!\n");
                vida_p-=20;
                printf("Sua vida atual � de %.2f",vida_p);
            }
            if (vida_p<=0)
            {
                system("cls");
                printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                system("pause");
                system("cls");
                exit(0);
            }
            printf("\n... Ap�s mais um per�odo de caminhada voc� se depara com uma porta de madeira em seu caminho...\n");
            system("pause");
            printf("\nVoc� olha pelo buraco da fechadura e v� um orc dentro da sala, mas tamb�m alguns livros em cima de uma mesa que te chamam a aten��o, eles podem te ajudar nessa jornada ...\n");
            printf("\nEnt�o voc� empunha sua arma, e chuta com tudo a porta, e avn�a em dire��o ao orc . . .\n");
            system("pause");
            system("cls");
            ////////////////luta com orc

            printf ("\n______________________________________________________________________________________________________________________________________________________________________\n");
            printf ("\n \t Descri��o: Orc � uma criatura com mais de 2,3 metros de altura, verdadeiros arm�rios, com bra�os e pernas musculosos e gigantescos. Estes n�o pensam, apenas atacam como feras\n         Possuem machados do tamanho de troncos pequenos de �rvores,e, apesar de n�o pensarem, possuem reflexos e for�a sobrehumanos");
            printf ("\n\t Arma: Machado \n \t Dano: 40 ATK \n \t Vida: 70 HP");
            printf ("\n______________________________________________________________________________________________________________________________________________________________________\n");
            printf("\n\n*********************************************************************| COMBATE |*********************************************************************\n\n");
            luta=1;
            do
            {
                printf("\n|\t[1]Atacar(%.2f)\t|\t[2]Defender(%.2f + 2,00)\t|\t[3]Ataque Forte(%.2f)\t|\t[4]Mochila\t|\t\n",ataque_p,defesa_p,ataquef_p);
                scanf("%i",&op_luta);
                if (tempo_recarga!=0 && op_luta!=3)
                    tempo_recarga--;
                switch (op_luta)
                {
                case 1:
                    ataque_orc=40;
                    printf("\nVoc� ataca o inimigo!\n");
                    vida_orc=vida_orc-ataque_p;
                    printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_p,vida_orc);
                    vida_p=(vida_p-(ataque_orc-defesa_p));
                    printf("\nVoce bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",defesa_p,(ataque_orc-defesa_p),vida_p);
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case 2:
                    ataque_orc=40;
                    printf("\nVoce se defende!\n");
                    vida_p=(vida_p-(ataque_orc-(defesa_p+2)));
                    printf("\nVoc� bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",(defesa_p+2),(ataque_orc-(defesa_p+2)),vida_p);
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case 3:
                    ataque_orc=40;
                    if (tempo_recarga!=0)
                    {
                        printf("\nSeu ataque forte est� carregando...\n");
                    }
                    else if (tempo_recarga==0)
                    {
                        printf("\nVoc� usa seu ataque forte, causando dano extra por�m se deixando vulner�vel!\n");
                        vida_orc=vida_orc-ataquef_p;
                        printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida!\n",ataquef_p,vida_orc);
                        vida_p=(vida_p-ataque_orc);
                        printf("\nVoc� recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_orc,vida_p);
                        tempo_recarga=tempo_recargamax;
                    }
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case 4:
                    item_escolha=0;
                    for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                        if (strcmp(mochila[cont_mochila],"Vazio")==0)
                            teste_mochila++;
                    if (teste_mochila==5)
                    {
                        printf("\nVoc� n�o possu� nenhum item!\n");
                        item_escolha++;
                        pre_teste=1;
                        //Voltar para escolha de a��o
                    }
                    if (pre_teste!=1)
                    {
                        do
                        {
                            do
                            {
                                printf("\nMOCHILA :\n");
                                for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                                    printf ("\t(%i)- %s\n",cont_mochila+1,mochila[cont_mochila]);
                                printf("\n (6)- Sair da Mochila!\n");
                                printf("\nSelecione algum item que deseja utilizar ...\n\n");
                                setbuf(stdin,NULL);
                                scanf("%c",&cont_mochila_char);
                                cont_mochila_char--;
                                if (cont_mochila_char=='0')
                                {
                                    cont_mochila=0;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='1')
                                {
                                    cont_mochila=1;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='2')
                                {
                                    cont_mochila=2;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='3')
                                {
                                    cont_mochila=3;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='4')
                                {
                                    cont_mochila=4;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='5')
                                {
                                    system("cls");
                                    printf("\nSaindo da mochila...\n");
                                    char_int++;
                                    item_escolha++;
                                    system("PAUSE");
                                }
                                else
                                {
                                    system("cls");
                                    printf("\nEscolha um item v�lido!\n");
                                    system("pause");
                                    system("cls");
                                }
                            }
                            while(char_int==0);
                            ////////////////////////////////////////////////////
                            if (strcmp(mochila[cont_mochila],"Vazio")==0)
                            {
                                system("cls");
                                printf("\nSlot selecionado est� vazio.\n");
                                system("pause");
                                system("cls");
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Vida Pequena")==0)
                            {
                                printf("\nPo��o de Vida Pequena utilizada, +30 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<30; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual � %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Vida M�dia")==0)
                            {
                                printf("\nPo��o de Vida M�dia utilizada, +50 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<50; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual � %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Vida Grande")==0)
                            {
                                printf("\nPo��o de Vida Grande utilizada, +70 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<70; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual � %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Recupera��o Completa")==0)
                            {
                                printf("\nPo��o de Recupera��o Completa utilizada, seu personagem est� com a vida m�xima agora...\n");
                                vida_p=vida_pmax;
                                printf("\nSua vida atual � %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Dano")==0)
                            {
                                printf("\nPo��o de Dano utilizada, seu personagem possu� +2 de dano em seus ataques normais at� o final da luta...\n");
                                cont_pot_dano++;
                                printf("\nSeu ataque era de %.2f e agora � %.2f .\n",ataque_p,ataque_p+2);
                                ataque_p+=2;
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Defesa")==0)
                            {
                                printf("\nPo��o de Defesa utilizada, seu personagem possu� +2 de defesa at� o final da luta ...\n");
                                cont_pot_defesa++;
                                printf("\nSua defesa era de %.2f agora � %.2f .\n",defesa_p,defesa_p+2);
                                defesa_p+=2;
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                        }
                        while (item_escolha==0);
                    }
                }
                if (vida_orc<=0)
                {
                    system("cls");
                    printf("\n************************************************************\n");
                    printf("\nVoc� vence a batalha!\n");
                    printf("\n************************************************************\n");
                    system("pause");
                    system("cls");
                    luta=0;
                    vida_orc=70;
                }
            }
            while(luta!=0);
            //////////////////////////////////////////////////
            while (cont_pot_dano>0)
            {
                cont_pot_dano--;
                ataque_p-=2;
            }
            while (cont_pot_defesa>0)
            {
                cont_pot_dano--;
                ataque_p-=2;
            }
            //////////////////////////////////////////////////
            printf("\n\nSua vida atual � %.2f, seu ataque � %.2f e sua defesa � %.2f .\n\n",vida_p,ataque_p,defesa_p);
            system("pause");
            system("cls");
            printf("\nCom o orc derrotado voc� consegue ler os livros em seguran�a...\n");
            system("pause");
            printf("\nNeles vo� encontra anota��es sobre seu amuleto, o que te trouxe a Cripta, ele � uma esp�cie de chave, que da a dire��o a ela...\n");
            printf("\nEnt�o voc� se recorda de seu mestre, Hiroko, que lhe entregou esse amuleto quando se formou um guerreiro a muito tempo atr�s... ent�o retoma um pouco de confian�a e segue seu caminho...\n");
            printf("\n� percept�vel que o objetivo final est� pr�ximo, ent�o voc� tenta se manter firme para o que vier...\n");
            system("pause");
            system("cls");
            printf("\nFinalmente voc� chega a uma grande abertura onde um port�o com grades de ferro est� levantado, quando voc� passa por ele, eles se fecham...\n");
            system("pause");
            printf("\nAdentrando esse local escuro, voc� perde no��o de tempo, de tato, de audi��o...\n");
            printf("\nUm urro o surpreende e ecoa em toda sua mente, como se algu�m gritasse dentro de sua cabe�a... voc� cai no ch�o, mas rapidamente se levanta...\n");
            printf("\nEncontra uma pequena abertura que a luz conseguia passar, ent�o � uma boa oportunidade de usar sua mochila antes de continuar...\n");
            printf("\n\t (1)- Usar mochila! \t (2)- N�o usar!\n");
            armadilha4='1';
            do
            {
                setbuf(stdin,NULL);
                scanf("%c",&armadilha3);
                switch(armadilha3)
                {
                case '1':
                    armazenar=1;
                    armadilha4='0';
                    break;
                case '2':
                    armazenar=2;
                    armadilha4='0';
                    break;
                default:
                    printf("Op��o inv�lida\n");
                    if (armadilha3=='0')
                        armadilha4='1';
                }
            }
            while(armadilha4!='0');
            if (armazenar==1)
            {
                item_escolha=0;
                for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                    if (strcmp(mochila[cont_mochila],"Vazio")==0)
                        teste_mochila++;
                if (teste_mochila==5)
                {
                    printf("\nVoc� n�o possu� nenhum item!\n");
                    item_escolha++;
                    pre_teste=1;
                    //Voltar para escolha de a��o
                }
                if (pre_teste!=1)
                {
                    do
                    {
                        do
                        {
                            printf("\nMOCHILA :\n");
                            for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                                printf ("\t(%i)- %s\n",cont_mochila+1,mochila[cont_mochila]);
                            printf("\n (6)- Sair da Mochila!\n");
                            printf("\nSelecione algum item que deseja utilizar ...\n\n");
                            setbuf(stdin,NULL);
                            scanf("%c",&cont_mochila_char);
                            cont_mochila_char--;
                            if (cont_mochila_char=='0')
                            {
                                cont_mochila=0;
                                char_int++;
                            }
                            else if (cont_mochila_char=='1')
                            {
                                cont_mochila=1;
                                char_int++;
                            }
                            else if (cont_mochila_char=='2')
                            {
                                cont_mochila=2;
                                char_int++;
                            }
                            else if (cont_mochila_char=='3')
                            {
                                cont_mochila=3;
                                char_int++;
                            }
                            else if (cont_mochila_char=='4')
                            {
                                cont_mochila=4;
                                char_int++;
                            }
                            else if (cont_mochila_char=='5')
                            {
                                system("cls");
                                printf("\nSaindo da mochila...\n");
                                char_int++;
                                item_escolha++;
                                system("PAUSE");
                            }
                            else
                            {
                                system("cls");
                                printf("\nEscolha um item v�lido!\n");
                                system("pause");
                                system("cls");
                            }
                        }
                        while(char_int==0);
                        ////////////////////////////////////////////////////
                        if (strcmp(mochila[cont_mochila],"Vazio")==0)
                        {
                            system("cls");
                            printf("\nSlot selecionado est� vazio.\n");
                            system("pause");
                            system("cls");
                        }
                        else if (strcmp(mochila[cont_mochila],"Po��o de Vida Pequena")==0)
                        {
                            printf("\nPo��o de Vida Pequena utilizada, +30 de vida ...\n");
                            for (cont_mochila2=0; cont_mochila2<30; cont_mochila2++)
                                if (vida_p<vida_pmax)
                                    vida_p++;
                            printf("\nSua vida atual � %.2f .\n",vida_p);
                            strcpy(mochila[cont_mochila],"Vazio");
                            item_escolha++;
                        }
                        else if (strcmp(mochila[cont_mochila],"Po��o de Vida M�dia")==0)
                        {
                            printf("\nPo��o de Vida M�dia utilizada, +50 de vida ...\n");
                            for (cont_mochila2=0; cont_mochila2<50; cont_mochila2++)
                                if (vida_p<vida_pmax)
                                    vida_p++;
                            printf("\nSua vida atual � %.2f .\n",vida_p);
                            strcpy(mochila[cont_mochila],"Vazio");
                            item_escolha++;
                        }
                        else if (strcmp(mochila[cont_mochila],"Po��o de Vida Grande")==0)
                        {
                            printf("\nPo��o de Vida Grande utilizada, +70 de vida ...\n");
                            for (cont_mochila2=0; cont_mochila2<70; cont_mochila2++)
                                if (vida_p<vida_pmax)
                                    vida_p++;
                            printf("\nSua vida atual � %.2f .\n",vida_p);
                            strcpy(mochila[cont_mochila],"Vazio");
                            item_escolha++;
                        }
                        else if (strcmp(mochila[cont_mochila],"Po��o de Recupera��o Completa")==0)
                        {
                            printf("\nPo��o de Recupera��o Completa utilizada, seu personagem est� com a vida m�xima agora...\n");
                            vida_p=vida_pmax;
                            printf("\nSua vida atual � %.2f .\n",vida_p);
                            strcpy(mochila[cont_mochila],"Vazio");
                            item_escolha++;
                        }
                        else if (strcmp(mochila[cont_mochila],"Po��o de Dano")==0)
                        {
                            printf("\nPo��o de Dano utilizada, seu personagem possu� +2 de dano em seus ataques normais at� o final da luta...\n");
                            cont_pot_dano++;
                            printf("\nSeu ataque era de %.2f e agora � %.2f .\n",ataque_p,ataque_p+2);
                            ataque_p+=2;
                            strcpy(mochila[cont_mochila],"Vazio");
                            item_escolha++;
                        }
                        else if (strcmp(mochila[cont_mochila],"Po��o de Defesa")==0)
                        {
                            printf("\nPo��o de Defesa utilizada, seu personagem possu� +2 de defesa at� o final da luta ...\n");
                            cont_pot_defesa++;
                            printf("\nSua defesa era de %.2f agora � %.2f .\n",defesa_p,defesa_p+2);
                            defesa_p+=2;
                            strcpy(mochila[cont_mochila],"Vazio");
                            item_escolha++;
                        }
                    }
                    while (item_escolha==0);
                }
            }

            printf("\nContinuando a caminha sem saber por quanto tempo, voc� encontra uma descida e uma luz diferente ao final dela, ent�o voc� respira fundo e segue para o seu destino final . . .\n");
            //////////////////////////////////////////////////////////////////////////////////////////////fim capitulo 3****
            system("color 40");
            printf("\nChegando no fim da Cripta, voc� se depara com um gigante que estava aguardando na sa�da, e a �nica maneira de passar por ele � derrotando-o.\n");
            printf("\nCap�tulo Final : O Confronto com seu objetivo final!!!\n");
            printf("\n*************************************************************| ? ? ? |*************************************************************\n");
            printf("\nSem saber o que esperar do que est� por vir, voc� pensa que vai poder finalmente sair desse lugar assim que acabar, que todo o sofrimento vai ter fim...\n");
            printf("\nVoc� n�o se sente mais tanto um her�i da hist�ria mas sim uma pessoa infortuna...\n");
            system("pause");
            printf("\nSua cabe�a come�a a embaralhar e voc� tem a sensa��o de dejavu, como se ja tivesse estado ali antes . . .\n");
            system("pause");
            system("cls");
            printf("\nMas voc� vai ao final disso, ent�o no final da escada, voc� caminha pelo corredor que aumenta... chegando a uma enorme abertura onde voc� avista um mostro gigante e deformado no que parece ser um enorme fo�o...\n");
            printf("\nVoc� tenta focar sua mente que parece quebrada e parte para o confronto . . .\n");
            system("pause");
            system("cls");
            printf("\n\n*******************************************************************| O GUARDI�O |*******************************************************************\n\n");
            printf("\nO guardi�o se levanta e ruge ...\n");
            printf("\n -O que veio fazer aqui?\n");
            printf("\nVoc� sente um calafrio e responde :\n");
            printf("\n -Vim acabar com isso!\n");
            printf("\nO guardi�o ri.....\n");
            printf("\n- Hahahahah.... Acha que pode me derrotar? Voc� sabe muito bem o que vai acontecer, isso nunca vai acabar... Esse lugar � amaldi�oado, eu sou amaldi�oado... voc� � amaldi�oado . . . \n");
            printf("\nPor final, voc� responde e parte pra cima...\n");
            printf("\n -S� sei que tenho que tentar... eu n�o vou desistir!\n");
            luta=1;
            do
            {
                printf("\n|\t[1]Atacar(%.2f)\t|\t[2]Defender(%.2f + 2,00)\t|\t[3]Ataque Forte(%.2f)\t|\t[4]Mochila\t|\t\n",ataque_p,defesa_p,ataquef_p);
                scanf("%i",&op_luta);
                if (tempo_recarga!=0 && op_luta!=3)
                    tempo_recarga--;
                switch (op_luta)
                {
                case 1:
                    ataque_boss=35;
                    printf("\nVoc� ataca o inimigo!\n");
                    vida_boss=vida_boss-ataque_p;
                    printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_p,vida_boss);
                    vida_p-=(ataque_boss-defesa_p);
                    printf("\nVoce bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",defesa_p,ataque_boss-defesa_p,vida_p);
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case 2:
                    ataque_boss=35;

                    printf("\nVoce se defende!\n");
                    vida_p=(vida_p-(ataque_boss-(defesa_p+2)));
                    printf("\nVoc� bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",(defesa_p+2),(ataque_boss-(defesa_p+2)),vida_p);
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case 3:

                    ataque_boss=35;
                    if (tempo_recarga!=0)
                    {
                        printf("\nSeu ataque forte est� carregando...\n");
                    }
                    else if (tempo_recarga==0)
                    {
                        printf("\nVoc� usa seu ataque forte, causando dano extra por�m se deixando vulner�vel!\n");
                        vida_boss=vida_boss-ataquef_p;
                        printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida!\n",ataquef_p,vida_boss);
                        vida_p=(vida_p-ataque_boss);
                        printf("\nVoc� recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_boss,vida_p);
                        tempo_recarga=tempo_recargamax;
                    }
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case 4:
                    item_escolha=0;
                    for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                        if (strcmp(mochila[cont_mochila],"Vazio")==0)
                            teste_mochila++;
                    if (teste_mochila==5)
                    {
                        printf("\nVoc� n�o possu� nenhum item!\n");
                        item_escolha++;
                        pre_teste=1;
                        //Voltar para escolha de a��o
                    }
                    if (pre_teste!=1)
                    {
                        do
                        {
                            do
                            {
                                printf("\nMOCHILA :\n");
                                for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                                    printf ("\t(%i)- %s\n",cont_mochila+1,mochila[cont_mochila]);
                                printf("\n (6)- Sair da Mochila!\n");
                                printf("\nSelecione algum item que deseja utilizar ...\n\n");
                                setbuf(stdin,NULL);
                                scanf("%c",&cont_mochila_char);
                                cont_mochila_char--;
                                if (cont_mochila_char=='0')
                                {
                                    cont_mochila=0;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='1')
                                {
                                    cont_mochila=1;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='2')
                                {
                                    cont_mochila=2;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='3')
                                {
                                    cont_mochila=3;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='4')
                                {
                                    cont_mochila=4;
                                    char_int++;
                                }
                                else if (cont_mochila_char=='5')
                                {
                                    system("cls");
                                    printf("\nSaindo da mochila...\n");
                                    char_int++;
                                    item_escolha++;
                                    system("PAUSE");
                                }
                                else
                                {
                                    system("cls");
                                    printf("\nEscolha um item v�lido!\n");
                                    system("pause");
                                    system("cls");
                                }
                            }
                            while(char_int==0);
                            ////////////////////////////////////////////////////
                            if (strcmp(mochila[cont_mochila],"Vazio")==0)
                            {
                                system("cls");
                                printf("\nSlot selecionado est� vazio.\n");
                                system("pause");
                                system("cls");
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Vida Pequena")==0)
                            {
                                printf("\nPo��o de Vida Pequena utilizada, +30 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<30; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual � %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Vida M�dia")==0)
                            {
                                printf("\nPo��o de Vida M�dia utilizada, +50 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<50; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual � %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Vida Grande")==0)
                            {
                                printf("\nPo��o de Vida Grande utilizada, +70 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<70; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual � %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Recupera��o Completa")==0)
                            {
                                printf("\nPo��o de Recupera��o Completa utilizada, seu personagem est� com a vida m�xima agora...\n");
                                vida_p=vida_pmax;
                                printf("\nSua vida atual � %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Dano")==0)
                            {
                                printf("\nPo��o de Dano utilizada, seu personagem possu� +2 de dano em seus ataques normais at� o final da luta...\n");
                                cont_pot_dano++;
                                printf("\nSeu ataque era de %.2f e agora � %.2f .\n",ataque_p,ataque_p+2);
                                ataque_p+=2;
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Po��o de Defesa")==0)
                            {
                                printf("\nPo��o de Defesa utilizada, seu personagem possu� +2 de defesa at� o final da luta ...\n");
                                cont_pot_defesa++;
                                printf("\nSua defesa era de %.2f agora � %.2f .\n",defesa_p,defesa_p+2);
                                defesa_p+=2;
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                        }
                        while (item_escolha==0);
                    }
                }
                if (vida_boss<=250)
                {
                    system("cls");
                    printf("\n************************************************************\n");
                    printf("\nAgora a vida do BOSS � de %.2f!\n",vida_boss);
                    printf("\n************************************************************\n");
                    system("pause");
                    system("cls");
                    luta=0;
                }
            }
            while(luta!=0);
            //////////////////////////////////////////////////
            while (cont_pot_dano>0)
            {
                cont_pot_dano--;
                ataque_p-=2;
            }
            while (cont_pot_defesa>0)
            {
                cont_pot_dano--;
                ataque_p-=2;
            }
            //////////////////////////////////////////////////
            printf("\n\nSua vida atual � %.2f, seu ataque � %.2f e sua defesa � %.2f .\n\n",vida_p,ataque_p,defesa_p);
            system("pause");
            system("cls");
////////////////////////////////////////////////////////////
            if (vida_boss<=250)
            {
                printf("Ele nao recebe mais dano facilmente, pois conseguiu uma defesa implac�vel, ela s� vai conseguir ser destru�da se voc� correr para atr�s daquela pedra a esquerda, cont�m um item m�gico destruidor de defesas.\n");
                printf("Correndo at� l� voc� n�o consegue atacar, conseguir� apenas desviar\n");
                printf("*****************************************************************************************************************************\n");
                printf("A� vem um ataque por cima!!!\n");
                printf("[1]Desviar para esquerda                  [2]Continuar correndo, mas com mais velocidade               [3]Desviar para direita\n");
                do
                {
                    scanf(" %c",&menuboss);
                    switch(menuboss)
                    {
                    case '1':
                        printf("Voc� conseguiu desviar do ataque do BOSS, continue correndo!!!\n");
                        interativo=0;
                        break;
                    case '2':
                        printf("O BOSS te atingiu e voc� levou %.2f de dano\n",ataque_boss-defesa_p);
                        vida_p-=(ataque_boss-defesa_p);
                        printf("Sua vida � de %.2f",vida_p);
                        interativo=0;
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    case '3':
                        printf("Voc� conseguiu desviar do ataque do BOSS, continue correndo!!!\n");
                        interativo=0;
                        break;
                    default:
                        printf("Op��o Inv�lida\n");
                    }
                    if (menuboss=='0')
                        interativo=1;
                }
                while(interativo!=0);
                /////////////////////////////////////////////////////////////////
                printf("\nUm momento para respirar, deseja usar a mochila?\n");
                printf("\n\t (1)- Sim! \t (2)- N�o!\n");
                do
                {
                    setbuf(stdin,NULL);
                    scanf("%c",&mochilavariavel);
                    switch(mochilavariavel)
                    {
                    case '1':
                        item_escolha=0;
                        for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                            if (strcmp(mochila[cont_mochila],"Vazio")==0)
                                teste_mochila++;
                        if (teste_mochila==5)
                        {
                            printf("\nVoc� n�o possu� nenhum item!\n");
                            item_escolha++;
                            pre_teste=1;
                            //Voltar para escolha de a��o
                        }
                        if (pre_teste!=1)
                        {
                            do
                            {
                                do
                                {
                                    printf("\nMOCHILA :\n");
                                    for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                                        printf ("\t(%i)- %s\n",cont_mochila+1,mochila[cont_mochila]);
                                    printf("\n (6)- Sair da Mochila!\n");
                                    printf("\nSelecione algum item que deseja utilizar ...\n\n");
                                    setbuf(stdin,NULL);
                                    scanf("%c",&cont_mochila_char);
                                    cont_mochila_char--;
                                    if (cont_mochila_char=='0')
                                    {
                                        cont_mochila=0;
                                        char_int++;
                                    }
                                    else if (cont_mochila_char=='1')
                                    {
                                        cont_mochila=1;
                                        char_int++;
                                    }
                                    else if (cont_mochila_char=='2')
                                    {
                                        cont_mochila=2;
                                        char_int++;
                                    }
                                    else if (cont_mochila_char=='3')
                                    {
                                        cont_mochila=3;
                                        char_int++;
                                    }
                                    else if (cont_mochila_char=='4')
                                    {
                                        cont_mochila=4;
                                        char_int++;
                                    }
                                    else if (cont_mochila_char=='5')
                                    {
                                        system("cls");
                                        printf("\nSaindo da mochila...\n");
                                        char_int++;
                                        item_escolha++;
                                        system("PAUSE");
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("\nEscolha um item v�lido!\n");
                                        system("pause");
                                        system("cls");
                                    }
                                }
                                while(char_int==0);
                                ////////////////////////////////////////////////////
                                if (strcmp(mochila[cont_mochila],"Vazio")==0)
                                {
                                    system("cls");
                                    printf("\nSlot selecionado est� vazio.\n");
                                    system("pause");
                                    system("cls");
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Vida Pequena")==0)
                                {
                                    printf("\nPo��o de Vida Pequena utilizada, +30 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<30; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual � %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Vida M�dia")==0)
                                {
                                    printf("\nPo��o de Vida M�dia utilizada, +50 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<50; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual � %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Vida Grande")==0)
                                {
                                    printf("\nPo��o de Vida Grande utilizada, +70 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<70; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual � %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Recupera��o Completa")==0)
                                {
                                    printf("\nPo��o de Recupera��o Completa utilizada, seu personagem est� com a vida m�xima agora...\n");
                                    vida_p=vida_pmax;
                                    printf("\nSua vida atual � %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Dano")==0)
                                {
                                    printf("\nPo��o de Dano utilizada, seu personagem possu� +2 de dano em seus ataques normais at� o final da luta...\n");
                                    cont_pot_dano++;
                                    printf("\nSeu ataque era de %.2f e agora � %.2f .\n",ataque_p,ataque_p+2);
                                    ataque_p+=2;
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Po��o de Defesa")==0)
                                {
                                    printf("\nPo��o de Defesa utilizada, seu personagem possu� +2 de defesa at� o final da luta ...\n");
                                    cont_pot_defesa++;
                                    printf("\nSua defesa era de %.2f agora � %.2f .\n",defesa_p,defesa_p+2);
                                    defesa_p+=2;
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                            }
                            while (item_escolha==0);
                        }
                        mochilavariavel1='0';
                        break;
                    case '2':
                        system("pause");
                        system("cls");
                        mochilavariavel1='0';
                        break;
                    default:
                        printf("Op��o inv�lida!\n");
                    }
                }
                while(mochilavariavel1!='0');
                ////////////////////////////////////////////////////////////
                printf("A� vem um ataque lateral!!!\n");
                printf("[1]Desviar para esquerda                  [2]Pular e continuar correndo             [3]Desviar para direita\n");
                do
                {
                    scanf(" %c",&menuboss);
                    switch(menuboss)
                    {
                    case '1':
                        printf("Era um ataque lateral, fez uma escolha errada e levou %.2f de dano!!!\n",ataque_boss-defesa_p);
                        vida_p-=(ataque_boss-defesa_p);
                        printf("Sua vida � de %.2f",vida_p);
                        interativo=0;
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    case '2':
                        printf("Escolha certa!!! Pulou a m�o do BOSS e continuou em frente.\n");
                        interativo=0;;
                        break;
                    case '3':
                        printf("Era um ataque lateral, fez uma escolha errada e levou %.2f de dano!!!\n",ataque_boss-defesa_p);
                        vida_p-=(ataque_boss-defesa_p);
                        printf("Sua vida � de %.2f",vida_p);
                        interativo=0;
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    default:
                        printf("Op��o Inv�lida\n");
                    }
                    if (menuboss=='0')
                        interativo=1;
                }
                while(interativo!=0);
            }
            system("pause");
            system("cls");
            printf("*****************************************************************************************************************************\n");
            printf("Voc� encontrou o item m�gico destruidor de defesas implac�veis, ative ele para consegui destruir a prote��o do BOSS e conseguir atac�-lo\n");
            do
            {
                printf("[1]Utilizar o item m�gico\n");
                scanf(" %c",&menuboss);
                switch(menuboss)
                {
                case '1':
                    printf("A prote��o do BOSS foi destru�da!!!Mas nao por completo...\n");
                    interativo=0;
                    break;
                default:
                    printf("Op��o Inv�lida\n");
                }
                if (menuboss=='0')
                    interativo=1;
            }
            while(interativo!=0);


            system("pause");
            system("cls");
            printf("*****************************************************************************************************************************\n");
            printf("Agora que o BOSS est� com quase a mesma defesa de o pr�ncipio, a batalha contra ele continua, mas dessa vez com uma mec�nica diferente...\n");
            printf("O BOSS est� com partes fracas espalhadas pelo corpo, e algumas de suas partes s�o invulner�veis, boa sorte encontrando-as!!\n");
            system("pause");
            system("cls");
            printf("*****************************************************************************************************************************\n");
            printf("[1]Atacar o p� do BOSS                  [2]Atacar o joelho do BOSS             [3]Atacar a canela do BOSS\n");
            do
            {
                scanf(" %c",&menuboss);
                switch(menuboss)
                {
                case '1':
                    printf("O p� dele � invulner�vel!! E ele acabou te dando um chute certeiro que te deu %.2f de dano.\n",ataque_boss-defesa_p);
                    vida_p-=(ataque_boss-defesa_p);
                    printf("Sua vida � de %.2f",vida_p);
                    interativo=0;
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case '2':
                    printf("Escolha certa!!! O BOSS sofreu dano, provavelmente � uma de suas partes fracas!!\n");
                    interativo=0;
                    break;
                case '3':
                    printf("A canela dele � invulner�vel!! E ele acabou te dando um chute certeiro que te deu %.2f de dano.\n",ataque_boss-defesa_p);
                    vida_p-=(ataque_boss-defesa_p);
                    printf("Sua vida � de %.2f",vida_p);
                    interativo=0;
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                default:
                    printf("Op��o Inv�lida\n");
                }
                if (menuboss=='0')
                    interativo=1;

            }
            while(interativo!=0);

            system("pause");
            system("cls");
            printf("*****************************************************************************************************************************\n");
            printf("[1]Atacar o p� do BOSS                  [2]Atacar o joelho do BOSS             [3]Atacar a canela do BOSS\n");
            do
            {
                scanf(" %c",&menuboss);
                switch(menuboss)
                {
                case '1':
                    printf("O p� dele � invulner�vel!! E ele acabou te dando um chute certeiro que te deu %.2f de dano.\n",ataque_boss-defesa_p);
                    vida_p-=(ataque_boss-defesa_p);
                    printf("Sua vida � de %.2f",vida_p);
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case '2':
                    printf("Escolha certa!!! O BOSS sofreu dano e caiu!!\n");

                    break;
                case '3':
                    printf("A canela dele � invulner�vel!! E ele acabou te dando um chute certeiro que te deu %.2f de dano.\n",ataque_boss-defesa_p);
                    vida_p-=(ataque_boss-defesa_p);
                    printf("Sua vida � de %.2f",vida_p);
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVoc� pereceu para a Cripta...boa sorte na pr�xima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                default:
                    printf("Op��o Inv�lida\n");
                }
                if (menuboss=='0')
                    interativo=1;
                if (menuboss=='1')
                {
                    system("pause");
                    system("cls");
                    printf("*****************************************************************************************************************************\n");

                    printf("-HAHAHAHA,voc� jamais encontrar� minha parte fraca!! Disse o BOSS\n");
                    printf("As partes invulner�veis se tornaram imposs�veis de serem atacadas\n");
                    printf("[1]Ataque o Joelho!\n");
                    do
                    {
                        scanf(" %c",&menuboss2);
                        switch(menuboss2)
                        {
                        case '1':
                            printf("Escolha certa!!! O BOSS sofreu dano e caiu!!\n");
                            interativo2=0;
                            break;
                        default:
                            printf("Op��o Inv�lida\n");
                        }
                        if (menuboss2=='1')
                        {
                            system("pause");
                            system("cls");
                            printf("*****************************************************************************************************************************\n");
                            printf("O BOSS est� de joelhos e voc� tem mais partes fracas para atacar!!!\n");
                            printf("[1]Olhos                       [2]Pesco�o\n");

                            do
                            {
                                scanf(" %c",&menuboss3);
                                switch(menuboss3)
                                {
                                case '1':
                                    printf("Ele levou muito dano por ser sua parte fraca, mas levantou e segue firme ao combate!!\n");
                                    interativo3=0;
                                    interativo=0;
                                    break;
                                case '2':
                                    printf("Ele levou muito dano por ser sua parte fraca, mas levantou e seguiu firme ao combate!!\n");
                                    interativo3=0;
                                    interativo=0;
                                    break;
                                default:
                                    printf("Op��o Inv�lida\n");
                                }
                            }
                            while(interativo3!=0);

                            if (menuboss=='0')
                                interativo=1;
                        }
                    }
                    while(interativo2!=0);
                }

                if (menuboss=='0')
                    interativo=1;

                if (menuboss=='2')
                {
                    system("pause");
                    system("cls");
                    printf("*****************************************************************************************************************************\n");
                    printf("O BOSS est� de joelhos e voc� tem mais partes fracas para atacar!!!\n");
                    printf("[1]Olhos                       [2]Pesco�o\n");

                    do
                    {
                        scanf(" %c",&menuboss2);
                        switch(menuboss2)
                        {
                        case '1':
                            printf("Ele levou muito dano por ser sua parte fraca, mas levantou e segue firme ao combate!!\n");
                            interativo2=0;
                            interativo=0;
                            break;
                        case '2':
                            printf("Ele levou muito dano por ser sua parte fraca, mas levantou e seguiu firme ao combate!!\n");
                            interativo2=0;
                            interativo=0;
                            break;
                        default:
                            printf("Op��o Inv�lida\n");
                        }
                    }
                    while(interativo2!=0);

                    if (menuboss=='0')
                        interativo=1;
                }
                if (menuboss=='3')
                {
                    system("pause");
                    system("cls");
                    printf("*****************************************************************************************************************************\n");

                    printf("-HAHAHAHA,voc� jamais encontrar� minha parte fraca!! Disse o BOSS\n");
                    printf("As partes invulner�veis se tornaram imposs�veis de serem atacadas\n");
                    printf("[1]Ataque o Joelho!\n");
                    do
                    {
                        scanf(" %c",&menuboss2);
                        switch(menuboss2)
                        {
                        case '1':
                            printf("Escolha certa!!! O BOSS sofreu dano e caiu!!\n");
                            interativo2=0;
                            break;
                        default:
                            printf("Op��o Inv�lida\n");
                        }
                        if (menuboss2=='3')
                        {
                            system("pause");
                            system("cls");
                            printf("*****************************************************************************************************************************\n");
                            printf("O BOSS est� de joelhos e voc� tem mais partes fracas para atacar!!!\n");
                            printf("[1]Olhos                       [2]Pesco�o\n");

                            do
                            {
                                scanf(" %c",&menuboss3);
                                switch(menuboss3)
                                {
                                case '1':
                                    printf("Ele levou muito dano por ser sua parte fraca, mas levantou e segue firme ao combate!!\n");
                                    interativo3=0;
                                    interativo=0;
                                    break;
                                case '2':
                                    printf("Ele levou muito dano por ser sua parte fraca, mas levantou e seguiu firme ao combate!!\n");
                                    interativo3=0;
                                    interativo=0;
                                    break;
                                default:
                                    printf("Op��o Inv�lida\n");
                                }
                            }
                            while(interativo3!=0);

                            if (menuboss=='0')
                                interativo=1;
                        }
                    }
                    while(interativo2!=0);
                }

                if (menuboss=='0')
                    interativo=1;
            }
            while(interativo!=0);

            system("pause");
            system("cls");
            printf("*****************************************************************************************************************************\n");
            printf("\nDepois de todo esse tempo nessa aventura dentro da Cripta desconhecida, aparece um ser do bem que te joga um arco e flechas enfeiti�ado, dizendo o seguinte:\n");
            printf("\nAcerte a mente dele, n�o a cabe�a, mas sim a sua mente... isso � o que o derrotar�!!!\n");
            system("pause");
            system("cls");
            printf("*****************************************************************************************************************************\n");
            printf("\nVoc� tenta se focar, esvaziar sua pr�pria mente para enchergar a dele ...\n");
            printf("\nQuando percebe, que o gigante se acalmou, a Cripta se silenciou... tudo parecia um �nico ser...\n");
            printf("\nEra tudo... voc� ...\n");
            printf("\nSua mente . . . \n");
            do
            {
                printf("[1]Utilizar o arco e flecha\n");
                scanf(" %c",&menuboss);
                switch(menuboss)
                {
                case '1':
                    printf("\nO BOSS finalmente foi morto, caindo no ch�o e se dissolvendo...\n");
                    interativo=0;
                    break;
                default:
                    printf("Op��o Inv�lida\n");
                }
                if (menuboss=='0')
                    interativo=1;
            }
            while(interativo!=0);
            printf("\nNo mesmo momento em que o corpo do BOSS se dissolve, cai um papel com o n�mero '9', fazendo uma conex�o com o '4' que havia encontrado no come�o do jogo.\n");
            system("pause");
            system("cls");
            printf("\nAgora, tudo fazia sentido, enquanto voc� era sugado para uma luz t�o brilhante que n�o conseguia ver nada... voc� se realiza...\n");
            printf("\nEsses confrontos, esses desafios, essa Cripta, tudo isso que voc� passou... toda essa luta � algo teu, sua luta constante, com voc� mesmo, sua luta com sua mente, sua Cripta . . .\n");
            printf("\nEnt�o, voc� � levado de volta...\n");
            //////////////////////////////////////////////////fim do boss / game************************************************


            ///////////////////////////////////////////////////////////////////******************************************************************************/////////////////////////////////////////////////////////////////

        }
        else if (op_menu=='2')
        {
            system("cls");
            printf("\n\n\n\n\n\n_____________________________________________________________________________________________________________________________________________________________________________________________________________________________________________\n\n\n\n\n\n");
            printf("\n Cr�ditos :\n");
            printf("\n\t - Gustavo Borges Guimar�es\n\t - Hugo Fransisco\n\t - Luciano Neto\n");
            printf("\n\n\n\n\n\n_____________________________________________________________________________________________________________________________________________________________________________________________________________________________________________\n\n\n\n\n\n");
            system("PAUSE");
        }
        else if (op_menu=='49')
        {
            system("cls");
            printf("\n\n\n\n\n\n_____________________________________________________________________________________________________________________________________________________________________________________________________________________________________________\n\n\n\n\n\n");
            printf("Easter Egg!!!");
            printf("\n\n\n\n\n\n_____________________________________________________________________________________________________________________________________________________________________________________________________________________________________________\n\n\n\n\n\n");
            system("PAUSE");
        }
        else
        {
            printf("\nEscolha Inv�lida!\n");
            system("PAUSE");
        }
    }
    while(op_menu!='0');
    /////////////////////////////////////////////////////////////////////
    return 0;
}
