/**
 * @file   InvoiceModel.cpp
 * @author Sebastien Fourey
 *
 * @brief  Invoice document model definition.
 */

#include "InvoiceModel.h"

InvoiceModel::InvoiceModel() : _taxes(QString("0")),
    _total(QString("0")) { }

void
InvoiceModel::setLastname(const QString & lastname) {
   _lastname = lastname;
   emit notify();
}

void
InvoiceModel::setFirstname(const QString & firstname) {
   _firstname = firstname;
   emit notify();
}

void
InvoiceModel::setAddressLine1(const QString & text) {
   _addressLine1 = text;
   emit notify();
}

void
InvoiceModel::setAddressLine2(const QString & text) {
   _addressLine2 = text;
   emit notify();
}

void
InvoiceModel::setZipcode(const QString & zipcode) {
   _zipcode = zipcode;
   emit notify();
}

void
InvoiceModel::setCity(const QString & city) {
   _city = city;
   emit notify();
}

void
InvoiceModel::setCell(int row, int column, const QString & text) {
   _cells[row][column] = text;
   emit notify();
}

const QString &
InvoiceModel::total() {
    double total = 0;
    for(int i = 0; i < 15; i++) {
        if(QString::compare(cell(i, 3), QString("")) != 0) {
            total += cell(i, 3).toDouble();
        }
    }
    total += taxes().toDouble();
    _total = QString::number(total,'g', 2);
    return _total;
}

const QString &
InvoiceModel::taxes() {
    return _taxes;
}

void
InvoiceModel::cleanAll() {
  _firstname = "";
  _lastname = "";
  _addressLine1 = "";
  _addressLine2 = "";
  _zipcode = "";
  _city = "";

  for(int row = 0; row < 15; row++){
      for(int col = 0; col < 4; col++){
          _cells[row][col] = "";
      }
  }
    emit notify();
}

const QString &
InvoiceModel::lastname() const {
   return _lastname;
}

const QString &
InvoiceModel::firstname() const {
   return _firstname;
}

const QString &
InvoiceModel::addressLine1() const {
   return _addressLine1;
}

const QString &
InvoiceModel::addressLine2() const {
   return _addressLine2;
}

const QString &
InvoiceModel::zipcode() const {
   return _zipcode;
}

const QString &
InvoiceModel::city() const {
   return _city;
}

const QString &
InvoiceModel::cell(int row, int column) const {
   return _cells[row][column];
}

QDataStream &
operator<<(QDataStream & ds, const InvoiceModel& im) {
    ds << im.firstname();
    ds << im.lastname();
    ds << im.addressLine1();
    ds << im.addressLine2();
    ds << im.zipcode();
    ds << im.city();
    for(int i = 0; i < 15; i++) {
        ds << im.cell(i, 0);
        ds << im.cell(i, 1);
        ds << im.cell(i, 2);
        ds << im.cell(i, 3);
    }
    return ds;
}

QDataStream &
operator>>(QDataStream & ds, InvoiceModel& im) {
    QString buffer;
    ds >> buffer;
    im.setFirstname(buffer);
    ds >> buffer;
    im.setLastname(buffer);
    ds >> buffer;
    im.setAddressLine1(buffer);
    ds >> buffer;
    im.setAddressLine2(buffer);
    ds >> buffer;
    im.setZipcode(buffer);
    ds >> buffer;
    im.setCity(buffer);
    for(int i = 0; i < 15; i++) {
        ds >> buffer;
        im.setCell(i, 0, buffer);
        ds >> buffer;
        im.setCell(i, 1, buffer);
        ds >> buffer;
        im.setCell(i, 2, buffer);
        ds >> buffer;
        im.setCell(i, 3, buffer);
    }
    return ds;
}

