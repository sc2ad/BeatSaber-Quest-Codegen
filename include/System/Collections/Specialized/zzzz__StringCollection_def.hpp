#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Array;
}
namespace System::Collections {
class IList;
}
namespace System::Collections {
class ICollection;
}
// Forward declare root types
namespace System::Collections::Specialized {
class StringCollection;
}
// Type: System.Collections.Specialized::StringCollection
namespace System::Collections::Specialized {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8368))
// CS Name: System.Collections.Specialized.StringCollection
class CORDL_TYPE StringCollection : public ::bs_hook::Il2CppWrapperType {
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

virtual ~StringCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "StringCollection", modifiers: " const&", def_value: None }]
constexpr StringCollection(StringCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StringCollection", modifiers: "&&", def_value: None }]
constexpr StringCollection(StringCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StringCollection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StringCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StringCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StringCollection& operator=(StringCollection&& o) noexcept = default;
  constexpr StringCollection& operator=(StringCollection const& o) noexcept = default;
                


// Fields

 ::System::Collections::ArrayList __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(::System::Collections::ArrayList value) ;

constexpr ::System::Collections::ArrayList __get_data() const;


// Properties

 ::StringW __declspec(property(get=get_Item, put=set_Item))  Item;

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=System_Collections_IList_get_IsReadOnly))  System_Collections_IList_IsReadOnly;

 bool __declspec(property(get=System_Collections_IList_get_IsFixedSize))  System_Collections_IList_IsFixedSize;

 bool __declspec(property(get=get_IsSynchronized))  IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_SyncRoot))  SyncRoot;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IList_get_Item, put=System_Collections_IList_set_Item))  System_Collections_IList_Item;


// Methods

/// @brief Method get_Item addr 0x27accf0 size 0x7c virtual false final false
 ::StringW get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x27acd6c size 0x24 virtual false final false
 void set_Item(int32_t index, ::StringW value) ;

/// @brief Method get_Count addr 0x27acd90 size 0x24 virtual true final true
 int32_t get_Count() ;

/// @brief Method System.Collections.IList.get_IsReadOnly addr 0x27acdb4 size 0x8 virtual true final true
 bool System_Collections_IList_get_IsReadOnly() ;

/// @brief Method System.Collections.IList.get_IsFixedSize addr 0x27acdbc size 0x8 virtual true final true
 bool System_Collections_IList_get_IsFixedSize() ;

/// @brief Method Add addr 0x27acdc4 size 0x24 virtual false final false
 int32_t Add(::StringW value) ;

/// @brief Method Clear addr 0x27acde8 size 0x24 virtual true final true
 void Clear() ;

/// @brief Method Contains addr 0x27ace0c size 0x24 virtual false final false
 bool Contains(::StringW value) ;

/// @brief Method CopyTo addr 0x27ace30 size 0x24 virtual false final false
 void CopyTo(::ArrayW<::StringW> array, int32_t index) ;

/// @brief Method IndexOf addr 0x27ace54 size 0x24 virtual false final false
 int32_t IndexOf(::StringW value) ;

/// @brief Method Insert addr 0x27ace78 size 0x24 virtual false final false
 void Insert(int32_t index, ::StringW value) ;

/// @brief Method get_IsSynchronized addr 0x27ace9c size 0x8 virtual true final true
 bool get_IsSynchronized() ;

/// @brief Method Remove addr 0x27acea4 size 0x24 virtual false final false
 void Remove(::StringW value) ;

/// @brief Method RemoveAt addr 0x27acec8 size 0x24 virtual true final true
 void RemoveAt(int32_t index) ;

/// @brief Method get_SyncRoot addr 0x27aceec size 0x24 virtual true final true
 ::bs_hook::Il2CppWrapperType get_SyncRoot() ;

/// @brief Method System.Collections.IList.get_Item addr 0x27acf10 size 0x4 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IList_get_Item(int32_t index) ;

/// @brief Method System.Collections.IList.set_Item addr 0x27acf14 size 0x8c virtual true final true
 void System_Collections_IList_set_Item(int32_t index, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.Add addr 0x27acfa0 size 0x7c virtual true final true
 int32_t System_Collections_IList_Add(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.Contains addr 0x27ad01c size 0x7c virtual true final true
 bool System_Collections_IList_Contains(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.IndexOf addr 0x27ad098 size 0x7c virtual true final true
 int32_t System_Collections_IList_IndexOf(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.Insert addr 0x27ad114 size 0x8c virtual true final true
 void System_Collections_IList_Insert(int32_t index, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.Remove addr 0x27ad1a0 size 0x7c virtual true final true
 void System_Collections_IList_Remove(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x27ad21c size 0x24 virtual true final true
 void System_Collections_ICollection_CopyTo(::System::Array array, int32_t index) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x27ad240 size 0x24 virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters []
explicit StringCollection() ;

/// @brief Method .ctor addr 0x27ad264 size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Specialized
} // end anonymous namespace
NEED_NO_BOX(::System::Collections::Specialized::StringCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::StringCollection, "System.Collections.Specialized", "StringCollection");
