import serial
import time

PORT = 'COM4' # '/dev/ttyUSB0'  # Change to COMx on Windows, or /dev/ttyUSBx on Linux
BAUD = 115200

def send_data_and_receive_hash(data_bytes):
    ser = serial.Serial(PORT, BAUD, timeout=2)
    time.sleep(1)  # Wait for port to stabilize

    print("[PC] Sending data to FPGA...")
    ser.write(bytes([0x01]))  # Start command
    ser.write(data_bytes)
    ser.write(bytes([0xFF]))  # End command
    time.sleep(1)
    print("[PC] Waiting for SHA-256 hash...")
    hash_ascii = ser.read(64)  # Expect 64 ASCII hex characters

    if len(hash_ascii) != 64:
        print("[ERROR] Expected 64 ASCII characters for SHA-256 hash, received:", len(hash_ascii))
        # print the recieved data
        print("[RECEIVED]", hash_ascii )
    else:
        print("SHA-256:", hash_ascii.decode())

    ser.close()

if __name__ == '__main__':
    # Example: hash of 'abc'
    send_data_and_receive_hash(b'abc')
