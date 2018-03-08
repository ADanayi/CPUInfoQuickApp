#include "cpuinfo.h"
#include <QFile>

CPUInfo::CPUInfo()
{

}

QString CPUInfo::getCPUInfo()
{
    QFile f(QString("/proc/cpuinfo"));
    f.open(QIODevice::ReadOnly);
    QString result = f.readAll();
    return result;
}
