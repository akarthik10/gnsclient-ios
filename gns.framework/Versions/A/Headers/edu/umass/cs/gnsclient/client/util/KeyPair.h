//
//  KeyPair.h
//  GnsCLientIOS
//
//  Created by David Westbrook on 10/14/14.
//  Copyright (c) 2014 University of Massachusetts. All rights reserved.
//
//  This development was funded in part by the National Science Foundation through a Hazards SEES grant
//  and the MobilityFirst Future Internet Architecture project.


// The KeyPair class handles keypair creation and lookup involving the key chain as
// well as providing methods to sign NSData using the private key and encrypt and
// decrypt data using the public and private key.

@interface KeyPair : NSObject
{
    SecKeyRef publicKey;
    SecKeyRef privateKey;
    NSData *publicTag;
    NSData *privateTag;
    // just for debugging
    NSString* publicString;
    NSString* privateString;
    BOOL debuggingEnabled;
}

// This creates a new keypair. The keypair is stored on the keychain.
- (id)init;
// This creates a keypair by looking it up on the keychain.
- (id)initWithGuid:(NSString *)guid;
// Returns the reference to the public key.
- (SecKeyRef)getPublicKeyRef;
// Returns the actual bytes of the public key.
- (NSData *)getPublicKeyBits;
// Returns a SHA1 digest of the public key as a hex string (a guid)
- (NSString *)sha1PublicKeyToString;
// Returns the public key encoded in a real DER format that java likes
- (NSData *) getRSAPublicKeyEncoded;
// Returns the reference to the private key.
- (SecKeyRef)getPrivateKeyRef;
// Internal use - Returns the reference to the public key from the keychain without using cache.
- (SecKeyRef)getPublicKeyRefFromKeyChain;
// Internal use - Returns the reference to the private key from the keychain without using cache.
- (SecKeyRef)getPrivateKeyRefFromKeyChain;
//  Internal use - Creates a new key pair and squirrels it away on the keychain.
- (void)generateKeyPair;
// inserts data for a kSecClassKey into the keychain
- (void)insertKey:(SecKeyRef)givenKey tag:(NSData *)tag;
// deletes a kSecClassKey key from the keychain
- (void)deleteKey:(NSData *)tag;
// Returns true if the tag
- (BOOL)publicKeyInKeyChain:(NSString *)guid;

- (NSData*)signBytesSHA256withRSA:(NSData*) plainData;
- (NSData*)signBytesSHA1withRSA:(NSData*) plainData;
- (BOOL)verifyBytesSHA1withRSA:(NSData *)plainData signature:(NSData*) signature;
- (void)encryptWithPublicKey:(uint8_t *)plainBuffer cipherBuffer:(uint8_t *)cipherBuffer;
- (void)decryptWithPrivateKey:(uint8_t *)cipherBuffer plainBuffer:(uint8_t *)plainBuffer;
- (void)testAsymmetricEncryptionAndDecryption;
- (void)testAsymmetricSigningAndVerification;
+ (void)listAllKeyChainItems;
+ (void)deleteAllKeyChainItems;


@end
