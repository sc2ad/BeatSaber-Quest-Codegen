#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace BGNet::Core {
class ITaskUtility;
}
namespace System::Security::Cryptography {
class AesCryptoServiceProvider;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class IDisposable;
}
namespace Org::BouncyCastle::Crypto::Macs {
class HMac;
}
namespace System::Collections::Concurrent {
template<typename T>
class ConcurrentQueue_1;
}
// Forward declare root types
namespace GlobalNamespace {
class EncryptionUtility;
}
namespace GlobalNamespace {
class GlobalNamespace__EncryptionUtility__EncryptionState;
}
namespace GlobalNamespace {
class GlobalNamespace__EncryptionUtility__IEncryptionState;
}
namespace GlobalNamespace {
class GlobalNamespace__EncryptionUtility____c__DisplayClass18_0;
}
// Type: ::IEncryptionState
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12665))
// CS Name: EncryptionUtility::IEncryptionState
class CORDL_TYPE GlobalNamespace__EncryptionUtility__IEncryptionState : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

~GlobalNamespace__EncryptionUtility__IEncryptionState() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__EncryptionUtility__IEncryptionState(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 bool __declspec(property(get=get_isValid))  isValid;


// Methods

/// @brief Method get_isValid addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isValid() ;

/// @brief Method EncryptData addr 0x0 size 0xffffffffffffffff virtual true final false
 void EncryptData(::ArrayW<uint8_t> data, ByRef<int32_t> offset, ByRef<int32_t> length, int32_t extraPrefixBytes) ;

/// @brief Method TryDecryptData addr 0x0 size 0xffffffffffffffff virtual true final false
 bool TryDecryptData(::ArrayW<uint8_t> data, ByRef<int32_t> offset, ByRef<int32_t> length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EncryptionState
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12666))
// CS Name: EncryptionUtility::EncryptionState
class CORDL_TYPE GlobalNamespace__EncryptionUtility__EncryptionState : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState
constexpr operator  GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~GlobalNamespace__EncryptionUtility__EncryptionState() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__EncryptionUtility__EncryptionState", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__EncryptionUtility__EncryptionState(GlobalNamespace__EncryptionUtility__EncryptionState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__EncryptionUtility__EncryptionState", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__EncryptionUtility__EncryptionState(GlobalNamespace__EncryptionUtility__EncryptionState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__EncryptionUtility__EncryptionState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__EncryptionUtility__EncryptionState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__EncryptionUtility__EncryptionState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__EncryptionUtility__EncryptionState& operator=(GlobalNamespace__EncryptionUtility__EncryptionState&& o) noexcept = default;
  constexpr GlobalNamespace__EncryptionUtility__EncryptionState& operator=(GlobalNamespace__EncryptionUtility__EncryptionState const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__isValid, put=__set__isValid))  _isValid;

constexpr void __set__isValid(bool value) ;

constexpr bool __get__isValid() const;

/// @brief Field kReceivedSequencNumBufferLength offset 0
static constexpr int32_t  kReceivedSequencNumBufferLength{64};

 int32_t __declspec(property(get=__get__lastSentSequenceNum, put=__set__lastSentSequenceNum))  _lastSentSequenceNum;

constexpr void __set__lastSentSequenceNum(int32_t value) ;

constexpr int32_t __get__lastSentSequenceNum() const;

 bool __declspec(property(get=__get__hasReceivedSequenceNum, put=__set__hasReceivedSequenceNum))  _hasReceivedSequenceNum;

constexpr void __set__hasReceivedSequenceNum(bool value) ;

constexpr bool __get__hasReceivedSequenceNum() const;

 uint32_t __declspec(property(get=__get__lastReceivedSequenceNum, put=__set__lastReceivedSequenceNum))  _lastReceivedSequenceNum;

constexpr void __set__lastReceivedSequenceNum(uint32_t value) ;

constexpr uint32_t __get__lastReceivedSequenceNum() const;

 ::ArrayW<bool> __declspec(property(get=__get__receivedSequenceNumBuffer, put=__set__receivedSequenceNumBuffer))  _receivedSequenceNumBuffer;

constexpr void __set__receivedSequenceNumBuffer(::ArrayW<bool> value) ;

