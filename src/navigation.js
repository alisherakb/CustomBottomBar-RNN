import {Navigation} from 'react-native-navigation';
import {NativeModules} from 'react-native';
import {Platform} from 'react-native';

export const goHome = () =>
  Navigation.setRoot({
    root: {
      bottomTabs: {
        id: 'HomeTabs',
        children: [
          {
            stack: {
              id: 'FirstStack',
              children: [
                {
                  component: {
                    name: 'Map',
                  },
                },
              ],
            },
          },
          {
            stack: {
              id: 'SecondStack',
              children: [
                {
                  component: {
                    name: 'CameraView',
                  },
                },
              ],
            },
          },
          {
            stack: {
              id: 'ThirdStack',
              children: [
                {
                  component: {
                    name: 'FriendList',
                  },
                },
              ],
            },
          },
        ],
      },
    },
  });

Navigation.showOverlay({
  component: {
    id: 'BottomTabBar',
    name: 'BottomTab',
    options: {
      layout: {
        componentBackgroundColor: 'transparent', // Optional
        backgroundColor: 'transparent', // Optional
      },
      overlay: {
        interceptTouchOutside: false, // Will allow you to interact with the ui behind the Overlay
      },
    },
  },
}).then(() => {
  // iOS only
  // This updates the UIWindowLevel of BottomBar window for iOS app.
  // This is required to keep the BottomBar on top of all other views.
  if (Platform.OS == 'ios') {
    NativeModules.BottomBarHelper.setHighestWindowLevelForBottomBarWindow();
  }
});