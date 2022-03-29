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
    char cont_mochila_char,mochila[5][50]= {{"Poção de Vida Pequena"},{"Vazio"},{"Vazio"},{"Vazio"},{"Vazio"}},tesouro,menutesouro,tesouro2,tesouro3,menutesouro2,armadilha,armadilha1,mochilavariavel,mochilavariavel1,armadilha3,armadilha4;
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
        printf("\t\t\t\t\t\t\t*\t\t(2)- Créditos!                \t\t*\n");
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
                printf("\nTem certeza que não deseja jogar mais ?\n");
                printf("\n (1)- SIM!\t\t(2)- NÃO!\n");
        printf("\n\n\n\n\n\n________________________________________________________________________________________________________________________________________________________________________\n\n\n\n\n\n");
                setbuf(stdin,NULL);
                scanf("%c",&sair_menu);
                if (sair_menu=='1')
                {
                    system("cls");
        printf("\n\n\n\n\n\n________________________________________________________________________________________________________________________________________________________________________\n\n\n\n\n\n");
                    printf("\nAté a próxima aventura, a Cripta o aguarda . . . \n\n");
        printf("\n\n\n\n\n\n________________________________________________________________________________________________________________________________________________________________________\n\n\n\n\n\n");
                }
                else if (sair_menu=='2')
                    op_menu='9';
                else
                {
                    printf("\nEscolha Inválida!\n");
                    system("PAUSE");
                    system("cls");
                }
            }
            while((sair_menu!='1') && (sair_menu!='2'));
        }
        else if (op_menu=='1')
        {
            ////////////////////////////////////////////////////////
            printf("\nRole-playing game, também conhecido como RPG, é um tipo de jogo em que os jogadores assumem papéis de personagens e criam narrativas colaborativamente.\n");
            printf("Você deseja ir para um menu de introdução do jogo, ou gostaria de começar a jogar agora ?\n");
            printf("--Pressione 1 para introdução\n");
            printf("--Pressione 0 para começar a jogar\n");
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
                        printf ("\nEscolha a opção que deseja abrir:\n");
                        printf ("[1]SISTEMA DE ATAQUE\n");
                        printf("[2]SISTEMA DE CRIAÇÃO DE PERSONAGENS\n");
                        printf("[3]SISTEMA DE AÇÃO DO JOGO\n");
                        printf("[4]SISTEMA DE VIDA\n");
                        printf("[5]SISTEMA DE ARMAZENAR ITENS\n");
                        printf("[6]SISTEMA DE INTERAÇÃO DO JOGO\n");
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
                            printf("\nO jogo possui dois modos de ataques, um forte e um simples, sendo que o simples pode ser utilizado toda hora, e o forte tem um pequeno tempo de recarga para ser utilizado novamente.Também possui um sistema de defesa em que o jogador vai poder intercalar entre as escolhas, atacar ou defender. Cada raça possui um nível de defesa diferente, ou seja, alguma delas pode ter mais defesa que a outra, do mesmo jeito que uma vai ter mais ataque que a outra.\n");
                            break;
                        }
                        case '2':
                        {
                            printf("\nVocê vai poder escolher qual vai ser a raça de seu personagem, sendo as opções:\n");
                            printf("\n\n--Humano\n");
                            printf("--Anão\n");
                            printf("--Elfo\n");
                            printf("\n\nE além disso, escolherá seu 'nick', que é o nome do seu personagem dentro do jogo, e o seu gênero.\n");
                            break;
                        }
                        case '3':
                        {
                            printf("\nO RPG é jogado por meio de opções que o jogo dá para o usuário, ou seja, dará opções do tipo:\n");
                            printf("\n\n[1]Ataque\n");
                            printf("[2]Ataque forte\n");
                            printf("[3]Defesa\n");
                            printf("[4]Mochila\n");
                            printf("\n\nEm que ele pode fazer a escolha que quiser por meio dessas opções, cada opção pode determinar um futuro diferente para o jogador.O jogo todo é baseado nesse sistema de escolhas.\n");
                            break;
                        }
                        case '4':
                        {
                            printf("\nO jogador vai levar dano durante o jogo inteiro por causa das criaturas que tem na Cripta, então ele vai ter que administrar bem suas poções de vida que vão poder serem utilizadas pela mochila, se suas poções acabarem e acontecer do jogador morrer, ele simplesmente perde o jogo, não tem um sistema de ressurreição.\n");
                            break;
                        }
                        case '5':
                        {
                            printf("\nA mochila do jogo caberá 5 itens, sendo assim, o jogador precisa administrar seu espaço muito bem.O jogo não permite que os itens ficam dentro um do outro como nos RPGs de costume, ou seja, se você tem duas poções de vida, elas irão ocupar 2 espaços diferentes.Os equipamentos do personagem não ficarão na mochila, e sim no corpo dele, então não ocuparão espaço.\n");
                            break;
                        }
                        case '6':
                        {
                            printf("\nO jogo procura interagir com o personagem de diversas maneiras, em que fará com que ele pense para nao tomar uma decisão errada, por exemplo:\n");
                            printf("\n\n--Pode aparecer perguntas para o jogador responder do nada, sendo que se ele acertar, pode ser premiado, mas se errar pode haver punições.\n");
                            printf("--O jogo possui armadilhas para que o usuário pense nas opções de escolha para sair, pode sair ileso ou ferido, e vale lembrar que o sistema de vida do jogo é difícil, se ela zerar, é Game Over.\n");
                            printf("--Não terá interações com personagens não-jogáveis dentro do jogo.\n");
                            break;
                        }
                        default:
                            printf("Escolha uma das opções dadas:\n");
                            break;
                        }
                    }
                while(menu_introducao2!='0');
                }
                break;
                default:
                    printf("Escolha uma das opções dadas!\n");
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
            printf("\nIntrodução : A Cripta!!!\n");
            printf("\n\n\nVocê acorda em um local desconhecido, sua cabeça dói e você se sente perdido.\n\nVocê andando lentamente avista uma figura que se aproxima . . .\n\nUma figura sombria encanpuzada, te encarando ... Você sente calafrios, então pergunta :\t-Quem é você? Que lugar é esse? Como vim parar aqui? \n\n");
            system("pause");
            system("cls");
            printf("\n\n\nO estranho devolve de maneira irônica : -A pergunta correta a se fazer é: Quem é você ... hahahaaha.... Bem Vindo a Cripta criança.\n");
            system("pause");
            system("cls");
            printf("\n\n\nVocê pensa consigo mesmo : -Realmente, quem sou eu...\tE se esforça para buscar em sua memória . . .");
            system("pause");
            system("cls");
            printf("\n\n*********************************************************************| CRIAÇÂO DE PERSONAGEM |*********************************************************************\n\n");
            system("pause");
            printf("\nSeleciona sua Raça :\n\n");
            printf("\n\n\n(1)- Humano\n\n");
            printf("\n*Os humanos que formam grandes civilizações, construiram enormes monumentos, apesar de não serem tão habilidosos no combate, a qualidade de seus equipamentos é indiscutível, tendo uma grande vantagem de armadura.\n");
            printf("\nAtaque [16.0] | Vida [130.0] | Defesa [16.5] | Tempo de Recarga [3 turnos]\n");
            printf("\n\n\n(2)- Anão\n\n");
            printf("\n*Os anões, são seres brutos, que vivem nas montanhas, apesar de não possuirem muita técnica de combate, a sua resistência criada durantes os longos anos de trabalho pesado lhes favorecem quando se trata de vitalidade.\n");
            printf("\nAtaque [14.0] | Vida [150.0]  | Defesa [14.5] | Tempo de Recarga [4 turnos]\n");
            printf("\n\n\n(3)- Elfo\n\n");
            printf("\n*Os elfos, decentes da natureza, masterizaram seu combate de forma ágil, o que lhes falta na resistência e defesa pesada, eles compensão em sua habilidade em combate, com acertos certeiros que dilacera seus inimigos.\n");
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
                    printf("\nSelecione umas das opções dadas!\n");
                    break;
                }
            }
            while(raca!=1);
            system("cls");
            printf("\n\n\nSelecione seu Gênero");
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
                    printf("Selecione umas das opções dadas!");
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
            printf("\n*********************************************************************| Agora sua jornada começa pela Cripta . . . |*********************************************************************\n");
            printf("\n\n\n\n_____________________________________________________________________________________________\n\n\n\n");
            printf("\t- %s\n",nome_p);
            if (genero==1)
                printf("\t- Homem\n");
            else
                printf("\t- Mulher\n");
            if (vida_pmax==130)
                printf("\t- Humano\n");
            else if (vida_pmax==150)
                printf("\t- Anão\n");
            else if (vida_pmax==120)
                printf("\t- Elfo\n");

            printf("\n\n\n\n_____________________________________________________________________________________________\n\n\n\n");
            system("pause");
            system("cls");
            vida_p=vida_pmax;
            ////////////////////////////////////////////////////////////////////////*****************************************///////////////////////////////////////////////////////
            printf("\nCapítulo 1 : O Início de uma Jornada!!!\n");
            printf("\n*************************************************************| Agora sua jornada começa pela Cripta . . . |*************************************************************\n");
            printf("\nSem saber o porque de estar aqui, ou se quer como veio parar nesse lugar, ainda sente uma ligação com ele, algo de alguma forma no fundo dessa Cripta o chama, e você responde esse chamado . . .\n");
            printf("\nVocê olha para trás e vê a escada de onde veio, olha ao redor e percebe que está em uma espécie de grande salão com enormes colunas ornamentadas, porém estão bem desgastadas, parece abandonado... \n");
            printf("\nEntão você decide verificar a integridade de seus equipamentos : \n");
            system("pause");
            system("cls");
            printf("\nSua armadura e espada parecem intactos, algo sobre as escritas na lâmina da arma lhe da uma sensação de nostalgia ...\n\nVocê abre sua mochila e não encontra muito ...\n");
            printf("\nMOCHILA :\n");
            for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                printf ("\t(%i)- %s\n",cont_mochila+1,mochila[cont_mochila]);
            printf("\nPor último encontra um objeto estranho em seu bolso, com um anel metálico em volta, e runas que não consegue compreender entalhadas em seu acabamento, tem uma vaga lembrança de que esse amuleto está relacionado com sua chegada a Cripta.\n");
            printf("\nApós checar seus equipamentos você estava comendo quando sente uma presença, então se vira. . .\n");
            system("pause");
            printf("\nUm goblim se egueirando para te pegar desprevinido, você se lança para o lado, se preparando para o combate, ele produz um barulho estridente com uma adaga em mãos vai para cima de você ...");
            system("pause");
            system("cls");
            strcpy(mochila[2],"Vazio");
            ////////////////////////////////////////////
            printf ("\n______________________________________________________________________________________________________________________________________________________________________\n");
            printf ("\n\t Descrição: Goblins são uma espécie baixa e feia , a terceira raça não humana mais comum do mundo. Vivem no subsolo e enxergam no escuro. Considerados pequenos monstros \n");
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
                    printf("\nVocê ataca o inimigo!\n");
                    vida_goblin=vida_goblin-ataque_p;
                    printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_p,vida_goblin);
                    vida_p=(vida_p-(ataque_goblin-defesa_p));
                    printf("\nVoce bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",defesa_p,(ataque_goblin-defesa_p),vida_p);
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case 2:
                    ataque_goblin=20;
                    printf("\nVoce se defende!\n");
                    vida_p=(vida_p-(ataque_goblin-(defesa_p+2)));
                    printf("\nVocê bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",(defesa_p+2),(ataque_goblin-(defesa_p+2)),vida_p);
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case 3:
                    ataque_goblin=20;
                    if (tempo_recarga!=0)
                    {
                        printf("\nSeu ataque forte está carregando...\n");
                    }
                    else if (tempo_recarga==0)
                    {
                        printf("\nVocê usa seu ataque forte, causando dano extra porém se deixando vulnerável!\n");
                        vida_goblin=vida_goblin-ataquef_p;
                        printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida!\n",ataquef_p,vida_goblin);
                        vida_p=(vida_p-ataque_goblin);
                        printf("\nVocê recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_goblin,vida_p);
                        tempo_recarga=tempo_recargamax;
                    }
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
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
                        printf("\nVocê não possuí nenhum item!\n");
                        item_escolha++;
                        pre_teste=1;
                        //Voltar para escolha de ação
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
                                    printf("\nEscolha um item válido!\n");
                                    system("pause");
                                    system("cls");
                                }
                            }
                            while(char_int==0);
                            ////////////////////////////////////////////////////
                            if (strcmp(mochila[cont_mochila],"Vazio")==0)
                            {
                                system("cls");
                                printf("\nSlot selecionado está vazio.\n");
                                system("pause");
                                system("cls");
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Vida Pequena")==0)
                            {
                                printf("\nPoção de Vida Pequena utilizada, +30 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<30; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual é %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Vida Média")==0)
                            {
                                printf("\nPoção de Vida Média utilizada, +50 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<50; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual é %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Vida Grande")==0)
                            {
                                printf("\nPoção de Vida Grande utilizada, +70 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<70; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual é %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Recuperação Completa")==0)
                            {
                                printf("\nPoção de Recuperação Completa utilizada, seu personagem está com a vida máxima agora...\n");
                                vida_p=vida_pmax;
                                printf("\nSua vida atual é %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Dano")==0)
                            {
                                printf("\nPoção de Dano utilizada, seu personagem possuí +2 de dano em seus ataques normais até o final da luta...\n");
                                cont_pot_dano++;
                                printf("\nSeu ataque era de %.2f e agora é %.2f .\n",ataque_p,ataque_p+2);
                                ataque_p+=2;
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Defesa")==0)
                            {
                                printf("\nPoção de Defesa utilizada, seu personagem possuí +2 de defesa até o final da luta ...\n");
                                cont_pot_defesa++;
                                printf("\nSua defesa era de %.2f agora é %.2f .\n",defesa_p,defesa_p+2);
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
                    printf("\nVocê vence a batalha!\n");
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
            printf("\n\nSua vida atual é %.2f, seu ataque é %.2f e sua defesa é %.2f .\n\n",vida_p,ataque_p,defesa_p);
            system("pause");
            system("cls");
            ////////////////////////////////////////////////////////////////***********************************************************
            printf("\nAinda ofegante tenta se sintonizar com a realidade, e realiza que não poderá vacilar, não aqui, então se endireita tenta focar sua mente e segue em frente, para uma porta no final do salão ...\n");
            printf("\nVocê verifica a próxima sala... ela não é tão grande,percebe que existem coisas jogadas pelo chão mas parece livre, então atravessa a grande porta de metal...\n");
            system("pause");
            system("cls");
            printf("\nVasculhando o local, você encontra umas anotações perto de uma mochila rasgada, apesar de não entender o que significam, encontra um símbolo que se parece ser o número '4', e pensa o porque de aquilo estar ali...\n");
            printf("\nSaindo da sala segue para um corredor, as paredes de pedra parecem bem úmidas, o lugar é empoeirado e parece ter várias pilhas de ossos espalhadas.\n");
            printf("\nÉ perceptível que há algo errado com esse lugar, e você não está tão surpreso, esperava isso, só não pode dizer certamente o que foi fazer ali.");
            system("pause");
            system("cls");
            printf("\nCaminhando pelos longos corredores de pedra, com iluminação a base de tochas, você se depara com a entrada para uma sala ...\n");
            printf("\nDeseja entrar na sala ?\n");
            printf("\n\t(1)- Sim! \t (2)- Não!");
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
                    printf("Opção inválida!\n");
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
                        printf("\nVocê rapidamente se joga ao chão, cortando seu braco em um espinho próximo, perdendo 5 de vida.\n");
                        vida_p=(vida_p-5);
                        printf("\nPor esta decisão, você desvia das flechas que subtamente apareceram em seu caminho, mas acaba machucado.\n");
                        menutesouro2='0';
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    case '2':
                        printf("\nVocê utiliza sua grande agilidade para em um rapido movimento rolar para frente.\n");
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
                            printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    default:
                        printf("Opção inválida!\n");
                        if (tesouro2=='0')
                            menutesouro2='1';

                    }

                }
                while(menutesouro2!='0');


                printf("Você encontrou um baú do tesouro nessa sala cheia de armadilhas!! Nele contém Poção de Vida Grande\n");
                system("pause");
                system("cls");

                do
                {
                    if (cont_item>=5)
                    {
                        printf("\nTodos os espaços da mochila estão cheios!\n");
                        add_item++;
                    }
                    else if (strcmp(mochila[cont_item],"Vazio")==0)
                    {
                        strcpy(mochila[cont_item],"Poção de Vida Grande");//item que vai ser recebido
                        add_item++;
                    }
                    cont_item++;
                }
                while (add_item==0);
                cont_item=0;
                menutesouro='0';

            }
