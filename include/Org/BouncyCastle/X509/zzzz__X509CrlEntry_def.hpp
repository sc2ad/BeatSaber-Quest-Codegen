#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1::X509 {
class CrlEntry;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509CrlEntry;
}
// Type: Org.BouncyCastle.X509::X509CrlEntry
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1606))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1865))
// CS Name: Org.BouncyCastle.X509.X509CrlEntry
class CORDL_TYPE X509CrlEntry : public Org::BouncyCastle::X509::X509ExtensionBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~X509CrlEntry() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509CrlEntry", modifiers: " const&", def_value: None }]
constexpr X509CrlEntry(X509CrlEntry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509CrlEntry", modifiers: "&&", def_value: None }]
constexpr X509CrlEntry(X509CrlEntry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509CrlEntry(void* ptr) noexcept : Org::BouncyCastle::X509::X509ExtensionBase(ptr) {
}


  constexpr X509CrlEntry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509CrlEntry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509CrlEntry& operator=(X509CrlEntry&& o) noexcept = default;
  constexpr X509CrlEntry& operator=(X509CrlEntry const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::CrlEntry __declspec(property(get=__get_c, put=__set_c))  c;

constexpr void __set_c(Org::BouncyCastle::Asn1::X509::CrlEntry value) ;

constexpr Org::BouncyCastle::Asn1::X509::CrlEntry __get_c() const;

 bool __declspec(property(get=__get_isIndirect, put=__set_isIndirect))  isIndirect;

constexpr void __set_isIndirect(bool value) ;

constexpr bool __get_isIndirect() const;

 Org::BouncyCastle::Asn1::X509::X509Name __declspec(property(get=__get_previousCertificateIssuer, put=__set_previousCertificateIssuer))  previousCertificateIssuer;

constexpr void __set_previousCertificateIssuer(Org::BouncyCastle::Asn1::X509::X509Name value) ;

constexpr Org::BouncyCastle::Asn1::X509::X509Name __get_previousCertificateIssuer() const;

 Org::BouncyCastle::Asn1::X509::X509Name __declspec(property(get=__get_certificateIssuer, put=__set_certificateIssuer))  certificateIssuer;

constexpr void __set_certificateIssuer(Org::BouncyCastle::Asn1::X509::X509Name value) ;

constexpr Org::BouncyCastle::Asn1::X509::X509Name __get_certificateIssuer() const;

 bool __declspec(property(get=__get_hashValueSet, put=__set_hashValueSet))  hashValueSet;

constexpr void __set_hashValueSet(bool value) ;

constexpr bool __get_hashValueSet() const;

 int32_t __declspec(property(get=__get_hashValue, put=__set_hashValue))  hashValue;

constexpr void __set_hashValue(int32_t value) ;

constexpr int32_t __get_hashValue() const;


// Properties

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_SerialNumber))  SerialNumber;

 System::DateTime __declspec(property(get=get_RevocationDate))  RevocationDate;

 bool __declspec(property(get=get_HasExtensions))  HasExtensions;


// Methods

static Org::BouncyCastle::X509::X509CrlEntry New_ctor(Org::BouncyCastle::Asn1::X509::CrlEntry c) ;

/// @brief Method .ctor addr 0x10f368c size 0x34 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::CrlEntry c) ;

static Org::BouncyCastle::X509::X509CrlEntry New_ctor(Org::BouncyCastle::Asn1::X509::CrlEntry c, bool isIndirect, Org::BouncyCastle::Asn1::X509::X509Name previousCertificateIssuer) ;

/// @brief Method .ctor addr 0x10f1c18 size 0x4c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::CrlEntry c, bool isIndirect, Org::BouncyCastle::Asn1::X509::X509Name previousCertificateIssuer) ;

/// @brief Method loadCertificateIssuer addr 0x10f36c0 size 0x1a4 virtual false final false
 Org::BouncyCastle::Asn1::X509::X509Name loadCertificateIssuer() ;

/// @brief Method GetCertificateIssuer addr 0x10f3864 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::X509Name GetCertificateIssuer() ;

/// @brief Method GetX509Extensions addr 0x10f386c size 0x1c virtual true final false
 Org::BouncyCastle::Asn1::X509::X509Extensions GetX509Extensions() ;

/// @brief Method GetEncoded addr 0x10f3888 size 0xf8 virtual false final false
 ::ArrayW<uint8_t> GetEncoded() ;

/// @brief Method get_SerialNumber addr 0x10f3980 size 0x24 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_SerialNumber() ;

/// @brief Method get_RevocationDate addr 0x10f39a4 size 0x24 virtual false final false
 System::DateTime get_RevocationDate() ;

/// @brief Method get_HasExtensions addr 0x10f39c8 size 0x28 virtual false final false
 bool get_HasExtensions() ;

/// @brief Method Equals addr 0x10f39f0 size 0xf4 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x10f3ae4 size 0x5c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x10f3b40 size 0x7f8 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::X509
NEED_NO_BOX(Org::BouncyCastle::X509::X509CrlEntry);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::X509::X509CrlEntry, "Org.BouncyCastle.X509", "X509CrlEntry");
