
#ifndef LCDWIDGETINSPECTOR_H
#define LCDWIDGETINSPECTOR_H

#include <gammaray/core/toolfactory.h>

#include <QLCDNumber>

class LCDWidgetInspector : public QObject
{
  Q_OBJECT
public:
  explicit LCDWidgetInspector(GammaRay::ProbeInterface *probe, QObject *parent = 0);
};

class LCDWidgetInspectorFactory : public QObject, public GammaRay::StandardToolFactory<QLCDNumber, LCDWidgetInspector>
{
  Q_OBJECT
  Q_INTERFACES(GammaRay::ToolFactory)
  Q_PLUGIN_METADATA(IID "com.kdab.gammaray.LCDWidgetInspector")

public:
  explicit LCDWidgetInspectorFactory(QObject *parent = 0) : QObject(parent)
  {
  }

  inline QString name() const Q_DECL_OVERRIDE
  {
    return tr("LCD Widgets");
  }

};

#endif