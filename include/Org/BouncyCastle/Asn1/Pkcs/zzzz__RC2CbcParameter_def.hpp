#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class RC2CbcParameter;
}
// Type: Org.BouncyCastle.Asn1.Pkcs::RC2CbcParameter
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(247))
// CS Name: Org.BouncyCastle.Asn1.Pkcs.RC2CbcParameter
class CORDL_TYPE RC2CbcParameter : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RC2CbcParameter() = default;

// Ctor Parameters [CppParam { name: "", ty: "RC2CbcParameter", modifiers: " const&", def_value: None }]
constexpr RC2CbcParameter(RC2CbcParameter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RC2CbcParameter", modifiers: "&&", def_value: None }]
constexpr RC2CbcParameter(RC2CbcParameter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RC2CbcParameter(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr RC2CbcParameter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RC2CbcParameter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RC2CbcParameter& operator=(RC2CbcParameter&& o) noexcept = default;
  constexpr RC2CbcParameter& operator=(RC2CbcParameter const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_version() const;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_iv, put=__set_iv))  iv;

constexpr void __set_iv(Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr Org::BouncyCastle::Asn1::Asn1OctetString __get_iv() const;


// Properties

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_RC2ParameterVersion))  RC2ParameterVersion;


// Methods

/// @brief Method GetInstance addr 0xeff42c size 0x164 virtual false final false
static Org::BouncyCastle::Asn1::Pkcs::RC2CbcParameter GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "iv", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit RC2CbcParameter(::ArrayW<uint8_t> iv) ;

/// @brief Method .ctor addr 0xeff704 size 0x7c virtual false final false
 void _ctor(::ArrayW<uint8_t> iv) ;

// Ctor Parameters [CppParam { name: "parameterVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "iv", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit RC2CbcParameter(int32_t parameterVersion, ::ArrayW<uint8_t> iv) ;

/// @brief Method .ctor addr 0xeff780 size 0xb4 virtual false final false
 void _ctor(int32_t parameterVersion, ::ArrayW<uint8_t> iv) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit RC2CbcParameter(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xeff590 size 0x174 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_RC2ParameterVersion addr 0xeff834 size 0x14 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_RC2ParameterVersion() ;

/// @brief Method GetIV addr 0xeff848 size 0x78 virtual false final false
 ::ArrayW<uint8_t> GetIV() ;

/// @brief Method ToAsn1Object addr 0xeff8c0 size 0x118 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(Org::BouncyCastle::Asn1::Pkcs::RC2CbcParameter);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Pkcs::RC2CbcParameter, "Org.BouncyCastle.Asn1.Pkcs", "RC2CbcParameter");