constexpr ::ArrayW<bool> __get__receivedSequenceNumBuffer() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_sendKey, put=__set_sendKey))  sendKey;

constexpr void __set_sendKey(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_sendKey() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_receiveKey, put=__set_receiveKey))  receiveKey;

constexpr void __set_receiveKey(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_receiveKey() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__sendMacKey, put=__set__sendMacKey))  _sendMacKey;

constexpr void __set__sendMacKey(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__sendMacKey() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__receiveMacKey, put=__set__receiveMacKey))  _receiveMacKey;

constexpr void __set__receiveMacKey(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__receiveMacKey() const;

 System::Collections::Concurrent::ConcurrentQueue_1<Org::BouncyCastle::Crypto::Macs::HMac> __declspec(property(get=__get__sendMacQueue, put=__set__sendMacQueue))  _sendMacQueue;

constexpr void __set__sendMacQueue(System::Collections::Concurrent::ConcurrentQueue_1<Org::BouncyCastle::Crypto::Macs::HMac> value) ;

constexpr System::Collections::Concurrent::ConcurrentQueue_1<Org::BouncyCastle::Crypto::Macs::HMac> __get__sendMacQueue() const;

 System::Collections::Concurrent::ConcurrentQueue_1<Org::BouncyCastle::Crypto::Macs::HMac> __declspec(property(get=__get__receiveMacQueue, put=__set__receiveMacQueue))  _receiveMacQueue;

constexpr void __set__receiveMacQueue(System::Collections::Concurrent::ConcurrentQueue_1<Org::BouncyCastle::Crypto::Macs::HMac> value) ;

constexpr System::Collections::Concurrent::ConcurrentQueue_1<Org::BouncyCastle::Crypto::Macs::HMac> __get__receiveMacQueue() const;


// Properties

 bool __declspec(property(get=get_isValid))  isValid;


// Methods

/// @brief Method get_isValid addr 0xda9704 size 0x18 virtual true final true
 bool get_isValid() ;

/// @brief Method EncryptData addr 0xda971c size 0x84 virtual true final true
 void EncryptData(::ArrayW<uint8_t> data, ByRef<int32_t> offset, ByRef<int32_t> length, int32_t extraPrefixBytes) ;

/// @brief Method TryDecryptData addr 0xda97a0 size 0x7c virtual true final true
 bool TryDecryptData(::ArrayW<uint8_t> data, ByRef<int32_t> offset, ByRef<int32_t> length) ;

/// @brief Method ComputeSendMac addr 0xda7ef4 size 0x248 virtual false final false
 ::ArrayW<uint8_t> ComputeSendMac(::ArrayW<uint8_t> data, int32_t offset, int32_t count) ;

/// @brief Method ComputeReceiveMac addr 0xda8b70 size 0x248 virtual false final false
 ::ArrayW<uint8_t> ComputeReceiveMac(::ArrayW<uint8_t> data, int32_t offset, int32_t count) ;

/// @brief Method IsValidSequenceNum addr 0xda8a44 size 0x12c virtual false final false
 bool IsValidSequenceNum(uint32_t sequenceNum) ;

/// @brief Method PutSequenceNum addr 0xda8db8 size 0x204 virtual false final false
 bool PutSequenceNum(uint32_t sequenceNum) ;

/// @brief Method GetNextSentSequenceNum addr 0xda7ee8 size 0xc virtual false final false
 uint32_t GetNextSentSequenceNum() ;

// Ctor Parameters [CppParam { name: "preMasterSecret", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "serverSeed", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "clientSeed", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "isClient", ty: "bool", modifiers: "", def_value: None }]
explicit GlobalNamespace__EncryptionUtility__EncryptionState(::ArrayW<uint8_t> preMasterSecret, ::ArrayW<uint8_t> serverSeed, ::ArrayW<uint8_t> clientSeed, bool isClient) ;

/// @brief Method .ctor addr 0xda7220 size 0x260 virtual false final false
 void _ctor(::ArrayW<uint8_t> preMasterSecret, ::ArrayW<uint8_t> serverSeed, ::ArrayW<uint8_t> clientSeed, bool isClient) ;

/// @brief Method MakeSeed addr 0xda981c size 0xe0 virtual false final false
static ::ArrayW<uint8_t> MakeSeed(::ArrayW<uint8_t> baseSeed, ::ArrayW<uint8_t> serverSeed, ::ArrayW<uint8_t> clientSeed) ;

/// @brief Method PRF addr 0xda98fc size 0xe8 virtual false final false
static ::ArrayW<uint8_t> PRF(::ArrayW<uint8_t> key, ::ArrayW<uint8_t> seed, int32_t length) ;

/// @brief Method PRF_Hash addr 0xda99e4 size 0x1ec virtual false final false
static void PRF_Hash(::ArrayW<uint8_t> key, ::ArrayW<uint8_t> seed, ByRef<int32_t> length) ;

/// @brief Method Dispose addr 0xda9bd0 size 0x18 virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass18_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12667))
// CS Name: EncryptionUtility::<>c__DisplayClass18_0
class CORDL_TYPE GlobalNamespace__EncryptionUtility____c__DisplayClass18_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__EncryptionUtility____c__DisplayClass18_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__EncryptionUtility____c__DisplayClass18_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__EncryptionUtility____c__DisplayClass18_0(GlobalNamespace__EncryptionUtility____c__DisplayClass18_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__EncryptionUtility____c__DisplayClass18_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__EncryptionUtility____c__DisplayClass18_0(GlobalNamespace__EncryptionUtility____c__DisplayClass18_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__EncryptionUtility____c__DisplayClass18_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__EncryptionUtility____c__DisplayClass18_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__EncryptionUtility____c__DisplayClass18_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__EncryptionUtility____c__DisplayClass18_0& operator=(GlobalNamespace__EncryptionUtility____c__DisplayClass18_0&& o) noexcept = default;
  constexpr GlobalNamespace__EncryptionUtility____c__DisplayClass18_0& operator=(GlobalNamespace__EncryptionUtility____c__DisplayClass18_0 const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_preMasterSecret, put=__set_preMasterSecret))  preMasterSecret;

constexpr void __set_preMasterSecret(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_preMasterSecret() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_serverSeed, put=__set_serverSeed))  serverSeed;

constexpr void __set_serverSeed(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_serverSeed() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_clientSeed, put=__set_clientSeed))  clientSeed;

