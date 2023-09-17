#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class ListWithEvents_1;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class ListWithEvents_1<T>;
}
// Type: ::ListWithEvents`1
// Type: ::ListWithEvents`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14228))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14228), inst: 2 })
// CS Name: ListWithEvents`1
class CORDL_TYPE ListWithEvents_1<T> : public ::bs_hook::Il2CppWrapperType {
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

virtual ~ListWithEvents_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ListWithEvents_1", modifiers: " const&", def_value: None }]
constexpr ListWithEvents_1(ListWithEvents_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ListWithEvents_1", modifiers: "&&", def_value: None }]
constexpr ListWithEvents_1(ListWithEvents_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ListWithEvents_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ListWithEvents_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ListWithEvents_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ListWithEvents_1& operator=(ListWithEvents_1&& o) noexcept = default;
  constexpr ListWithEvents_1& operator=(ListWithEvents_1 const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<T> __declspec(property(get=__get_m_List, put=__set_m_List))  m_List;

constexpr void __set_m_List(::System::Collections::Generic::List_1<T> value) ;

constexpr ::System::Collections::Generic::List_1<T> __get_m_List() const;

 ::System::Action_1<T> __declspec(property(get=__get_OnElementAdded, put=__set_OnElementAdded))  OnElementAdded;

constexpr void __set_OnElementAdded(::System::Action_1<T> value) ;

constexpr ::System::Action_1<T> __get_OnElementAdded() const;

 ::System::Action_1<T> __declspec(property(get=__get_OnElementRemoved, put=__set_OnElementRemoved))  OnElementRemoved;

constexpr void __set_OnElementRemoved(::System::Action_1<T> value) ;

constexpr ::System::Action_1<T> __get_OnElementRemoved() const;


// Properties

 T __declspec(property(get=get_Item, put=set_Item))  Item;

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;


// Methods

/// @brief Method add_OnElementAdded addr 0x0 size 0xffffffffffffffff virtual false final false
 void add_OnElementAdded(::System::Action_1<T> value) ;

/// @brief Method remove_OnElementAdded addr 0x0 size 0xffffffffffffffff virtual false final false
 void remove_OnElementAdded(::System::Action_1<T> value) ;

/// @brief Method add_OnElementRemoved addr 0x0 size 0xffffffffffffffff virtual false final false
 void add_OnElementRemoved(::System::Action_1<T> value) ;

/// @brief Method remove_OnElementRemoved addr 0x0 size 0xffffffffffffffff virtual false final false
 void remove_OnElementRemoved(::System::Action_1<T> value) ;

/// @brief Method InvokeAdded addr 0x0 size 0xffffffffffffffff virtual false final false
 void InvokeAdded(T element) ;

/// @brief Method InvokeRemoved addr 0x0 size 0xffffffffffffffff virtual false final false
 void InvokeRemoved(T element) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 T get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 void set_Item(int32_t index, T value) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_IsReadOnly() ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
 void Add(T item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Contains(T item) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void CopyTo(::ArrayW<T> array, int32_t arrayIndex) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<T> GetEnumerator() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t IndexOf(T item) ;

/// @brief Method Insert addr 0x0 size 0xffffffffffffffff virtual true final true
 void Insert(int32_t index, T item) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Remove(T item) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual true final true
 void RemoveAt(int32_t index) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters []
explicit ListWithEvents_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ListWithEvents_1, "", "ListWithEvents`1");
