import React, {Component} from 'react';
import {View, Text, StyleSheet, TouchableOpacity} from 'react-native';
import MapView from 'react-native-maps';
import {Navigation} from 'react-native-navigation';

export default class Map extends Component {
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
        <MapView
          followsUserLocation
          showsUserLocation
          style={styles.container}
        />
      </View>
    );
  }
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: 'white',
  },
});
