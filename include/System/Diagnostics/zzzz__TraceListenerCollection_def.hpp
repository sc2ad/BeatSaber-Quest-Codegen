#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Diagnostics {
class TraceListener;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IList;
}
namespace System {
class Array;
}
// Forward declare root types
namespace System::Diagnostics {
class TraceListenerCollection;
}
// Type: System.Diagnostics::TraceListenerCollection
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7795))
// CS Name: System.Diagnostics.TraceListenerCollection
class CORDL_TYPE TraceListenerCollection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IList
constexpr operator  System::Collections::IList() const noexcept;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TraceListenerCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "TraceListenerCollection", modifiers: " const&", def_value: None }]
constexpr TraceListenerCollection(TraceListenerCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TraceListenerCollection", modifiers: "&&", def_value: None }]
constexpr TraceListenerCollection(TraceListenerCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TraceListenerCollection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TraceListenerCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TraceListenerCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TraceListenerCollection& operator=(TraceListenerCollection&& o) noexcept = default;
  constexpr TraceListenerCollection& operator=(TraceListenerCollection const& o) noexcept = default;
                


// Fields

 System::Collections::ArrayList __declspec(property(get=__get_list, put=__set_list))  list;

constexpr void __set_list(System::Collections::ArrayList value) ;

constexpr System::Collections::ArrayList __get_list() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IList_get_Item, put=System_Collections_IList_set_Item))  System_Collections_IList_Item;

 bool __declspec(property(get=System_Collections_IList_get_IsReadOnly))  System_Collections_IList_IsReadOnly;

 bool __declspec(property(get=System_Collections_IList_get_IsFixedSize))  System_Collections_IList_IsFixedSize;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;


// Methods

// Ctor Parameters []
explicit TraceListenerCollection() ;

/// @brief Method .ctor addr 0x27dae74 size 0x70 virtual false final false
 void _ctor() ;

/// @brief Method get_Count addr 0x27dbbb8 size 0x24 virtual true final true
 int32_t get_Count() ;

/// @brief Method Add addr 0x27db010 size 0x138 virtual false final false
 int32_t Add(System::Diagnostics::TraceListener listener) ;

/// @brief Method Clear addr 0x27dbcd0 size 0x60 virtual true final true
 void Clear() ;

/// @brief Method GetEnumerator addr 0x27dbd30 size 0x24 virtual true final true
 System::Collections::IEnumerator GetEnumerator() ;

/// @brief Method InitializeListener addr 0x27dbbdc size 0xf4 virtual false final false
 void InitializeListener(System::Diagnostics::TraceListener listener) ;

/// @brief Method RemoveAt addr 0x27dbd54 size 0x120 virtual true final true
 void RemoveAt(int32_t index) ;

/// @brief Method System.Collections.IList.get_Item addr 0x27dbe74 size 0x24 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IList_get_Item(int32_t index) ;

/// @brief Method System.Collections.IList.set_Item addr 0x27dbe98 size 0x110 virtual true final true
 void System_Collections_IList_set_Item(int32_t index, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.get_IsReadOnly addr 0x27dbfa8 size 0x8 virtual true final true
 bool System_Collections_IList_get_IsReadOnly() ;

/// @brief Method System.Collections.IList.get_IsFixedSize addr 0x27dbfb0 size 0x8 virtual true final true
 bool System_Collections_IList_get_IsFixedSize() ;

/// @brief Method System.Collections.IList.Add addr 0x27dbfb8 size 0x1e4 virtual true final true
 int32_t System_Collections_IList_Add(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.Contains addr 0x27dc19c size 0x24 virtual true final true
 bool System_Collections_IList_Contains(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.IndexOf addr 0x27dc1c0 size 0x24 virtual true final true
 int32_t System_Collections_IList_IndexOf(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.Insert addr 0x27dc1e4 size 0x1dc virtual true final true
 void System_Collections_IList_Insert(int32_t index, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.Remove addr 0x27dc3c0 size 0x120 virtual true final true
 void System_Collections_IList_Remove(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x27dc4e0 size 0x4 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x27dc4e4 size 0x8 virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x27dc4ec size 0x130 virtual true final true
 void System_Collections_ICollection_CopyTo(System::Array array, int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics
NEED_NO_BOX(System::Diagnostics::TraceListenerCollection);
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::TraceListenerCollection, "System.Diagnostics", "TraceListenerCollection");
