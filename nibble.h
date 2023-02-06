unsigned char read_partial_byte(unsigned char *data, unsigned int size, unsigned int index) {

        unsigned int byte_position = (size * offset) / 8;
        unsigned int bit_position = (size * offset) % 8;

        unsigned char byte = data[byte_position];


        return (unsigned char) (byte << bit_position) >> (8 - size);
}
