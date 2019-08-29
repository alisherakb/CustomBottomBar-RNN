import React, {Component} from 'react';
import {View, Text, StyleSheet} from 'react-native';

export default class FriendList extends Component {
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
        <Text style={{fontSize: 40, color: 'white'}}>Screen 3</Text>
      </View>
    );
  }
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: 'black',
    alignItems: 'center',
    justifyContent: 'center',
  },
});
