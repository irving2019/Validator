#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

string cardType;

bool validateCreditCard(const string& cardNumber)
{


    string firstDigits = cardNumber.substr(0, 6);

    if (firstDigits == "34" || firstDigits == "37")
    {
        cardType = "American Express";
        cout << "Банк AMERICAN EXPRESS COMPANY" << endl;
        cout << "Страна: Америка" << endl;
    }
    else if (firstDigits == "5610" || firstDigits >= "560221" && firstDigits <= "560225")
    {
        cardType = "Bankcard";
        if (firstDigits == "5610")
        {
            cout << "Банк не определён" << endl;
            cout << "Страна: Швейцария" << endl;
        }
        else if (firstDigits == "560221")
        {
            cout << "ANZ Банк" << endl;
            cout << "Страна: Новая зеландия" << endl;
        }
        else if (firstDigits == "560223" || firstDigits == "560224")
        {
            cout << "WESTPAC NEW ZEALAND Банк" << endl;
            cout << "Страна: Новая зеландия" << endl;
        }
        else if (firstDigits == "560222")
        {
            cout << "Банк не определён" << endl;
            cout << "Страна: Австралия" << endl;
        }
        else if (firstDigits == "560225")
        {
            cout << "Банк не определён" << endl;
            cout << "Страна: Америка" << endl;
        }
    }
    else if (firstDigits == "31")
    {
        cardType = "China T-Union";
        cout << "Все банки страны Китай" << endl;
        cout << "Страна: Китай" << endl;
    }
    else if (firstDigits == "62")
    {
        cardType = "China UnionPay";
        cout << "Все банки страны Китай" << endl;
        cout << "Страна: Китай" << endl;
    }
    else if (firstDigits == "2014" || firstDigits == "2149")
    {
        cardType = "Diners Club enRoute";
        cout << "Банк Монреаля" << endl;
        cout << "Страна: Канада" << endl;
    }
    else if (firstDigits == "36" || firstDigits == "38" || firstDigits == "39" || firstDigits >= "300" && firstDigits <= "305" || firstDigits == "3095")
    {
        cardType = "Diners Club International";
        cout << "Данный тип карт выпускают более 200 банков мира" << endl;
        cout << "Страна: Америка" << endl;
    }
    else if (firstDigits == "54" || firstDigits == "55")
    {
        cardType = "Diners Club United States & Canada";
        if (firstDigits == "54")
        {
            cout << "Банк HSBC BANK MALAYSIA BERHAD" << endl;
            cout << "Страна: Малайзия" << endl;
        }
        else if (firstDigits == "55")
        {
            cout << "FISERV SOLUTIONS Банк" << endl;
            cout << "Страна: Америка" << endl;
        }
    }
    else if (firstDigits == "6011" || firstDigits == "65" || firstDigits >= "644" && firstDigits <= "649")
    {
        cardType = "Discover Card";
        cout << "Банк Discover Bank" << endl;
        cout << "Страна: Америка" << endl;

    }
    else if (firstDigits >= "622126" && firstDigits <= "622925")
    {
        cardType = "Discover Card совместно с China UnionPay";
        cout << "Банк не определён" << endl;
        cout << "Страна: Китай" << endl;
    }
    else if (firstDigits >= "60400100" && firstDigits <= "60420099")
    {
        cardType = "UkrCard";
        cout << "Банк UKRBANK" << endl;
        cout << "Страна: Украина" << endl;
    }
    else if (firstDigits == "60" || firstDigits == "65" || firstDigits == "81" || firstDigits == "82" || firstDigits == "508")
    {
        cardType = "RuPay";
        cout << "Все банки Индии" << endl;
        cout << "Страна: Индия" << endl;

    }
    else if (firstDigits == "353" || firstDigits == "356")
    {
        cardType = "Совместный бренд RuPay и JCB";
        cout << "Банк не определён" << endl;
        cout << "Страна: Япония" << endl;
    }
    else if (firstDigits == "636")
    {
        cardType = "InterPayment";
        cout << "Банк не определён" << endl;
        cout << "Страна: Америка" << endl;
    }
    else if (firstDigits >= "637" && firstDigits <= "639")
    {
        cardType = "InstaPayment";
        cout << "Это платёжная система работающая на сервисе Swapin" << endl;
        cout << "Страна: Вся европа" << endl;
    }
    else if (firstDigits >= "3528" && firstDigits <= "3589")
    {
        cardType = "JCB";
        cout << "Большинство банков мира" << endl;
        cout << "Страна: Япония" << endl;
    }
    else if (firstDigits == "6304" || firstDigits == "6706" || firstDigits == "6771" || firstDigits == "6709")
    {
        cardType = "Laser";
        cout << "Все банки Ирландии" << endl;
        cout << "Страна: Ирландия" << endl;
    }
    else if (firstDigits == "6759" || firstDigits == "676770" || firstDigits == "676774")
    {
        cardType = "Maestro (UK)";
        cout << "Все банки Англии" << endl;
        cout << "Страна: Англия" << endl;
    }
    else if (firstDigits == "5018" || firstDigits == "5020" || firstDigits == "5038" || firstDigits == "5893" || firstDigits == "6304" || firstDigits >= "6761" && firstDigits <= "6763")
    {
        cardType = "Maestro";
        cout << "Большинство банков мира" << endl;
        cout << "Страна: Америка" << endl;

        if (firstDigits == "5893")
        {
            cardType = "Maestro";
            cout << "Все банки Молдовы" << endl;
            cout << "Страна: Молдова" << endl;
        }
        else if (firstDigits == "6304")
        {
            cardType = "Maestro";
            cout << "Все банки Испании" << endl;
            cout << "Страна: Испания" << endl;
        }
    }
    else if (firstDigits == "5019")
    {
        cardType = "Dankort";
        cout << "Банк не определён" << endl;
        cout << "Страна: Дания" << endl;
    }
    else if (firstDigits == "4571")
    {
        cardType = "Dankort совместно с Visa";
        cout << "Банк Nets" << endl;
        cout << "Страна: Дания" << endl;

    }
    else if (firstDigits >= "2200" && firstDigits <= "2204")
    {
        cardType = "Mir";
        if (firstDigits == "2200")
        {
            cout << "Банк РНКБ" << endl;
            cout << "Страна: Россия" << endl;
        }
        else if (firstDigits == "2201")
        {
            cout << "Петербургский городской банк" << endl;
            cout << "Страна: Россия" << endl;
        }
        else if (firstDigits == "2202")
        {
            cout << "Сбербанк" << endl;
            cout << "Страна: Россия" << endl;
        }
        else if (firstDigits == "2203")
        {
            cout << "Тамбовкредитпромбанк";
            cout << "Страна: Россия";
        }
        else if (firstDigits == "2204")
        {
            cout << "Юмани Банк";
            cout << "Страна: Россия";
        }
    }
    else if (firstDigits == "2205")
    {
        cardType = "BORICA";
    }
    else if (firstDigits >= "6054740" && firstDigits <= "6054744")
    {
        cardType = "NPS Pridnestrovie";
    }
    else if (firstDigits >= "2221" && firstDigits <= "2720" || firstDigits >= "51" && firstDigits <= "55")
    {
        cardType = "Mastercard";
        if (firstDigits == "5194")
        {
            cout << "SBI Банк";
            cout << "Страна: Америка";
        }
    }
    else if (firstDigits == "6334" || firstDigits == "6767")
    {
        cardType = "Solo";
    }
    else if (firstDigits == "4903" || firstDigits == "4905" || firstDigits == "4911" || firstDigits == "4936" || firstDigits == "564182" || firstDigits == "633110" || firstDigits == "6333" || firstDigits == "6759")
    {
        cardType = "Switch";
    }
    else if (firstDigits == "9792")
    {
        cardType = "Troy";
    }
    else if (firstDigits == "65")
    {
        cardType = "Troy совместный бренд с Discover";
    }
    else if (firstDigits == "4")
    {
        cardType = "Visa";
        cout << "Все банки Мира" << endl;
        cout << "Страна: Америка" << endl;
    }
    else if (firstDigits == "4026" || firstDigits == "417500" || firstDigits == "4508" || firstDigits == "4844" || firstDigits == "4913" || firstDigits == "4917")
    {
        cardType = "Visa Electron";
        cout << "Все банки Мира" << endl;
        cout << "Страна: Америка" << endl;
    }
    else if (firstDigits == "1")
    {
        cardType = "UATP";
    }
    else if (firstDigits >= "506099" && firstDigits <= "506198" || firstDigits >= "650002" && firstDigits <= "650027" || firstDigits >= "507865" && firstDigits <= "507964")
    {
        cardType = "Verve";
    }
    else if (firstDigits == "357111")
    {
        cardType = "LankaPay";
    }
    else if (firstDigits == "8600")
    {
        cardType = "UzCard";
    }
    else if (firstDigits == "9860")
    {
        cardType = "Humo";
    }
    else if (firstDigits == "2" || firstDigits >= "6" && firstDigits <= "9")
    {
        cardType = "GPN";
    }
    else
    {
        cardType = "Unknown";
    }

    cout << "Тип карты: " << cardType << endl;

    return true;
}



int main()
{

    setlocale(LC_ALL, "Russian");

    string cardNumber;

    cout << "Введите номер кредитной карты: ";
    cin >> cardNumber;

    if (validateCreditCard(cardNumber) && cardType != "Unknown")
    {
        cout << "Карта действительна." << endl;
    }
    else
    {
        cout << "Карта недействительна." << endl;
    }


    return 0;
}