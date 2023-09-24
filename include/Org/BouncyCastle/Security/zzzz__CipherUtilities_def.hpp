#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IBufferedCipher;
}
namespace Org::BouncyCastle::Security {
struct Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Security {
struct Org__BouncyCastle__Security__CipherUtilities__CipherPadding;
}
namespace Org::BouncyCastle::Security {
struct Org__BouncyCastle__Security__CipherUtilities__CipherMode;
}
namespace System::Collections {
class ICollection;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
struct Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm;
}
namespace Org::BouncyCastle::Security {
struct Org__BouncyCastle__Security__CipherUtilities__CipherMode;
}
namespace Org::BouncyCastle::Security {
struct Org__BouncyCastle__Security__CipherUtilities__CipherPadding;
}
namespace Org::BouncyCastle::Security {
class CipherUtilities;
}
// Type: ::CipherAlgorithm
namespace Org::BouncyCastle::Security {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1740))
// CS Name: Org.BouncyCastle.Security.CipherUtilities::CipherAlgorithm
struct CORDL_TYPE Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm(int32_t value__) noexcept;


                    constexpr Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm(Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const&) = default;
                    constexpr Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm(Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm&&) = default;
                    constexpr Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm& operator=(Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm& operator=(Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm_Unwrapped : int32_t {
__AES = 0,
__ARC4 = 1,
__BLOWFISH = 2,
__CAMELLIA = 3,
__CAST5 = 4,
__CAST6 = 5,
__CHACHA = 6,
__CHACHA20_POLY1305 = 7,
__CHACHA7539 = 8,
__DES = 9,
__DESEDE = 10,
__ELGAMAL = 11,
__GOST28147 = 12,
__HC128 = 13,
__HC256 = 14,
__IDEA = 15,
__NOEKEON = 16,
__PBEWITHSHAAND128BITRC4 = 17,
__PBEWITHSHAAND40BITRC4 = 18,
__RC2 = 19,
__RC5 = 20,
__RC5_64 = 21,
__RC6 = 22,
__RIJNDAEL = 23,
__RSA = 24,
__SALSA20 = 25,
__SEED = 26,
__SERPENT = 27,
__SKIPJACK = 28,
__SM4 = 29,
__TEA = 30,
__THREEFISH_256 = 31,
__THREEFISH_512 = 32,
__THREEFISH_1024 = 33,
__TNEPRES = 34,
__TWOFISH = 35,
__VMPC = 36,
__VMPC_KSA3 = 37,
__XTEA = 38,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm_Unwrapped () const noexcept {
return std::bit_cast<__Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field AES offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const AES;

/// @brief Field ARC4 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const ARC4;

/// @brief Field BLOWFISH offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const BLOWFISH;

/// @brief Field CAMELLIA offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const CAMELLIA;

/// @brief Field CAST5 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const CAST5;

/// @brief Field CAST6 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const CAST6;

/// @brief Field CHACHA offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const CHACHA;

/// @brief Field CHACHA20_POLY1305 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const CHACHA20_POLY1305;

/// @brief Field CHACHA7539 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const CHACHA7539;

/// @brief Field DES offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const DES;

/// @brief Field DESEDE offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const DESEDE;

/// @brief Field ELGAMAL offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const ELGAMAL;

/// @brief Field GOST28147 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const GOST28147;

/// @brief Field HC128 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const HC128;

/// @brief Field HC256 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const HC256;

/// @brief Field IDEA offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const IDEA;

/// @brief Field NOEKEON offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const NOEKEON;

/// @brief Field PBEWITHSHAAND128BITRC4 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const PBEWITHSHAAND128BITRC4;

/// @brief Field PBEWITHSHAAND40BITRC4 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const PBEWITHSHAAND40BITRC4;

/// @brief Field RC2 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const RC2;

/// @brief Field RC5 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const RC5;

/// @brief Field RC5_64 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const RC5_64;

/// @brief Field RC6 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const RC6;

/// @brief Field RIJNDAEL offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const RIJNDAEL;

/// @brief Field RSA offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const RSA;

/// @brief Field SALSA20 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const SALSA20;

/// @brief Field SEED offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const SEED;

/// @brief Field SERPENT offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const SERPENT;

/// @brief Field SKIPJACK offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const SKIPJACK;

/// @brief Field SM4 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const SM4;

/// @brief Field TEA offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const TEA;

/// @brief Field THREEFISH_256 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const THREEFISH_256;

/// @brief Field THREEFISH_512 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const THREEFISH_512;

/// @brief Field THREEFISH_1024 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const THREEFISH_1024;

/// @brief Field TNEPRES offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const TNEPRES;

/// @brief Field TWOFISH offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const TWOFISH;

/// @brief Field VMPC offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const VMPC;

/// @brief Field VMPC_KSA3 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const VMPC_KSA3;

/// @brief Field XTEA offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm const XTEA;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Security
// Type: ::CipherMode
namespace Org::BouncyCastle::Security {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1741))
// CS Name: Org.BouncyCastle.Security.CipherUtilities::CipherMode
struct CORDL_TYPE Org__BouncyCastle__Security__CipherUtilities__CipherMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Org__BouncyCastle__Security__CipherUtilities__CipherMode(int32_t value__) noexcept;


                    constexpr Org__BouncyCastle__Security__CipherUtilities__CipherMode(Org__BouncyCastle__Security__CipherUtilities__CipherMode const&) = default;
                    constexpr Org__BouncyCastle__Security__CipherUtilities__CipherMode(Org__BouncyCastle__Security__CipherUtilities__CipherMode&&) = default;
                    constexpr Org__BouncyCastle__Security__CipherUtilities__CipherMode& operator=(Org__BouncyCastle__Security__CipherUtilities__CipherMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Org__BouncyCastle__Security__CipherUtilities__CipherMode& operator=(Org__BouncyCastle__Security__CipherUtilities__CipherMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Security__CipherUtilities__CipherMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Org__BouncyCastle__Security__CipherUtilities__CipherMode_Unwrapped : int32_t {
__ECB = 0,
__NONE = 1,
__CBC = 2,
__CCM = 3,
__CFB = 4,
__CTR = 5,
__CTS = 6,
__EAX = 7,
__GCM = 8,
__GOFB = 9,
__OCB = 10,
__OFB = 11,
__OPENPGPCFB = 12,
__SIC = 13,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Org__BouncyCastle__Security__CipherUtilities__CipherMode_Unwrapped () const noexcept {
return std::bit_cast<__Org__BouncyCastle__Security__CipherUtilities__CipherMode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ECB offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode const ECB;

/// @brief Field NONE offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode const NONE;

/// @brief Field CBC offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode const CBC;

/// @brief Field CCM offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode const CCM;

/// @brief Field CFB offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode const CFB;

/// @brief Field CTR offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode const CTR;

/// @brief Field CTS offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode const CTS;

/// @brief Field EAX offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode const EAX;

/// @brief Field GCM offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode const GCM;

/// @brief Field GOFB offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode const GOFB;

/// @brief Field OCB offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode const OCB;

/// @brief Field OFB offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode const OFB;

/// @brief Field OPENPGPCFB offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode const OPENPGPCFB;

/// @brief Field SIC offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode const SIC;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Security
// Type: ::CipherPadding
namespace Org::BouncyCastle::Security {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1742))
// CS Name: Org.BouncyCastle.Security.CipherUtilities::CipherPadding
struct CORDL_TYPE Org__BouncyCastle__Security__CipherUtilities__CipherPadding : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Org__BouncyCastle__Security__CipherUtilities__CipherPadding(int32_t value__) noexcept;


                    constexpr Org__BouncyCastle__Security__CipherUtilities__CipherPadding(Org__BouncyCastle__Security__CipherUtilities__CipherPadding const&) = default;
                    constexpr Org__BouncyCastle__Security__CipherUtilities__CipherPadding(Org__BouncyCastle__Security__CipherUtilities__CipherPadding&&) = default;
                    constexpr Org__BouncyCastle__Security__CipherUtilities__CipherPadding& operator=(Org__BouncyCastle__Security__CipherUtilities__CipherPadding const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Org__BouncyCastle__Security__CipherUtilities__CipherPadding& operator=(Org__BouncyCastle__Security__CipherUtilities__CipherPadding&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Security__CipherUtilities__CipherPadding(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Org__BouncyCastle__Security__CipherUtilities__CipherPadding_Unwrapped : int32_t {
__NOPADDING = 0,
__RAW = 1,
__ISO10126PADDING = 2,
__ISO10126D2PADDING = 3,
__ISO10126_2PADDING = 4,
__ISO7816_4PADDING = 5,
__ISO9797_1PADDING = 6,
__ISO9796_1 = 7,
__ISO9796_1PADDING = 8,
__OAEP = 9,
__OAEPPADDING = 10,
__OAEPWITHMD5ANDMGF1PADDING = 11,
__OAEPWITHSHA1ANDMGF1PADDING = 12,
__OAEPWITHSHA_1ANDMGF1PADDING = 13,
__OAEPWITHSHA224ANDMGF1PADDING = 14,
__OAEPWITHSHA_224ANDMGF1PADDING = 15,
__OAEPWITHSHA256ANDMGF1PADDING = 16,
__OAEPWITHSHA_256ANDMGF1PADDING = 17,
__OAEPWITHSHA384ANDMGF1PADDING = 18,
__OAEPWITHSHA_384ANDMGF1PADDING = 19,
__OAEPWITHSHA512ANDMGF1PADDING = 20,
__OAEPWITHSHA_512ANDMGF1PADDING = 21,
__PKCS1 = 22,
__PKCS1PADDING = 23,
__PKCS5 = 24,
__PKCS5PADDING = 25,
__PKCS7 = 26,
__PKCS7PADDING = 27,
__TBCPADDING = 28,
__WITHCTS = 29,
__X923PADDING = 30,
__ZEROBYTEPADDING = 31,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Org__BouncyCastle__Security__CipherUtilities__CipherPadding_Unwrapped () const noexcept {
return std::bit_cast<__Org__BouncyCastle__Security__CipherUtilities__CipherPadding_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NOPADDING offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding const NOPADDING;

/// @brief Field RAW offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding const RAW;

/// @brief Field ISO10126PADDING offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding const ISO10126PADDING;

/// @brief Field ISO10126D2PADDING offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding const ISO10126D2PADDING;

/// @brief Field ISO10126_2PADDING offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding const ISO10126_2PADDING;

/// @brief Field ISO7816_4PADDING offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding const ISO7816_4PADDING;

/// @brief Field ISO9797_1PADDING offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding const ISO9797_1PADDING;

/// @brief Field ISO9796_1 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding const ISO9796_1;

/// @brief Field ISO9796_1PADDING offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding const ISO9796_1PADDING;

/// @brief Field OAEP offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding const OAEP;

/// @brief Field OAEPPADDING offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding const OAEPPADDING;

/// @brief Field OAEPWITHMD5ANDMGF1PADDING offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding const OAEPWITHMD5ANDMGF1PADDING;

/// @brief Field OAEPWITHSHA1ANDMGF1PADDING offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding const OAEPWITHSHA1ANDMGF1PADDING;

/// @brief Field OAEPWITHSHA_1ANDMGF1PADDING offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding const OAEPWITHSHA_1ANDMGF1PADDING;

/// @brief Field OAEPWITHSHA224ANDMGF1PADDING offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding const OAEPWITHSHA224ANDMGF1PADDING;

/// @brief Field OAEPWITHSHA_224ANDMGF1PADDING offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding const OAEPWITHSHA_224ANDMGF1PADDING;

/// @brief Field OAEPWITHSHA256ANDMGF1PADDING offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding const OAEPWITHSHA256ANDMGF1PADDING;

/// @brief Field OAEPWITHSHA_256ANDMGF1PADDING offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding const OAEPWITHSHA_256ANDMGF1PADDING;

/// @brief Field OAEPWITHSHA384ANDMGF1PADDING offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding const OAEPWITHSHA384ANDMGF1PADDING;

/// @brief Field OAEPWITHSHA_384ANDMGF1PADDING offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding const OAEPWITHSHA_384ANDMGF1PADDING;

/// @brief Field OAEPWITHSHA512ANDMGF1PADDING offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding const OAEPWITHSHA512ANDMGF1PADDING;

/// @brief Field OAEPWITHSHA_512ANDMGF1PADDING offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding const OAEPWITHSHA_512ANDMGF1PADDING;

/// @brief Field PKCS1 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding const PKCS1;

/// @brief Field PKCS1PADDING offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding const PKCS1PADDING;

/// @brief Field PKCS5 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding const PKCS5;

/// @brief Field PKCS5PADDING offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding const PKCS5PADDING;

/// @brief Field PKCS7 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding const PKCS7;

/// @brief Field PKCS7PADDING offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding const PKCS7PADDING;

/// @brief Field TBCPADDING offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding const TBCPADDING;

/// @brief Field WITHCTS offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding const WITHCTS;

/// @brief Field X923PADDING offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding const X923PADDING;

/// @brief Field ZEROBYTEPADDING offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding const ZEROBYTEPADDING;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Security
// Type: Org.BouncyCastle.Security::CipherUtilities
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1743))
// CS Name: Org.BouncyCastle.Security.CipherUtilities
class CORDL_TYPE CipherUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using CipherPadding = Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding;

using CipherMode = Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode;

using CipherAlgorithm = Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CipherUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "CipherUtilities", modifiers: " const&", def_value: None }]
constexpr CipherUtilities(CipherUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CipherUtilities", modifiers: "&&", def_value: None }]
constexpr CipherUtilities(CipherUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CipherUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CipherUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CipherUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CipherUtilities& operator=(CipherUtilities&& o) noexcept = default;
  constexpr CipherUtilities& operator=(CipherUtilities const& o) noexcept = default;
                


// Fields

static System::Collections::IDictionary __declspec(property(get=__get_algorithms, put=__set_algorithms))  algorithms;

static void __set_algorithms(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_algorithms() ;

static System::Collections::IDictionary __declspec(property(get=__get_oids, put=__set_oids))  oids;

static void __set_oids(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_oids() ;


// Properties

static System::Collections::ICollection __declspec(property(get=get_Algorithms))  Algorithms;


// Methods

static Org::BouncyCastle::Security::CipherUtilities New_ctor() ;

/// @brief Method .ctor addr 0x10953cc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method GetObjectIdentifier addr 0x10953d4 size 0x25c virtual false final false
static Org::BouncyCastle::Asn1::DerObjectIdentifier GetObjectIdentifier(::StringW mechanism) ;

/// @brief Method get_Algorithms addr 0x1095630 size 0xcc virtual false final false
static System::Collections::ICollection get_Algorithms() ;

/// @brief Method GetCipher addr 0x10956fc size 0x60 virtual false final false
static Org::BouncyCastle::Crypto::IBufferedCipher GetCipher(Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method GetCipher addr 0x109575c size 0x21cc virtual false final false
static Org::BouncyCastle::Crypto::IBufferedCipher GetCipher(::StringW algorithm) ;

/// @brief Method GetAlgorithmName addr 0x1097f74 size 0x108 virtual false final false
static ::StringW GetAlgorithmName(Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method GetDigitIndex addr 0x1097928 size 0xb0 virtual false final false
static int32_t GetDigitIndex(::StringW s) ;

/// @brief Method CreateBlockCipher addr 0x10979d8 size 0x59c virtual false final false
static Org::BouncyCastle::Crypto::IBlockCipher CreateBlockCipher(Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm cipherAlgorithm) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Security
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm, "Org.BouncyCastle.Security", "CipherUtilities/CipherAlgorithm");
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode, "Org.BouncyCastle.Security", "CipherUtilities/CipherMode");
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding, "Org.BouncyCastle.Security", "CipherUtilities/CipherPadding");
NEED_NO_BOX(Org::BouncyCastle::Security::CipherUtilities);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::CipherUtilities, "Org.BouncyCastle.Security", "CipherUtilities");
