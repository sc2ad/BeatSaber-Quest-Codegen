#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/Collections/zzzz__CollectionBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections {
class IEnumerator;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class System__Security__Cryptography__X509Certificates__X509CertificateCollection__X509CertificateEnumerator;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
// Type: ::X509CertificateEnumerator
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7850))
// CS Name: System.Security.Cryptography.X509Certificates.X509CertificateCollection::X509CertificateEnumerator
class CORDL_TYPE System__Security__Cryptography__X509Certificates__X509CertificateCollection__X509CertificateEnumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~System__Security__Cryptography__X509Certificates__X509CertificateCollection__X509CertificateEnumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Security__Cryptography__X509Certificates__X509CertificateCollection__X509CertificateEnumerator", modifiers: " const&", def_value: None }]
constexpr System__Security__Cryptography__X509Certificates__X509CertificateCollection__X509CertificateEnumerator(System__Security__Cryptography__X509Certificates__X509CertificateCollection__X509CertificateEnumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Security__Cryptography__X509Certificates__X509CertificateCollection__X509CertificateEnumerator", modifiers: "&&", def_value: None }]
constexpr System__Security__Cryptography__X509Certificates__X509CertificateCollection__X509CertificateEnumerator(System__Security__Cryptography__X509Certificates__X509CertificateCollection__X509CertificateEnumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Security__Cryptography__X509Certificates__X509CertificateCollection__X509CertificateEnumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Security__Cryptography__X509Certificates__X509CertificateCollection__X509CertificateEnumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Security__Cryptography__X509Certificates__X509CertificateCollection__X509CertificateEnumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Security__Cryptography__X509Certificates__X509CertificateCollection__X509CertificateEnumerator& operator=(System__Security__Cryptography__X509Certificates__X509CertificateCollection__X509CertificateEnumerator&& o) noexcept = default;
  constexpr System__Security__Cryptography__X509Certificates__X509CertificateCollection__X509CertificateEnumerator& operator=(System__Security__Cryptography__X509Certificates__X509CertificateCollection__X509CertificateEnumerator const& o) noexcept = default;
                


// Fields

 System::Collections::IEnumerator __declspec(property(get=__get_enumerator, put=__set_enumerator))  enumerator;

constexpr void __set_enumerator(System::Collections::IEnumerator value) ;

constexpr System::Collections::IEnumerator __get_enumerator() const;


// Properties

 System::Security::Cryptography::X509Certificates::X509Certificate __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "mappings", ty: "System::Security::Cryptography::X509Certificates::X509CertificateCollection", modifiers: "", def_value: None }]
explicit System__Security__Cryptography__X509Certificates__X509CertificateCollection__X509CertificateEnumerator(System::Security::Cryptography::X509Certificates::X509CertificateCollection mappings) ;

/// @brief Method .ctor addr 0x27ec7e8 size 0xb4 virtual false final false
 void _ctor(System::Security::Cryptography::X509Certificates::X509CertificateCollection mappings) ;

/// @brief Method get_Current addr 0x27ec8bc size 0xf0 virtual false final false
 System::Security::Cryptography::X509Certificates::X509Certificate get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x27ec9ac size 0xa4 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.MoveNext addr 0x27eca50 size 0xa0 virtual true final true
 bool System_Collections_IEnumerator_MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x27ecaf0 size 0xa4 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method MoveNext addr 0x27ecb94 size 0xa0 virtual false final false
 bool MoveNext() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
// Type: System.Security.Cryptography.X509Certificates::X509CertificateCollection
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3758))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7851))
// CS Name: System.Security.Cryptography.X509Certificates.X509CertificateCollection
class CORDL_TYPE X509CertificateCollection : public System::Collections::CollectionBase {
public:
// Declarations
using X509CertificateEnumerator = System::Security::Cryptography::X509Certificates::System__Security__Cryptography__X509Certificates__X509CertificateCollection__X509CertificateEnumerator;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~X509CertificateCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509CertificateCollection", modifiers: " const&", def_value: None }]
constexpr X509CertificateCollection(X509CertificateCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509CertificateCollection", modifiers: "&&", def_value: None }]
constexpr X509CertificateCollection(X509CertificateCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509CertificateCollection(void* ptr) noexcept : System::Collections::CollectionBase(ptr) {
}


  constexpr X509CertificateCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509CertificateCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509CertificateCollection& operator=(X509CertificateCollection&& o) noexcept = default;
  constexpr X509CertificateCollection& operator=(X509CertificateCollection const& o) noexcept = default;
                


// Properties

 System::Security::Cryptography::X509Certificates::X509Certificate __declspec(property(get=get_Item))  Item;


// Methods

// Ctor Parameters []
explicit X509CertificateCollection() ;

/// @brief Method .ctor addr 0x27e8e58 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "value", ty: "System::Security::Cryptography::X509Certificates::X509CertificateCollection", modifiers: "", def_value: None }]
explicit X509CertificateCollection(System::Security::Cryptography::X509Certificates::X509CertificateCollection value) ;

/// @brief Method .ctor addr 0x27ec5f0 size 0x2c virtual false final false
 void _ctor(System::Security::Cryptography::X509Certificates::X509CertificateCollection value) ;

/// @brief Method get_Item addr 0x27ec6f0 size 0x98 virtual false final false
 System::Security::Cryptography::X509Certificates::X509Certificate get_Item(int32_t index) ;

/// @brief Method AddRange addr 0x27ec61c size 0xd4 virtual false final false
 void AddRange(System::Security::Cryptography::X509Certificates::X509CertificateCollection value) ;

/// @brief Method GetEnumerator addr 0x27ec788 size 0x60 virtual false final false
 System::Security::Cryptography::X509Certificates::System__Security__Cryptography__X509Certificates__X509CertificateCollection__X509CertificateEnumerator GetEnumerator() ;

/// @brief Method GetHashCode addr 0x27ec89c size 0x20 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
NEED_NO_BOX(System::Security::Cryptography::X509Certificates::System__Security__Cryptography__X509Certificates__X509CertificateCollection__X509CertificateEnumerator);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::System__Security__Cryptography__X509Certificates__X509CertificateCollection__X509CertificateEnumerator, "System.Security.Cryptography.X509Certificates", "X509CertificateCollection/X509CertificateEnumerator");
NEED_NO_BOX(System::Security::Cryptography::X509Certificates::X509CertificateCollection);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509CertificateCollection, "System.Security.Cryptography.X509Certificates", "X509CertificateCollection");
