#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Linq {
template<typename TKey,typename TElement>
class IGrouping_2;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TKey,typename TElement>
class ______System__Linq__Lookup_2__Grouping___GetEnumerator_d__7;
}
namespace System::Linq {
template<typename TKey,typename TElement>
class Lookup_2;
}
namespace System::Linq {
template<typename TKey,typename TElement>
class ____System__Linq__Lookup_2__Grouping;
}
namespace System::Linq {
template<typename TKey,typename TElement>
class ____System__Linq__Lookup_2___GetEnumerator_d__12;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TElement>
class ______System__Linq__Lookup_2__Grouping___GetEnumerator_d__7<TKey,TElement>;
}
namespace System::Linq {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TElement>
class Lookup_2<TKey,TElement>;
}
namespace System::Linq {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TElement>
class ____System__Linq__Lookup_2__Grouping<TKey,TElement>;
}
namespace System::Linq {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TElement>
class ____System__Linq__Lookup_2___GetEnumerator_d__12<TKey,TElement>;
}
// Type: ::<GetEnumerator>d__7
// Type: ::Grouping
// Type: ::<GetEnumerator>d__12
// Type: System.Linq::Lookup`2
// Type: ::<GetEnumerator>d__7
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TElement>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14564))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14564), inst: 80 })
// CS Name: System.Linq.Lookup`2::Grouping::<GetEnumerator>d__7
class CORDL_TYPE ______System__Linq__Lookup_2__Grouping___GetEnumerator_d__7<TKey,TElement> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<TElement>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<TElement>() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~______System__Linq__Lookup_2__Grouping___GetEnumerator_d__7() = default;

// Ctor Parameters [CppParam { name: "", ty: "______System__Linq__Lookup_2__Grouping___GetEnumerator_d__7", modifiers: " const&", def_value: None }]
constexpr ______System__Linq__Lookup_2__Grouping___GetEnumerator_d__7(______System__Linq__Lookup_2__Grouping___GetEnumerator_d__7 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "______System__Linq__Lookup_2__Grouping___GetEnumerator_d__7", modifiers: "&&", def_value: None }]
constexpr ______System__Linq__Lookup_2__Grouping___GetEnumerator_d__7(______System__Linq__Lookup_2__Grouping___GetEnumerator_d__7&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ______System__Linq__Lookup_2__Grouping___GetEnumerator_d__7(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ______System__Linq__Lookup_2__Grouping___GetEnumerator_d__7& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ______System__Linq__Lookup_2__Grouping___GetEnumerator_d__7& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ______System__Linq__Lookup_2__Grouping___GetEnumerator_d__7& operator=(______System__Linq__Lookup_2__Grouping___GetEnumerator_d__7&& o) noexcept = default;
  constexpr ______System__Linq__Lookup_2__Grouping___GetEnumerator_d__7& operator=(______System__Linq__Lookup_2__Grouping___GetEnumerator_d__7 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 TElement __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(TElement value) ;

constexpr TElement __get___2__current() const;

 ::System::Linq::____System__Linq__Lookup_2__Grouping<TKey,TElement> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::System::Linq::____System__Linq__Lookup_2__Grouping<TKey,TElement> value) ;

constexpr ::System::Linq::____System__Linq__Lookup_2__Grouping<TKey,TElement> __get___4__this() const;

 int32_t __declspec(property(get=__get__i_5__2, put=__set__i_5__2))  _i_5__2;

constexpr void __set__i_5__2(int32_t value) ;

constexpr int32_t __get__i_5__2() const;


// Properties

 TElement __declspec(property(get=System_Collections_Generic_IEnumerator_TElement__get_Current))  System_Collections_Generic_IEnumerator_TElement__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ______System__Linq__Lookup_2__Grouping___GetEnumerator_d__7(int32_t __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<TElement>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 TElement System_Collections_Generic_IEnumerator_TElement__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Grouping
namespace System::Linq {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TElement>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14565))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14565), inst: 80 })
// CS Name: System.Linq.Lookup`2::Grouping
class CORDL_TYPE ____System__Linq__Lookup_2__Grouping<TKey,TElement> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetEnumerator_d__7 = ::GlobalNamespace::______System__Linq__Lookup_2__Grouping___GetEnumerator_d__7<TKey, TElement>;

