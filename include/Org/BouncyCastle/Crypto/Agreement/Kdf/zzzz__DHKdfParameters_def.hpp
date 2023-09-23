#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement::Kdf {
class DHKdfParameters;
}
// Type: Org.BouncyCastle.Crypto.Agreement.Kdf::DHKdfParameters
namespace Org::BouncyCastle::Crypto::Agreement::Kdf {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(724))
// CS Name: Org.BouncyCastle.Crypto.Agreement.Kdf.DHKdfParameters
class CORDL_TYPE DHKdfParameters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IDerivationParameters
constexpr operator  Org::BouncyCastle::Crypto::IDerivationParameters() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DHKdfParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "DHKdfParameters", modifiers: " const&", def_value: None }]
constexpr DHKdfParameters(DHKdfParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DHKdfParameters", modifiers: "&&", def_value: None }]
constexpr DHKdfParameters(DHKdfParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DHKdfParameters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DHKdfParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DHKdfParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DHKdfParameters& operator=(DHKdfParameters&& o) noexcept = default;
  constexpr DHKdfParameters& operator=(DHKdfParameters const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_algorithm, put=__set_algorithm))  algorithm;

constexpr void __set_algorithm(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_algorithm() const;

 int32_t __declspec(property(get=__get_keySize, put=__set_keySize))  keySize;

constexpr void __set_keySize(int32_t value) ;

constexpr int32_t __get_keySize() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_z, put=__set_z))  z;

constexpr void __set_z(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_z() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_extraInfo, put=__set_extraInfo))  extraInfo;

constexpr void __set_extraInfo(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_extraInfo() const;


// Properties

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_Algorithm))  Algorithm;

 int32_t __declspec(property(get=get_KeySize))  KeySize;


// Methods

// Ctor Parameters [CppParam { name: "algorithm", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "keySize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit DHKdfParameters(Org::BouncyCastle::Asn1::DerObjectIdentifier algorithm, int32_t keySize, ::ArrayW<uint8_t> z) ;

/// @brief Method .ctor addr 0x118bba4 size 0x40 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier algorithm, int32_t keySize, ::ArrayW<uint8_t> z) ;

// Ctor Parameters [CppParam { name: "algorithm", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "keySize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "extraInfo", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit DHKdfParameters(Org::BouncyCastle::Asn1::DerObjectIdentifier algorithm, int32_t keySize, ::ArrayW<uint8_t> z, ::ArrayW<uint8_t> extraInfo) ;

/// @brief Method .ctor addr 0x118bbe4 size 0x44 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier algorithm, int32_t keySize, ::ArrayW<uint8_t> z, ::ArrayW<uint8_t> extraInfo) ;

/// @brief Method get_Algorithm addr 0x118bc28 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_Algorithm() ;

/// @brief Method get_KeySize addr 0x118bc30 size 0x8 virtual false final false
 int32_t get_KeySize() ;

/// @brief Method GetZ addr 0x118bc38 size 0x8 virtual false final false
 ::ArrayW<uint8_t> GetZ() ;

/// @brief Method GetExtraInfo addr 0x118bc40 size 0x8 virtual false final false
 ::ArrayW<uint8_t> GetExtraInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Agreement::Kdf
NEED_NO_BOX(Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters, "Org.BouncyCastle.Crypto.Agreement.Kdf", "DHKdfParameters");
