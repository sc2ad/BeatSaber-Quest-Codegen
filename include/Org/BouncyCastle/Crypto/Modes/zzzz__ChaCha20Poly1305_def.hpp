#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Modes {
class IAeadCipher;
}
namespace Org::BouncyCastle::Crypto::Engines {
class ChaCha7539Engine;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes {
struct Org__BouncyCastle__Crypto__Modes__ChaCha20Poly1305__State;
}
namespace Org::BouncyCastle::Crypto::Modes {
class ChaCha20Poly1305;
}
// Type: ::State
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(962))
// CS Name: Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::State
struct CORDL_TYPE Org__BouncyCastle__Crypto__Modes__ChaCha20Poly1305__State : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Modes__ChaCha20Poly1305__State(int32_t value__) noexcept;


                    constexpr Org__BouncyCastle__Crypto__Modes__ChaCha20Poly1305__State(Org__BouncyCastle__Crypto__Modes__ChaCha20Poly1305__State const&) = default;
                    constexpr Org__BouncyCastle__Crypto__Modes__ChaCha20Poly1305__State(Org__BouncyCastle__Crypto__Modes__ChaCha20Poly1305__State&&) = default;
                    constexpr Org__BouncyCastle__Crypto__Modes__ChaCha20Poly1305__State& operator=(Org__BouncyCastle__Crypto__Modes__ChaCha20Poly1305__State const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Org__BouncyCastle__Crypto__Modes__ChaCha20Poly1305__State& operator=(Org__BouncyCastle__Crypto__Modes__ChaCha20Poly1305__State&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Crypto__Modes__ChaCha20Poly1305__State(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Org__BouncyCastle__Crypto__Modes__ChaCha20Poly1305__State_Unwrapped : int32_t {
__Uninitialized = 0,
__EncInit = 1,
__EncAad = 2,
__EncData = 3,
__EncFinal = 4,
__DecInit = 5,
__DecAad = 6,
__DecData = 7,
__DecFinal = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Org__BouncyCastle__Crypto__Modes__ChaCha20Poly1305__State_Unwrapped () const noexcept {
return std::bit_cast<__Org__BouncyCastle__Crypto__Modes__ChaCha20Poly1305__State_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Uninitialized offset 0
static Org::BouncyCastle::Crypto::Modes::Org__BouncyCastle__Crypto__Modes__ChaCha20Poly1305__State const Uninitialized;

/// @brief Field EncInit offset 0
static Org::BouncyCastle::Crypto::Modes::Org__BouncyCastle__Crypto__Modes__ChaCha20Poly1305__State const EncInit;

/// @brief Field EncAad offset 0
static Org::BouncyCastle::Crypto::Modes::Org__BouncyCastle__Crypto__Modes__ChaCha20Poly1305__State const EncAad;

/// @brief Field EncData offset 0
static Org::BouncyCastle::Crypto::Modes::Org__BouncyCastle__Crypto__Modes__ChaCha20Poly1305__State const EncData;

/// @brief Field EncFinal offset 0
static Org::BouncyCastle::Crypto::Modes::Org__BouncyCastle__Crypto__Modes__ChaCha20Poly1305__State const EncFinal;

/// @brief Field DecInit offset 0
static Org::BouncyCastle::Crypto::Modes::Org__BouncyCastle__Crypto__Modes__ChaCha20Poly1305__State const DecInit;

/// @brief Field DecAad offset 0
static Org::BouncyCastle::Crypto::Modes::Org__BouncyCastle__Crypto__Modes__ChaCha20Poly1305__State const DecAad;

/// @brief Field DecData offset 0
static Org::BouncyCastle::Crypto::Modes::Org__BouncyCastle__Crypto__Modes__ChaCha20Poly1305__State const DecData;

/// @brief Field DecFinal offset 0
static Org::BouncyCastle::Crypto::Modes::Org__BouncyCastle__Crypto__Modes__ChaCha20Poly1305__State const DecFinal;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Modes
// Type: Org.BouncyCastle.Crypto.Modes::ChaCha20Poly1305
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(963))
// CS Name: Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305
class CORDL_TYPE ChaCha20Poly1305 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using State = Org::BouncyCastle::Crypto::Modes::Org__BouncyCastle__Crypto__Modes__ChaCha20Poly1305__State;

/// @brief Convert operator to Org::BouncyCastle::Crypto::Modes::IAeadCipher
constexpr operator  Org::BouncyCastle::Crypto::Modes::IAeadCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~ChaCha20Poly1305() = default;

// Ctor Parameters [CppParam { name: "", ty: "ChaCha20Poly1305", modifiers: " const&", def_value: None }]
constexpr ChaCha20Poly1305(ChaCha20Poly1305 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ChaCha20Poly1305", modifiers: "&&", def_value: None }]
constexpr ChaCha20Poly1305(ChaCha20Poly1305&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ChaCha20Poly1305(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ChaCha20Poly1305& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ChaCha20Poly1305& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ChaCha20Poly1305& operator=(ChaCha20Poly1305&& o) noexcept = default;
  constexpr ChaCha20Poly1305& operator=(ChaCha20Poly1305 const& o) noexcept = default;
                


// Fields

/// @brief Field BufSize offset 0
static constexpr int32_t  BufSize{64};

/// @brief Field KeySize offset 0
static constexpr int32_t  KeySize{32};

/// @brief Field NonceSize offset 0
static constexpr int32_t  NonceSize{12};

/// @brief Field MacSize offset 0
static constexpr int32_t  MacSize{16};

/// @brief Field AadLimit offset 0
static constexpr uint64_t  AadLimit{18446744073709551615u};

/// @brief Field DataLimit offset 0
static constexpr uint64_t  DataLimit{274877906880u};

static ::ArrayW<uint8_t> __declspec(property(get=__get_Zeroes, put=__set_Zeroes))  Zeroes;

static void __set_Zeroes(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_Zeroes() ;

 Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine __declspec(property(get=__get_mChacha20, put=__set_mChacha20))  mChacha20;

constexpr void __set_mChacha20(Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine value) ;

constexpr Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine __get_mChacha20() const;

 Org::BouncyCastle::Crypto::IMac __declspec(property(get=__get_mPoly1305, put=__set_mPoly1305))  mPoly1305;

constexpr void __set_mPoly1305(Org::BouncyCastle::Crypto::IMac value) ;

constexpr Org::BouncyCastle::Crypto::IMac __get_mPoly1305() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mKey, put=__set_mKey))  mKey;

constexpr void __set_mKey(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mKey() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mNonce, put=__set_mNonce))  mNonce;

constexpr void __set_mNonce(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mNonce() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mBuf, put=__set_mBuf))  mBuf;

constexpr void __set_mBuf(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mBuf() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mMac, put=__set_mMac))  mMac;

constexpr void __set_mMac(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mMac() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mInitialAad, put=__set_mInitialAad))  mInitialAad;

constexpr void __set_mInitialAad(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mInitialAad() const;

 uint64_t __declspec(property(get=__get_mAadCount, put=__set_mAadCount))  mAadCount;

constexpr void __set_mAadCount(uint64_t value) ;

constexpr uint64_t __get_mAadCount() const;

 uint64_t __declspec(property(get=__get_mDataCount, put=__set_mDataCount))  mDataCount;

constexpr void __set_mDataCount(uint64_t value) ;

constexpr uint64_t __get_mDataCount() const;

 Org::BouncyCastle::Crypto::Modes::Org__BouncyCastle__Crypto__Modes__ChaCha20Poly1305__State __declspec(property(get=__get_mState, put=__set_mState))  mState;

constexpr void __set_mState(Org::BouncyCastle::Crypto::Modes::Org__BouncyCastle__Crypto__Modes__ChaCha20Poly1305__State value) ;

constexpr Org::BouncyCastle::Crypto::Modes::Org__BouncyCastle__Crypto__Modes__ChaCha20Poly1305__State __get_mState() const;

 int32_t __declspec(property(get=__get_mBufPos, put=__set_mBufPos))  mBufPos;

constexpr void __set_mBufPos(int32_t value) ;

constexpr int32_t __get_mBufPos() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters []
explicit ChaCha20Poly1305() ;

/// @brief Method .ctor addr 0xe8ba98 size 0x60 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "poly1305", ty: "Org::BouncyCastle::Crypto::IMac", modifiers: "", def_value: None }]
explicit ChaCha20Poly1305(Org::BouncyCastle::Crypto::IMac poly1305) ;

/// @brief Method .ctor addr 0xe8baf8 size 0x1e4 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IMac poly1305) ;

/// @brief Method get_AlgorithmName addr 0xe8bcdc size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xe8bd1c size 0x464 virtual true final false
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method GetOutputSize addr 0xe8c2c0 size 0xf8 virtual true final false
 int32_t GetOutputSize(int32_t len) ;

/// @brief Method GetUpdateOutputSize addr 0xe8c3b8 size 0xfc virtual true final false
 int32_t GetUpdateOutputSize(int32_t len) ;

/// @brief Method ProcessAadByte addr 0xe8c4b4 size 0xc8 virtual true final false
 void ProcessAadByte(uint8_t input) ;

/// @brief Method ProcessAadBytes addr 0xe8c69c size 0x1f8 virtual true final false
 void ProcessAadBytes(::ArrayW<uint8_t> inBytes, int32_t inOff, int32_t len) ;

/// @brief Method ProcessByte addr 0xe8c894 size 0x288 virtual true final false
 int32_t ProcessByte(uint8_t input, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method ProcessBytes addr 0xe8ccb8 size 0x508 virtual true final false
 int32_t ProcessBytes(::ArrayW<uint8_t> inBytes, int32_t inOff, int32_t len, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method DoFinal addr 0xe8d1c0 size 0x3d0 virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method GetMac addr 0xe8d720 size 0x5c virtual true final false
 ::ArrayW<uint8_t> GetMac() ;

/// @brief Method Reset addr 0xe8d77c size 0xc virtual true final false
 void Reset() ;

/// @brief Method CheckAad addr 0xe8c57c size 0xb8 virtual false final false
 void CheckAad() ;

/// @brief Method CheckData addr 0xe8cb1c size 0xd4 virtual false final false
 void CheckData() ;

/// @brief Method FinishAad addr 0xe8d788 size 0x2c virtual false final false
 void FinishAad(Org::BouncyCastle::Crypto::Modes::Org__BouncyCastle__Crypto__Modes__ChaCha20Poly1305__State nextState) ;

/// @brief Method FinishData addr 0xe8d590 size 0x190 virtual false final false
 void FinishData(Org::BouncyCastle::Crypto::Modes::Org__BouncyCastle__Crypto__Modes__ChaCha20Poly1305__State nextState) ;

/// @brief Method IncrementCount addr 0xe8c634 size 0x68 virtual false final false
 uint64_t IncrementCount(uint64_t count, uint32_t increment, uint64_t limit) ;

/// @brief Method InitMac addr 0xe8d8b4 size 0x1d4 virtual false final false
 void InitMac() ;

/// @brief Method PadMac addr 0xe8d7b4 size 0x100 virtual false final false
 void PadMac(uint64_t count) ;

/// @brief Method ProcessData addr 0xe8cbf0 size 0xc8 virtual false final false
 void ProcessData(::ArrayW<uint8_t> inBytes, int32_t inOff, int32_t inLen, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method Reset addr 0xe8c180 size 0x140 virtual false final false
 void Reset(bool clearMac, bool resetCipher) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Modes
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::Org__BouncyCastle__Crypto__Modes__ChaCha20Poly1305__State, "Org.BouncyCastle.Crypto.Modes", "ChaCha20Poly1305/State");
NEED_NO_BOX(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305, "Org.BouncyCastle.Crypto.Modes", "ChaCha20Poly1305");