constexpr void __set_clientSeed(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_clientSeed() const;

 bool __declspec(property(get=__get_isClient, put=__set_isClient))  isClient;

constexpr void __set_isClient(bool value) ;

constexpr bool __get_isClient() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__EncryptionUtility____c__DisplayClass18_0() ;

/// @brief Method .ctor addr 0xda7480 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <CreateEncryptionStateAsync>b__0 addr 0xda9be8 size 0x8c virtual false final false
 GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState _CreateEncryptionStateAsync_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EncryptionUtility
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12668))
// CS Name: EncryptionUtility
class CORDL_TYPE EncryptionUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass18_0 = GlobalNamespace::GlobalNamespace__EncryptionUtility____c__DisplayClass18_0;

using EncryptionState = GlobalNamespace::GlobalNamespace__EncryptionUtility__EncryptionState;

using IEncryptionState = GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EncryptionUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "EncryptionUtility", modifiers: " const&", def_value: None }]
constexpr EncryptionUtility(EncryptionUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EncryptionUtility", modifiers: "&&", def_value: None }]
constexpr EncryptionUtility(EncryptionUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EncryptionUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EncryptionUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EncryptionUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EncryptionUtility& operator=(EncryptionUtility&& o) noexcept = default;
  constexpr EncryptionUtility& operator=(EncryptionUtility const& o) noexcept = default;
                


// Fields

/// @brief Field kMacHashSize offset 0
static constexpr int32_t  kMacHashSize{10};

/// @brief Field kSequenceNumberSize offset 0
static constexpr int32_t  kSequenceNumberSize{4};

/// @brief Field kMaxPadding offset 0
static constexpr int32_t  kMaxPadding{32};

/// @brief Field kMacKeySize offset 0
static constexpr int32_t  kMacKeySize{64};

/// @brief Field kKeySize offset 0
static constexpr int32_t  kKeySize{32};

/// @brief Field kBlockSize offset 0
static constexpr int32_t  kBlockSize{16};

/// @brief Field kIvSize offset 0
static constexpr int32_t  kIvSize{16};

/// @brief Field kMasterKeySize offset 0
static constexpr int32_t  kMasterKeySize{48};

/// @brief Field kRandomBlockSize offset 0
static constexpr int32_t  kRandomBlockSize{32};

/// @brief Field kExtraSize offset 0
static constexpr int32_t  kExtraSize{62};

static ::ArrayW<uint8_t> __declspec(property(get=__get__masterSecretSeed, put=__set__masterSecretSeed))  _masterSecretSeed;

static void __set__masterSecretSeed(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get__masterSecretSeed() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get__keyExpansionSeed, put=__set__keyExpansionSeed))  _keyExpansionSeed;

static void __set__keyExpansionSeed(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get__keyExpansionSeed() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get__tempIV, put=__set__tempIV))  _tempIV;

