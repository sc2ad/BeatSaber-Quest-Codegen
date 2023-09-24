#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class PbeParameter;
}
// Type: Org.BouncyCastle.Asn1.Pkcs::PbeParameter
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(240))
// CS Name: Org.BouncyCastle.Asn1.Pkcs.PbeParameter
class CORDL_TYPE PbeParameter : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PbeParameter() = default;

// Ctor Parameters [CppParam { name: "", ty: "PbeParameter", modifiers: " const&", def_value: None }]
constexpr PbeParameter(PbeParameter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PbeParameter", modifiers: "&&", def_value: None }]
constexpr PbeParameter(PbeParameter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PbeParameter(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr PbeParameter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PbeParameter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PbeParameter& operator=(PbeParameter&& o) noexcept = default;
  constexpr PbeParameter& operator=(PbeParameter const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_salt, put=__set_salt))  salt;

constexpr void __set_salt(Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr Org::BouncyCastle::Asn1::Asn1OctetString __get_salt() const;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_iterationCount, put=__set_iterationCount))  iterationCount;

constexpr void __set_iterationCount(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_iterationCount() const;


// Properties

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_IterationCount))  IterationCount;


// Methods

/// @brief Method GetInstance addr 0xefb3f0 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Pkcs::PbeParameter GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::Pkcs::PbeParameter New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xefb578 size 0xe8 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

static Org::BouncyCastle::Asn1::Pkcs::PbeParameter New_ctor(::ArrayW<uint8_t> salt, int32_t iterationCount) ;

/// @brief Method .ctor addr 0xefb660 size 0xb4 virtual false final false
 void _ctor(::ArrayW<uint8_t> salt, int32_t iterationCount) ;

/// @brief Method GetSalt addr 0xefb714 size 0x20 virtual false final false
 ::ArrayW<uint8_t> GetSalt() ;

/// @brief Method get_IterationCount addr 0xefb734 size 0x1c virtual false final false
 Org::BouncyCastle::Math::BigInteger get_IterationCount() ;

/// @brief Method ToAsn1Object addr 0xefb750 size 0xf0 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(Org::BouncyCastle::Asn1::Pkcs::PbeParameter);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Pkcs::PbeParameter, "Org.BouncyCastle.Asn1.Pkcs", "PbeParameter");
