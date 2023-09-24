#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class DerBoolean;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extension;
}
// Type: Org.BouncyCastle.Asn1.X509::X509Extension
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(405))
// CS Name: Org.BouncyCastle.Asn1.X509.X509Extension
class CORDL_TYPE X509Extension : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~X509Extension() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Extension", modifiers: " const&", def_value: None }]
constexpr X509Extension(X509Extension const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Extension", modifiers: "&&", def_value: None }]
constexpr X509Extension(X509Extension&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509Extension(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509Extension& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509Extension& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509Extension& operator=(X509Extension&& o) noexcept = default;
  constexpr X509Extension& operator=(X509Extension const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_critical, put=__set_critical))  critical;

constexpr void __set_critical(bool value) ;

constexpr bool __get_critical() const;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr Org::BouncyCastle::Asn1::Asn1OctetString __get_value() const;


// Properties

 bool __declspec(property(get=get_IsCritical))  IsCritical;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=get_Value))  Value;


// Methods

static Org::BouncyCastle::Asn1::X509::X509Extension New_ctor(Org::BouncyCastle::Asn1::DerBoolean critical, Org::BouncyCastle::Asn1::Asn1OctetString value) ;

/// @brief Method .ctor addr 0x1113ab0 size 0x90 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerBoolean critical, Org::BouncyCastle::Asn1::Asn1OctetString value) ;

static Org::BouncyCastle::Asn1::X509::X509Extension New_ctor(bool critical, Org::BouncyCastle::Asn1::Asn1OctetString value) ;

/// @brief Method .ctor addr 0x1111e68 size 0x30 virtual false final false
 void _ctor(bool critical, Org::BouncyCastle::Asn1::Asn1OctetString value) ;

/// @brief Method get_IsCritical addr 0x1113b40 size 0x8 virtual false final false
 bool get_IsCritical() ;

/// @brief Method get_Value addr 0x1113b48 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1OctetString get_Value() ;

/// @brief Method GetParsedValue addr 0x1113b50 size 0x4 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Encodable GetParsedValue() ;

/// @brief Method GetHashCode addr 0x1113b54 size 0x30 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x1113b84 size 0xbc virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method ConvertValueToObject addr 0x1102dc0 size 0x108 virtual false final false
static Org::BouncyCastle::Asn1::Asn1Object ConvertValueToObject(Org::BouncyCastle::Asn1::X509::X509Extension ext) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::X509Extension);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::X509Extension, "Org.BouncyCastle.Asn1.X509", "X509Extension");
