#ifndef CHECKHEADER_SLIB_UI_LINEAR_VIEW
#define CHECKHEADER_SLIB_UI_LINEAR_VIEW

#include "definition.h"

#include "view.h"

namespace slib
{
	class SLIB_EXPORT LinearView : public ViewGroup
	{
		SLIB_DECLARE_OBJECT
		
	public:
		LinearView();
		
	public:
		LayoutOrientation getOrientation();
		
		void setOrientation(LayoutOrientation orientation, UIUpdateMode mode = UIUpdateMode::Redraw);
		
		sl_bool isHorizontal();
		
		void setHorizontal(UIUpdateMode mode = UIUpdateMode::Redraw);
		
		sl_bool isVertical();
		
		void setVertical(UIUpdateMode mode = UIUpdateMode::Redraw);
		
	protected:
		// override
		void onMeasureLayout(sl_bool flagHorizontal, sl_bool flagVertical);
		
		// override
		void onMakeLayout();
		
	private:
		LayoutOrientation m_orientation;
		
	};
	
	class SLIB_EXPORT VerticalLinearView : public LinearView
	{
	public:
		VerticalLinearView();
	};
	
	class SLIB_EXPORT HorizontalLinearView : public LinearView
	{
	public:
		HorizontalLinearView();
	};	
}

#endif
