#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class X509NameEntryConverter;
}
// Type: Org.BouncyCastle.Asn1.X509::X509NameEntryConverter
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(403))
// CS Name: Org.BouncyCastle.Asn1.X509.X509NameEntryConverter
class CORDL_TYPE X509NameEntryConverter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~X509NameEntryConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509NameEntryConverter", modifiers: " const&", def_value: None }]
constexpr X509NameEntryConverter(X509NameEntryConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509NameEntryConverter", modifiers: "&&", def_value: None }]
constexpr X509NameEntryConverter(X509NameEntryConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509NameEntryConverter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509NameEntryConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509NameEntryConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509NameEntryConverter& operator=(X509NameEntryConverter&& o) noexcept = default;
  constexpr X509NameEntryConverter& operator=(X509NameEntryConverter const& o) noexcept = default;
                


// Methods

/// @brief Method ConvertHexEncoded addr 0x1113684 size 0x78 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Object ConvertHexEncoded(::StringW hexString, int32_t offset) ;

/// @brief Method CanBePrintable addr 0x11136fc size 0xc virtual false final false
 bool CanBePrintable(::StringW str) ;

/// @brief Method GetConvertedValue addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object GetConvertedValue(Org::BouncyCastle::Asn1::DerObjectIdentifier oid, ::StringW value) ;

// Ctor Parameters []
explicit X509NameEntryConverter() ;

/// @brief Method .ctor addr 0x1113708 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::X509NameEntryConverter);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::X509NameEntryConverter, "Org.BouncyCastle.Asn1.X509", "X509NameEntryConverter");
