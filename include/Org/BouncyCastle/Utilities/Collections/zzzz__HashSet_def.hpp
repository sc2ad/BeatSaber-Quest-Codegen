#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class ICollection;
}
namespace System {
class Array;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Collections {
class HashSet;
}
// Type: Org.BouncyCastle.Utilities.Collections::HashSet
namespace Org::BouncyCastle::Utilities::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1782))
// CS Name: Org.BouncyCastle.Utilities.Collections.HashSet
class CORDL_TYPE HashSet : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Utilities::Collections::ISet
constexpr operator  ::Org::BouncyCastle::Utilities::Collections::ISet() const noexcept;

/// @brief Convert operator to ::System::Collections::ICollection
constexpr operator  ::System::Collections::ICollection() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~HashSet() = default;

// Ctor Parameters [CppParam { name: "", ty: "HashSet", modifiers: " const&", def_value: None }]
constexpr HashSet(HashSet const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HashSet", modifiers: "&&", def_value: None }]
constexpr HashSet(HashSet&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HashSet(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HashSet& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HashSet& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HashSet& operator=(HashSet&& o) noexcept = default;
  constexpr HashSet& operator=(HashSet const& o) noexcept = default;
                


// Fields

 ::System::Collections::IDictionary __declspec(property(get=__get_impl, put=__set_impl))  impl;

constexpr void __set_impl(::System::Collections::IDictionary value) ;

constexpr ::System::Collections::IDictionary __get_impl() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsEmpty))  IsEmpty;

 bool __declspec(property(get=get_IsFixedSize))  IsFixedSize;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 bool __declspec(property(get=get_IsSynchronized))  IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_SyncRoot))  SyncRoot;


// Methods

// Ctor Parameters []
explicit HashSet() ;

/// @brief Method .ctor addr 0x10c9b88 size 0x64 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "s", ty: "::System::Collections::IEnumerable", modifiers: "", def_value: None }]
explicit HashSet(::System::Collections::IEnumerable s) ;

/// @brief Method .ctor addr 0x10ca8c4 size 0x324 virtual false final false
 void _ctor(::System::Collections::IEnumerable s) ;

/// @brief Method Add addr 0x10cbae8 size 0xb0 virtual true final false
 void Add(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method AddAll addr 0x10cbb98 size 0x2e8 virtual true final false
 void AddAll(::System::Collections::IEnumerable e) ;

/// @brief Method Clear addr 0x10cbe80 size 0xa4 virtual true final false
 void Clear() ;

/// @brief Method Contains addr 0x10cbf24 size 0xac virtual true final false
 bool Contains(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method CopyTo addr 0x10cbfd0 size 0x130 virtual true final false
 void CopyTo(::System::Array array, int32_t index) ;

/// @brief Method get_Count addr 0x10cc100 size 0xa4 virtual true final false
 int32_t get_Count() ;

/// @brief Method GetEnumerator addr 0x10cc1a4 size 0x118 virtual true final false
 ::System::Collections::IEnumerator GetEnumerator() ;

/// @brief Method get_IsEmpty addr 0x10cc2bc size 0xb0 virtual true final false
 bool get_IsEmpty() ;

/// @brief Method get_IsFixedSize addr 0x10cc36c size 0xa4 virtual true final false
 bool get_IsFixedSize() ;

/// @brief Method get_IsReadOnly addr 0x10cc410 size 0xa4 virtual true final false
 bool get_IsReadOnly() ;

/// @brief Method get_IsSynchronized addr 0x10cc4b4 size 0xa4 virtual true final false
 bool get_IsSynchronized() ;

/// @brief Method Remove addr 0x10cc558 size 0xac virtual true final false
 void Remove(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method RemoveAll addr 0x10cc604 size 0x2e8 virtual true final false
 void RemoveAll(::System::Collections::IEnumerable e) ;

/// @brief Method get_SyncRoot addr 0x10cc8ec size 0xa4 virtual true final false
 ::bs_hook::Il2CppWrapperType get_SyncRoot() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Collections
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Collections::HashSet);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Collections::HashSet, "Org.BouncyCastle.Utilities.Collections", "HashSet");
