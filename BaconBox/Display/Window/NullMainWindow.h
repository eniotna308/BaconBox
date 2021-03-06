/**
 * @file
 * @ingroup WindowDisplay
 */
#ifndef BB_NULL_MAIN_WINDOW_H
#define BB_NULL_MAIN_WINDOW_H


#include "BaconBox/Display/Window/MainWindow.h"

namespace BaconBox {
	
	class NullMainWindow : public MainWindow {
		friend class BaseEngine;
	public:

	void onBaconBoxInit(unsigned int resolutionWidth,
			                  unsigned int resolutionHeight,
			                  float contextWidth,
			                  float contextHeight,
								WindowOrientation::type orientation);


		void setUpdatesPerSecond(double setFrameInterval);


		/**
		 * Activates and opens the window.
		 */
		void show();

		/**
		 * Changes the caption of the window. This is usually
		 * the title in the titlebar.
		 * @param caption The text used to replace the title.
		 */
		void setCaption(const std::string &caption);

		/**
		 * Checks if the main window is full screen.
		 * @return True if the main window is in full screen, false if not.
		 */
		bool isFullScreen() const;

		/**
		 * Makes the main window full screen or not.
		 * @param newFullScreen If true, sets the main window to full screen.
		 * If false, makes sure it's not full screen.
		 */
		void setFullScreen(bool newFullScreen);

		/**
		 * Checks if the main window grabs the input. When the input is
		 * grabbed, the cursor is invisible.
		 * @return True if the main window grabbed the input, false if not.
		 */
		bool isInputGrabbed() const;

		/**
		 * Sets if the main window grabbed the input or not.
		 * @param newInputGrabbed
		 */
		void setInputGrabbed(bool newInputGrabbed);

		/**
		 * Set the resolution of the window.
		 */
		void setResolution(unsigned int resolutionWidth, unsigned int resolutionHeight);
        
        /**
         * Hide the pointer. The pointer still work, but it won't be visible.
         */
        void hideCursor();
        
        /**
         * Show the pointer. If you called hideCursor(), this will reactivate it.
         */
        void showCursor();


		/**
		 * Sets the context size. If you want to work in pixels, set them to 0 and they
		 * will automagically match the current resolution width and height
		 */
		void setContextSize(float newContextWidth,
		                    float newContextHeight);
	private:

		NullMainWindow();

	
		~NullMainWindow();

	};
}

#endif
