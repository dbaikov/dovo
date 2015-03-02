///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun  5 2014)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __GUI_H__
#define __GUI_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/string.h>
#include <wx/listbox.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/panel.h>
#include <wx/dialog.h>
#include <wx/combobox.h>
#include <wx/listctrl.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbmp.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class destination
///////////////////////////////////////////////////////////////////////////////
class destination : public wxDialog 
{
	private:
	
	protected:
		wxListBox* m_destinationList;
		wxButton* m_add;
		wxButton* m_delete;
		wxButton* m_button12;
		wxStaticText* m_staticText3;
		wxTextCtrl* m_name;
		wxStaticText* m_staticText4;
		wxTextCtrl* m_host;
		wxStaticText* m_staticText5;
		wxTextCtrl* m_port;
		wxStaticText* m_staticText6;
		wxTextCtrl* m_destinationAE;
		wxStaticText* m_staticText7;
		wxTextCtrl* m_sourceAE;
		wxPanel* m_panel4;
		wxButton* m_ok;
		wxButton* m_cancel;
	
	public:
		
		destination( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Destinations"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 469,555 ), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER ); 
		~destination();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class mainFrame
///////////////////////////////////////////////////////////////////////////////
class mainFrame : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* m_staticText1;
		wxTextCtrl* m_directory;
		wxButton* m_button5;
		wxStaticText* m_staticText2;
		wxComboBox* m_destination;
		wxButton* m_button6;
		wxListCtrl* m_patients;
		wxListCtrl* m_studies;
		wxListCtrl* m_series;
		wxStaticBitmap* m_preview;
		wxListCtrl* m_instances;
		wxButton* m_update;
		wxButton* m_send;
		wxPanel* m_panel3;
		wxButton* m_about;
		wxButton* m_exit;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnBrowse( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnDestinationEdit( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		mainFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("FileIn"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 800,800 ), long style = wxDEFAULT_FRAME_STYLE|wxRESIZE_BORDER|wxTAB_TRAVERSAL );
		
		~mainFrame();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class about
///////////////////////////////////////////////////////////////////////////////
class about : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText11;
		wxStdDialogButtonSizer* m_sdbSizer1;
		wxButton* m_sdbSizer1OK;
		wxButton* m_sdbSizer1Cancel;
	
	public:
		
		about( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("About"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 351,215 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~about();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class changePatientInfo
///////////////////////////////////////////////////////////////////////////////
class changePatientInfo : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText3;
		wxTextCtrl* m_textCtrl3;
		wxStaticText* m_staticText4;
		wxTextCtrl* m_textCtrl4;
		wxStaticText* m_staticText5;
		wxTextCtrl* m_textCtrl5;
		wxPanel* m_panel4;
		wxButton* m_button13;
		wxButton* m_button14;
	
	public:
		
		changePatientInfo( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Change Patient Info"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 353,208 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~changePatientInfo();
	
};

#endif //__GUI_H__
