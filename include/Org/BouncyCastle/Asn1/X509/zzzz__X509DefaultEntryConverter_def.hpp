#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509NameEntryConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class X509DefaultEntryConverter;
}
// Type: Org.BouncyCastle.Asn1.X509::X509DefaultEntryConverter
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(403))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(404))
// CS Name: Org.BouncyCastle.Asn1.X509.X509DefaultEntryConverter
class CORDL_TYPE X509DefaultEntryConverter : public Org::BouncyCastle::Asn1::X509::X509NameEntryConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~X509DefaultEntryConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509DefaultEntryConverter", modifiers: " const&", def_value: None }]
constexpr X509DefaultEntryConverter(X509DefaultEntryConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509DefaultEntryConverter", modifiers: "&&", def_value: None }]
constexpr X509DefaultEntryConverter(X509DefaultEntryConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509DefaultEntryConverter(void* ptr) noexcept : Org::BouncyCastle::Asn1::X509::X509NameEntryConverter(ptr) {
}


  constexpr X509DefaultEntryConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509DefaultEntryConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509DefaultEntryConverter& operator=(X509DefaultEntryConverter&& o) noexcept = default;
  constexpr X509DefaultEntryConverter& operator=(X509DefaultEntryConverter const& o) noexcept = default;
                


// Methods

/// @brief Method GetConvertedValue addr 0x1113710 size 0x398 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object GetConvertedValue(Org::BouncyCastle::Asn1::DerObjectIdentifier oid, ::StringW value) ;

static Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter New_ctor() ;

/// @brief Method .ctor addr 0x1113aa8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter, "Org.BouncyCastle.Asn1.X509", "X509DefaultEntryConverter");
