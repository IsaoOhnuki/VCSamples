//*********************************************************
//
// Copyright (c) Microsoft. All rights reserved.
// THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY
// IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR
// PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.
//
//*********************************************************

//
// Scenario2.xaml.h
// Declaration of the Scenario2 class
//

#pragma once

#include "pch.h"
#include "Scenario2.g.h"
#include "MainPage.xaml.h"

namespace SDKSample
{
    namespace Animation
    {
        /// <summary>
        /// An empty page that can be used on its own or navigated to within a Frame.
        /// </summary>
        [Windows::Foundation::Metadata::WebHostHidden]
        public ref class Scenario2 sealed
        {
        public:
            Scenario2();
    
        protected:
            virtual void OnNavigatedTo(Windows::UI::Xaml::Navigation::NavigationEventArgs^ e) override;
        private:
            MainPage^ rootPage;
    		bool isScenario2StoryboardRunning;
    		void Scenario2ToggleStoryboard_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
    		void ToggleScenario2(bool startScenario);
    
        };
    }
}