///////////////////////

            printf("\nSaindo da sala você segue caminhando... O corredor começa a enlarguecer, e olhando para os lados vê diversas portas feitas de um metal enferrujando, no entanto não parece ser uma boa idéia explorar esse lugar...\n");
            printf("\nAtravés das grades das portas parece haver criaturas, é melhor não se arriscar, você segue sorrateiramente ... encontra diversos esqueletos pendurados ou pregados ao longo dessa sala que parece interminável ...\n");
            printf("\nSe esgueirando pelo lado direito da sala você enxerga movimentação do outro lado, então se esconde nas sombras de uma gigante coluna retangular...\n");
            system("pause");
            printf("\nNão consegue ver o que era, mas ja se foi, se sente aliviado ... no entanto quando você vai sair de cobertura percebe que o esqueleto escorado na parede ao seu lado está diferente, ele não está pendurado ...\n");
            system("pause");
            system("cls");
            printf("\nEle então grune e tenta te acertar com a espada em sua mão, por sorte você escapa dessa, mas agora precisa se defender . . .\n");
            printf ("\n______________________________________________________________________________________________________________________________________________________________________\n");
            printf ("\n \t Descrição: Criaturas de ossos trazidas à vida por magia necromântica, os esqueletos são seres vazios ainda capazes de interagir de forma simplória, \n         seja protegendo e obedecendo ordens báscicas de seus conjuradores ou atacando os inimigos a quem foram criados para destruir, nada além disso.");
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
                    printf("\nVocê ataca o inimigo!\n");
                    vida_esqueleto=vida_esqueleto-ataque_p;
                    printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_p,vida_esqueleto);
                    vida_p=(vida_p-(ataque_esqueleto-defesa_p));
                    printf("\nVoce bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",defesa_p,(ataque_esqueleto-defesa_p),vida_p);
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case 2:
                    ataque_esqueleto=20;
                    printf("\nVoce se defende!\n");
                    vida_p=(vida_p-(ataque_esqueleto-(defesa_p+2)));
                    printf("\nVocê bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",(defesa_p+2),(ataque_esqueleto-(defesa_p+2)),vida_p);
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case 3:
                    ataque_esqueleto=20;
                    if (tempo_recarga!=0)
                    {
                        printf("\nSeu ataque forte está carregando...\n");
                    }
                    else if (tempo_recarga==0)
                    {
                        printf("\nVocê usa seu ataque forte, causando dano extra porém se deixando vulnerável!\n");
                        vida_esqueleto=vida_esqueleto-ataquef_p;
                        printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida!\n",ataquef_p,vida_esqueleto);
                        vida_p=(vida_p-ataque_esqueleto);
                        printf("\nVocê recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_esqueleto,vida_p);
                        tempo_recarga=tempo_recargamax;
                    }
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
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
                        printf("\nVocê não possuí nenhum item!\n");
                        item_escolha++;
                        pre_teste=1;
                        //Voltar para escolha de ação
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
                                    printf("\nEscolha um item válido!\n");
                                    system("pause");
                                    system("cls");
                                }
                            }
                            while(char_int==0);
                            ////////////////////////////////////////////////////
                            if (strcmp(mochila[cont_mochila],"Vazio")==0)
                            {
                                system("cls");
                                printf("\nSlot selecionado está vazio.\n");
                                system("pause");
                                system("cls");
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Vida Pequena")==0)
                            {
                                printf("\nPoção de Vida Pequena utilizada, +30 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<30; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual é %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Vida Média")==0)
                            {
                                printf("\nPoção de Vida Média utilizada, +50 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<50; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual é %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Vida Grande")==0)
                            {
                                printf("\nPoção de Vida Grande utilizada, +70 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<70; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual é %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Recuperação Completa")==0)
                            {
                                printf("\nPoção de Recuperação Completa utilizada, seu personagem está com a vida máxima agora...\n");
                                vida_p=vida_pmax;
                                printf("\nSua vida atual é %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Dano")==0)
                            {
                                printf("\nPoção de Dano utilizada, seu personagem possuí +2 de dano em seus ataques normais até o final da luta...\n");
                                cont_pot_dano++;
                                printf("\nSeu ataque era de %.2f e agora é %.2f .\n",ataque_p,ataque_p+2);
                                ataque_p+=2;
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Defesa")==0)
                            {
                                printf("\nPoção de Defesa utilizada, seu personagem possuí +2 de defesa até o final da luta ...\n");
                                cont_pot_defesa++;
                                printf("\nSua defesa era de %.2f agora é %.2f .\n",defesa_p,defesa_p+2);
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
                    printf("\nVocê vence a batalha!\n");
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
            printf("\nVocê encontrou uma Poção de Vida Média com o inimigo!\n");
            do
            {
                if (cont_item>=5)
                {
                    printf("\nTodos os espaços da mochila estão cheios!\n");
                    add_item++;
                }
                else if (strcmp(mochila[cont_item],"Vazio")==0)
                {
                    strcpy(mochila[cont_item],"Poção de Vida Média");//item que vai ser recebido
                    add_item++;
                }
                cont_item++;
            }
            while (add_item==0);
            cont_item=0;
            add_item=0;
            printf("\n\nSua vida atual é %.2f, seu ataque é %.2f e sua defesa é %.2f .\n\n",vida_p,ataque_p,defesa_p);
            system("pause");
            system("cls");
            /////////////////////////////////////////////////////////////////////////////////
            printf("\nVocê ainda não pode parar pra ver seus itens devido ao perigo eminente, é preciso apenas seguir em frente...\n");
            printf("\nCom vida porém ameaçado nesse lugar você quer sair logo dali, é possível ver a saída, no entanto ...");
            printf("\nAparece um Goblin para atrapalhar sua saída!!!");
            system("pause");
            system("cls");
            printf ("\n______________________________________________________________________________________________________________________________________________________________________\n");
            printf ("\n\t Descrição: Goblins são uma espécie baixa e feia , a terceira raça não humana mais comum do mundo. Vivem no subsolo e enxergam no escuro. Considerados pequenos monstros \n");
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
                    printf("\nVocê ataca o inimigo!\n");
                    vida_goblin=vida_goblin-ataque_p;
                    printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_p,vida_goblin);
                    vida_p=(vida_p-(ataque_goblin-defesa_p));
                    printf("\nVoce bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",defesa_p,(ataque_goblin-defesa_p),vida_p);
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case 2:
                    ataque_goblin=20;
                    printf("\nVoce se defende!\n");
                    vida_p=(vida_p-(ataque_goblin-(defesa_p+2)));
                    printf("\nVocê bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",(defesa_p+2),(ataque_goblin-(defesa_p+2)),vida_p);
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case 3:
                    ataque_goblin=20;
                    if (tempo_recarga!=0)
                    {
                        printf("\nSeu ataque forte está carregando...\n");
                    }
                    else if (tempo_recarga==0)
                    {
                        printf("\nVocê usa seu ataque forte, causando dano extra porém se deixando vulnerável!\n");
                        vida_goblin=vida_goblin-ataquef_p;
                        printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida!\n",ataquef_p,vida_goblin);
                        vida_p=(vida_p-ataque_goblin);
                        printf("\nVocê recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_goblin,vida_p);
                        tempo_recarga=tempo_recargamax;
                    }
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
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
                        printf("\nVocê não possuí nenhum item!\n");
                        item_escolha++;
                        pre_teste=1;
                        //Voltar para escolha de ação
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
                                    printf("\nEscolha um item válido!\n");
                                    system("pause");
                                    system("cls");
                                }
                            }
                            while(char_int==0);
                            ////////////////////////////////////////////////////
                            if (strcmp(mochila[cont_mochila],"Vazio")==0)
                            {
                                system("cls");
                                printf("\nSlot selecionado está vazio.\n");
                                system("pause");
                                system("cls");
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Vida Pequena")==0)
                            {
                                printf("\nPoção de Vida Pequena utilizada, +30 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<30; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual é %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Vida Média")==0)
                            {
                                printf("\nPoção de Vida Média utilizada, +50 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<50; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual é %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Vida Grande")==0)
                            {
                                printf("\nPoção de Vida Grande utilizada, +70 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<70; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual é %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Recuperação Completa")==0)
                            {
                                printf("\nPoção de Recuperação Completa utilizada, seu personagem está com a vida máxima agora...\n");
                                vida_p=vida_pmax;
                                printf("\nSua vida atual é %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Dano")==0)
                            {
                                printf("\nPoção de Dano utilizada, seu personagem possuí +2 de dano em seus ataques normais até o final da luta...\n");
                                cont_pot_dano++;
                                printf("\nSeu ataque era de %.2f e agora é %.2f .\n",ataque_p,ataque_p+2);
                                ataque_p+=2;
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Defesa")==0)
                            {
                                printf("\nPoção de Defesa utilizada, seu personagem possuí +2 de defesa até o final da luta ...\n");
                                cont_pot_defesa++;
                                printf("\nSua defesa era de %.2f agora é %.2f .\n",defesa_p,defesa_p+2);
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
                    printf("\nVocê vence a batalha!\n");
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
            printf("Voce ganha Poção de Vida Média ao derrotar o Goblin.\n");
            do
            {
                if (cont_item>=5)
                {
                    printf("\nTodos os espaços da mochila estão cheios!\n");
                    add_item++;
                }
                else if (strcmp(mochila[cont_item],"Vazio")==0)
                {
                    strcpy(mochila[cont_item],"Poção de Vida Média");//item que vai ser recebido
                    add_item++;
                }
                cont_item++;
            }
            while (add_item==0);
            cont_item=0;
            //////////////////////////////////////////////////
            printf("\n\nSua vida atual é %.2f, seu ataque é %.2f e sua defesa é %.2f .\n\n",vida_p,ataque_p,defesa_p);
            system("pause");
            system("cls");

            printf("\nChegando a saída um barulho de correntes ecoa pela sala ... você olha pra cima e parece uma armadilha, diversas correntes com lâminas descem do teto . . . você pode correr em frente para a saída ou ficar para trás e enfrentar seja o que for que ativou esse dispositivo.");
            printf("\n\t(1)- Correr para a saída! \t (2)- Evitar a armadilha!");

            do
            {
                setbuf(stdin,NULL);
                scanf("%c",&armadilha3);
                switch(armadilha3)
                {
                case '1':
                    printf("Armadilha causou muito dano!!!Sua vida é de %.2f\n",vida_p-20);
                    vida_p-=20;
                    printf("Além de tomar dano da armadilha, aparece uma aranha!!\n");
                    armazenar=1;
                    armadilha4='0';
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case '2':
                    printf("Decidiu ficar para desativar a armadilha né ? Mas aparece um Esqueleto de Elite para enfrentá-lo!\n");
                    armazenar=2;
                    armadilha4='0';
                    break;
                default:
                    printf("Opção inválida\n");
                    if (armadilha3=='0')
                        armadilha4='1';
                }
            }
            while(armadilha4!='0');
            ///////////////////////
            if (armazenar==1)
            {
                printf ("\n______________________________________________________________________________________________________________________________________________________________________\n");
                printf ("\n\t A aranha Aracne é uma aranha gigantesca, do tamanho do ser humano. Possui pernas fortissímas, de modo que possa saltar em seus alvos e cravar suas presas nele \n \t Ataque: Corpo a Corpo, Imobilização  \n \t Dano:25 ATK   \n \t Vida: 18 HP");
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
                        printf("\nVocê ataca o inimigo!\n");
                        vida_aranha=vida_aranha-ataque_p;
                        printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_p,vida_aranha);
                        vida_p=(vida_p-(ataque_aranha-defesa_p));
                        printf("\nVoce bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",defesa_p,(ataque_aranha-defesa_p),vida_p);
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    case 2:
                        ataque_aranha=25;
                        printf("\nVoce se defende!\n");
                        vida_p=(vida_p-(ataque_aranha-(defesa_p+2)));
                        printf("\nVocê bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",(defesa_p+2),(ataque_aranha-(defesa_p+2)),vida_p);
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    case 3:
                        ataque_aranha=25;
                        if (tempo_recarga!=0)
                        {
                            printf("\nSeu ataque forte está carregando...\n");
                        }
                        else if (tempo_recarga==0)
                        {
                            printf("\nVocê usa seu ataque forte, causando dano extra porém se deixando vulnerável!\n");
                            vida_aranha=vida_aranha-ataquef_p;
                            printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida!\n",ataquef_p,vida_aranha);
                            vida_p=(vida_p-ataque_aranha);
                            printf("\nVocê recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_aranha,vida_p);
                            tempo_recarga=tempo_recargamax;
                        }
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
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
                            printf("\nVocê não possuí nenhum item!\n");
                            item_escolha++;
                            pre_teste=1;
                            //Voltar para escolha de ação
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
                                        printf("\nEscolha um item válido!\n");
                                        system("pause");
                                        system("cls");
                                    }
                                }
                                while(char_int==0);
                                ////////////////////////////////////////////////////
                                if (strcmp(mochila[cont_mochila],"Vazio")==0)
                                {
                                    system("cls");
                                    printf("\nSlot selecionado está vazio.\n");
                                    system("pause");
                                    system("cls");
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Vida Pequena")==0)
                                {
                                    printf("\nPoção de Vida Pequena utilizada, +30 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<30; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual é %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Vida Média")==0)
                                {
                                    printf("\nPoção de Vida Média utilizada, +50 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<50; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual é %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Vida Grande")==0)
                                {
                                    printf("\nPoção de Vida Grande utilizada, +70 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<70; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual é %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Recuperação Completa")==0)
                                {
                                    printf("\nPoção de Recuperação Completa utilizada, seu personagem está com a vida máxima agora...\n");
                                    vida_p=vida_pmax;
                                    printf("\nSua vida atual é %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Dano")==0)
                                {
                                    printf("\nPoção de Dano utilizada, seu personagem possuí +2 de dano em seus ataques normais até o final da luta...\n");
                                    cont_pot_dano++;
                                    printf("\nSeu ataque era de %.2f e agora é %.2f .\n",ataque_p,ataque_p+2);
                                    ataque_p+=2;
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Defesa")==0)
                                {
                                    printf("\nPoção de Defesa utilizada, seu personagem possuí +2 de defesa até o final da luta ...\n");
                                    cont_pot_defesa++;
                                    printf("\nSua defesa era de %.2f agora é %.2f .\n",defesa_p,defesa_p+2);
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
                        printf("\nVocê vence a batalha!\n");
                        printf("\n************************************************************\n");
                        system("pause");
                        system("cls");
                        luta=0;
                        vida_aranha=18;
                        armazenar=0;
                        //////////////////////////////////////////////////
                        printf("\nVocê encontrou uma Poção de Vida Média com o inimigo!\n");
                        do
                        {
                            if (cont_item>=5)
                            {
                                printf("\nTodos os espaços da mochila estão cheios!\n");
                                add_item++;
                            }
                            else if (strcmp(mochila[cont_item],"Vazio")==0)
                            {
                                strcpy(mochila[cont_item],"Poção de Vida Média");//item que vai ser recebido
                                add_item++;
                            }
                            cont_item++;
                        }
                        while (add_item==0);
                        cont_item=0;
                        add_item=0;
                        printf("\n\nSua vida atual é %.2f, seu ataque é %.2f e sua defesa é %.2f .\n\n",vida_p,ataque_p,defesa_p);
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
                printf ("\n \t Descrição: Criaturas de ossos trazidas à vida por magia necromântica, os esqueletos são seres vazios ainda capazes de interagir de forma simplória, \n         seja protegendo e obedecendo ordens báscicas de seus conjuradores ou atacando os inimigos a quem foram criados para destruir, nada além disso.");
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
                        printf("\nVocê ataca o inimigo!\n");
                        vida_esqueletoE=vida_esqueletoE-ataque_p;
                        printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_p,vida_esqueletoE);
                        vida_p=(vida_p-(ataque_esqueletoE-defesa_p));
                        printf("\nVoce bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",defesa_p,(ataque_esqueletoE-defesa_p),vida_p);
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    case 2:
                        ataque_esqueletoE=28;
                        printf("\nVoce se defende!\n");
                        vida_p=(vida_p-(ataque_esqueletoE-(defesa_p+2)));
                        printf("\nVocê bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",(defesa_p+2),(ataque_esqueletoE-(defesa_p+2)),vida_p);
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    case 3:
                        ataque_esqueletoE=28;
                        if (tempo_recarga!=0)
                        {
                            printf("\nSeu ataque forte está carregando...\n");
                        }
                        else if (tempo_recarga==0)
                        {
                            printf("\nVocê usa seu ataque forte, causando dano extra porém se deixando vulnerável!\n");
                            vida_esqueletoE=vida_esqueletoE-ataquef_p;
                            printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida!\n",ataquef_p,vida_esqueletoE);
                            vida_p=(vida_p-ataque_esqueletoE);
                            printf("\nVocê recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_esqueletoE,vida_p);
                            tempo_recarga=tempo_recargamax;
                        }
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
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
                            printf("\nVocê não possuí nenhum item!\n");
                            item_escolha++;
                            pre_teste=1;
                            //Voltar para escolha de ação
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
                                        printf("\nEscolha um item válido!\n");
                                        system("pause");
                                        system("cls");
                                    }
                                }
                                while(char_int==0);
                                ////////////////////////////////////////////////////
                                if (strcmp(mochila[cont_mochila],"Vazio")==0)
                                {
                                    system("cls");
                                    printf("\nSlot selecionado está vazio.\n");
                                    system("pause");
                                    system("cls");
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Vida Pequena")==0)
                                {
                                    printf("\nPoção de Vida Pequena utilizada, +30 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<30; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual é %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Vida Média")==0)
                                {
                                    printf("\nPoção de Vida Média utilizada, +50 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<50; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual é %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Vida Grande")==0)
                                {
                                    printf("\nPoção de Vida Grande utilizada, +70 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<70; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual é %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Recuperação Completa")==0)
                                {
                                    printf("\nPoção de Recuperação Completa utilizada, seu personagem está com a vida máxima agora...\n");
                                    vida_p=vida_pmax;
                                    printf("\nSua vida atual é %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Dano")==0)
                                {
                                    printf("\nPoção de Dano utilizada, seu personagem possuí +2 de dano em seus ataques normais até o final da luta...\n");
                                    cont_pot_dano++;
                                    printf("\nSeu ataque era de %.2f e agora é %.2f .\n",ataque_p,ataque_p+2);
                                    ataque_p+=2;
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Defesa")==0)
                                {
                                    printf("\nPoção de Defesa utilizada, seu personagem possuí +2 de defesa até o final da luta ...\n");
                                    cont_pot_defesa++;
                                    printf("\nSua defesa era de %.2f agora é %.2f .\n",defesa_p,defesa_p+2);
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
                        printf("\nVocê vence a batalha!\n");
                        printf("\n************************************************************\n");
                        system("pause");
                        system("cls");
                        luta=0;
                        vida_esqueletoE=42;
                        //////////////////////////////////////////////////
                        printf("\nVocê encontrou uma Poção de Vida Grande com o inimigo!\n");
                        do
                        {
                            if (cont_item>=5)
                            {
                                printf("\nTodos os espaços da mochila estão cheios!\n");
                                add_item++;
                            }
                            else if (strcmp(mochila[cont_item],"Vazio")==0)
                            {
                                strcpy(mochila[cont_item],"Poção de Vida Grande");//item que vai ser recebido
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
                printf("\n\nSua vida atual é %.2f, seu ataque é %.2f e sua defesa é %.2f .\n\n",vida_p,ataque_p,defesa_p);
                system("pause");
                system("cls");
            }

            printf("\nCom a porta para aquele lugar que mais parecia uma prisão fechada, existe apenas uma entrada para esse cubículo que você se encontra, você pode usar sua mochila ...\n");
            printf("\n\t(1)- Usar mochila! \t (2)- Não usar!");
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
                        printf("\nVocê não possuí nenhum item!\n");
                        item_escolha++;
                        pre_teste=1;
                        //Voltar para escolha de ação
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
                                    printf("\nEscolha um item válido!\n");
                                    system("pause");
                                    system("cls");
                                }
                            }
                            while(char_int==0);
                            ////////////////////////////////////////////////////
                            if (strcmp(mochila[cont_mochila],"Vazio")==0)
                            {
                                system("cls");
                                printf("\nSlot selecionado está vazio.\n");
                                system("pause");
                                system("cls");
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Vida Pequena")==0)
                            {
                                printf("\nPoção de Vida Pequena utilizada, +30 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<30; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual é %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Vida Média")==0)
                            {
                                printf("\nPoção de Vida Média utilizada, +50 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<50; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual é %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Vida Grande")==0)
                            {
                                printf("\nPoção de Vida Grande utilizada, +70 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<70; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual é %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Recuperação Completa")==0)
                            {
                                printf("\nPoção de Recuperação Completa utilizada, seu personagem está com a vida máxima agora...\n");
                                vida_p=vida_pmax;
                                printf("\nSua vida atual é %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Dano")==0)
                            {
                                printf("\nPoção de Dano utilizada, seu personagem possuí +2 de dano em seus ataques normais até o final da luta...\n");
                                cont_pot_dano++;
                                printf("\nSeu ataque era de %.2f e agora é %.2f .\n",ataque_p,ataque_p+2);
                                ataque_p+=2;
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Defesa")==0)
                            {
                                printf("\nPoção de Defesa utilizada, seu personagem possuí +2 de defesa até o final da luta ...\n");
                                cont_pot_defesa++;
                                printf("\nSua defesa era de %.2f agora é %.2f .\n",defesa_p,defesa_p+2);
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
                    printf("Opção inválida!\n");
                }
            }
            while(mochilavariavel1!='0');
////////////////////

            printf("\nExiste uma espécie de diário no chão... você o pega...\n");
            system("pause");
            printf("\nNele você lê sobre um herói que tentou se aventurar por essa Cripta, e buscava algum objetivo no final dela, tem algo sobre um ciclo a ser quebrado, mas é difícil entender com as páginas tão mofadas...\n");
            printf("\nVocê começa a se lembrar... sua casa, seu lar, seus treinamentos com seu mestre, seus companheiros, sua vinda até a Cripta, e um branco...\n");
            system("pause");
            system("cls");
            printf("\n- É isso, eu tenho um propósito, eu preciso cumprir com as expectativas de meu mestre, preciso me tornar um herói, eu posso não lembrar de tudo ainda, mas vou até o fim disso, é o que esperam de mim...\n");
            printf("\nInspirado pelas memórias que retomou, você tem um senso de que é necessitado para alguma causa, as pessoas com as quais você se importa e se importam contigo dependem disso, você precisa ter sucesso...\n");
            system("pause");
            system("cls");
            ////////////////////////////////////////////////////////////////////////////////////////////////////////////fim capitulo 1****
            printf("\nCapítulo 2 : Se aprofundando na Cripta!!!\n");
            printf("\n*************************************************************| Sua jornada continua no próximo nível da Cripta . . . |*************************************************************\n");
            printf("\n... Após continuar descendo na Cripta, você se encotra cada vez mais perto de seu objetivo final...\n");
            printf("\nE nesse caminho você encontrou uma Poção de Vida Média...\n");
            do
            {
                if (cont_item>=5)
                {
                    printf("\nTodos os espaços da mochila estão cheios!\n");
                    add_item++;
                }
                else if (strcmp(mochila[cont_item],"Vazio")==0)
                {
                    strcpy(mochila[cont_item],"Poção de Vida Média");//item que vai ser recebido
                    add_item++;
                }
                cont_item++;
            }
            while (add_item==0);
            cont_item=0;
            add_item=0;
            printf("\nSeus status e equipamentos agora são :\n");
            ////////////////////////////
            printf("\n\n\n\n_____________________________________________________________________________________________\n\n\n\n");
            printf("\nVida Máxima: %.2f \t Vida Atual: %.2f \t Ataque: %.2f \t Defesa: %.2f \n",vida_pmax,vida_p,ataque_p,defesa_p);
            printf("\nMOCHILA :\n");
            for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                printf ("\t(%i)- %s\n",cont_mochila+1,mochila[cont_mochila]);
            printf("\n\n\n\n_____________________________________________________________________________________________\n\n\n\n");
            system("pause");
            system("cls");
            printf("\nContinuando a retomar suas memórias, você se lembra de seu mestre Hirko, que o treinou para que concluísse essa missão, mesmo sem lembrar de qual era e o porque, você sabe que as respotas estão aqui em algum lugar...\n");
            printf("\nVocê ja está caminhando a algum tempo, e desde que desceu mais na Cripta ela parece estar se modificando, as paredes de pedras cinzentas agora são blocos de calcário, tem areia pelo chão além de teias de aranha por todo lado.\n");
            printf("\nAparenta estar em uma catacumba, e desde que entrou está a caminhar com uma tocha para iluminar seu caminho...\n");
            system("pause");
            system("cls");
            printf("\nAgora descendo mais um lance de escadas você encontra escritas e desenhos que parecem contar uma história...\n");
            printf("\nNela um animal afugentado percorre uma floresta perdida, tentando encontrar uma saída, mas sempre volta ao mesmo local, com muito medo dos seus arredores, mas a única coisa que o persegue é sua própria sombra...\n");
            printf("\nIsso lhe ecoa na mente, mas não parece fazer muito sentido...\n");
            system("pause");
            system("cls");
            printf("\nEntão você decide partir, quando virando o final do corredor você enxerga uma sombra se mexendo e parece ser um inimigo, será melhor usar o elemento surpresa para ataca-lo ou tentar se esgueirar...\n");
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
                    printf("Você encontrou uma Poção Pequena de Vida logo a frente!!\n");
                    armazenar=2;
                    armadilha4='0';
                    break;
                default:
                    printf("Opção inválida\n");
                    if (armadilha3=='0')
                        armadilha4='1';
                }
            }
            while(armadilha4!='0');
            if (armazenar==1)
            {
                luta=1;
                printf ("\n______________________________________________________________________________________________________________________________________________________________________\n");
                printf ("\n\t Descrição: Múmia é um cadáver, cuja pele e órgãos foram preservados intencionalmente ou acidentalmente pela exposição de produtos químicos. Estão dispostas a exterminar qualquer tipo de ser \n \t Arma: Não tem \n \t Dano: 25 ATK \n \t Vida: 60 HP");
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
                        printf("\nVocê ataca o inimigo!\n");
                        vida_mumia=vida_mumia-ataque_p;
                        printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_p,vida_mumia);
                        vida_p=(vida_p-(ataque_mumia-defesa_p));
                        printf("\nVoce bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",defesa_p,(ataque_mumia-defesa_p),vida_p);
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    case 2:
                        ataque_mumia=25;
                        printf("\nVoce se defende!\n");
                        vida_p=(vida_p-(ataque_mumia-(defesa_p+2)));
                        printf("\nVocê bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",(defesa_p+2),(ataque_mumia-(defesa_p+2)),vida_p);
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    case 3:
                        ataque_mumia=25;
                        if (tempo_recarga!=0)
                        {
                            printf("\nSeu ataque forte está carregando...\n");
                        }
                        else if (tempo_recarga==0)
                        {
                            printf("\nVocê usa seu ataque forte, causando dano extra porém se deixando vulnerável!\n");
                            vida_mumia=vida_mumia-ataquef_p;
                            printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida!\n",ataquef_p,vida_mumia);
                            vida_p=(vida_p-ataque_mumia);
                            printf("\nVocê recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_mumia,vida_p);
                            tempo_recarga=tempo_recargamax;
                        }
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
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
                            printf("\nVocê não possuí nenhum item!\n");
                            item_escolha++;
                            pre_teste=1;
                            //Voltar para escolha de ação
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
                                        printf("\nEscolha um item válido!\n");
                                        system("pause");
                                        system("cls");
                                    }
                                }
                                while(char_int==0);
                                ////////////////////////////////////////////////////
                                if (strcmp(mochila[cont_mochila],"Vazio")==0)
                                {
                                    system("cls");
                                    printf("\nSlot selecionado está vazio.\n");
                                    system("pause");
                                    system("cls");
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Vida Pequena")==0)
                                {
                                    printf("\nPoção de Vida Pequena utilizada, +30 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<30; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual é %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Vida Média")==0)
                                {
                                    printf("\nPoção de Vida Média utilizada, +50 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<50; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual é %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Vida Grande")==0)
                                {
                                    printf("\nPoção de Vida Grande utilizada, +70 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<70; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual é %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Recuperação Completa")==0)
                                {
                                    printf("\nPoção de Recuperação Completa utilizada, seu personagem está com a vida máxima agora...\n");
                                    vida_p=vida_pmax;
                                    printf("\nSua vida atual é %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Dano")==0)
                                {
                                    printf("\nPoção de Dano utilizada, seu personagem possuí +2 de dano em seus ataques normais até o final da luta...\n");
                                    cont_pot_dano++;
                                    printf("\nSeu ataque era de %.2f e agora é %.2f .\n",ataque_p,ataque_p+2);
                                    ataque_p+=2;
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Defesa")==0)
                                {
                                    printf("\nPoção de Defesa utilizada, seu personagem possuí +2 de defesa até o final da luta ...\n");
                                    cont_pot_defesa++;
                                    printf("\nSua defesa era de %.2f agora é %.2f .\n",defesa_p,defesa_p+2);
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
                        printf("\nVocê vence a batalha!\n");
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
                printf("\n\nSua vida atual é %.2f, seu ataque é %.2f e sua defesa é %.2f .\n\n",vida_p,ataque_p,defesa_p);
                system("pause");
                printf("A Múmia deixou cair uma maçã que dá aumento de +10 na sua vida máxima!!\n");
                vida_pmax+=10;
                printf("Sua vida máxima que antes era %.2f, agora é de : %.2f",(vida_pmax-10),vida_pmax);
            }
            if (armazenar==2)
            {

                do
                {
                    if (cont_item>=5)
                    {
                        printf("\nTodos os espaços da mochila estão cheios!\n");
                        add_item++;
                    }
                    else if (strcmp(mochila[cont_item],"Vazio")==0)
                    {
                        strcpy(mochila[cont_item],"Poção de Vida Pequena");//item que vai ser recebido
                        add_item++;
                    }
                    cont_item++;
                }
                while (add_item==0);
                cont_item=0;
                printf("A Poção de Vida foi adicionada a mochila!\n");
            }
            cont_item=0;
            add_item=0;
            system("pause");
            system("cls");
            printf("\nApós seguir um pouco mais a frente você se depara com três passagens, e acaba sendo obrigado a escolher um caminho . . .\n");
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
                    printf("Opção inválida\n");
                    if (armadilha3=='0')
                        armadilha4='1';
                }
            }
            while(armadilha4!='0');

            if (armazenar==1)
            {
                vida_p=vida_p-15;
                printf("Vários filhotes de aranha pulam em você!!! Você perde 15 de vida, sua vida atual é de %.2f\n",vida_p);
                system("pause");
                system("cls");
                if (vida_p<=0)
                {
                    system("cls");
                    printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                    system("pause");
                    system("cls");
                    exit(0);
                }
            }
            if (armazenar==2)
            {
                vida_p=vida_p-15;
                printf("Você sem querer pisou num piso que ativou uma armadilha, uma flecha vem em alta velocidade e te atinge, fazendo-o perder 15 de vida, sua vida atual é de %.2f\n",vida_p);
                system("pause");
                system("cls");
                if (vida_p<=0)
                {
                    system("cls");
                    printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                    system("pause");
                    system("cls");
                    exit(0);
                }
            }
            if (armazenar==3)
            {
                luta=1;
                printf ("\n______________________________________________________________________________________________________________________________________________________________________\n");
                printf ("\n\t Descrição: É um zumbi que possui uma velocidade acima da normal, comparável com a de um humano comum. Suas mordidas podem arrancar mãos e pedaços grandes de membros\n\t Arma: Espada de Crânios \n\t Dano: 30 ATK \n\t Vida: 22 HP");
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
                        printf("\nVocê ataca o inimigo!\n");
                        vida_zumbi=vida_zumbi-ataque_p;
                        printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_p,vida_zumbi);
                        vida_p=(vida_p-(ataque_zumbi-defesa_p));
                        printf("\nVoce bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",defesa_p,(ataque_zumbi-defesa_p),vida_p);
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    case 2:
                        ataque_zumbi=30;
                        printf("\nVoce se defende!\n");
                        vida_p=(vida_p-(ataque_zumbi-(defesa_p+2)));
                        printf("\nVocê bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",(defesa_p+2),(ataque_zumbi-(defesa_p+2)),vida_p);
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    case 3:
                        ataque_zumbi=30;
                        if (tempo_recarga!=0)
                        {
                            printf("\nSeu ataque forte está carregando...\n");
                        }
                        else if (tempo_recarga==0)
                        {
                            printf("\nVocê usa seu ataque forte, causando dano extra porém se deixando vulnerável!\n");
                            vida_zumbi=vida_zumbi-ataquef_p;
                            printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida!\n",ataquef_p,vida_zumbi);
                            vida_p=(vida_p-ataque_zumbi);
                            printf("\nVocê recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_zumbi,vida_p);
                            tempo_recarga=tempo_recargamax;
                        }
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
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
                            printf("\nVocê não possuí nenhum item!\n");
                            item_escolha++;
                            pre_teste=1;
                            //Voltar para escolha de ação
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
                                        printf("\nEscolha um item válido!\n");
                                        system("pause");
                                        system("cls");
                                    }
                                }
                                while(char_int==0);
                                ////////////////////////////////////////////////////
                                if (strcmp(mochila[cont_mochila],"Vazio")==0)
                                {
                                    system("cls");
                                    printf("\nSlot selecionado está vazio.\n");
                                    system("pause");
                                    system("cls");
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Vida Pequena")==0)
                                {
                                    printf("\nPoção de Vida Pequena utilizada, +30 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<30; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual é %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Vida Média")==0)
                                {
                                    printf("\nPoção de Vida Média utilizada, +50 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<50; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual é %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Vida Grande")==0)
                                {
                                    printf("\nPoção de Vida Grande utilizada, +70 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<70; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual é %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Recuperação Completa")==0)
                                {
                                    printf("\nPoção de Recuperação Completa utilizada, seu personagem está com a vida máxima agora...\n");
                                    vida_p=vida_pmax;
                                    printf("\nSua vida atual é %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Dano")==0)
                                {
                                    printf("\nPoção de Dano utilizada, seu personagem possuí +2 de dano em seus ataques normais até o final da luta...\n");
                                    cont_pot_dano++;
                                    printf("\nSeu ataque era de %.2f e agora é %.2f .\n",ataque_p,ataque_p+2);
                                    ataque_p+=2;
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Defesa")==0)
                                {
                                    printf("\nPoção de Defesa utilizada, seu personagem possuí +2 de defesa até o final da luta ...\n");
                                    cont_pot_defesa++;
                                    printf("\nSua defesa era de %.2f agora é %.2f .\n",defesa_p,defesa_p+2);
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
                        printf("\nVocê vence a batalha!\n");
                        printf("\n************************************************************\n");
                        system("pause");
                        system("cls");
                        luta=0;
                        vida_zumbi=22;
                        //////////////////////////////////////////////////
                        printf("\nVocê encontrou uma Poção de Vida Média com o inimigo!\n");
                        do
                        {
                            if (cont_item>=5)
                            {
                                printf("\nTodos os espaços da mochila estão cheios!\n");
                                add_item++;
                            }
                            else if (strcmp(mochila[cont_item],"Vazio")==0)
                            {
                                strcpy(mochila[cont_item],"Poção de Vida Média");//item que vai ser recebido
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
                printf("\n\nSua vida atual é %.2f, seu ataque é %.2f e sua defesa é %.2f .\n\n",vida_p,ataque_p,defesa_p);
                system("pause");
                system("cls");
            }
            printf("Você perdeu sua tocha graças a esse ocorrido, mas não foi um grande problema...\n");
            system("pause");
            system("cls");
            printf("\nDepois desse evento infortuno, você por sorte encontra uma tocha presa a parede, então pensa ser um bom momento para usar sua mochila agora que parece seguro e pegar a tocha para ajudar a iluniar o caminho...\n");
            printf("\n\t (1)- Usar mochila! \t (2)- Não usar!");
            //////////////////////se usar mochila após fechar é pego desprevinido por uma aranha e entra em combate
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
                    printf("Opção inválida\n");
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
                    printf("\nVocê não possuí nenhum item!\n");
                    item_escolha++;
                    pre_teste=1;
                    //Voltar para escolha de ação
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
                                printf("\nEscolha um item válido!\n");
                                system("pause");
                                system("cls");
                            }
                        }
                        while(char_int==0);
                        ////////////////////////////////////////////////////
                        if (strcmp(mochila[cont_mochila],"Vazio")==0)
                        {
                            system("cls");
                            printf("\nSlot selecionado está vazio.\n");
                            system("pause");
                            system("cls");
                        }
                        else if (strcmp(mochila[cont_mochila],"Poção de Vida Pequena")==0)
                        {
                            printf("\nPoção de Vida Pequena utilizada, +30 de vida ...\n");
                            for (cont_mochila2=0; cont_mochila2<30; cont_mochila2++)
                                if (vida_p<vida_pmax)
                                    vida_p++;
                            printf("\nSua vida atual é %.2f .\n",vida_p);
                            strcpy(mochila[cont_mochila],"Vazio");
                            item_escolha++;
                        }
                        else if (strcmp(mochila[cont_mochila],"Poção de Vida Média")==0)
                        {
                            printf("\nPoção de Vida Média utilizada, +50 de vida ...\n");
                            for (cont_mochila2=0; cont_mochila2<50; cont_mochila2++)
                                if (vida_p<vida_pmax)
                                    vida_p++;
                            printf("\nSua vida atual é %.2f .\n",vida_p);
                            strcpy(mochila[cont_mochila],"Vazio");
                            item_escolha++;
                        }
                        else if (strcmp(mochila[cont_mochila],"Poção de Vida Grande")==0)
                        {
                            printf("\nPoção de Vida Grande utilizada, +70 de vida ...\n");
                            for (cont_mochila2=0; cont_mochila2<70; cont_mochila2++)
                                if (vida_p<vida_pmax)
                                    vida_p++;
                            printf("\nSua vida atual é %.2f .\n",vida_p);
                            strcpy(mochila[cont_mochila],"Vazio");
                            item_escolha++;
                        }
                        else if (strcmp(mochila[cont_mochila],"Poção de Recuperação Completa")==0)
                        {
                            printf("\nPoção de Recuperação Completa utilizada, seu personagem está com a vida máxima agora...\n");
                            vida_p=vida_pmax;
                            printf("\nSua vida atual é %.2f .\n",vida_p);
                            strcpy(mochila[cont_mochila],"Vazio");
                            item_escolha++;
                        }
                        else if (strcmp(mochila[cont_mochila],"Poção de Dano")==0)
                        {
                            printf("\nPoção de Dano utilizada, seu personagem possuí +2 de dano em seus ataques normais até o final da luta...\n");
                            cont_pot_dano++;
                            printf("\nSeu ataque era de %.2f e agora é %.2f .\n",ataque_p,ataque_p+2);
                            ataque_p+=2;
                            strcpy(mochila[cont_mochila],"Vazio");
                            item_escolha++;
                        }
                        else if (strcmp(mochila[cont_mochila],"Poção de Defesa")==0)
                        {
                            printf("\nPoção de Defesa utilizada, seu personagem possuí +2 de defesa até o final da luta ...\n");
                            cont_pot_defesa++;
                            printf("\nSua defesa era de %.2f agora é %.2f .\n",defesa_p,defesa_p+2);
                            defesa_p+=2;
                            strcpy(mochila[cont_mochila],"Vazio");
                            item_escolha++;
                        }
                    }
                    while (item_escolha==0);
                }
                printf("Ao fechar a mochila você se depara com uma aranha!!\n");
                system("pause");
                system("cls");
                luta=1;
                printf ("\n______________________________________________________________________________________________________________________________________________________________________\n");
                printf ("\n\t A aranha Aracne é uma aranha gigantesca, do tamanho do ser humano. Possui pernas fortissímas, de modo que possa saltar em seus alvos e cravar suas presas nele \n \t Ataque: Corpo a Corpo, Imobilização  \n \t Dano:25 ATK   \n \t Vida: 18 HP");
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
                        printf("\nVocê ataca o inimigo!\n");
                        vida_aranha=vida_aranha-ataque_p;
                        printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_p,vida_aranha);
                        vida_p=(vida_p-(ataque_aranha-defesa_p));
                        printf("\nVoce bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",defesa_p,(ataque_aranha-defesa_p),vida_p);
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    case 2:
                        ataque_aranha=25;
                        printf("\nVoce se defende!\n");
                        vida_p=(vida_p-(ataque_aranha-(defesa_p+2)));
                        printf("\nVocê bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",(defesa_p+2),(ataque_aranha-(defesa_p+2)),vida_p);
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    case 3:
                        ataque_aranha=25;
                        if (tempo_recarga!=0)
                        {
                            printf("\nSeu ataque forte está carregando...\n");
                        }
                        else if (tempo_recarga==0)
                        {
                            printf("\nVocê usa seu ataque forte, causando dano extra porém se deixando vulnerável!\n");
                            vida_aranha=vida_aranha-ataquef_p;
                            printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida!\n",ataquef_p,vida_aranha);
                            vida_p=(vida_p-ataque_aranha);
                            printf("\nVocê recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_aranha,vida_p);
                            tempo_recarga=tempo_recargamax;
                        }
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
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
                            printf("\nVocê não possuí nenhum item!\n");
                            item_escolha++;
                            pre_teste=1;
                            //Voltar para escolha de ação
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
                                        printf("\nEscolha um item válido!\n");
                                        system("pause");
                                        system("cls");
                                    }
                                }
                                while(char_int==0);
                                ////////////////////////////////////////////////////
                                if (strcmp(mochila[cont_mochila],"Vazio")==0)
                                {
                                    system("cls");
                                    printf("\nSlot selecionado está vazio.\n");
                                    system("pause");
                                    system("cls");
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Vida Pequena")==0)
                                {
                                    printf("\nPoção de Vida Pequena utilizada, +30 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<30; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual é %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Vida Média")==0)
                                {
                                    printf("\nPoção de Vida Média utilizada, +50 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<50; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual é %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Vida Grande")==0)
                                {
                                    printf("\nPoção de Vida Grande utilizada, +70 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<70; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual é %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Recuperação Completa")==0)
                                {
                                    printf("\nPoção de Recuperação Completa utilizada, seu personagem está com a vida máxima agora...\n");
                                    vida_p=vida_pmax;
                                    printf("\nSua vida atual é %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Dano")==0)
                                {
                                    printf("\nPoção de Dano utilizada, seu personagem possuí +2 de dano em seus ataques normais até o final da luta...\n");
                                    cont_pot_dano++;
                                    printf("\nSeu ataque era de %.2f e agora é %.2f .\n",ataque_p,ataque_p+2);
                                    ataque_p+=2;
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Defesa")==0)
                                {
                                    printf("\nPoção de Defesa utilizada, seu personagem possuí +2 de defesa até o final da luta ...\n");
                                    cont_pot_defesa++;
                                    printf("\nSua defesa era de %.2f agora é %.2f .\n",defesa_p,defesa_p+2);
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
                        printf("\nVocê vence a batalha!\n");
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
            printf("\nAgora pronto para seguir, com a tocha em mãos você segue andando pela Cripta...\n");
            system("pause");
            system("cls");
            printf("\nVocê encontra uma mochila perto a um cadaver, você primeiramente checa se ele está realmente morto e ele realmente aparenta estar... Então você vasculha a mochila...\n");
            printf("\nNela você adquiri 1 Poção de Vida Grande e 1 Poção de Defesa, além de algumas anotações...\n");
            cont_item=0;
            add_item=0;
            do
            {
                if (cont_item>=5)
                {
                    printf("\nTodos os espaços da mochila estão cheios!\n");
                    add_item++;
                }
                else if (strcmp(mochila[cont_item],"Vazio")==0)
                {
                    strcpy(mochila[cont_item],"Poção de Vida Grande");//item que vai ser recebido
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
                    printf("\nTodos os espaços da mochila estão cheios!\n");
                    add_item++;
                }
                else if (strcmp(mochila[cont_item],"Vazio")==0)
                {
                    strcpy(mochila[cont_item],"Poção de Defesa");//item que vai ser recebido
                    add_item++;
                }
                cont_item++;
            }
            while (add_item==0);
            cont_item=0;
            add_item=0;
            system("pause");
            system("cls");
            printf("\nANOTAÇÕES: -...Então é preciso tomar cuidado, diversos desafios estão por vir... mas no final é preciso enfrentar... se não coseguir derrota-lo... Acho que estou ficando louco, tenho a impressão que é impossível sair daqui.\n");
            printf("\nVocê reflete sobre o que conseguiu ler, e lembra que de fato havia alguma obstáculo final a ser derrotado, seu mestre havia dito a ele -'...no final, algo o aguarda, você vai entender o real desafio quando alcançar teu objetivo...'.\n");
            printf("\nEntão você levanta e segue seu caminho...\n");
            system("pause");
            system("cls");
            /////////////////////ENIGMA
            printf("\nCaminhando pelos corredores você avista saida para uma área maior com tochas e grandes estátuas que aparentam ser egípcias\n");
            printf("\nVocê entra nessa nova sala, andando com cautela você atravessa entre as estátuas gigantes com labaredas de fogo até uma enorme porta que bloqueia seu caminho, e nela uma escrita...\n");
            printf("\nExiste também um mecanismo no chão de placa de pressão que quando você pisa uma estátua ao seu lado se vira para ti...\n");
            system("pause");
            printf("\n'Ao amanhecer, possuí quatro patas, ao entardecer apenas duas e ao anoitecer possuí três . . . ' \n");
            printf("\n -Uma charada..., eu ja escutei essa antes... preciso descobrir a resposta para seguir meu caminho...e algo me diz que é melhor eu não errar...\n");
            printf("\n -Patas... é provável que seja um animal...\n");
            printf("\n\t (1)- Esfinge! \t (2)- Macaco! \t (3)- Homem! \t (4)- Camelo! \t (5)- Cobra \t (6)- Falcão\n");
            ////////////////////se errar toma flechada -20 de vida/ textinho pra cada opcao/ e texto dele realizando quando escolhe a 3 do pq é a certa
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
                    printf("Opção inválida\n");
                    if (armadilha3=='0')
                        armadilha4='1';
                }
                if (armazenar==1)

                {
                    printf("Esfinge? Resposta errada....\n");
                    printf("Você leva 20 de dano com uma flechada\n");
                    vida_p=vida_p-20;
                    printf("Sua vida atual é de %.2f",vida_p);
                }
                if (vida_p<=0)
                {
                    system("cls");
                    printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                    system("pause");
                    system("cls");
                    exit(0);
                }
                if (armazenar==2)

                {
                    printf("Macaco? Resposta errada....\n");
                    printf("Você leva 20 de dano com uma flechada\n");
                    vida_p=vida_p-20;
                    printf("Sua vida atual é de %.2f",vida_p);
                }
                if (vida_p<=0)
                {
                    system("cls");
                    printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                    system("pause");
                    system("cls");
                    exit(0);
                }
                if (armazenar==4)

                {
                    printf("Camelo? Resposta errada....\n");
                    printf("Você leva 20 de dano com uma flechada\n");
                    vida_p=vida_p-20;
                    printf("Sua vida atual é de %.2f",vida_p);
                }
                if (vida_p<=0)
                {
                    system("cls");
                    printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                    system("pause");
                    system("cls");
                    exit(0);
                }
                if (armazenar==5)

                {
                    printf("Cobra? Resposta errada....\n");
                    printf("Você leva 20 de dano com uma flechada\n");
                    vida_p=vida_p-20;
                    printf("Sua vida atual é de %.2f",vida_p);
                }
                if (vida_p<=0)
                {
                    system("cls");
                    printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                    system("pause");
                    system("cls");
                    exit(0);
                }
                if (armazenar==6)

                {
                    printf("Falcão? Resposta errada....\n");
                    printf("Você leva 20 de dano com uma flechada\n");
                    vida_p=vida_p-20;
                    printf("Sua vida atual é de %.2f",vida_p);
                }
                if (vida_p<=0)
                {
                    system("cls");
                    printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                    system("pause");
                    system("cls");
                    exit(0);
                }
            }
            while(armadilha4!='0');
            if (armazenar==3)

            {
                printf("Resposta certa !!\n");
                printf("O homem ao nascer anda com 4 patas, vulgo engatinhando, no meio de sua vida com 2 patas, vulgo com os pés, e quando está velho, usa bengala, o que o faz ter 3 patas\n");
            }
            ////////////////////FIM ENGIMA
            printf("\nAs portas se abrem e uma ventania passa por você... então, com sua tocha em mãos você segue pela porta e desce pela escadaria . . . \n");
            system("pause");
            system("cls");
            ///////////////////////////////////////////////////////////////////////////////////////////////////////fim capitulo 2****
            printf("\nCapítulo 3 : A descida para a escuridão!!!\n");
            printf("\n*************************************************************| Você continua a se aprofundar na Cripta . . . |*************************************************************\n");
            printf("\n... Você segue descendo nas profundezas da Cripta, saindo daquela área anterior sente que desafios maiores ainda estão por vir...\n");
            printf("\nEntão decide para um momento para repor as energias e olhar seu equipamento atual :\n");
            printf("\nSeus status e equipamentos agora são :\n");
            printf("\n\n\n\n_____________________________________________________________________________________________\n\n\n\n");
            printf("\nVida Máxima: %.2f \t Vida Atual: %.2f \t Ataque: %.2f \t Defesa: %.2f \n",vida_pmax,vida_p,ataque_p,defesa_p);
            printf("\nMOCHILA :\n");
            for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                printf ("\t(%i)- %s\n",cont_mochila+1,mochila[cont_mochila]);
            printf("\n\n\n\n_____________________________________________________________________________________________\n\n\n\n");
            printf("\nDeseja utilizar a mochila?\n");
            printf("\n\t (1)- Usar mochila! \t (2)- Não usar!\n");
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
                    printf("Opção inválida\n");
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
                    printf("\nVocê não possuí nenhum item!\n");
                    item_escolha++;
                    pre_teste=1;
                    //Voltar para escolha de ação
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
                                printf("\nEscolha um item válido!\n");
                                system("pause");
                                system("cls");
                            }
                        }
                        while(char_int==0);
                        ////////////////////////////////////////////////////
                        if (strcmp(mochila[cont_mochila],"Vazio")==0)
                        {
                            system("cls");
                            printf("\nSlot selecionado está vazio.\n");
                            system("pause");
                            system("cls");
                        }
                        else if (strcmp(mochila[cont_mochila],"Poção de Vida Pequena")==0)
                        {
                            printf("\nPoção de Vida Pequena utilizada, +30 de vida ...\n");
                            for (cont_mochila2=0; cont_mochila2<30; cont_mochila2++)
                                if (vida_p<vida_pmax)
                                    vida_p++;
                            printf("\nSua vida atual é %.2f .\n",vida_p);
                            strcpy(mochila[cont_mochila],"Vazio");
                            item_escolha++;
                        }
                        else if (strcmp(mochila[cont_mochila],"Poção de Vida Média")==0)
                        {
                            printf("\nPoção de Vida Média utilizada, +50 de vida ...\n");
                            for (cont_mochila2=0; cont_mochila2<50; cont_mochila2++)
                                if (vida_p<vida_pmax)
                                    vida_p++;
                            printf("\nSua vida atual é %.2f .\n",vida_p);
                            strcpy(mochila[cont_mochila],"Vazio");
                            item_escolha++;
                        }
                        else if (strcmp(mochila[cont_mochila],"Poção de Vida Grande")==0)
                        {
                            printf("\nPoção de Vida Grande utilizada, +70 de vida ...\n");
                            for (cont_mochila2=0; cont_mochila2<70; cont_mochila2++)
                                if (vida_p<vida_pmax)
                                    vida_p++;
                            printf("\nSua vida atual é %.2f .\n",vida_p);
                            strcpy(mochila[cont_mochila],"Vazio");
                            item_escolha++;
                        }
                        else if (strcmp(mochila[cont_mochila],"Poção de Recuperação Completa")==0)
                        {
                            printf("\nPoção de Recuperação Completa utilizada, seu personagem está com a vida máxima agora...\n");
                            vida_p=vida_pmax;
                            printf("\nSua vida atual é %.2f .\n",vida_p);
                            strcpy(mochila[cont_mochila],"Vazio");
                            item_escolha++;
                        }
                        else if (strcmp(mochila[cont_mochila],"Poção de Dano")==0)
                        {
                            printf("\nPoção de Dano utilizada, seu personagem possuí +2 de dano em seus ataques normais até o final da luta...\n");
                            cont_pot_dano++;
                            printf("\nSeu ataque era de %.2f e agora é %.2f .\n",ataque_p,ataque_p+2);
                            ataque_p+=2;
                            strcpy(mochila[cont_mochila],"Vazio");
                            item_escolha++;
                        }
                        else if (strcmp(mochila[cont_mochila],"Poção de Defesa")==0)
                        {
                            printf("\nPoção de Defesa utilizada, seu personagem possuí +2 de defesa até o final da luta ...\n");
                            cont_pot_defesa++;
                            printf("\nSua defesa era de %.2f agora é %.2f .\n",defesa_p,defesa_p+2);
                            defesa_p+=2;
                            strcpy(mochila[cont_mochila],"Vazio");
                            item_escolha++;
                        }
                    }
                    while (item_escolha==0);
                }
            }

            system("cls");
            printf("\nDurante essa transição, você veio explorando os arredores e se depara com uma mesa de madeira que parecia ser de um alquimista...\n");
            system("pause");
            printf("\nVocê deseja interagir com ela, quem sabe não encontra uma poção...\n");
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
                    printf("Opção inválida\n");
                    if (armadilha3=='0')
                        armadilha4='1';
                }
            }
            while(armadilha4!='0');
            if (armazenar==1)
            {
                printf("Você conseguiu uma Poção de Recuperação Completa!!\n");
                vida_p-=45;
                printf("Mas como consequência, encostou sua mão em um ácido e perdeu 45 de vida, sua vida atual é de %.2f\n",vida_p);
                do
                {
                    if (cont_item>=5)
                    {
                        printf("\nTodos os espaços da mochila estão cheios!\n");
                        add_item++;
                    }
                    else if (strcmp(mochila[cont_item],"Vazio")==0)
                    {
                        strcpy(mochila[cont_item],"Poção de Recuperação Completa");//item que vai ser recebido
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
                printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                system("pause");
                system("cls");
                exit(0);
            }
            printf("\nContinuando seu caminho é possível ver a mudança no cenário...\n");
            printf("\nAs paredes parecem o interior de uma caverna, o espaço aumentou relativamente, machas de sangues são frequentes, cabeças penduradas, alguns amuletos de adoração como ornametons improvisados com ossos e estacas de madeira...\n");
            system("pause");
            system("cls");
            printf("\nDerrepente uma lança é jogada em sua direção, você apenas tem tempo de sair em parte do caminho, tomando -20 de dano...\n");
            system("pause");
            vida_p-=20;
            printf("\nUm troll avança em sua direção com tudo empunhando um tronco gigante . . .\n");
            system("pause");
            system("cls");
            ////////////////////////////combate com troll lanceiro/

            printf ("\n______________________________________________________________________________________________________________________________________________________________________\n");
            printf ("\n\t Descrição: É uma criatura grande e forte, mas ao mesmo tempo lento e primitivo, preferem ficar sozinhos e isolados para caçar sua comida. \n\t Arma: Tronco de Árvore \n\t Dano: 35 ATK \n\t Vida: 40 HP");
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
                    printf("\nVocê ataca o inimigo!\n");
                    vida_troll=vida_troll-ataque_p;
                    printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_p,vida_troll);
                    vida_p-=(ataque_troll-defesa_p);
                    printf("\nVoce bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",defesa_p,ataque_troll-defesa_p,vida_p);
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case 2:
                    ataque_troll=35;

                    printf("\nVoce se defende!\n");
                    vida_p=(vida_p-(ataque_troll-(defesa_p+2)));
                    printf("\nVocê bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",(defesa_p+2),(ataque_troll-(defesa_p+2)),vida_p);
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case 3:

                    ataque_troll=35;
                    if (tempo_recarga!=0)
                    {
                        printf("\nSeu ataque forte está carregando...\n");
                    }
                    else if (tempo_recarga==0)
                    {
                        printf("\nVocê usa seu ataque forte, causando dano extra porém se deixando vulnerável!\n");
                        vida_troll=vida_troll-ataquef_p;
                        printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida!\n",ataquef_p,vida_troll);
                        vida_p=(vida_p-ataque_troll);
                        printf("\nVocê recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_troll,vida_p);
                        tempo_recarga=tempo_recargamax;
                    }
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
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
                        printf("\nVocê não possuí nenhum item!\n");
                        item_escolha++;
                        pre_teste=1;
                        //Voltar para escolha de ação
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
                                    printf("\nEscolha um item válido!\n");
                                    system("pause");
                                    system("cls");
                                }
                            }
                            while(char_int==0);
                            ////////////////////////////////////////////////////
                            if (strcmp(mochila[cont_mochila],"Vazio")==0)
                            {
                                system("cls");
                                printf("\nSlot selecionado está vazio.\n");
                                system("pause");
                                system("cls");
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Vida Pequena")==0)
                            {
                                printf("\nPoção de Vida Pequena utilizada, +30 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<30; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual é %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Vida Média")==0)
                            {
                                printf("\nPoção de Vida Média utilizada, +50 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<50; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual é %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Vida Grande")==0)
                            {
                                printf("\nPoção de Vida Grande utilizada, +70 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<70; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual é %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Recuperação Completa")==0)
                            {
                                printf("\nPoção de Recuperação Completa utilizada, seu personagem está com a vida máxima agora...\n");
                                vida_p=vida_pmax;
                                printf("\nSua vida atual é %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Dano")==0)
                            {
                                printf("\nPoção de Dano utilizada, seu personagem possuí +2 de dano em seus ataques normais até o final da luta...\n");
                                cont_pot_dano++;
                                printf("\nSeu ataque era de %.2f e agora é %.2f .\n",ataque_p,ataque_p+2);
                                ataque_p+=2;
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Defesa")==0)
                            {
                                printf("\nPoção de Defesa utilizada, seu personagem possuí +2 de defesa até o final da luta ...\n");
                                cont_pot_defesa++;
                                printf("\nSua defesa era de %.2f agora é %.2f .\n",defesa_p,defesa_p+2);
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
                    printf("\nVocê vence a batalha!\n");
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
            printf("\n\nSua vida atual é %.2f, seu ataque é %.2f e sua defesa é %.2f .\n\n",vida_p,ataque_p,defesa_p);
            system("pause");
            system("cls");
            //////////////////////////
            printf("O Troll dropou uma Poção de dano!!\n");
            do
            {
                if (cont_item>=5)
                {
                    printf("\nTodos os espaços da mochila estão cheios!\n");
                    add_item++;
                }
                else if (strcmp(mochila[cont_item],"Vazio")==0)
                {
                    strcpy(mochila[cont_item],"Poção de Dano");//item que vai ser recebido
                    add_item++;
                }
                cont_item++;
            }
            while (add_item==0);
            cont_item=0;
            add_item=0;
            system("pause");
            system("cls");
            printf("\nOfegante após a luta, você procura um local para descansar... e percebe que existe uma abertura mais a frente...\n");
            printf("\nVocê entra e se senta, decide comer um pouco de comida que havia achado mais cedo...\n");
            system("pause");
            system("cls");
            printf("\nRefletindo um pouco sobre o que está acontecendo você vê mensagens de socorro nas paredes marcadas a sangue...\n");
            printf("\nVocê tenta manter sua cabeça centrada no objetivo, mas até isso começa a ser duvidoso para ti... parece que um incerteza começa a tomar conta de ti...\n");
            system("pause");
            system("cls");
            printf("\n -Preciso continuar, preciso chegar ao final, não importa o que eu pense, tenho que fazer isso por eles...\n");
            printf("\nMas até sobre 'eles',as pessoas das quais você se importa, você começa a se questionar, será que realmente vale a pena levar isso adiante por conta deles, você nem sabe aonde quer chegar...\n");
            system("pause");
            system("cls");
            printf("\nSe levantando, você repara em um tipo de altar de adoração e decide verifica-lo...\n");
            printf("\nEle é constituido de madeiras e cordas que amarram ossos a ele, num formato bem estranho, com um desenho ao fundo, parece ser para alguma divindade...\n");
            printf("\nCertamente pertence as criaturas aqui embaixo, será que deve interagir com isso . . .\n");
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
                    printf("Opção inválida\n");
                    if (armadilha3=='0')
                        armadilha4='1';
                }
            }
            while(armadilha4!='0');
            if (armazenar==1)
            {
                vida_pmax+=5;
                vida_p=vida_pmax;
                printf("Ao interagir com o Altar você recuperou sua vida totalmente e ainda ganhou um bônus de +5, sua vida é de %.2f\n",vida_p);
            }
            if (armazenar==2)
            {
                printf("Um zumbi surge de uma pilha de ossos e te ataca!!\n");
                //////////////LUTA COM ZUMBI

                printf ("\n______________________________________________________________________________________________________________________________________________________________________\n");
                printf ("\n\t Descrição: É um zumbi que possui uma velocidade acima da normal, comparável com a de um humano comum. Suas mordidas podem arrancar mãos e pedaços grandes de membros\n\t Arma: Espada de Crânios \n\t Dano: 30 ATK \n\t Vida: 22 HP");
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
                        printf("\nVocê ataca o inimigo!\n");
                        vida_zumbi=vida_zumbi-ataque_p;
                        printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_p,vida_zumbi);
                        vida_p=(vida_p-(ataque_zumbi-defesa_p));
                        printf("\nVoce bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",defesa_p,(ataque_zumbi-defesa_p),vida_p);
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    case 2:
                        ataque_zumbi=30;
                        printf("\nVoce se defende!\n");
                        vida_p=(vida_p-(ataque_zumbi-(defesa_p+2)));
                        printf("\nVocê bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",(defesa_p+2),(ataque_zumbi-(defesa_p+2)),vida_p);
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    case 3:
                        ataque_zumbi=30;
                        if (tempo_recarga!=0)
                        {
                            printf("\nSeu ataque forte está carregando...\n");
                        }
                        else if (tempo_recarga==0)
                        {
                            printf("\nVocê usa seu ataque forte, causando dano extra porém se deixando vulnerável!\n");
                            vida_zumbi=vida_zumbi-ataquef_p;
                            printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida!\n",ataquef_p,vida_zumbi);
                            vida_p=(vida_p-ataque_zumbi);
                            printf("\nVocê recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_zumbi,vida_p);
                            tempo_recarga=tempo_recargamax;
                        }
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
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
                            printf("\nVocê não possuí nenhum item!\n");
                            item_escolha++;
                            pre_teste=1;
                            //Voltar para escolha de ação
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
                                        printf("\nEscolha um item válido!\n");
                                        system("pause");
                                        system("cls");
                                    }
                                }
                                while(char_int==0);
                                ////////////////////////////////////////////////////
                                if (strcmp(mochila[cont_mochila],"Vazio")==0)
                                {
                                    system("cls");
                                    printf("\nSlot selecionado está vazio.\n");
                                    system("pause");
                                    system("cls");
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Vida Pequena")==0)
                                {
                                    printf("\nPoção de Vida Pequena utilizada, +30 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<30; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual é %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Vida Média")==0)
                                {
                                    printf("\nPoção de Vida Média utilizada, +50 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<50; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual é %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Vida Grande")==0)
                                {
                                    printf("\nPoção de Vida Grande utilizada, +70 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<70; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual é %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Recuperação Completa")==0)
                                {
                                    printf("\nPoção de Recuperação Completa utilizada, seu personagem está com a vida máxima agora...\n");
                                    vida_p=vida_pmax;
                                    printf("\nSua vida atual é %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Dano")==0)
                                {
                                    printf("\nPoção de Dano utilizada, seu personagem possuí +2 de dano em seus ataques normais até o final da luta...\n");
                                    cont_pot_dano++;
                                    printf("\nSeu ataque era de %.2f e agora é %.2f .\n",ataque_p,ataque_p+2);
                                    ataque_p+=2;
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Defesa")==0)
                                {
                                    printf("\nPoção de Defesa utilizada, seu personagem possuí +2 de defesa até o final da luta ...\n");
                                    cont_pot_defesa++;
                                    printf("\nSua defesa era de %.2f agora é %.2f .\n",defesa_p,defesa_p+2);
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
                        printf("\nVocê vence a batalha!\n");
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
                printf("\n\nSua vida atual é %.2f, seu ataque é %.2f e sua defesa é %.2f .\n\n",vida_p,ataque_p,defesa_p);
                system("pause");
                system("cls");
                printf("O Zumbi dropou Poção de Vida Média e Poção de Defesa!!\n");
                system("pause");
                system("cls");
                do
                {
                    if (cont_item>=5)
                    {
                        printf("\nTodos os espaços da mochila estão cheios!\n");
                        add_item++;
                    }
                    else if (strcmp(mochila[cont_item],"Vazio")==0)
                    {
                        strcpy(mochila[cont_item],"Poção de Vida Média");//item que vai ser recebido
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
                        printf("\nTodos os espaços da mochila estão cheios!\n");
                        add_item++;
                    }
                    else if (strcmp(mochila[cont_item],"Vazio")==0)
                    {
                        strcpy(mochila[cont_item],"Poção de Defesa");//item que vai ser recebido
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
                printf("Ao destruir o Altar você levou 20 de dano, sua vida é de %.2f\n",vida_p);
                ataque_p+=1;
                defesa_p+=1;
                printf("Mas aumentou seu ataque e sua defesa em 1, sendo agora respectivamente: %.2f e %.2f\n",ataque_p,defesa_p);
            }
            if (vida_p<=0)
            {
                system("cls");
                printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                system("pause");
                system("cls");
                exit(0);
            }
            printf("\nSaindo do lugar onde você estava, você escuta um barulho estranho se aproximando, quando percebe um bando de orcs correndo pelo corredor vão na sua direção ...\n");
            printf("\nA unica opção a correr, então você guarda sua espada e começa a correr o mais rápido possível...\n");
            system("pause");
            system("cls");
            printf("\nPassa por diversas salas e objetos estranhos, virando nas curvas que encontra, até chegar a uma pilha de corpos numa entrada estranha, e tem a chance de se esconder ali...\n");
            printf("\nVocê não conseguiria correr mais, então sem pensar entra passa pelas teias entra ali e entra na pilha tentando ficar imóvel, o bando passa por ali, o chão treme...\n");
            system("pause");
            system("cls");
            printf("\nQuando a área parece estar livre de inimigos você sai da pilha de corpos, porém o local parecia o covil de uma aranha...\n");
            printf("\nEla desce do teto e cai entre você e a saída, ela parece diferente, bem maior que outras aranhas vai ser preciso tomar um cuidado extra . . .\n");

            ////////////////////LUTA CONTR ARANHA GIGANTE

            printf ("\n______________________________________________________________________________________________________________________________________________________________________\n");
            printf ("\n\t A aranha Aracne é uma aranha gigantesca, do tamanho do ser humano. Possui pernas fortissímas, de modo que possa saltar em seus alvos e cravar suas presas nele \n \t Ataque: Corpo a Corpo, Imobilização  \n \t Dano:25 ATK   \n \t Vida: 18 HP");
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
                    printf("\nVocê ataca o inimigo!\n");
                    vida_aranha=vida_aranha-ataque_p;
                    printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_p,vida_aranha);
                    vida_p=(vida_p-(ataque_aranha-defesa_p));
                    printf("\nVoce bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",defesa_p,(ataque_aranha-defesa_p),vida_p);
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case 2:
                    ataque_aranha=25;
                    printf("\nVoce se defende!\n");
                    vida_p=(vida_p-(ataque_aranha-(defesa_p+2)));
                    printf("\nVocê bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",(defesa_p+2),(ataque_aranha-(defesa_p+2)),vida_p);
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case 3:
                    ataque_aranha=25;
                    if (tempo_recarga!=0)
                    {
                        printf("\nSeu ataque forte está carregando...\n");
                    }
                    else if (tempo_recarga==0)
                    {
                        printf("\nVocê usa seu ataque forte, causando dano extra porém se deixando vulnerável!\n");
                        vida_aranha=vida_aranha-ataquef_p;
                        printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida!\n",ataquef_p,vida_aranha);
                        vida_p=(vida_p-ataque_aranha);
                        printf("\nVocê recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_aranha,vida_p);
                        tempo_recarga=tempo_recargamax;
                    }
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
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
                        printf("\nVocê não possuí nenhum item!\n");
                        item_escolha++;
                        pre_teste=1;
                        //Voltar para escolha de ação
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
                                    printf("\nEscolha um item válido!\n");
                                    system("pause");
                                    system("cls");
                                }
                            }
                            while(char_int==0);
                            ////////////////////////////////////////////////////
                            if (strcmp(mochila[cont_mochila],"Vazio")==0)
                            {
                                system("cls");
                                printf("\nSlot selecionado está vazio.\n");
                                system("pause");
                                system("cls");
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Vida Pequena")==0)
                            {
                                printf("\nPoção de Vida Pequena utilizada, +30 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<30; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual é %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Vida Média")==0)
                            {
                                printf("\nPoção de Vida Média utilizada, +50 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<50; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual é %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Vida Grande")==0)
                            {
                                printf("\nPoção de Vida Grande utilizada, +70 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<70; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual é %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Recuperação Completa")==0)
                            {
                                printf("\nPoção de Recuperação Completa utilizada, seu personagem está com a vida máxima agora...\n");
                                vida_p=vida_pmax;
                                printf("\nSua vida atual é %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Dano")==0)
                            {
                                printf("\nPoção de Dano utilizada, seu personagem possuí +2 de dano em seus ataques normais até o final da luta...\n");
                                cont_pot_dano++;
                                printf("\nSeu ataque era de %.2f e agora é %.2f .\n",ataque_p,ataque_p+2);
                                ataque_p+=2;
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Defesa")==0)
                            {
                                printf("\nPoção de Defesa utilizada, seu personagem possuí +2 de defesa até o final da luta ...\n");
                                cont_pot_defesa++;
                                printf("\nSua defesa era de %.2f agora é %.2f .\n",defesa_p,defesa_p+2);
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
                    printf("\nVocê vence a batalha!\n");
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
            printf("\n\nSua vida atual é %.2f, seu ataque é %.2f e sua defesa é %.2f .\n\n",vida_p,ataque_p,defesa_p);
            system("pause");
            system("cls");
            defesa_p+=2;
            printf("A luta contra a Aranha Gigante dropou o Peitoral de Mithril, que aumentou sua defesa em 2, sua defesa agora é de %.2f\n",defesa_p);
            system("pause");
            system("cls");

            printf("\nAinda meio tonto, você sai do covil da aranha e segue para uma escadaria de pedregulhos que leva para baixo...\n");
            printf("\nAo final do corredor que você se esncontra existe um outro altar, esse parece diferente dos outros... existem escritas nele e em volta, porém você não as entende...\n");
            printf("\nExistem dois buracos, que são possíveis de colocar a mão . . .\n");
            printf("\n\t (1)- Colocar a mão no esquerdo! \t (2)- Colocar a mão no direito! \t (3)- Colocar em ambos! \t (4)- Seguir teu caminho!\n");
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
                    printf("Opção inválida\n");
                    if (armadilha3=='0')
                        armadilha4='1';
                }
            }
            while(armadilha4!='0');
            if (armazenar==1)
            {
                printf("Você encontrou uma Poção de Vida Pequena!!\n");
                do
                {
                    if (cont_item>=5)
                    {
                        printf("\nTodos os espaços da mochila estão cheios!\n");
                        add_item++;
                    }
                    else if (strcmp(mochila[cont_item],"Vazio")==0)
                    {
                        strcpy(mochila[cont_item],"Poção de Vida Pequena");//item que vai ser recebido
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
                printf("Você encontrou uma Poção de Defesa!!\n");
                do
                {
                    if (cont_item>=5)
                    {
                        printf("\nTodos os espaços da mochila estão cheios!\n");
                        add_item++;
                    }
                    else if (strcmp(mochila[cont_item],"Vazio")==0)
                    {
                        strcpy(mochila[cont_item],"Poção de Defesa");//item que vai ser recebido
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
                printf("Colocando a mão nos 2, o Altar se quebrou e você levou 20 de dano!!\n");
                vida_p-=20;
                printf("Sua vida atual é de %.2f",vida_p);
            }
            if (vida_p<=0)
            {
                system("cls");
                printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                system("pause");
                system("cls");
                exit(0);
            }
            printf("\n... Após mais um período de caminhada você se depara com uma porta de madeira em seu caminho...\n");
            system("pause");
            printf("\nVocê olha pelo buraco da fechadura e vê um orc dentro da sala, mas também alguns livros em cima de uma mesa que te chamam a atenção, eles podem te ajudar nessa jornada ...\n");
            printf("\nEntão você empunha sua arma, e chuta com tudo a porta, e avnça em direção ao orc . . .\n");
            system("pause");
            system("cls");
            ////////////////luta com orc

            printf ("\n______________________________________________________________________________________________________________________________________________________________________\n");
            printf ("\n \t Descrição: Orc é uma criatura com mais de 2,3 metros de altura, verdadeiros armários, com braços e pernas musculosos e gigantescos. Estes não pensam, apenas atacam como feras\n         Possuem machados do tamanho de troncos pequenos de árvores,e, apesar de não pensarem, possuem reflexos e força sobrehumanos");
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
                    printf("\nVocê ataca o inimigo!\n");
                    vida_orc=vida_orc-ataque_p;
                    printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_p,vida_orc);
                    vida_p=(vida_p-(ataque_orc-defesa_p));
                    printf("\nVoce bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",defesa_p,(ataque_orc-defesa_p),vida_p);
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case 2:
                    ataque_orc=40;
                    printf("\nVoce se defende!\n");
                    vida_p=(vida_p-(ataque_orc-(defesa_p+2)));
                    printf("\nVocê bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",(defesa_p+2),(ataque_orc-(defesa_p+2)),vida_p);
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case 3:
                    ataque_orc=40;
                    if (tempo_recarga!=0)
                    {
                        printf("\nSeu ataque forte está carregando...\n");
                    }
                    else if (tempo_recarga==0)
                    {
                        printf("\nVocê usa seu ataque forte, causando dano extra porém se deixando vulnerável!\n");
                        vida_orc=vida_orc-ataquef_p;
                        printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida!\n",ataquef_p,vida_orc);
                        vida_p=(vida_p-ataque_orc);
                        printf("\nVocê recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_orc,vida_p);
                        tempo_recarga=tempo_recargamax;
                    }
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
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
                        printf("\nVocê não possuí nenhum item!\n");
                        item_escolha++;
                        pre_teste=1;
                        //Voltar para escolha de ação
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
                                    printf("\nEscolha um item válido!\n");
                                    system("pause");
                                    system("cls");
                                }
                            }
                            while(char_int==0);
                            ////////////////////////////////////////////////////
                            if (strcmp(mochila[cont_mochila],"Vazio")==0)
                            {
                                system("cls");
                                printf("\nSlot selecionado está vazio.\n");
                                system("pause");
                                system("cls");
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Vida Pequena")==0)
                            {
                                printf("\nPoção de Vida Pequena utilizada, +30 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<30; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual é %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Vida Média")==0)
                            {
                                printf("\nPoção de Vida Média utilizada, +50 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<50; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual é %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Vida Grande")==0)
                            {
                                printf("\nPoção de Vida Grande utilizada, +70 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<70; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual é %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Recuperação Completa")==0)
                            {
                                printf("\nPoção de Recuperação Completa utilizada, seu personagem está com a vida máxima agora...\n");
                                vida_p=vida_pmax;
                                printf("\nSua vida atual é %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Dano")==0)
                            {
                                printf("\nPoção de Dano utilizada, seu personagem possuí +2 de dano em seus ataques normais até o final da luta...\n");
                                cont_pot_dano++;
                                printf("\nSeu ataque era de %.2f e agora é %.2f .\n",ataque_p,ataque_p+2);
                                ataque_p+=2;
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Defesa")==0)
                            {
                                printf("\nPoção de Defesa utilizada, seu personagem possuí +2 de defesa até o final da luta ...\n");
                                cont_pot_defesa++;
                                printf("\nSua defesa era de %.2f agora é %.2f .\n",defesa_p,defesa_p+2);
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
                    printf("\nVocê vence a batalha!\n");
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
            printf("\n\nSua vida atual é %.2f, seu ataque é %.2f e sua defesa é %.2f .\n\n",vida_p,ataque_p,defesa_p);
            system("pause");
            system("cls");
            printf("\nCom o orc derrotado você consegue ler os livros em segurança...\n");
            system("pause");
            printf("\nNeles voê encontra anotações sobre seu amuleto, o que te trouxe a Cripta, ele é uma espécie de chave, que da a direção a ela...\n");
            printf("\nEntão você se recorda de seu mestre, Hiroko, que lhe entregou esse amuleto quando se formou um guerreiro a muito tempo atrás... então retoma um pouco de confiança e segue seu caminho...\n");
            printf("\nÉ perceptível que o objetivo final está próximo, então você tenta se manter firme para o que vier...\n");
            system("pause");
            system("cls");
            printf("\nFinalmente você chega a uma grande abertura onde um portão com grades de ferro está levantado, quando você passa por ele, eles se fecham...\n");
            system("pause");
            printf("\nAdentrando esse local escuro, você perde noção de tempo, de tato, de audição...\n");
            printf("\nUm urro o surpreende e ecoa em toda sua mente, como se alguém gritasse dentro de sua cabeça... você cai no chão, mas rapidamente se levanta...\n");
            printf("\nEncontra uma pequena abertura que a luz conseguia passar, então é uma boa oportunidade de usar sua mochila antes de continuar...\n");
            printf("\n\t (1)- Usar mochila! \t (2)- Não usar!\n");
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
                    printf("Opção inválida\n");
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
                    printf("\nVocê não possuí nenhum item!\n");
                    item_escolha++;
                    pre_teste=1;
                    //Voltar para escolha de ação
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
                                printf("\nEscolha um item válido!\n");
                                system("pause");
                                system("cls");
                            }
                        }
                        while(char_int==0);
                        ////////////////////////////////////////////////////
                        if (strcmp(mochila[cont_mochila],"Vazio")==0)
                        {
                            system("cls");
                            printf("\nSlot selecionado está vazio.\n");
                            system("pause");
                            system("cls");
                        }
                        else if (strcmp(mochila[cont_mochila],"Poção de Vida Pequena")==0)
                        {
                            printf("\nPoção de Vida Pequena utilizada, +30 de vida ...\n");
                            for (cont_mochila2=0; cont_mochila2<30; cont_mochila2++)
                                if (vida_p<vida_pmax)
                                    vida_p++;
                            printf("\nSua vida atual é %.2f .\n",vida_p);
                            strcpy(mochila[cont_mochila],"Vazio");
                            item_escolha++;
                        }
                        else if (strcmp(mochila[cont_mochila],"Poção de Vida Média")==0)
                        {
                            printf("\nPoção de Vida Média utilizada, +50 de vida ...\n");
                            for (cont_mochila2=0; cont_mochila2<50; cont_mochila2++)
                                if (vida_p<vida_pmax)
                                    vida_p++;
                            printf("\nSua vida atual é %.2f .\n",vida_p);
                            strcpy(mochila[cont_mochila],"Vazio");
                            item_escolha++;
                        }
                        else if (strcmp(mochila[cont_mochila],"Poção de Vida Grande")==0)
                        {
                            printf("\nPoção de Vida Grande utilizada, +70 de vida ...\n");
                            for (cont_mochila2=0; cont_mochila2<70; cont_mochila2++)
                                if (vida_p<vida_pmax)
                                    vida_p++;
                            printf("\nSua vida atual é %.2f .\n",vida_p);
                            strcpy(mochila[cont_mochila],"Vazio");
                            item_escolha++;
                        }
                        else if (strcmp(mochila[cont_mochila],"Poção de Recuperação Completa")==0)
                        {
                            printf("\nPoção de Recuperação Completa utilizada, seu personagem está com a vida máxima agora...\n");
                            vida_p=vida_pmax;
                            printf("\nSua vida atual é %.2f .\n",vida_p);
                            strcpy(mochila[cont_mochila],"Vazio");
                            item_escolha++;
                        }
                        else if (strcmp(mochila[cont_mochila],"Poção de Dano")==0)
                        {
                            printf("\nPoção de Dano utilizada, seu personagem possuí +2 de dano em seus ataques normais até o final da luta...\n");
                            cont_pot_dano++;
                            printf("\nSeu ataque era de %.2f e agora é %.2f .\n",ataque_p,ataque_p+2);
                            ataque_p+=2;
                            strcpy(mochila[cont_mochila],"Vazio");
                            item_escolha++;
                        }
                        else if (strcmp(mochila[cont_mochila],"Poção de Defesa")==0)
                        {
                            printf("\nPoção de Defesa utilizada, seu personagem possuí +2 de defesa até o final da luta ...\n");
                            cont_pot_defesa++;
                            printf("\nSua defesa era de %.2f agora é %.2f .\n",defesa_p,defesa_p+2);
                            defesa_p+=2;
                            strcpy(mochila[cont_mochila],"Vazio");
                            item_escolha++;
                        }
                    }
                    while (item_escolha==0);
                }
            }

            printf("\nContinuando a caminha sem saber por quanto tempo, você encontra uma descida e uma luz diferente ao final dela, então você respira fundo e segue para o seu destino final . . .\n");
            //////////////////////////////////////////////////////////////////////////////////////////////fim capitulo 3****
            system("color 40");
            printf("\nChegando no fim da Cripta, você se depara com um gigante que estava aguardando na saída, e a única maneira de passar por ele é derrotando-o.\n");
            printf("\nCapítulo Final : O Confronto com seu objetivo final!!!\n");
            printf("\n*************************************************************| ? ? ? |*************************************************************\n");
            printf("\nSem saber o que esperar do que está por vir, você pensa que vai poder finalmente sair desse lugar assim que acabar, que todo o sofrimento vai ter fim...\n");
            printf("\nVocê não se sente mais tanto um herói da história mas sim uma pessoa infortuna...\n");
            system("pause");
            printf("\nSua cabeça começa a embaralhar e você tem a sensação de dejavu, como se ja tivesse estado ali antes . . .\n");
            system("pause");
            system("cls");
            printf("\nMas você vai ao final disso, então no final da escada, você caminha pelo corredor que aumenta... chegando a uma enorme abertura onde você avista um mostro gigante e deformado no que parece ser um enorme foço...\n");
            printf("\nVocê tenta focar sua mente que parece quebrada e parte para o confronto . . .\n");
            system("pause");
            system("cls");
            printf("\n\n*******************************************************************| O GUARDIÃO |*******************************************************************\n\n");
            printf("\nO guardião se levanta e ruge ...\n");
            printf("\n -O que veio fazer aqui?\n");
            printf("\nVocê sente um calafrio e responde :\n");
            printf("\n -Vim acabar com isso!\n");
            printf("\nO guardião ri.....\n");
            printf("\n- Hahahahah.... Acha que pode me derrotar? Você sabe muito bem o que vai acontecer, isso nunca vai acabar... Esse lugar é amaldiçoado, eu sou amaldiçoado... você é amaldiçoado . . . \n");
            printf("\nPor final, você responde e parte pra cima...\n");
            printf("\n -Só sei que tenho que tentar... eu não vou desistir!\n");
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
                    printf("\nVocê ataca o inimigo!\n");
                    vida_boss=vida_boss-ataque_p;
                    printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_p,vida_boss);
                    vida_p-=(ataque_boss-defesa_p);
                    printf("\nVoce bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",defesa_p,ataque_boss-defesa_p,vida_p);
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case 2:
                    ataque_boss=35;

                    printf("\nVoce se defende!\n");
                    vida_p=(vida_p-(ataque_boss-(defesa_p+2)));
                    printf("\nVocê bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",(defesa_p+2),(ataque_boss-(defesa_p+2)),vida_p);
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case 3:

                    ataque_boss=35;
                    if (tempo_recarga!=0)
                    {
                        printf("\nSeu ataque forte está carregando...\n");
                    }
                    else if (tempo_recarga==0)
                    {
                        printf("\nVocê usa seu ataque forte, causando dano extra porém se deixando vulnerável!\n");
                        vida_boss=vida_boss-ataquef_p;
                        printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida!\n",ataquef_p,vida_boss);
                        vida_p=(vida_p-ataque_boss);
                        printf("\nVocê recebe -%.2f de dano e fica com %.2f de vida.\n",ataque_boss,vida_p);
                        tempo_recarga=tempo_recargamax;
                    }
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
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
                        printf("\nVocê não possuí nenhum item!\n");
                        item_escolha++;
                        pre_teste=1;
                        //Voltar para escolha de ação
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
                                    printf("\nEscolha um item válido!\n");
                                    system("pause");
                                    system("cls");
                                }
                            }
                            while(char_int==0);
                            ////////////////////////////////////////////////////
                            if (strcmp(mochila[cont_mochila],"Vazio")==0)
                            {
                                system("cls");
                                printf("\nSlot selecionado está vazio.\n");
                                system("pause");
                                system("cls");
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Vida Pequena")==0)
                            {
                                printf("\nPoção de Vida Pequena utilizada, +30 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<30; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual é %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Vida Média")==0)
                            {
                                printf("\nPoção de Vida Média utilizada, +50 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<50; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual é %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Vida Grande")==0)
                            {
                                printf("\nPoção de Vida Grande utilizada, +70 de vida ...\n");
                                for (cont_mochila2=0; cont_mochila2<70; cont_mochila2++)
                                    if (vida_p<vida_pmax)
                                        vida_p++;
                                printf("\nSua vida atual é %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Recuperação Completa")==0)
                            {
                                printf("\nPoção de Recuperação Completa utilizada, seu personagem está com a vida máxima agora...\n");
                                vida_p=vida_pmax;
                                printf("\nSua vida atual é %.2f .\n",vida_p);
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Dano")==0)
                            {
                                printf("\nPoção de Dano utilizada, seu personagem possuí +2 de dano em seus ataques normais até o final da luta...\n");
                                cont_pot_dano++;
                                printf("\nSeu ataque era de %.2f e agora é %.2f .\n",ataque_p,ataque_p+2);
                                ataque_p+=2;
                                strcpy(mochila[cont_mochila],"Vazio");
                                item_escolha++;
                            }
                            else if (strcmp(mochila[cont_mochila],"Poção de Defesa")==0)
                            {
                                printf("\nPoção de Defesa utilizada, seu personagem possuí +2 de defesa até o final da luta ...\n");
                                cont_pot_defesa++;
                                printf("\nSua defesa era de %.2f agora é %.2f .\n",defesa_p,defesa_p+2);
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
                    printf("\nAgora a vida do BOSS é de %.2f!\n",vida_boss);
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
            printf("\n\nSua vida atual é %.2f, seu ataque é %.2f e sua defesa é %.2f .\n\n",vida_p,ataque_p,defesa_p);
            system("pause");
            system("cls");
////////////////////////////////////////////////////////////
            if (vida_boss<=250)
            {
                printf("Ele nao recebe mais dano facilmente, pois conseguiu uma defesa implacável, ela só vai conseguir ser destruída se você correr para atrás daquela pedra a esquerda, contém um item mágico destruidor de defesas.\n");
                printf("Correndo até lá você não consegue atacar, conseguirá apenas desviar\n");
                printf("*****************************************************************************************************************************\n");
                printf("Aí vem um ataque por cima!!!\n");
                printf("[1]Desviar para esquerda                  [2]Continuar correndo, mas com mais velocidade               [3]Desviar para direita\n");
                do
                {
                    scanf(" %c",&menuboss);
                    switch(menuboss)
                    {
                    case '1':
                        printf("Você conseguiu desviar do ataque do BOSS, continue correndo!!!\n");
                        interativo=0;
                        break;
                    case '2':
                        printf("O BOSS te atingiu e você levou %.2f de dano\n",ataque_boss-defesa_p);
                        vida_p-=(ataque_boss-defesa_p);
                        printf("Sua vida é de %.2f",vida_p);
                        interativo=0;
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    case '3':
                        printf("Você conseguiu desviar do ataque do BOSS, continue correndo!!!\n");
                        interativo=0;
                        break;
                    default:
                        printf("Opção Inválida\n");
                    }
                    if (menuboss=='0')
                        interativo=1;
                }
                while(interativo!=0);
                /////////////////////////////////////////////////////////////////
                printf("\nUm momento para respirar, deseja usar a mochila?\n");
                printf("\n\t (1)- Sim! \t (2)- Não!\n");
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
                            printf("\nVocê não possuí nenhum item!\n");
                            item_escolha++;
                            pre_teste=1;
                            //Voltar para escolha de ação
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
                                        printf("\nEscolha um item válido!\n");
                                        system("pause");
                                        system("cls");
                                    }
                                }
                                while(char_int==0);
                                ////////////////////////////////////////////////////
                                if (strcmp(mochila[cont_mochila],"Vazio")==0)
                                {
                                    system("cls");
                                    printf("\nSlot selecionado está vazio.\n");
                                    system("pause");
                                    system("cls");
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Vida Pequena")==0)
                                {
                                    printf("\nPoção de Vida Pequena utilizada, +30 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<30; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual é %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Vida Média")==0)
                                {
                                    printf("\nPoção de Vida Média utilizada, +50 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<50; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual é %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Vida Grande")==0)
                                {
                                    printf("\nPoção de Vida Grande utilizada, +70 de vida ...\n");
                                    for (cont_mochila2=0; cont_mochila2<70; cont_mochila2++)
                                        if (vida_p<vida_pmax)
                                            vida_p++;
                                    printf("\nSua vida atual é %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Recuperação Completa")==0)
                                {
                                    printf("\nPoção de Recuperação Completa utilizada, seu personagem está com a vida máxima agora...\n");
                                    vida_p=vida_pmax;
                                    printf("\nSua vida atual é %.2f .\n",vida_p);
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Dano")==0)
                                {
                                    printf("\nPoção de Dano utilizada, seu personagem possuí +2 de dano em seus ataques normais até o final da luta...\n");
                                    cont_pot_dano++;
                                    printf("\nSeu ataque era de %.2f e agora é %.2f .\n",ataque_p,ataque_p+2);
                                    ataque_p+=2;
                                    strcpy(mochila[cont_mochila],"Vazio");
                                    item_escolha++;
                                }
                                else if (strcmp(mochila[cont_mochila],"Poção de Defesa")==0)
                                {
                                    printf("\nPoção de Defesa utilizada, seu personagem possuí +2 de defesa até o final da luta ...\n");
                                    cont_pot_defesa++;
                                    printf("\nSua defesa era de %.2f agora é %.2f .\n",defesa_p,defesa_p+2);
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
                        printf("Opção inválida!\n");
                    }
                }
                while(mochilavariavel1!='0');
                ////////////////////////////////////////////////////////////
                printf("Aí vem um ataque lateral!!!\n");
                printf("[1]Desviar para esquerda                  [2]Pular e continuar correndo             [3]Desviar para direita\n");
                do
                {
                    scanf(" %c",&menuboss);
                    switch(menuboss)
                    {
                    case '1':
                        printf("Era um ataque lateral, fez uma escolha errada e levou %.2f de dano!!!\n",ataque_boss-defesa_p);
                        vida_p-=(ataque_boss-defesa_p);
                        printf("Sua vida é de %.2f",vida_p);
                        interativo=0;
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    case '2':
                        printf("Escolha certa!!! Pulou a mão do BOSS e continuou em frente.\n");
                        interativo=0;;
                        break;
                    case '3':
                        printf("Era um ataque lateral, fez uma escolha errada e levou %.2f de dano!!!\n",ataque_boss-defesa_p);
                        vida_p-=(ataque_boss-defesa_p);
                        printf("Sua vida é de %.2f",vida_p);
                        interativo=0;
                        if (vida_p<=0)
                        {
                            system("cls");
                            printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                            system("pause");
                            system("cls");
                            exit(0);
                        }
                        break;
                    default:
                        printf("Opção Inválida\n");
                    }
                    if (menuboss=='0')
                        interativo=1;
                }
                while(interativo!=0);
            }
            system("pause");
            system("cls");
            printf("*****************************************************************************************************************************\n");
            printf("Você encontrou o item mágico destruidor de defesas implacáveis, ative ele para consegui destruir a proteção do BOSS e conseguir atacá-lo\n");
            do
            {
                printf("[1]Utilizar o item mágico\n");
                scanf(" %c",&menuboss);
                switch(menuboss)
                {
                case '1':
                    printf("A proteção do BOSS foi destruída!!!Mas nao por completo...\n");
                    interativo=0;
                    break;
                default:
                    printf("Opção Inválida\n");
                }
                if (menuboss=='0')
                    interativo=1;
            }
            while(interativo!=0);


            system("pause");
            system("cls");
            printf("*****************************************************************************************************************************\n");
            printf("Agora que o BOSS está com quase a mesma defesa de o príncipio, a batalha contra ele continua, mas dessa vez com uma mecânica diferente...\n");
            printf("O BOSS está com partes fracas espalhadas pelo corpo, e algumas de suas partes são invulneráveis, boa sorte encontrando-as!!\n");
            system("pause");
            system("cls");
            printf("*****************************************************************************************************************************\n");
            printf("[1]Atacar o pé do BOSS                  [2]Atacar o joelho do BOSS             [3]Atacar a canela do BOSS\n");
            do
            {
                scanf(" %c",&menuboss);
                switch(menuboss)
                {
                case '1':
                    printf("O pé dele é invulnerável!! E ele acabou te dando um chute certeiro que te deu %.2f de dano.\n",ataque_boss-defesa_p);
                    vida_p-=(ataque_boss-defesa_p);
                    printf("Sua vida é de %.2f",vida_p);
                    interativo=0;
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case '2':
                    printf("Escolha certa!!! O BOSS sofreu dano, provavelmente é uma de suas partes fracas!!\n");
                    interativo=0;
                    break;
                case '3':
                    printf("A canela dele é invulnerável!! E ele acabou te dando um chute certeiro que te deu %.2f de dano.\n",ataque_boss-defesa_p);
                    vida_p-=(ataque_boss-defesa_p);
                    printf("Sua vida é de %.2f",vida_p);
                    interativo=0;
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                default:
                    printf("Opção Inválida\n");
                }
                if (menuboss=='0')
                    interativo=1;

            }
            while(interativo!=0);

            system("pause");
            system("cls");
            printf("*****************************************************************************************************************************\n");
            printf("[1]Atacar o pé do BOSS                  [2]Atacar o joelho do BOSS             [3]Atacar a canela do BOSS\n");
            do
            {
                scanf(" %c",&menuboss);
                switch(menuboss)
                {
                case '1':
                    printf("O pé dele é invulnerável!! E ele acabou te dando um chute certeiro que te deu %.2f de dano.\n",ataque_boss-defesa_p);
                    vida_p-=(ataque_boss-defesa_p);
                    printf("Sua vida é de %.2f",vida_p);
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                case '2':
                    printf("Escolha certa!!! O BOSS sofreu dano e caiu!!\n");

                    break;
                case '3':
                    printf("A canela dele é invulnerável!! E ele acabou te dando um chute certeiro que te deu %.2f de dano.\n",ataque_boss-defesa_p);
                    vida_p-=(ataque_boss-defesa_p);
                    printf("Sua vida é de %.2f",vida_p);
                    if (vida_p<=0)
                    {
                        system("cls");
                        printf("\nVocê pereceu para a Cripta...boa sorte na próxima tentativa de derrota-la . . .\n");
                        system("pause");
                        system("cls");
                        exit(0);
                    }
                    break;
                default:
                    printf("Opção Inválida\n");
                }
                if (menuboss=='0')
                    interativo=1;
                if (menuboss=='1')
                {
                    system("pause");
                    system("cls");
                    printf("*****************************************************************************************************************************\n");

                    printf("-HAHAHAHA,você jamais encontrará minha parte fraca!! Disse o BOSS\n");
                    printf("As partes invulneráveis se tornaram impossíveis de serem atacadas\n");
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
                            printf("Opção Inválida\n");
                        }
                        if (menuboss2=='1')
                        {
                            system("pause");
                            system("cls");
                            printf("*****************************************************************************************************************************\n");
                            printf("O BOSS está de joelhos e você tem mais partes fracas para atacar!!!\n");
                            printf("[1]Olhos                       [2]Pescoço\n");

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
                                    printf("Opção Inválida\n");
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
                    printf("O BOSS está de joelhos e você tem mais partes fracas para atacar!!!\n");
                    printf("[1]Olhos                       [2]Pescoço\n");

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
                            printf("Opção Inválida\n");
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

                    printf("-HAHAHAHA,você jamais encontrará minha parte fraca!! Disse o BOSS\n");
                    printf("As partes invulneráveis se tornaram impossíveis de serem atacadas\n");
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
                            printf("Opção Inválida\n");
                        }
                        if (menuboss2=='3')
                        {
                            system("pause");
                            system("cls");
                            printf("*****************************************************************************************************************************\n");
                            printf("O BOSS está de joelhos e você tem mais partes fracas para atacar!!!\n");
                            printf("[1]Olhos                       [2]Pescoço\n");

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
                                    printf("Opção Inválida\n");
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
            printf("\nDepois de todo esse tempo nessa aventura dentro da Cripta desconhecida, aparece um ser do bem que te joga um arco e flechas enfeitiçado, dizendo o seguinte:\n");
            printf("\nAcerte a mente dele, não a cabeça, mas sim a sua mente... isso é o que o derrotará!!!\n");
            system("pause");
            system("cls");
            printf("*****************************************************************************************************************************\n");
            printf("\nVocê tenta se focar, esvaziar sua própria mente para enchergar a dele ...\n");
            printf("\nQuando percebe, que o gigante se acalmou, a Cripta se silenciou... tudo parecia um único ser...\n");
            printf("\nEra tudo... você ...\n");
            printf("\nSua mente . . . \n");
            do
            {
                printf("[1]Utilizar o arco e flecha\n");
                scanf(" %c",&menuboss);
                switch(menuboss)
                {
                case '1':
                    printf("\nO BOSS finalmente foi morto, caindo no chão e se dissolvendo...\n");
                    interativo=0;
                    break;
                default:
                    printf("Opção Inválida\n");
                }
                if (menuboss=='0')
                    interativo=1;
            }
            while(interativo!=0);
            printf("\nNo mesmo momento em que o corpo do BOSS se dissolve, cai um papel com o número '9', fazendo uma conexão com o '4' que havia encontrado no começo do jogo.\n");
            system("pause");
            system("cls");
            printf("\nAgora, tudo fazia sentido, enquanto você era sugado para uma luz tão brilhante que não conseguia ver nada... você se realiza...\n");
            printf("\nEsses confrontos, esses desafios, essa Cripta, tudo isso que você passou... toda essa luta é algo teu, sua luta constante, com você mesmo, sua luta com sua mente, sua Cripta . . .\n");
            printf("\nEntão, você é levado de volta...\n");
            //////////////////////////////////////////////////fim do boss / game************************************************


            ///////////////////////////////////////////////////////////////////******************************************************************************/////////////////////////////////////////////////////////////////

        }
        else if (op_menu=='2')
        {
            system("cls");
            printf("\n\n\n\n\n\n_____________________________________________________________________________________________________________________________________________________________________________________________________________________________________________\n\n\n\n\n\n");
            printf("\n Créditos :\n");
            printf("\n\t - Gustavo Borges Guimarães\n\t - Hugo Fransisco\n\t - Luciano Neto\n");
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
            printf("\nEscolha Inválida!\n");
            system("PAUSE");
        }
    }
    while(op_menu!='0');
    /////////////////////////////////////////////////////////////////////
    return 0;
}
