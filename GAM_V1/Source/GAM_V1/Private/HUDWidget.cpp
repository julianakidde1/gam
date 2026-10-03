#include "HUDWidget.h"

void UHUDWidget::SetHealthBarPercent(float NewPercent)
{
    if (NewPercent >= 0.0f && NewPercent <= 1.0f)
    {
        HealthBar->SetPercent(NewPercent);
    }
}
