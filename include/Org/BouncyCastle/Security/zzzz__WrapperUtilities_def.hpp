#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IBufferedCipher;
}
namespace Org::BouncyCastle::Crypto {
class IWrapper;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
struct Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm;
}
namespace Org::BouncyCastle::Security {
class Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper;
}
namespace Org::BouncyCastle::Security {
class WrapperUtilities;
}
// Type: ::WrapAlgorithm
namespace Org::BouncyCastle::Security {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1760))
// CS Name: Org.BouncyCastle.Security.WrapperUtilities::WrapAlgorithm
struct CORDL_TYPE Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm(int32_t value__) noexcept;


                    constexpr Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm(Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm const&) = default;
                    constexpr Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm(Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm&&) = default;
                    constexpr Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm& operator=(Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm& operator=(Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm_Unwrapped : int32_t {
__AESWRAP = 0,
__CAMELLIAWRAP = 1,
__DESEDEWRAP = 2,
__RC2WRAP = 3,
__SEEDWRAP = 4,
__DESEDERFC3211WRAP = 5,
__AESRFC3211WRAP = 6,
__CAMELLIARFC3211WRAP = 7,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm_Unwrapped () const noexcept {
return std::bit_cast<__Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field AESWRAP offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm const AESWRAP;

/// @brief Field CAMELLIAWRAP offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm const CAMELLIAWRAP;

/// @brief Field DESEDEWRAP offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm const DESEDEWRAP;

/// @brief Field RC2WRAP offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm const RC2WRAP;

/// @brief Field SEEDWRAP offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm const SEEDWRAP;

/// @brief Field DESEDERFC3211WRAP offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm const DESEDERFC3211WRAP;

/// @brief Field AESRFC3211WRAP offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm const AESRFC3211WRAP;

/// @brief Field CAMELLIARFC3211WRAP offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm const CAMELLIARFC3211WRAP;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Security
// Type: ::BufferedCipherWrapper
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1761))
// CS Name: Org.BouncyCastle.Security.WrapperUtilities::BufferedCipherWrapper
class CORDL_TYPE Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IWrapper
constexpr operator  Org::BouncyCastle::Crypto::IWrapper() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper(Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper(Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper& operator=(Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper&& o) noexcept = default;
  constexpr Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper& operator=(Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::IBufferedCipher __declspec(property(get=__get_cipher, put=__set_cipher))  cipher;

constexpr void __set_cipher(Org::BouncyCastle::Crypto::IBufferedCipher value) ;

constexpr Org::BouncyCastle::Crypto::IBufferedCipher __get_cipher() const;

 bool __declspec(property(get=__get_forWrapping, put=__set_forWrapping))  forWrapping;

constexpr void __set_forWrapping(bool value) ;

constexpr bool __get_forWrapping() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters [CppParam { name: "cipher", ty: "Org::BouncyCastle::Crypto::IBufferedCipher", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper(Org::BouncyCastle::Crypto::IBufferedCipher cipher) ;

/// @brief Method .ctor addr 0x10c28ec size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IBufferedCipher cipher) ;

/// @brief Method get_AlgorithmName addr 0x10c2a1c size 0xa0 virtual true final true
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0x10c2abc size 0xc4 virtual true final true
 void Init(bool forWrapping, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method Wrap addr 0x10c2b80 size 0x118 virtual true final true
 ::ArrayW<uint8_t> Wrap(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

/// @brief Method Unwrap addr 0x10c2c98 size 0x118 virtual true final true
 ::ArrayW<uint8_t> Unwrap(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Security
// Type: Org.BouncyCastle.Security::WrapperUtilities
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1762))
// CS Name: Org.BouncyCastle.Security.WrapperUtilities
class CORDL_TYPE WrapperUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using BufferedCipherWrapper = Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper;

using WrapAlgorithm = Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~WrapperUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "WrapperUtilities", modifiers: " const&", def_value: None }]
constexpr WrapperUtilities(WrapperUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WrapperUtilities", modifiers: "&&", def_value: None }]
constexpr WrapperUtilities(WrapperUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WrapperUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr WrapperUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WrapperUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WrapperUtilities& operator=(WrapperUtilities&& o) noexcept = default;
  constexpr WrapperUtilities& operator=(WrapperUtilities const& o) noexcept = default;
                


// Fields

static System::Collections::IDictionary __declspec(property(get=__get_algorithms, put=__set_algorithms))  algorithms;

static void __set_algorithms(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_algorithms() ;


// Methods

// Ctor Parameters []
explicit WrapperUtilities() ;

/// @brief Method .ctor addr 0x10c1b14 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method GetWrapper addr 0x10c22d4 size 0x60 virtual false final false
static Org::BouncyCastle::Crypto::IWrapper GetWrapper(Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method GetWrapper addr 0x10c2334 size 0x5b8 virtual false final false
static Org::BouncyCastle::Crypto::IWrapper GetWrapper(::StringW algorithm) ;

/// @brief Method GetAlgorithmName addr 0x10c2914 size 0x108 virtual false final false
static ::StringW GetAlgorithmName(Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Security
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm, "Org.BouncyCastle.Security", "WrapperUtilities/WrapAlgorithm");
NEED_NO_BOX(Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper, "Org.BouncyCastle.Security", "WrapperUtilities/BufferedCipherWrapper");
NEED_NO_BOX(Org::BouncyCastle::Security::WrapperUtilities);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::WrapperUtilities, "Org.BouncyCastle.Security", "WrapperUtilities");
