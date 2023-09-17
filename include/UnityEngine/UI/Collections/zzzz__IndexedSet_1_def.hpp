#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace UnityEngine::UI::Collections {
template<typename T>
class IndexedSet_1;
}
namespace UnityEngine::UI::Collections {
template<::cordl_internals::il2cpp_reference_type T>
class IndexedSet_1<T>;
}
// Type: UnityEngine.UI.Collections::IndexedSet`1
// Type: UnityEngine.UI.Collections::IndexedSet`1
namespace UnityEngine::UI::Collections {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13088))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13088), inst: 2 })
// CS Name: UnityEngine.UI.Collections.IndexedSet`1
class CORDL_TYPE IndexedSet_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IList_1<T>
constexpr operator  ::System::Collections::Generic::IList_1<T>() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::ICollection_1<T>
constexpr operator  ::System::Collections::Generic::ICollection_1<T>() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<T>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~IndexedSet_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "IndexedSet_1", modifiers: " const&", def_value: None }]
constexpr IndexedSet_1(IndexedSet_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IndexedSet_1", modifiers: "&&", def_value: None }]
constexpr IndexedSet_1(IndexedSet_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IndexedSet_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IndexedSet_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IndexedSet_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IndexedSet_1& operator=(IndexedSet_1&& o) noexcept = default;
  constexpr IndexedSet_1& operator=(IndexedSet_1 const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<T> __declspec(property(get=__get_m_List, put=__set_m_List))  m_List;

constexpr void __set_m_List(::System::Collections::Generic::List_1<T> value) ;

constexpr ::System::Collections::Generic::List_1<T> __get_m_List() const;

 ::System::Collections::Generic::Dictionary_2<T,int32_t> __declspec(property(get=__get_m_Dictionary, put=__set_m_Dictionary))  m_Dictionary;

constexpr void __set_m_Dictionary(::System::Collections::Generic::Dictionary_2<T,int32_t> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<T,int32_t> __get_m_Dictionary() const;

 int32_t __declspec(property(get=__get_m_EnabledObjectCount, put=__set_m_EnabledObjectCount))  m_EnabledObjectCount;

constexpr void __set_m_EnabledObjectCount(int32_t value) ;

constexpr int32_t __get_m_EnabledObjectCount() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 int32_t __declspec(property(get=get_Capacity))  Capacity;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 T __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
 void Add(T item) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(T item, bool isActive) ;

/// @brief Method AddUnique addr 0x0 size 0xffffffffffffffff virtual false final false
 bool AddUnique(T item, bool isActive) ;

/// @brief Method EnableItem addr 0x0 size 0xffffffffffffffff virtual false final false
 bool EnableItem(T item) ;

/// @brief Method DisableItem addr 0x0 size 0xffffffffffffffff virtual false final false
 bool DisableItem(T item) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Remove(T item) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<T> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Contains(T item) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void CopyTo(::ArrayW<T> array, int32_t arrayIndex) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Capacity() ;

/// @brief Method get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_IsReadOnly() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t IndexOf(T item) ;

/// @brief Method Insert addr 0x0 size 0xffffffffffffffff virtual true final true
 void Insert(int32_t index, T item) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual true final true
 void RemoveAt(int32_t index) ;

/// @brief Method Swap addr 0x0 size 0xffffffffffffffff virtual false final false
 void Swap(int32_t index1, int32_t index2) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 T get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 void set_Item(int32_t index, T value) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll(::System::Predicate_1<T> match) ;

/// @brief Method Sort addr 0x0 size 0xffffffffffffffff virtual false final false
 void Sort(::System::Comparison_1<T> sortLayoutFunction) ;

// Ctor Parameters []
explicit IndexedSet_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI::Collections
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UI::Collections::IndexedSet_1, "UnityEngine.UI.Collections", "IndexedSet`1");
