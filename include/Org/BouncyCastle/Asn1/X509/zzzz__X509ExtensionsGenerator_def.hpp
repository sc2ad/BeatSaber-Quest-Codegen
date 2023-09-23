#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class X509ExtensionsGenerator;
}
// Type: Org.BouncyCastle.Asn1.X509::X509ExtensionsGenerator
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(407))
// CS Name: Org.BouncyCastle.Asn1.X509.X509ExtensionsGenerator
class CORDL_TYPE X509ExtensionsGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~X509ExtensionsGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509ExtensionsGenerator", modifiers: " const&", def_value: None }]
constexpr X509ExtensionsGenerator(X509ExtensionsGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509ExtensionsGenerator", modifiers: "&&", def_value: None }]
constexpr X509ExtensionsGenerator(X509ExtensionsGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509ExtensionsGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509ExtensionsGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509ExtensionsGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509ExtensionsGenerator& operator=(X509ExtensionsGenerator&& o) noexcept = default;
  constexpr X509ExtensionsGenerator& operator=(X509ExtensionsGenerator const& o) noexcept = default;
                


// Fields

 System::Collections::IDictionary __declspec(property(get=__get_extensions, put=__set_extensions))  extensions;

constexpr void __set_extensions(System::Collections::IDictionary value) ;

constexpr System::Collections::IDictionary __get_extensions() const;

 System::Collections::IList __declspec(property(get=__get_extOrdering, put=__set_extOrdering))  extOrdering;

constexpr void __set_extOrdering(System::Collections::IList value) ;

constexpr System::Collections::IList __get_extOrdering() const;


// Properties

 bool __declspec(property(get=get_IsEmpty))  IsEmpty;


// Methods

/// @brief Method Reset addr 0x1116efc size 0x68 virtual false final false
 void Reset() ;

/// @brief Method AddExtension addr 0x1116f64 size 0x114 virtual false final false
 void AddExtension(Org::BouncyCastle::Asn1::DerObjectIdentifier oid, bool critical, Org::BouncyCastle::Asn1::Asn1Encodable extValue) ;

/// @brief Method AddExtension addr 0x1117078 size 0x28c virtual false final false
 void AddExtension(Org::BouncyCastle::Asn1::DerObjectIdentifier oid, bool critical, ::ArrayW<uint8_t> extValue) ;

/// @brief Method get_IsEmpty addr 0x1117304 size 0xb0 virtual false final false
 bool get_IsEmpty() ;

/// @brief Method Generate addr 0x11173b4 size 0x68 virtual false final false
 Org::BouncyCastle::Asn1::X509::X509Extensions Generate() ;

// Ctor Parameters []
explicit X509ExtensionsGenerator() ;

/// @brief Method .ctor addr 0x111741c size 0x70 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator, "Org.BouncyCastle.Asn1.X509", "X509ExtensionsGenerator");
