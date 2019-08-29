import React from 'react';
import Svg, {G, Circle, Path} from 'react-native-svg';

const SvgComponent = props => (
  <Svg width={56} height={56} {...props}>
    <G fill="none" fillRule="evenodd">
      <Circle fillOpacity={0.844} fill="#FFF" cx={28} cy={28} r={28} />
      <Path
        d="M37.28 26.276a2.333 2.333 0 0 0-1.945-1.05h-4.667v-10.89a2.333 2.333 0 0 0-4.48-.917l-7 16.333a2.333 2.333 0 0 0 2.147 3.252H26v10.888a2.333 2.333 0 0 0 4.48.918l7-16.333a2.333 2.333 0 0 0-.202-2.201z"
        fill="#6A42C9"
      />
    </G>
  </Svg>
);

export default SvgComponent;
