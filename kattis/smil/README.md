Faces can be identified here in one pass through representing the 'state' of what has been seen so far. Any ':' or ';' would represent the start of a face. Encountering a '-' while in this first state moves to the next state, and encountering a ')' in either of these states represents the conclusion of a face. Update the 'start index' any time one is moved into the 'start' state.

