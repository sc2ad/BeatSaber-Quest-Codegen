#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
class Array;
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
namespace System::Collections {
class ArrayList;
}
// Forward declare root types
namespace System::Collections {
class ReadOnlyCollectionBase;
}
// Type: System.Collections::ReadOnlyCollectionBase
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3762))
// CS Name: System.Collections.ReadOnlyCollectionBase
class CORDL_TYPE ReadOnlyCollectionBase : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ReadOnlyCollectionBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReadOnlyCollectionBase", modifiers: " const&", def_value: None }]
constexpr ReadOnlyCollectionBase(ReadOnlyCollectionBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReadOnlyCollectionBase", modifiers: "&&", def_value: None }]
constexpr ReadOnlyCollectionBase(ReadOnlyCollectionBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReadOnlyCollectionBase(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ReadOnlyCollectionBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReadOnlyCollectionBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReadOnlyCollectionBase& operator=(ReadOnlyCollectionBase&& o) noexcept = default;
  constexpr ReadOnlyCollectionBase& operator=(ReadOnlyCollectionBase const& o) noexcept = default;
                


// Fields

 System::Collections::ArrayList __declspec(property(get=__get__list, put=__set__list))  _list;

constexpr void __set__list(System::Collections::ArrayList value) ;

constexpr System::Collections::ArrayList __get__list() const;


// Properties

 System::Collections::ArrayList __declspec(property(get=get_InnerList))  InnerList;

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;


// Methods

/// @brief Method get_InnerList addr 0x2411e44 size 0x68 virtual false final false
 System::Collections::ArrayList get_InnerList() ;

/// @brief Method get_Count addr 0x2411eac size 0x24 virtual true final false
 int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x2411ed0 size 0x24 virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x2411ef4 size 0x24 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x2411f18 size 0x3c virtual true final true
 void System_Collections_ICollection_CopyTo(System::Array array, int32_t index) ;

/// @brief Method GetEnumerator addr 0x2411f54 size 0x24 virtual true final false
 System::Collections::IEnumerator GetEnumerator() ;

static System::Collections::ReadOnlyCollectionBase New_ctor() ;

/// @brief Method .ctor addr 0x2411f78 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
NEED_NO_BOX(System::Collections::ReadOnlyCollectionBase);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::ReadOnlyCollectionBase, "System.Collections", "ReadOnlyCollectionBase");