static void __set__tempIV(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get__tempIV() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get__tempHash, put=__set__tempHash))  _tempHash;

static void __set__tempHash(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get__tempHash() ;

static System::Security::Cryptography::AesCryptoServiceProvider __declspec(property(get=__get__aes, put=__set__aes))  _aes;

static void __set__aes(System::Security::Cryptography::AesCryptoServiceProvider value) ;

static System::Security::Cryptography::AesCryptoServiceProvider __get__aes() ;


// Methods

/// @brief Method CreateEncryptionState addr 0xda7198 size 0x88 virtual false final false
static GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState CreateEncryptionState(::ArrayW<uint8_t> preMasterSecret, ::ArrayW<uint8_t> serverSeed, ::ArrayW<uint8_t> clientSeed, bool isClient) ;

/// @brief Method CreateEncryptionStateAsync addr 0xda4dd4 size 0x16c virtual false final false
static System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> CreateEncryptionStateAsync(BGNet::Core::ITaskUtility taskUtility, ::ArrayW<uint8_t> preMasterSecret, ::ArrayW<uint8_t> serverSeed, ::ArrayW<uint8_t> clientSeed, bool isClient) ;

/// @brief Method IsValidLength addr 0xda7488 size 0x20 virtual false final false
static bool IsValidLength(int32_t length) ;

/// @brief Method EncryptData addr 0xda74a8 size 0xa40 virtual false final false
static void EncryptData(GlobalNamespace::GlobalNamespace__EncryptionUtility__EncryptionState state, ::ArrayW<uint8_t> data, ByRef<int32_t> offset, ByRef<int32_t> length, int32_t extraPrefixedData) ;

/// @brief Method TryDecryptData addr 0xda813c size 0x908 virtual false final false
static bool TryDecryptData(GlobalNamespace::GlobalNamespace__EncryptionUtility__EncryptionState state, ::ArrayW<uint8_t> data, ByRef<int32_t> offset, ByRef<int32_t> length) ;

/// @brief Method FastCopyBlock addr 0xda8fbc size 0x314 virtual false final false
static void FastCopyBlock(::ArrayW<uint8_t> inArr, int32_t inOff, ::ArrayW<uint8_t> outArr, int32_t outOff) ;

/// @brief Method FastCopyMac addr 0xda92d0 size 0x1f4 virtual false final false
static void FastCopyMac(::ArrayW<uint8_t> inArr, int32_t inOff, ::ArrayW<uint8_t> outArr, int32_t outOff) ;

/// @brief Method Log addr 0xda94c4 size 0x8c virtual false final false
static void Log(::StringW message) ;

/// @brief Method LogV addr 0xda9550 size 0x8c virtual false final false
static void LogV(::StringW message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::EncryptionUtility);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EncryptionUtility, "", "EncryptionUtility");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__EncryptionUtility__EncryptionState);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__EncryptionUtility__EncryptionState, "", "EncryptionUtility/EncryptionState");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState, "", "EncryptionUtility/IEncryptionState");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__EncryptionUtility____c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__EncryptionUtility____c__DisplayClass18_0, "", "EncryptionUtility/<>c__DisplayClass18_0");
