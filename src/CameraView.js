import React, {Component} from 'react';
import {
  StyleSheet,
  Image,
  View,
  Text,
  Dimensions,
  TouchableOpacity,
} from 'react-native';
import UnityView from 'react-native-unity-view';

export default class App extends Component {
  static options() {
    return {
      topBar: {
        visible: false,
        drawBehind: true,
      },
      bottomTabs: {
        visible: false,
        drawBehind: true,
      },
      bottomTab: {
        icon: require('./Map.png'),
      },
    };
  }

  render() {
    return (
      <View style={styles.container}>
        <UnityView style={styles.camera} />
      </View>
    );
  }
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
  },
  camera: {
    position: 'absolute',
    top: 0,
    bottom: 0,
    left: 0,
    right: 0,
  },
  welcome: {
    textAlign: 'center',
  },
});
