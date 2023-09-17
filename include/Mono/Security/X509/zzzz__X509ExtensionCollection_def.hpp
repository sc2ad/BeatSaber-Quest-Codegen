#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Collections/zzzz__CollectionBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Collections {
class IEnumerable;
}
namespace Mono::Security {
class ASN1;
}
namespace Mono::Security::X509 {
class X509Extension;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace Mono::Security::X509 {
class X509ExtensionCollection;
}
// Type: Mono.Security.X509::X509ExtensionCollection
namespace Mono::Security::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3758))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13968))
// CS Name: Mono.Security.X509.X509ExtensionCollection
class CORDL_TYPE X509ExtensionCollection : public ::System::Collections::CollectionBase {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~X509ExtensionCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509ExtensionCollection", modifiers: " const&", def_value: None }]
constexpr X509ExtensionCollection(X509ExtensionCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509ExtensionCollection", modifiers: "&&", def_value: None }]
constexpr X509ExtensionCollection(X509ExtensionCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509ExtensionCollection(void* ptr) noexcept : ::System::Collections::CollectionBase(ptr) {
}


  constexpr X509ExtensionCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509ExtensionCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509ExtensionCollection& operator=(X509ExtensionCollection&& o) noexcept = default;
  constexpr X509ExtensionCollection& operator=(X509ExtensionCollection const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_readOnly, put=__set_readOnly))  readOnly;

constexpr void __set_readOnly(bool value) ;

constexpr bool __get_readOnly() const;


// Properties

 ::Mono::Security::X509::X509Extension __declspec(property(get=get_Item))  Item;


// Methods

// Ctor Parameters []
explicit X509ExtensionCollection() ;

/// @brief Method .ctor addr 0x228fdd8 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "asn1", ty: "::Mono::Security::ASN1", modifiers: "", def_value: None }]
explicit X509ExtensionCollection(::Mono::Security::ASN1 asn1) ;

/// @brief Method .ctor addr 0x228bb04 size 0x13c virtual false final false
 void _ctor(::Mono::Security::ASN1 asn1) ;

/// @brief Method IndexOf addr 0x228fde0 size 0x13c virtual false final false
 int32_t IndexOf(::StringW oid) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x228ff1c size 0x24 virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method get_Item addr 0x228f464 size 0xb0 virtual false final false
 ::Mono::Security::X509::X509Extension get_Item(::StringW oid) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::X509
} // end anonymous namespace
NEED_NO_BOX(::Mono::Security::X509::X509ExtensionCollection);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::X509ExtensionCollection, "Mono.Security.X509", "X509ExtensionCollection");
