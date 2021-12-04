#include <bits/stdc++.h>

using namespace std;

void printMaking1(int wait, int free, int inside, int busy, int done, int docu)
{
    string list;

    while (true)
    {
        if (free > 0 && wait > 0)
        {
            free--;
            wait--;
            busy++;
            inside++;
            list += "start";
        }
        else if (busy > 0 && inside > 0)
        {
            busy--;
            inside--;
            docu++;
            done++;
            list += "change";
        }
        else if (docu > 0)
        {
            docu--;
            free++;
            list += "end";
        }

        cout << "Firing sequence: (" << list << ")" << endl;
        cout << "Making: [" << wait << ".wait, ";
        cout << free << ".free, ";
        cout << inside << ".inside, ";
        cout << busy << ".busy, ";
        cout << done << ".done, ";
        cout << docu << ".docu]" << endl;
        cout << endl;
        list += ", ";

        if (busy == 0 && docu == 0 && inside == 0 && wait == 0)
            break;
    }
}

void printMaking2(int wait, int free, int inside, int busy, int done, int docu)
{
    string list;

    while (true)
    {
        if (free > 0 && wait > 0)
        {
            free--;
            wait--;
            busy++;
            inside++;
            list += "start";
        }
        else if (docu > 0)
        {
            docu--;
            free++;
            list += "end";
        }
        else if (busy > 0 && inside > 0)
        {
            busy--;
            inside--;
            docu++;
            done++;
            list += "change";
        }

        if (busy == 0 && docu == 0 && inside == 0 && wait == 0)
            break;

        cout << "Firing sequence: (" << list << ")" << endl;
        cout << "Making: [" << free << ".free, ";
        cout << inside << ".inside, ";
        cout << busy << ".busy, ";
        cout << done << ".done, ";
        cout << docu << ".docu]" << endl;
        cout << endl;
        list += ", ";
    }
}

void printMaking3(int wait, int free, int inside, int busy, int done, int docu)
{
    string list;

    while (true)
    {
        if (busy > 0 && inside > 0)
        {
            busy--;
            inside--;
            docu++;
            done++;
            list += "change";
        }
        else if (free > 0 && wait > 0)
        {
            free--;
            wait--;
            busy++;
            inside++;
            list += "start";
        }
        else if (docu > 0)
        {
            docu--;
            free++;
            list += "end";
        }

        if (busy == 0 && docu == 0 && inside == 0 && wait == 0)
            break;

        cout << "Firing sequence: (" << list << ")" << endl;
        cout << "Making: [" << free << ".free, ";
        cout << inside << ".inside, ";
        cout << busy << ".busy, ";
        cout << done << ".done, ";
        cout << docu << ".docu]" << endl;
        cout << endl;
        list += ", ";
    }
}

void printMaking4(int wait, int free, int inside, int busy, int done, int docu)
{
    string list;

    while (true)
    {
        if (busy > 0 && inside > 0)
        {
            busy--;
            inside--;
            docu++;
            done++;
            list += "change";
        }
        else if (docu > 0)
        {
            docu--;
            free++;
            list += "end";
        }
        else if (free > 0 && wait > 0)
        {
            free--;
            wait--;
            busy++;
            inside++;
            list += "start";
        }

        if (busy == 0 && docu == 0 && inside == 0 && wait == 0)
            break;

        cout << "Firing sequence: (" << list << ")" << endl;
        cout << "Making: [" << free << ".free, ";
        cout << inside << ".inside, ";
        cout << busy << ".busy, ";
        cout << done << ".done, ";
        cout << docu << ".docu]" << endl;
        cout << endl;
        list += ", ";
    }
}

void printMaking5(int wait, int free, int inside, int busy, int done, int docu)
{
    string list;

    while (true)
    {
        if (docu > 0)
        {
            docu--;
            free++;
            list += "end";
        }
        else if (free > 0 && wait > 0)
        {
            free--;
            wait--;
            busy++;
            inside++;
            list += "start";
        }
        else if (busy > 0 && inside > 0)
        {
            busy--;
            inside--;
            docu++;
            done++;
            list += "change";
        }

        if (busy == 0 && docu == 0 && inside == 0 && wait == 0)
            break;

        cout << "Firing sequence: (" << list << ")" << endl;
        cout << "Making: [" << free << ".free, ";
        cout << inside << ".inside, ";
        cout << busy << ".busy, ";
        cout << done << ".done, ";
        cout << docu << ".docu]" << endl;
        cout << endl;
        list += ", ";
    }
}

void printMaking6(int wait, int free, int inside, int busy, int done, int docu)
{
    string list;

    while (true)
    {
        if (docu > 0)
        {
            docu--;
            free++;
            list += "end";
        }
        else if (busy > 0 && inside > 0)
        {
            busy--;
            inside--;
            docu++;
            done++;
            list += "change";
        }
        else if (free > 0 && wait > 0)
        {
            free--;
            wait--;
            busy++;
            inside++;
            list += "start";
        }

        if (busy == 0 && docu == 0 && inside == 0 && wait == 0)
            break;

        cout << "Firing sequence: (" << list << ")" << endl;
        cout << "Making: [" << free << ".free, ";
        cout << inside << ".inside, ";
        cout << busy << ".busy, ";
        cout << done << ".done, ";
        cout << docu << ".docu]" << endl;
        cout << endl;
        list += ", ";
    }
}

int main()
{
    int wait, free, inside, busy, done, docu;
    string list;

    cout << "Enter your initial marking: M0 = [... .wait, ... .free, ... .inside, ... .busy, ... .done, ... . docu]" << endl;
    cout << "wait: ";
    while (true)
    {
        cin >> wait;
        if (wait >= 0 && wait <= 10)
            break;
    }

    while (true)
    {
        cout << "free: ";
        cin >> free;
        if (free >= 0)
            break;
    }

    while (true)
    {
        cout << "inside: ";
        cin >> inside;
        if (inside >= 0)
            break;
    }

    while (true)
    {
        cout << "busy: ";
        cin >> busy;
        if (busy >= 0)
            break;
    }

    while (true)
    {
        cout << "done: ";
        cin >> done;
        if (done >= 0)
            break;
    }

    while (true)
    {
        cout << "docu: ";
        cin >> docu;
        if (docu >= 0)
            break;
    }

    cout << endl;
    cout << "All firing sequences and reachable markings: " << endl;

    printMaking1(wait, free, inside, busy, done, docu);
    printMaking2(wait, free, inside, busy, done, docu);
    printMaking3(wait, free, inside, busy, done, docu);
    printMaking4(wait, free, inside, busy, done, docu);
    printMaking5(wait, free, inside, busy, done, docu);
    printMaking6(wait, free, inside, busy, done, docu);

    return 0;
}