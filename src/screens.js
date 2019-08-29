import { Navigation } from 'react-native-navigation';

export function registerScreens() {
  Navigation.registerComponent(
    'Initializing',
    () => require('./Initializing').default
  );
  Navigation.registerComponent('Map', () => require('./Map').default);
  Navigation.registerComponent(
    'CameraView',
    () => require('./CameraView').default
  );
  Navigation.registerComponent(
    'FriendList',
    () => require('./FriendList').default
  );
  Navigation.registerComponent(
    'BottomTab',
    () => require('./BottomTab').default
  );
}
