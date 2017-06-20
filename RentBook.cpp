#include "RentBook.h"
using namespace std;
RentBook::RentBook(long rid, long aid, QDate rentD, QDate expireD, QDate returnD ,  long bid, long btid, int st, long f)
    :rentID(rid),
    accID(aid),

    bookID(bid),
    bookTypeID(btid),
    state(st),
    fine(f)
{
    setRentDate(rentD);
    setExpireDate(expireD);
    setReturnDate(returnD);
}
void RentBook::setRentID(long rid)
{
    rentID = rid;
}
void RentBook::setAccID(long aid)
{
    accID = aid;
}
void RentBook::setRentDate(const QDate &rent)
{
    rent.toString("dd/MM/yyyy").toStdString().copy(rentDate,10);
    rentDate[10] = '\0';
}
void RentBook::setExpireDate(const QDate &exp)
{
    exp.toString("dd/MM/yyyy").toStdString().copy(expDate,10);
    expDate[10] = '\0';
}
void RentBook::setBookID(long bid)
{
    bookID = bid;
}

long RentBook::getRentID() const
{
    return rentID;
}
long RentBook::getAccID() const
{
    return accID;
}
QDate RentBook::getRentDate() const
{
    return QDate::fromString(QString(rentDate),"dd/MM/yyyy");
}
QDate RentBook::getExpDate() const
{
    return QDate::fromString(QString(expDate),"dd/MM/yyyy");
}
long RentBook::getBookID() const
{
    return bookID;
}
void RentBook::saveData()
{
    fstream dataFout("rent_data.txt");
    dataFout.seekp((rentID - 1) * sizeof(RentBook));
    dataFout.write(reinterpret_cast<char*>(this), sizeof(RentBook));
    dataFout.close();
}
void RentBook::saveData(long rid)
{
    fstream dataFout("rent_data.txt");
    dataFout.seekp((rid - 1) * sizeof(RentBook));
    dataFout.write(reinterpret_cast<char*>(this), sizeof(RentBook));
    dataFout.close();
}
void RentBook::readData(long rid)
{
    fstream dataFin("rent_data.txt");
    dataFin.seekg((rid - 1) * sizeof(RentBook));
    dataFin.read(reinterpret_cast<char*>(this), sizeof(RentBook));
    dataFin.close();
}
int RentBook::getState() const
{
    return state;
}
void RentBook::setState(int st)
{
    state = st;
}
void RentBook::setFine(long f)
{
    fine = f;
}
long RentBook::getFine() const
{
    return fine;
}
void RentBook::setReturnDate(QDate d)
{
    d.toString("dd/MM/yyyy").toStdString().copy(returnDate, 10);
    returnDate[10] = '\0';
}
QDate RentBook::getReturnDate() const
{
    return QDate::fromString(QString(returnDate),"dd/MM/yyyy");
}
void RentBook::setBookTypeID(long id)
{
    bookTypeID = id;
}

long RentBook::getBookTypeID() const
{
    return bookTypeID;
}
