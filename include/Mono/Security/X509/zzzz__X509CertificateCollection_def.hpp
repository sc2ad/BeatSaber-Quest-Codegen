#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Collections/zzzz__CollectionBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Collections {
class IEnumerator;
}
namespace Mono::Security::X509 {
class X509Certificate;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace Mono::Security::X509 {
class Mono__Security__X509__X509CertificateCollection__X509CertificateEnumerator;
}
namespace Mono::Security::X509 {
class X509CertificateCollection;
}
// Type: ::X509CertificateEnumerator
namespace Mono::Security::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13963))
// CS Name: Mono.Security.X509.X509CertificateCollection::X509CertificateEnumerator
class CORDL_TYPE Mono__Security__X509__X509CertificateCollection__X509CertificateEnumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Mono__Security__X509__X509CertificateCollection__X509CertificateEnumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Security__X509__X509CertificateCollection__X509CertificateEnumerator", modifiers: " const&", def_value: None }]
constexpr Mono__Security__X509__X509CertificateCollection__X509CertificateEnumerator(Mono__Security__X509__X509CertificateCollection__X509CertificateEnumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Security__X509__X509CertificateCollection__X509CertificateEnumerator", modifiers: "&&", def_value: None }]
constexpr Mono__Security__X509__X509CertificateCollection__X509CertificateEnumerator(Mono__Security__X509__X509CertificateCollection__X509CertificateEnumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Security__X509__X509CertificateCollection__X509CertificateEnumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Mono__Security__X509__X509CertificateCollection__X509CertificateEnumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Security__X509__X509CertificateCollection__X509CertificateEnumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Security__X509__X509CertificateCollection__X509CertificateEnumerator& operator=(Mono__Security__X509__X509CertificateCollection__X509CertificateEnumerator&& o) noexcept = default;
  constexpr Mono__Security__X509__X509CertificateCollection__X509CertificateEnumerator& operator=(Mono__Security__X509__X509CertificateCollection__X509CertificateEnumerator const& o) noexcept = default;
                


// Fields

 System::Collections::IEnumerator __declspec(property(get=__get_enumerator, put=__set_enumerator))  enumerator;

constexpr void __set_enumerator(System::Collections::IEnumerator value) ;

constexpr System::Collections::IEnumerator __get_enumerator() const;


// Properties

 Mono::Security::X509::X509Certificate __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "mappings", ty: "Mono::Security::X509::X509CertificateCollection", modifiers: "", def_value: None }]
explicit Mono__Security__X509__X509CertificateCollection__X509CertificateEnumerator(Mono::Security::X509::X509CertificateCollection mappings) ;

/// @brief Method .ctor addr 0x228e508 size 0xb4 virtual false final false
 void _ctor(Mono::Security::X509::X509CertificateCollection mappings) ;

/// @brief Method get_Current addr 0x2285d74 size 0xf0 virtual false final false
 Mono::Security::X509::X509Certificate get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x228e67c size 0xa4 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.MoveNext addr 0x228e720 size 0xa0 virtual true final true
 bool System_Collections_IEnumerator_MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x228e7c0 size 0xa4 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method MoveNext addr 0x2286100 size 0xa0 virtual false final false
 bool MoveNext() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::X509
// Type: Mono.Security.X509::X509CertificateCollection
namespace Mono::Security::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3758))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13964))
// CS Name: Mono.Security.X509.X509CertificateCollection
class CORDL_TYPE X509CertificateCollection : public System::Collections::CollectionBase {
public:
// Declarations
using X509CertificateEnumerator = Mono::Security::X509::Mono__Security__X509__X509CertificateCollection__X509CertificateEnumerator;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

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

 Mono::Security::X509::X509Certificate __declspec(property(get=get_Item))  Item;


// Methods

// Ctor Parameters []
explicit X509CertificateCollection() ;

/// @brief Method .ctor addr 0x22824d4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_Item addr 0x228e238 size 0x98 virtual false final false
 Mono::Security::X509::X509Certificate get_Item(int32_t index) ;

/// @brief Method Add addr 0x2282670 size 0x74 virtual false final false
 int32_t Add(Mono::Security::X509::X509Certificate value) ;

/// @brief Method AddRange addr 0x228e2d0 size 0xd4 virtual false final false
 void AddRange(Mono::Security::X509::X509CertificateCollection value) ;

/// @brief Method Contains addr 0x228e3a4 size 0x18 virtual false final false
 bool Contains(Mono::Security::X509::X509Certificate value) ;

/// @brief Method GetEnumerator addr 0x2285d14 size 0x60 virtual false final false
 Mono::Security::X509::Mono__Security__X509__X509CertificateCollection__X509CertificateEnumerator GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x228e5bc size 0x24 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method GetHashCode addr 0x228e5e0 size 0x20 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method IndexOf addr 0x228e3bc size 0x14c virtual false final false
 int32_t IndexOf(Mono::Security::X509::X509Certificate value) ;

/// @brief Method Compare addr 0x228e600 size 0x7c virtual false final false
 bool Compare(::ArrayW<uint8_t> array1, ::ArrayW<uint8_t> array2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::X509
NEED_NO_BOX(Mono::Security::X509::Mono__Security__X509__X509CertificateCollection__X509CertificateEnumerator);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::X509::Mono__Security__X509__X509CertificateCollection__X509CertificateEnumerator, "Mono.Security.X509", "X509CertificateCollection/X509CertificateEnumerator");
NEED_NO_BOX(Mono::Security::X509::X509CertificateCollection);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::X509::X509CertificateCollection, "Mono.Security.X509", "X509CertificateCollection");
