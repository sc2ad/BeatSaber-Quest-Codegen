#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IList;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class ArrayList;
}
namespace System {
class Array;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace System::Collections {
class CollectionBase;
}
// Type: System.Collections::CollectionBase
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3758))
// CS Name: System.Collections.CollectionBase
class CORDL_TYPE CollectionBase : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::IList
constexpr operator  ::System::Collections::IList() const noexcept;

/// @brief Convert operator to ::System::Collections::ICollection
constexpr operator  ::System::Collections::ICollection() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CollectionBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "CollectionBase", modifiers: " const&", def_value: None }]
constexpr CollectionBase(CollectionBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CollectionBase", modifiers: "&&", def_value: None }]
constexpr CollectionBase(CollectionBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CollectionBase(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CollectionBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CollectionBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CollectionBase& operator=(CollectionBase&& o) noexcept = default;
  constexpr CollectionBase& operator=(CollectionBase const& o) noexcept = default;
                


// Fields

 ::System::Collections::ArrayList __declspec(property(get=__get__list, put=__set__list))  _list;

constexpr void __set__list(::System::Collections::ArrayList value) ;

constexpr ::System::Collections::ArrayList __get__list() const;


// Properties

 ::System::Collections::ArrayList __declspec(property(get=get_InnerList))  InnerList;

 ::System::Collections::IList __declspec(property(get=get_List))  List;

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=System_Collections_IList_get_IsReadOnly))  System_Collections_IList_IsReadOnly;

 bool __declspec(property(get=System_Collections_IList_get_IsFixedSize))  System_Collections_IList_IsFixedSize;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IList_get_Item, put=System_Collections_IList_set_Item))  System_Collections_IList_Item;


// Methods

// Ctor Parameters []
explicit CollectionBase() ;

/// @brief Method .ctor addr 0x2410460 size 0x68 virtual false final false
 void _ctor() ;

/// @brief Method get_InnerList addr 0x2410558 size 0x8 virtual false final false
 ::System::Collections::ArrayList get_InnerList() ;

/// @brief Method get_List addr 0x2410560 size 0x4 virtual false final false
 ::System::Collections::IList get_List() ;

/// @brief Method get_Count addr 0x2410564 size 0x24 virtual true final true
 int32_t get_Count() ;

/// @brief Method Clear addr 0x2410588 size 0x4c virtual true final true
 void Clear() ;

/// @brief Method RemoveAt addr 0x24105d4 size 0x1d8 virtual true final true
 void RemoveAt(int32_t index) ;

/// @brief Method System.Collections.IList.get_IsReadOnly addr 0x24107ac size 0x24 virtual true final true
 bool System_Collections_IList_get_IsReadOnly() ;

/// @brief Method System.Collections.IList.get_IsFixedSize addr 0x24107d0 size 0x24 virtual true final true
 bool System_Collections_IList_get_IsFixedSize() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x24107f4 size 0x24 virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x2410818 size 0x24 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x241083c size 0x24 virtual true final true
 void System_Collections_ICollection_CopyTo(::System::Array array, int32_t index) ;

/// @brief Method System.Collections.IList.get_Item addr 0x2410860 size 0xbc virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IList_get_Item(int32_t index) ;

/// @brief Method System.Collections.IList.set_Item addr 0x241091c size 0x1e8 virtual true final true
 void System_Collections_IList_set_Item(int32_t index, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.Contains addr 0x2410b04 size 0x24 virtual true final true
 bool System_Collections_IList_Contains(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.Add addr 0x2410b28 size 0x140 virtual true final true
 int32_t System_Collections_IList_Add(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.Remove addr 0x2410c68 size 0x19c virtual true final true
 void System_Collections_IList_Remove(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.IndexOf addr 0x2410e04 size 0x24 virtual true final true
 int32_t System_Collections_IList_IndexOf(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.Insert addr 0x2410e28 size 0x1b4 virtual true final true
 void System_Collections_IList_Insert(int32_t index, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetEnumerator addr 0x2410fdc size 0x24 virtual true final true
 ::System::Collections::IEnumerator GetEnumerator() ;

/// @brief Method OnSet addr 0x2411000 size 0x4 virtual true final false
 void OnSet(int32_t index, ::bs_hook::Il2CppWrapperType oldValue, ::bs_hook::Il2CppWrapperType newValue) ;

/// @brief Method OnInsert addr 0x2411004 size 0x4 virtual true final false
 void OnInsert(int32_t index, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method OnClear addr 0x2411008 size 0x4 virtual true final false
 void OnClear() ;

/// @brief Method OnRemove addr 0x241100c size 0x4 virtual true final false
 void OnRemove(int32_t index, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method OnValidate addr 0x2411010 size 0x58 virtual true final false
 void OnValidate(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method OnSetComplete addr 0x2411068 size 0x4 virtual true final false
 void OnSetComplete(int32_t index, ::bs_hook::Il2CppWrapperType oldValue, ::bs_hook::Il2CppWrapperType newValue) ;

/// @brief Method OnInsertComplete addr 0x241106c size 0x4 virtual true final false
 void OnInsertComplete(int32_t index, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method OnClearComplete addr 0x2411070 size 0x4 virtual true final false
 void OnClearComplete() ;

/// @brief Method OnRemoveComplete addr 0x2411074 size 0x4 virtual true final false
 void OnRemoveComplete(int32_t index, ::bs_hook::Il2CppWrapperType value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
} // end anonymous namespace
NEED_NO_BOX(::System::Collections::CollectionBase);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::CollectionBase, "System.Collections", "CollectionBase");
