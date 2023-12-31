Sound Sensor

- Referred to as the "clap switch," this innovation derives its name from the sound sensor employed within the project. The sound sensor possesses the capability to recognize audio with a pitch akin to that of a clap. It's essential to note that the sound need not precisely replicate the sound of clapping; any high-pitched audio suffices. Effectively, this system transforms sound energy into electrical energy: an auditory input triggers the circuit, which, in turn, produces output in the form of illuminated LED lights—a conversion of sound energy into light and heat energy.

- To execute this process, our project employs a sound sensor as a pivotal component. This sensor is configured to capture sound of a predetermined frequency, a value determined through a potentiometer. The sound sensor effectively receives input twice, serving as the trigger for both activation and deactivation actions. A single clap registers as a binary '1,' initiating the ON state. Subsequent detection of another clap, also representing '1,' prompts the circuit to switch off. This functionality resides in the Arduino code, which orchestrates these operations. Upon sensor detection, the connected equipment activates, and in a parallel scenario, a repetitive input signal causes the connected equipment to deactivate.

   <img src="/img/method.PNG" width="550" style="vertical-align:middle" />
   
