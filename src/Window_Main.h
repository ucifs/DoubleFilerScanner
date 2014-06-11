#pragma once

#include <QMainWindow>

//UIC forward declartion
namespace Ui {
	class MainWindow;
}

class QLabel;
class QMovie;
class DirectoryScanner;
class FileComparator;

//MainWindow class
class MainWindow: public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(void);
	virtual ~MainWindow(void);

private slots:
	void startScan(void);
	void directoryScannerFinished(void);
	void fileComparatorFinished(void);
	void showAbout(void);

protected:
	virtual void closeEvent(QCloseEvent *e);
	virtual void resizeEvent(QResizeEvent *e);
	virtual void showEvent(QShowEvent *e);

	void setButtonsEnabled(const bool &enabled);

	QLabel *m_animator;
	QMovie *m_movie;

	DirectoryScanner *m_directoryScanner;
	FileComparator *m_fileComparator;

	Ui::MainWindow *const ui;
};