/// @brief Convert operator to ::System::Linq::IGrouping_2<TKey,TElement>
constexpr operator  ::System::Linq::IGrouping_2<TKey,TElement>() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<TElement>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<TElement>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IList_1<TElement>
constexpr operator  ::System::Collections::Generic::IList_1<TElement>() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::ICollection_1<TElement>
constexpr operator  ::System::Collections::Generic::ICollection_1<TElement>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____System__Linq__Lookup_2__Grouping() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Linq__Lookup_2__Grouping", modifiers: " const&", def_value: None }]
constexpr ____System__Linq__Lookup_2__Grouping(____System__Linq__Lookup_2__Grouping const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Linq__Lookup_2__Grouping", modifiers: "&&", def_value: None }]
constexpr ____System__Linq__Lookup_2__Grouping(____System__Linq__Lookup_2__Grouping&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Linq__Lookup_2__Grouping(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Linq__Lookup_2__Grouping& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Linq__Lookup_2__Grouping& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Linq__Lookup_2__Grouping& operator=(____System__Linq__Lookup_2__Grouping&& o) noexcept = default;
  constexpr ____System__Linq__Lookup_2__Grouping& operator=(____System__Linq__Lookup_2__Grouping const& o) noexcept = default;
                


// Fields

 TKey __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(TKey value) ;

constexpr TKey __get_key() const;

 int32_t __declspec(property(get=__get_hashCode, put=__set_hashCode))  hashCode;

constexpr void __set_hashCode(int32_t value) ;

constexpr int32_t __get_hashCode() const;

 ::ArrayW<TElement> __declspec(property(get=__get_elements, put=__set_elements))  elements;

constexpr void __set_elements(::ArrayW<TElement> value) ;

constexpr ::ArrayW<TElement> __get_elements() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 ::System::Linq::____System__Linq__Lookup_2__Grouping<TKey,TElement> __declspec(property(get=__get_hashNext, put=__set_hashNext))  hashNext;

constexpr void __set_hashNext(::System::Linq::____System__Linq__Lookup_2__Grouping<TKey,TElement> value) ;

constexpr ::System::Linq::____System__Linq__Lookup_2__Grouping<TKey,TElement> __get_hashNext() const;

 ::System::Linq::____System__Linq__Lookup_2__Grouping<TKey,TElement> __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(::System::Linq::____System__Linq__Lookup_2__Grouping<TKey,TElement> value) ;

constexpr ::System::Linq::____System__Linq__Lookup_2__Grouping<TKey,TElement> __get_next() const;


// Properties

 TKey __declspec(property(get=get_Key))  Key;

 int32_t __declspec(property(get=System_Collections_Generic_ICollection_TElement__get_Count))  System_Collections_Generic_ICollection_TElement__Count;

 bool __declspec(property(get=System_Collections_Generic_ICollection_TElement__get_IsReadOnly))  System_Collections_Generic_ICollection_TElement__IsReadOnly;

 TElement __declspec(property(get=System_Collections_Generic_IList_TElement__get_Item, put=System_Collections_Generic_IList_TElement__set_Item))  System_Collections_Generic_IList_TElement__Item;


// Methods

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(TElement element) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<TElement> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual true final true
 TKey get_Key() ;

/// @brief Method System.Collections.Generic.ICollection<TElement>.get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Collections_Generic_ICollection_TElement__get_Count() ;

/// @brief Method System.Collections.Generic.ICollection<TElement>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_Generic_ICollection_TElement__get_IsReadOnly() ;

/// @brief Method System.Collections.Generic.ICollection<TElement>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_Generic_ICollection_TElement__Add(TElement item) ;

/// @brief Method System.Collections.Generic.ICollection<TElement>.Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_Generic_ICollection_TElement__Clear() ;

/// @brief Method System.Collections.Generic.ICollection<TElement>.Contains addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_Generic_ICollection_TElement__Contains(TElement item) ;

/// @brief Method System.Collections.Generic.ICollection<TElement>.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_Generic_ICollection_TElement__CopyTo(::ArrayW<TElement> array, int32_t arrayIndex) ;

/// @brief Method System.Collections.Generic.ICollection<TElement>.Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_Generic_ICollection_TElement__Remove(TElement item) ;

/// @brief Method System.Collections.Generic.IList<TElement>.IndexOf addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Collections_Generic_IList_TElement__IndexOf(TElement item) ;

/// @brief Method System.Collections.Generic.IList<TElement>.Insert addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_Generic_IList_TElement__Insert(int32_t index, TElement item) ;

/// @brief Method System.Collections.Generic.IList<TElement>.RemoveAt addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_Generic_IList_TElement__RemoveAt(int32_t index) ;

/// @brief Method System.Collections.Generic.IList<TElement>.get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 TElement System_Collections_Generic_IList_TElement__get_Item(int32_t index) ;

/// @brief Method System.Collections.Generic.IList<TElement>.set_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_Generic_IList_TElement__set_Item(int32_t index, TElement value) ;

// Ctor Parameters []
explicit ____System__Linq__Lookup_2__Grouping() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: ::<GetEnumerator>d__12
namespace System::Linq {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TElement>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14566))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14566), inst: 80 })
// CS Name: System.Linq.Lookup`2::<GetEnumerator>d__12
class CORDL_TYPE ____System__Linq__Lookup_2___GetEnumerator_d__12<TKey,TElement> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>>() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~____System__Linq__Lookup_2___GetEnumerator_d__12() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Linq__Lookup_2___GetEnumerator_d__12", modifiers: " const&", def_value: None }]
constexpr ____System__Linq__Lookup_2___GetEnumerator_d__12(____System__Linq__Lookup_2___GetEnumerator_d__12 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Linq__Lookup_2___GetEnumerator_d__12", modifiers: "&&", def_value: None }]
constexpr ____System__Linq__Lookup_2___GetEnumerator_d__12(____System__Linq__Lookup_2___GetEnumerator_d__12&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Linq__Lookup_2___GetEnumerator_d__12(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Linq__Lookup_2___GetEnumerator_d__12& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Linq__Lookup_2___GetEnumerator_d__12& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Linq__Lookup_2___GetEnumerator_d__12& operator=(____System__Linq__Lookup_2___GetEnumerator_d__12&& o) noexcept = default;
  constexpr ____System__Linq__Lookup_2___GetEnumerator_d__12& operator=(____System__Linq__Lookup_2___GetEnumerator_d__12 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Linq::IGrouping_2<TKey,TElement> __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::System::Linq::IGrouping_2<TKey,TElement> value) ;

constexpr ::System::Linq::IGrouping_2<TKey,TElement> __get___2__current() const;

 ::System::Linq::Lookup_2<TKey,TElement> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::System::Linq::Lookup_2<TKey,TElement> value) ;

constexpr ::System::Linq::Lookup_2<TKey,TElement> __get___4__this() const;

 ::System::Linq::____System__Linq__Lookup_2__Grouping<TKey,TElement> __declspec(property(get=__get__g_5__2, put=__set__g_5__2))  _g_5__2;

constexpr void __set__g_5__2(::System::Linq::____System__Linq__Lookup_2__Grouping<TKey,TElement> value) ;

constexpr ::System::Linq::____System__Linq__Lookup_2__Grouping<TKey,TElement> __get__g_5__2() const;


// Properties

 ::System::Linq::IGrouping_2<TKey,TElement> __declspec(property(get=System_Collections_Generic_IEnumerator_System_Linq_IGrouping_TKey,TElement___get_Current))  System_Collections_Generic_IEnumerator_System_Linq_IGrouping_TKey,TElement___Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____System__Linq__Lookup_2___GetEnumerator_d__12(int32_t __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Linq.IGrouping<TKey,TElement>>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Linq::IGrouping_2<TKey,TElement> System_Collections_Generic_IEnumerator_System_Linq_IGrouping_TKey,TElement___get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::Lookup`2
namespace System::Linq {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TElement>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14567))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14567), inst: 80 })
// CS Name: System.Linq.Lookup`2
class CORDL_TYPE Lookup_2<TKey,TElement> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetEnumerator_d__12 = ::System::Linq::____System__Linq__Lookup_2___GetEnumerator_d__12<TKey, TElement>;

using Grouping = ::System::Linq::____System__Linq__Lookup_2__Grouping<TKey, TElement>;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Lookup_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Lookup_2", modifiers: " const&", def_value: None }]
constexpr Lookup_2(Lookup_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Lookup_2", modifiers: "&&", def_value: None }]
constexpr Lookup_2(Lookup_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Lookup_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Lookup_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Lookup_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Lookup_2& operator=(Lookup_2&& o) noexcept = default;
  constexpr Lookup_2& operator=(Lookup_2 const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::IEqualityComparer_1<TKey> __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

constexpr void __set_comparer(::System::Collections::Generic::IEqualityComparer_1<TKey> value) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey> __get_comparer() const;

 ::ArrayW<::System::Linq::____System__Linq__Lookup_2__Grouping<TKey,TElement>> __declspec(property(get=__get_groupings, put=__set_groupings))  groupings;

constexpr void __set_groupings(::ArrayW<::System::Linq::____System__Linq__Lookup_2__Grouping<TKey,TElement>> value) ;

constexpr ::ArrayW<::System::Linq::____System__Linq__Lookup_2__Grouping<TKey,TElement>> __get_groupings() const;

 ::System::Linq::____System__Linq__Lookup_2__Grouping<TKey,TElement> __declspec(property(get=__get_lastGrouping, put=__set_lastGrouping))  lastGrouping;

constexpr void __set_lastGrouping(::System::Linq::____System__Linq__Lookup_2__Grouping<TKey,TElement> value) ;

constexpr ::System::Linq::____System__Linq__Lookup_2__Grouping<TKey,TElement> __get_lastGrouping() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;


// Methods

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSource>
static ::System::Linq::Lookup_2<TKey,TElement> Create(::System::Collections::Generic::IEnumerable_1<TSource> source, ::System::Func_2<TSource,TKey> keySelector, ::System::Func_2<TSource,TElement> elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey> comparer) ;

// Ctor Parameters [CppParam { name: "comparer", ty: "::System::Collections::Generic::IEqualityComparer_1<TKey>", modifiers: "", def_value: None }]
explicit Lookup_2(::System::Collections::Generic::IEqualityComparer_1<TKey> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEqualityComparer_1<TKey> comparer) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method InternalGetHashCode addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t InternalGetHashCode(TKey key) ;

/// @brief Method GetGrouping addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Linq::____System__Linq__Lookup_2__Grouping<TKey,TElement> GetGrouping(TKey key, bool create) ;

/// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual false final false
 void Resize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::______System__Linq__Lookup_2__Grouping___GetEnumerator_d__7, "System.Linq", "Lookup`2/Grouping/<GetEnumerator>d__7");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Lookup_2, "System.Linq", "Lookup`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::____System__Linq__Lookup_2__Grouping, "System.Linq", "Lookup`2/Grouping");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::____System__Linq__Lookup_2___GetEnumerator_d__12, "System.Linq", "Lookup`2/<GetEnumerator>d__12");
