import React from 'react';
import Svg, {Defs, Circle, G, Use} from 'react-native-svg';
/* SVGR has dropped some elements not supported by react-native-svg: filter */

const SvgComponent = props => (
  <Svg width={74} height={74} {...props}>
    <Defs>
      <Circle id="c" cx={25} cy={25} r={25} />
    </Defs>
    <G
      filter="url(#a)"
      transform="translate(12 6)"
      fill="none"
      fillRule="evenodd"
      opacity={0.5}
      strokeLinecap="round"
      strokeLinejoin="round">
      <Use stroke="#C4CAE3" strokeWidth={4} xlinkHref="#c" />
    </G>
  </Svg>
);

export default SvgComponent;
