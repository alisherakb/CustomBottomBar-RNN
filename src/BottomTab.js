import * as React from 'react';
import {
  Text,
  StyleSheet,
  Platform,
  Dimensions,
  TouchableOpacity,
  Image,
  Animated,
  View,
  Easing,
  findNodeHandle,
} from 'react-native';
import {Navigation} from 'react-native-navigation';
import {NativeModules} from 'react-native';
import AR from './icons/AR';
import Karta from './icons/Karta';
import Portals from './icons/Portals';

export default class BottomBar extends React.Component {
  state = {
    anim: new Animated.Value(0),
  };
  changeToTab = newIndex => {
    Navigation.mergeOptions('HomeTabs', {
      bottomTabs: {
        currentTabIndex: newIndex,
      },
    });
    Animated.spring(this.state.anim, {
      toValue: newIndex,
      useNativeDriver: true,
    }).start();
  };

  constructor(props) {
    super(props);
    this.viewRef = null;
  }

  componentDidMount() {
    // iOS only
    // This is crucial part to keep the BottomBar on top of all other views!
    // viewRef is set in render() like this: `ref={el => { this.viewRef = el }}`
    if (this.viewRef && Platform.OS == 'ios') {
      const reactTag = findNodeHandle(this.viewRef);
      NativeModules.BottomBarHelper.setReactTagToFind(reactTag);
    }
  }

  render() {
    const firstTabOpacity = {
      opacity: this.state.anim.interpolate({
        inputRange: [0, 1, 2],
        outputRange: [1, 0.5, 0.5],
      }),
      transform: [
        {
          scale: this.state.anim.interpolate({
            inputRange: [0, 1, 2],
            outputRange: [1.2, 1, 1],
          }),
        },
      ],
    };
    const secondTabOpacity = {
      opacity: this.state.anim.interpolate({
        inputRange: [0, 1, 2],
        outputRange: [0.5, 1, 0.5],
      }),
      transform: [
        {
          scale: this.state.anim.interpolate({
            inputRange: [0, 1, 2],
            outputRange: [1, 1.2, 1],
          }),
        },
      ],
    };
    const thirdTabOpacity = {
      opacity: this.state.anim.interpolate({
        inputRange: [0, 1, 2],
        outputRange: [0.5, 0.5, 1],
      }),
      transform: [
        {
          scale: this.state.anim.interpolate({
            inputRange: [0, 1, 2],
            outputRange: [1, 1, 1.2],
          }),
        },
      ],
    };
    return (
      <View style={styles.tabBar} ref={el => { this.viewRef = el }}>
        <TouchableOpacity onPress={() => this.changeToTab(0)}>
          <Animated.View
            useNativeDriver={true}
            style={[styles.iconView, firstTabOpacity]}>
            <Karta />
          </Animated.View>
        </TouchableOpacity>

        <TouchableOpacity onPress={() => this.changeToTab(1)}>
          <Animated.View style={[styles.iconView, secondTabOpacity]}>
            <AR />
          </Animated.View>
        </TouchableOpacity>
        <TouchableOpacity onPress={() => this.changeToTab(2)}>
          <Animated.View style={[styles.iconView, thirdTabOpacity]}>
            <Portals />
          </Animated.View>
        </TouchableOpacity>
      </View>
    );
  }
}

const isTallIPhone =
  Platform.OS == 'ios' && Dimensions.get('window').height >= 812;

const styles = StyleSheet.create({
  tabBar: {
    position: 'absolute',
    bottom: 40,
    width: '100%',
    height: isTallIPhone ? 83 : 49, // The Height of the iOS tab
    backgroundColor: 'transparent',
    flexDirection: 'row',
    justifyContent: 'space-around',
  },
  iconView: {
    height: '100%',
    alignItems: 'center',
  },
  iconsText: {
    position: 'absolute',
    bottom: isTallIPhone ? 32 : 3,
    fontSize: 10,
  },
  image: {
    position: 'absolute',
    bottom: isTallIPhone ? 50 : 21,
    width: 54,
    height: 54,
  },
});
