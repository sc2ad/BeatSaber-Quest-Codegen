#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections {
class IList;
}
namespace Newtonsoft::Json::Utilities {
class IWrappedCollection;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class ICollection;
}
namespace System {
class Array;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
template<typename T>
class CollectionWrapper_1;
}
namespace Newtonsoft::Json::Utilities {
template<::cordl_internals::il2cpp_reference_type T>
class CollectionWrapper_1<T>;
}
// Type: Newtonsoft.Json.Utilities::CollectionWrapper`1
// Type: Newtonsoft.Json.Utilities::CollectionWrapper`1
namespace Newtonsoft::Json::Utilities {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11820))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11820), inst: 2 })
// CS Name: Newtonsoft.Json.Utilities.CollectionWrapper`1
class CORDL_TYPE CollectionWrapper_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::ICollection_1<T>
constexpr operator  System::Collections::Generic::ICollection_1<T>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<T>
constexpr operator  System::Collections::Generic::IEnumerable_1<T>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to Newtonsoft::Json::Utilities::IWrappedCollection
constexpr operator  Newtonsoft::Json::Utilities::IWrappedCollection() const noexcept;

/// @brief Convert operator to System::Collections::IList
constexpr operator  System::Collections::IList() const noexcept;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~CollectionWrapper_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "CollectionWrapper_1", modifiers: " const&", def_value: None }]
constexpr CollectionWrapper_1(CollectionWrapper_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CollectionWrapper_1", modifiers: "&&", def_value: None }]
constexpr CollectionWrapper_1(CollectionWrapper_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CollectionWrapper_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CollectionWrapper_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CollectionWrapper_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CollectionWrapper_1& operator=(CollectionWrapper_1&& o) noexcept = default;
  constexpr CollectionWrapper_1& operator=(CollectionWrapper_1 const& o) noexcept = default;
                


// Fields

 System::Collections::IList __declspec(property(get=__get__list, put=__set__list))  _list;

constexpr void __set__list(System::Collections::IList value) ;

constexpr System::Collections::IList __get__list() const;

 System::Collections::Generic::ICollection_1<T> __declspec(property(get=__get__genericCollection, put=__set__genericCollection))  _genericCollection;

constexpr void __set__genericCollection(System::Collections::Generic::ICollection_1<T> value) ;

constexpr System::Collections::Generic::ICollection_1<T> __get__genericCollection() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__syncRoot, put=__set__syncRoot))  _syncRoot;

constexpr void __set__syncRoot(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__syncRoot() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 bool __declspec(property(get=System_Collections_IList_get_IsFixedSize))  System_Collections_IList_IsFixedSize;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IList_get_Item, put=System_Collections_IList_set_Item))  System_Collections_IList_Item;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_UnderlyingCollection))  UnderlyingCollection;


// Methods

// Ctor Parameters [CppParam { name: "list", ty: "System::Collections::IList", modifiers: "", def_value: None }]
explicit CollectionWrapper_1(System::Collections::IList list) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::IList list) ;

// Ctor Parameters [CppParam { name: "list", ty: "System::Collections::Generic::ICollection_1<T>", modifiers: "", def_value: None }]
explicit CollectionWrapper_1(System::Collections::Generic::ICollection_1<T> list) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::ICollection_1<T> list) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final false
 void Add(T item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final false
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Contains(T item) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final false
 void CopyTo(::ArrayW<T> array, int32_t arrayIndex) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_Count() ;

/// @brief Method get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsReadOnly() ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Remove(T item) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::IEnumerator_1<T> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IList.Add addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Collections_IList_Add(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.Contains addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_IList_Contains(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.IndexOf addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Collections_IList_IndexOf(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.RemoveAt addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IList_RemoveAt(int32_t index) ;

/// @brief Method System.Collections.IList.Insert addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IList_Insert(int32_t index, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.get_IsFixedSize addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_IList_get_IsFixedSize() ;

/// @brief Method System.Collections.IList.Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IList_Remove(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IList_get_Item(int32_t index) ;

/// @brief Method System.Collections.IList.set_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IList_set_Item(int32_t index, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_ICollection_CopyTo(System::Array array, int32_t arrayIndex) ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method VerifyValueType addr 0x0 size 0xffffffffffffffff virtual false final false
static void VerifyValueType(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method IsCompatibleObject addr 0x0 size 0xffffffffffffffff virtual false final false
static bool IsCompatibleObject(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_UnderlyingCollection addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType get_UnderlyingCollection() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Newtonsoft::Json::Utilities::CollectionWrapper_1, "Newtonsoft.Json.Utilities", "CollectionWrapper`1");
