/********************************************************************************
** Form generated from reading UI file 'animationcontrollerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANIMATIONCONTROLLERDIALOG_H
#define UI_ANIMATIONCONTROLLERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AnimationControllerDialog
{
public:
    QVBoxLayout *mainLayout;
    QGridLayout *fpsLayout;
    QLabel *maxFpsLabel;
    QLabel *minFpsLabel;
    QSpinBox *minFpsSpinBox;
    QSpinBox *maxFpsSpinBox;
    QGridLayout *gridLayout;
    QLabel *holdTimeValueLabel;
    QLabel *currentFpsLabel;
    QFrame *line;
    QLabel *targetFpsLabel;
    QLabel *animationTimeValueLabel;
    QLabel *animationTimeLabel;
    QLabel *targetFpsValueLabel;
    QLabel *animationSpeedLabel;
    QLabel *currentFpsValueLabel;
    QLabel *holdLabel;
    QLabel *playbackSpeedLabel;
    QLabel *animationSpeedValueLabel;
    QLabel *refreshDisplayCountLabel;
    QLabel *refreshDisplayCountValueLabel;
    QDoubleSpinBox *playbackSpeedSpinBox;

    void setupUi(QDialog *AnimationControllerDialog)
    {
        if (AnimationControllerDialog->objectName().isEmpty())
            AnimationControllerDialog->setObjectName(QStringLiteral("AnimationControllerDialog"));
        AnimationControllerDialog->resize(272, 255);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AnimationControllerDialog->sizePolicy().hasHeightForWidth());
        AnimationControllerDialog->setSizePolicy(sizePolicy);
        mainLayout = new QVBoxLayout(AnimationControllerDialog);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        mainLayout->setContentsMargins(6, 6, 6, 6);
        fpsLayout = new QGridLayout();
        fpsLayout->setObjectName(QStringLiteral("fpsLayout"));
        maxFpsLabel = new QLabel(AnimationControllerDialog);
        maxFpsLabel->setObjectName(QStringLiteral("maxFpsLabel"));

        fpsLayout->addWidget(maxFpsLabel, 0, 1, 1, 1);

        minFpsLabel = new QLabel(AnimationControllerDialog);
        minFpsLabel->setObjectName(QStringLiteral("minFpsLabel"));

        fpsLayout->addWidget(minFpsLabel, 0, 0, 1, 1);

        minFpsSpinBox = new QSpinBox(AnimationControllerDialog);
        minFpsSpinBox->setObjectName(QStringLiteral("minFpsSpinBox"));
        minFpsSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        minFpsSpinBox->setMinimum(0);
        minFpsSpinBox->setMaximum(1000);

        fpsLayout->addWidget(minFpsSpinBox, 1, 0, 1, 1);

        maxFpsSpinBox = new QSpinBox(AnimationControllerDialog);
        maxFpsSpinBox->setObjectName(QStringLiteral("maxFpsSpinBox"));
        maxFpsSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        maxFpsSpinBox->setMinimum(1);
        maxFpsSpinBox->setMaximum(1000);

        fpsLayout->addWidget(maxFpsSpinBox, 1, 1, 1, 1);


        mainLayout->addLayout(fpsLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        holdTimeValueLabel = new QLabel(AnimationControllerDialog);
        holdTimeValueLabel->setObjectName(QStringLiteral("holdTimeValueLabel"));
        holdTimeValueLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(holdTimeValueLabel, 4, 1, 1, 1);

        currentFpsLabel = new QLabel(AnimationControllerDialog);
        currentFpsLabel->setObjectName(QStringLiteral("currentFpsLabel"));

        gridLayout->addWidget(currentFpsLabel, 1, 0, 1, 1);

        line = new QFrame(AnimationControllerDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 0, 1, 2);

        targetFpsLabel = new QLabel(AnimationControllerDialog);
        targetFpsLabel->setObjectName(QStringLiteral("targetFpsLabel"));

        gridLayout->addWidget(targetFpsLabel, 0, 0, 1, 1);

        animationTimeValueLabel = new QLabel(AnimationControllerDialog);
        animationTimeValueLabel->setObjectName(QStringLiteral("animationTimeValueLabel"));
        animationTimeValueLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(animationTimeValueLabel, 3, 1, 1, 1);

        animationTimeLabel = new QLabel(AnimationControllerDialog);
        animationTimeLabel->setObjectName(QStringLiteral("animationTimeLabel"));

        gridLayout->addWidget(animationTimeLabel, 3, 0, 1, 1);

        targetFpsValueLabel = new QLabel(AnimationControllerDialog);
        targetFpsValueLabel->setObjectName(QStringLiteral("targetFpsValueLabel"));
        targetFpsValueLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(targetFpsValueLabel, 0, 1, 1, 1);

        animationSpeedLabel = new QLabel(AnimationControllerDialog);
        animationSpeedLabel->setObjectName(QStringLiteral("animationSpeedLabel"));

        gridLayout->addWidget(animationSpeedLabel, 5, 0, 1, 1);

        currentFpsValueLabel = new QLabel(AnimationControllerDialog);
        currentFpsValueLabel->setObjectName(QStringLiteral("currentFpsValueLabel"));
        currentFpsValueLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(currentFpsValueLabel, 1, 1, 1, 1);

        holdLabel = new QLabel(AnimationControllerDialog);
        holdLabel->setObjectName(QStringLiteral("holdLabel"));

        gridLayout->addWidget(holdLabel, 4, 0, 1, 1);

        playbackSpeedLabel = new QLabel(AnimationControllerDialog);
        playbackSpeedLabel->setObjectName(QStringLiteral("playbackSpeedLabel"));

        gridLayout->addWidget(playbackSpeedLabel, 6, 0, 1, 1);

        animationSpeedValueLabel = new QLabel(AnimationControllerDialog);
        animationSpeedValueLabel->setObjectName(QStringLiteral("animationSpeedValueLabel"));
        animationSpeedValueLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(animationSpeedValueLabel, 5, 1, 1, 1);

        refreshDisplayCountLabel = new QLabel(AnimationControllerDialog);
        refreshDisplayCountLabel->setObjectName(QStringLiteral("refreshDisplayCountLabel"));

        gridLayout->addWidget(refreshDisplayCountLabel, 7, 0, 1, 1);

        refreshDisplayCountValueLabel = new QLabel(AnimationControllerDialog);
        refreshDisplayCountValueLabel->setObjectName(QStringLiteral("refreshDisplayCountValueLabel"));
        refreshDisplayCountValueLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(refreshDisplayCountValueLabel, 7, 1, 1, 1);

        playbackSpeedSpinBox = new QDoubleSpinBox(AnimationControllerDialog);
        playbackSpeedSpinBox->setObjectName(QStringLiteral("playbackSpeedSpinBox"));
        playbackSpeedSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        playbackSpeedSpinBox->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        playbackSpeedSpinBox->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        playbackSpeedSpinBox->setKeyboardTracking(false);

        gridLayout->addWidget(playbackSpeedSpinBox, 6, 1, 1, 1);


        mainLayout->addLayout(gridLayout);


        retranslateUi(AnimationControllerDialog);

        QMetaObject::connectSlotsByName(AnimationControllerDialog);
    } // setupUi

    void retranslateUi(QDialog *AnimationControllerDialog)
    {
        AnimationControllerDialog->setWindowTitle(QApplication::translate("AnimationControllerDialog", "Animation Parameters", 0));
        maxFpsLabel->setText(QApplication::translate("AnimationControllerDialog", "Max FPS:", 0));
        minFpsLabel->setText(QApplication::translate("AnimationControllerDialog", "Min FPS:", 0));
        holdTimeValueLabel->setText(QString());
        currentFpsLabel->setText(QApplication::translate("AnimationControllerDialog", "Current FPS:", 0));
        targetFpsLabel->setText(QApplication::translate("AnimationControllerDialog", "Target FPS:", 0));
        animationTimeValueLabel->setText(QString());
        animationTimeLabel->setText(QApplication::translate("AnimationControllerDialog", "Animation time:", 0));
        targetFpsValueLabel->setText(QString());
        animationSpeedLabel->setText(QApplication::translate("AnimationControllerDialog", "Animation speed:", 0));
        currentFpsValueLabel->setText(QString());
        holdLabel->setText(QApplication::translate("AnimationControllerDialog", "Hold time:", 0));
        playbackSpeedLabel->setText(QApplication::translate("AnimationControllerDialog", "Playback speed:", 0));
        animationSpeedValueLabel->setText(QString());
        refreshDisplayCountLabel->setText(QApplication::translate("AnimationControllerDialog", "#refreshDisplay() calls:", 0));
        refreshDisplayCountValueLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AnimationControllerDialog: public Ui_AnimationControllerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANIMATIONCONTROLLERDIALOG_H
