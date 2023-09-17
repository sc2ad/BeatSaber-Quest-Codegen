#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Linq/zzzz__OrderedEnumerable_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System::Linq {
template<typename TElement>
class OrderedEnumerable_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Linq {
template<typename TElement>
class EnumerableSorter_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace UnityEngine::ResourceManagement::Diagnostics {
struct DiagnosticEvent;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphPairAdjustmentRecord;
}
namespace Zenject {
struct ____Zenject__DisposableManager__DisposableInfo;
}
namespace Zenject {
struct ____Zenject__PoolableManager__PoolableInfo;
}
// Forward declare root types
namespace System::Linq {
template<typename TElement,typename TKey>
class OrderedEnumerable_2;
}
namespace System::Linq {
template<::cordl_internals::il2cpp_reference_type TElement,::cordl_internals::il2cpp_reference_type TKey>
class OrderedEnumerable_2<TElement,TKey>;
}
namespace System::Linq {
template<::cordl_internals::il2cpp_reference_type TElement>
class OrderedEnumerable_2<TElement,float_t>;
}
namespace System::Linq {
template<::cordl_internals::il2cpp_reference_type TElement>
class OrderedEnumerable_2<TElement,uint32_t>;
}
namespace System::Linq {
template<::cordl_internals::il2cpp_reference_type TElement>
class OrderedEnumerable_2<TElement,int32_t>;
}
namespace System::Linq {
template<>
class OrderedEnumerable_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>;
}
namespace System::Linq {
template<>
class OrderedEnumerable_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>;
}
namespace System::Linq {
template<>
class OrderedEnumerable_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>;
}
namespace System::Linq {
template<>
class OrderedEnumerable_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t>;
}
namespace System::Linq {
template<>
class OrderedEnumerable_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t>;
}
namespace System::Linq {
template<>
class OrderedEnumerable_2<float_t,float_t>;
}
namespace System::Linq {
template<>
class OrderedEnumerable_2<int32_t,float_t>;
}
// Type: System.Linq::OrderedEnumerable`2
// Type: System.Linq::OrderedEnumerable`2
namespace System::Linq {
// cpp template
template<::cordl_internals::il2cpp_reference_type TElement,::cordl_internals::il2cpp_reference_type TKey>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14572)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14572), inst: 1596 }), TypeDefinitionIndex(TypeDefinitionIndex(14573))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14573), inst: 80 })
// CS Name: System.Linq.OrderedEnumerable`2
class CORDL_TYPE OrderedEnumerable_2<TElement,TKey> : public ::System::Linq::OrderedEnumerable_1<TElement> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~OrderedEnumerable_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: " const&", def_value: None }]
constexpr OrderedEnumerable_2(OrderedEnumerable_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: "&&", def_value: None }]
constexpr OrderedEnumerable_2(OrderedEnumerable_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OrderedEnumerable_2(void* ptr) noexcept : ::System::Linq::OrderedEnumerable_1<TElement>(ptr) {
}


  constexpr OrderedEnumerable_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OrderedEnumerable_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OrderedEnumerable_2& operator=(OrderedEnumerable_2&& o) noexcept = default;
  constexpr OrderedEnumerable_2& operator=(OrderedEnumerable_2 const& o) noexcept = default;
                


// Fields

 ::System::Linq::OrderedEnumerable_1<TElement> __declspec(property(get=__get_parent, put=__set_parent))  parent;

constexpr void __set_parent(::System::Linq::OrderedEnumerable_1<TElement> value) ;

constexpr ::System::Linq::OrderedEnumerable_1<TElement> __get_parent() const;

 ::System::Func_2<TElement,TKey> __declspec(property(get=__get_keySelector, put=__set_keySelector))  keySelector;

constexpr void __set_keySelector(::System::Func_2<TElement,TKey> value) ;

constexpr ::System::Func_2<TElement,TKey> __get_keySelector() const;

 ::System::Collections::Generic::IComparer_1<TKey> __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<TKey> value) ;

constexpr ::System::Collections::Generic::IComparer_1<TKey> __get_comparer() const;

 bool __declspec(property(get=__get_descending, put=__set_descending))  descending;

constexpr void __set_descending(bool value) ;

constexpr bool __get_descending() const;


// Methods

// Ctor Parameters [CppParam { name: "source", ty: "::System::Collections::Generic::IEnumerable_1<TElement>", modifiers: "", def_value: None }, CppParam { name: "keySelector", ty: "::System::Func_2<TElement,TKey>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "::System::Collections::Generic::IComparer_1<TKey>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }]
explicit OrderedEnumerable_2(::System::Collections::Generic::IEnumerable_1<TElement> source, ::System::Func_2<TElement,TKey> keySelector, ::System::Collections::Generic::IComparer_1<TKey> comparer, bool descending) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<TElement> source, ::System::Func_2<TElement,TKey> keySelector, ::System::Collections::Generic::IComparer_1<TKey> comparer, bool descending) ;

/// @brief Method GetEnumerableSorter addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Linq::EnumerableSorter_1<TElement> GetEnumerableSorter(::System::Linq::EnumerableSorter_1<TElement> next) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::OrderedEnumerable`2
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14573)), TypeDefinitionIndex(TypeDefinitionIndex(14572)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14572), inst: 1596 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14573), inst: 512 })
// CS Name: System.Linq.OrderedEnumerable`2
class CORDL_TYPE OrderedEnumerable_2<int32_t,float_t> : public ::System::Linq::OrderedEnumerable_1<int32_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~OrderedEnumerable_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: " const&", def_value: None }]
constexpr OrderedEnumerable_2(OrderedEnumerable_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: "&&", def_value: None }]
constexpr OrderedEnumerable_2(OrderedEnumerable_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OrderedEnumerable_2(void* ptr) noexcept : ::System::Linq::OrderedEnumerable_1<int32_t>(ptr) {
}


  constexpr OrderedEnumerable_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OrderedEnumerable_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OrderedEnumerable_2& operator=(OrderedEnumerable_2&& o) noexcept = default;
  constexpr OrderedEnumerable_2& operator=(OrderedEnumerable_2 const& o) noexcept = default;
                


// Fields

 ::System::Linq::OrderedEnumerable_1<int32_t> __declspec(property(get=__get_parent, put=__set_parent))  parent;

constexpr void __set_parent(::System::Linq::OrderedEnumerable_1<int32_t> value) ;

constexpr ::System::Linq::OrderedEnumerable_1<int32_t> __get_parent() const;

 ::System::Func_2<int32_t,float_t> __declspec(property(get=__get_keySelector, put=__set_keySelector))  keySelector;

constexpr void __set_keySelector(::System::Func_2<int32_t,float_t> value) ;

constexpr ::System::Func_2<int32_t,float_t> __get_keySelector() const;

 ::System::Collections::Generic::IComparer_1<float_t> __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<float_t> value) ;

constexpr ::System::Collections::Generic::IComparer_1<float_t> __get_comparer() const;

 bool __declspec(property(get=__get_descending, put=__set_descending))  descending;

constexpr void __set_descending(bool value) ;

constexpr bool __get_descending() const;


// Methods

// Ctor Parameters [CppParam { name: "source", ty: "::System::Collections::Generic::IEnumerable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "keySelector", ty: "::System::Func_2<int32_t,float_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "::System::Collections::Generic::IComparer_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }]
explicit OrderedEnumerable_2(::System::Collections::Generic::IEnumerable_1<int32_t> source, ::System::Func_2<int32_t,float_t> keySelector, ::System::Collections::Generic::IComparer_1<float_t> comparer, bool descending) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<int32_t> source, ::System::Func_2<int32_t,float_t> keySelector, ::System::Collections::Generic::IComparer_1<float_t> comparer, bool descending) ;

/// @brief Method GetEnumerableSorter addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Linq::EnumerableSorter_1<int32_t> GetEnumerableSorter(::System::Linq::EnumerableSorter_1<int32_t> next) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::OrderedEnumerable`2
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14572)), TypeDefinitionIndex(TypeDefinitionIndex(14573)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14572), inst: 1596 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14573), inst: 561 })
// CS Name: System.Linq.OrderedEnumerable`2
class CORDL_TYPE OrderedEnumerable_2<float_t,float_t> : public ::System::Linq::OrderedEnumerable_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~OrderedEnumerable_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: " const&", def_value: None }]
constexpr OrderedEnumerable_2(OrderedEnumerable_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: "&&", def_value: None }]
constexpr OrderedEnumerable_2(OrderedEnumerable_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OrderedEnumerable_2(void* ptr) noexcept : ::System::Linq::OrderedEnumerable_1<float_t>(ptr) {
}


  constexpr OrderedEnumerable_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OrderedEnumerable_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OrderedEnumerable_2& operator=(OrderedEnumerable_2&& o) noexcept = default;
  constexpr OrderedEnumerable_2& operator=(OrderedEnumerable_2 const& o) noexcept = default;
                


// Fields

 ::System::Linq::OrderedEnumerable_1<float_t> __declspec(property(get=__get_parent, put=__set_parent))  parent;

constexpr void __set_parent(::System::Linq::OrderedEnumerable_1<float_t> value) ;

constexpr ::System::Linq::OrderedEnumerable_1<float_t> __get_parent() const;

 ::System::Func_2<float_t,float_t> __declspec(property(get=__get_keySelector, put=__set_keySelector))  keySelector;

constexpr void __set_keySelector(::System::Func_2<float_t,float_t> value) ;

constexpr ::System::Func_2<float_t,float_t> __get_keySelector() const;

 ::System::Collections::Generic::IComparer_1<float_t> __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<float_t> value) ;

constexpr ::System::Collections::Generic::IComparer_1<float_t> __get_comparer() const;

 bool __declspec(property(get=__get_descending, put=__set_descending))  descending;

constexpr void __set_descending(bool value) ;

constexpr bool __get_descending() const;


// Methods

// Ctor Parameters [CppParam { name: "source", ty: "::System::Collections::Generic::IEnumerable_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "keySelector", ty: "::System::Func_2<float_t,float_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "::System::Collections::Generic::IComparer_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }]
explicit OrderedEnumerable_2(::System::Collections::Generic::IEnumerable_1<float_t> source, ::System::Func_2<float_t,float_t> keySelector, ::System::Collections::Generic::IComparer_1<float_t> comparer, bool descending) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<float_t> source, ::System::Func_2<float_t,float_t> keySelector, ::System::Collections::Generic::IComparer_1<float_t> comparer, bool descending) ;

/// @brief Method GetEnumerableSorter addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Linq::EnumerableSorter_1<float_t> GetEnumerableSorter(::System::Linq::EnumerableSorter_1<float_t> next) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::OrderedEnumerable`2
namespace System::Linq {
// cpp template
template<::cordl_internals::il2cpp_reference_type TElement>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14572)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14572), inst: 1596 }), TypeDefinitionIndex(TypeDefinitionIndex(14573))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14573), inst: 1548 })
// CS Name: System.Linq.OrderedEnumerable`2
class CORDL_TYPE OrderedEnumerable_2<TElement,int32_t> : public ::System::Linq::OrderedEnumerable_1<TElement> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~OrderedEnumerable_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: " const&", def_value: None }]
constexpr OrderedEnumerable_2(OrderedEnumerable_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: "&&", def_value: None }]
constexpr OrderedEnumerable_2(OrderedEnumerable_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OrderedEnumerable_2(void* ptr) noexcept : ::System::Linq::OrderedEnumerable_1<TElement>(ptr) {
}


  constexpr OrderedEnumerable_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OrderedEnumerable_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OrderedEnumerable_2& operator=(OrderedEnumerable_2&& o) noexcept = default;
  constexpr OrderedEnumerable_2& operator=(OrderedEnumerable_2 const& o) noexcept = default;
                


// Fields

 ::System::Linq::OrderedEnumerable_1<TElement> __declspec(property(get=__get_parent, put=__set_parent))  parent;

constexpr void __set_parent(::System::Linq::OrderedEnumerable_1<TElement> value) ;

constexpr ::System::Linq::OrderedEnumerable_1<TElement> __get_parent() const;

 ::System::Func_2<TElement,int32_t> __declspec(property(get=__get_keySelector, put=__set_keySelector))  keySelector;

constexpr void __set_keySelector(::System::Func_2<TElement,int32_t> value) ;

constexpr ::System::Func_2<TElement,int32_t> __get_keySelector() const;

 ::System::Collections::Generic::IComparer_1<int32_t> __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<int32_t> value) ;

constexpr ::System::Collections::Generic::IComparer_1<int32_t> __get_comparer() const;

 bool __declspec(property(get=__get_descending, put=__set_descending))  descending;

constexpr void __set_descending(bool value) ;

constexpr bool __get_descending() const;


// Methods

// Ctor Parameters [CppParam { name: "source", ty: "::System::Collections::Generic::IEnumerable_1<TElement>", modifiers: "", def_value: None }, CppParam { name: "keySelector", ty: "::System::Func_2<TElement,int32_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "::System::Collections::Generic::IComparer_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }]
explicit OrderedEnumerable_2(::System::Collections::Generic::IEnumerable_1<TElement> source, ::System::Func_2<TElement,int32_t> keySelector, ::System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<TElement> source, ::System::Func_2<TElement,int32_t> keySelector, ::System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending) ;

/// @brief Method GetEnumerableSorter addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Linq::EnumerableSorter_1<TElement> GetEnumerableSorter(::System::Linq::EnumerableSorter_1<TElement> next) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::OrderedEnumerable`2
namespace System::Linq {
// cpp template
template<::cordl_internals::il2cpp_reference_type TElement>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14573)), TypeDefinitionIndex(TypeDefinitionIndex(14572)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14572), inst: 1596 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14573), inst: 1553 })
// CS Name: System.Linq.OrderedEnumerable`2
class CORDL_TYPE OrderedEnumerable_2<TElement,float_t> : public ::System::Linq::OrderedEnumerable_1<TElement> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~OrderedEnumerable_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: " const&", def_value: None }]
constexpr OrderedEnumerable_2(OrderedEnumerable_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: "&&", def_value: None }]
constexpr OrderedEnumerable_2(OrderedEnumerable_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OrderedEnumerable_2(void* ptr) noexcept : ::System::Linq::OrderedEnumerable_1<TElement>(ptr) {
}


  constexpr OrderedEnumerable_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OrderedEnumerable_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OrderedEnumerable_2& operator=(OrderedEnumerable_2&& o) noexcept = default;
  constexpr OrderedEnumerable_2& operator=(OrderedEnumerable_2 const& o) noexcept = default;
                


// Fields

 ::System::Linq::OrderedEnumerable_1<TElement> __declspec(property(get=__get_parent, put=__set_parent))  parent;

constexpr void __set_parent(::System::Linq::OrderedEnumerable_1<TElement> value) ;

constexpr ::System::Linq::OrderedEnumerable_1<TElement> __get_parent() const;

 ::System::Func_2<TElement,float_t> __declspec(property(get=__get_keySelector, put=__set_keySelector))  keySelector;

constexpr void __set_keySelector(::System::Func_2<TElement,float_t> value) ;

constexpr ::System::Func_2<TElement,float_t> __get_keySelector() const;

 ::System::Collections::Generic::IComparer_1<float_t> __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<float_t> value) ;

constexpr ::System::Collections::Generic::IComparer_1<float_t> __get_comparer() const;

 bool __declspec(property(get=__get_descending, put=__set_descending))  descending;

constexpr void __set_descending(bool value) ;

constexpr bool __get_descending() const;


// Methods

// Ctor Parameters [CppParam { name: "source", ty: "::System::Collections::Generic::IEnumerable_1<TElement>", modifiers: "", def_value: None }, CppParam { name: "keySelector", ty: "::System::Func_2<TElement,float_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "::System::Collections::Generic::IComparer_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }]
explicit OrderedEnumerable_2(::System::Collections::Generic::IEnumerable_1<TElement> source, ::System::Func_2<TElement,float_t> keySelector, ::System::Collections::Generic::IComparer_1<float_t> comparer, bool descending) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<TElement> source, ::System::Func_2<TElement,float_t> keySelector, ::System::Collections::Generic::IComparer_1<float_t> comparer, bool descending) ;

/// @brief Method GetEnumerableSorter addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Linq::EnumerableSorter_1<TElement> GetEnumerableSorter(::System::Linq::EnumerableSorter_1<TElement> next) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::OrderedEnumerable`2
namespace System::Linq {
// cpp template
template<::cordl_internals::il2cpp_reference_type TElement>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14572)), TypeDefinitionIndex(TypeDefinitionIndex(14573)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14572), inst: 1596 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14573), inst: 1557 })
// CS Name: System.Linq.OrderedEnumerable`2
class CORDL_TYPE OrderedEnumerable_2<TElement,uint32_t> : public ::System::Linq::OrderedEnumerable_1<TElement> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~OrderedEnumerable_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: " const&", def_value: None }]
constexpr OrderedEnumerable_2(OrderedEnumerable_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: "&&", def_value: None }]
constexpr OrderedEnumerable_2(OrderedEnumerable_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OrderedEnumerable_2(void* ptr) noexcept : ::System::Linq::OrderedEnumerable_1<TElement>(ptr) {
}


  constexpr OrderedEnumerable_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OrderedEnumerable_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OrderedEnumerable_2& operator=(OrderedEnumerable_2&& o) noexcept = default;
  constexpr OrderedEnumerable_2& operator=(OrderedEnumerable_2 const& o) noexcept = default;
                


// Fields

 ::System::Linq::OrderedEnumerable_1<TElement> __declspec(property(get=__get_parent, put=__set_parent))  parent;

constexpr void __set_parent(::System::Linq::OrderedEnumerable_1<TElement> value) ;

constexpr ::System::Linq::OrderedEnumerable_1<TElement> __get_parent() const;

 ::System::Func_2<TElement,uint32_t> __declspec(property(get=__get_keySelector, put=__set_keySelector))  keySelector;

constexpr void __set_keySelector(::System::Func_2<TElement,uint32_t> value) ;

constexpr ::System::Func_2<TElement,uint32_t> __get_keySelector() const;

 ::System::Collections::Generic::IComparer_1<uint32_t> __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<uint32_t> value) ;

constexpr ::System::Collections::Generic::IComparer_1<uint32_t> __get_comparer() const;

 bool __declspec(property(get=__get_descending, put=__set_descending))  descending;

constexpr void __set_descending(bool value) ;

constexpr bool __get_descending() const;


// Methods

// Ctor Parameters [CppParam { name: "source", ty: "::System::Collections::Generic::IEnumerable_1<TElement>", modifiers: "", def_value: None }, CppParam { name: "keySelector", ty: "::System::Func_2<TElement,uint32_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "::System::Collections::Generic::IComparer_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }]
explicit OrderedEnumerable_2(::System::Collections::Generic::IEnumerable_1<TElement> source, ::System::Func_2<TElement,uint32_t> keySelector, ::System::Collections::Generic::IComparer_1<uint32_t> comparer, bool descending) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<TElement> source, ::System::Func_2<TElement,uint32_t> keySelector, ::System::Collections::Generic::IComparer_1<uint32_t> comparer, bool descending) ;

/// @brief Method GetEnumerableSorter addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Linq::EnumerableSorter_1<TElement> GetEnumerableSorter(::System::Linq::EnumerableSorter_1<TElement> next) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::OrderedEnumerable`2
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14572)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14572), inst: 1596 }), TypeDefinitionIndex(TypeDefinitionIndex(14573))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14573), inst: 2190 })
// CS Name: System.Linq.OrderedEnumerable`2
class CORDL_TYPE OrderedEnumerable_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t> : public ::System::Linq::OrderedEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~OrderedEnumerable_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: " const&", def_value: None }]
constexpr OrderedEnumerable_2(OrderedEnumerable_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: "&&", def_value: None }]
constexpr OrderedEnumerable_2(OrderedEnumerable_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OrderedEnumerable_2(void* ptr) noexcept : ::System::Linq::OrderedEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>(ptr) {
}


  constexpr OrderedEnumerable_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OrderedEnumerable_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OrderedEnumerable_2& operator=(OrderedEnumerable_2&& o) noexcept = default;
  constexpr OrderedEnumerable_2& operator=(OrderedEnumerable_2 const& o) noexcept = default;
                


// Fields

 ::System::Linq::OrderedEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> __declspec(property(get=__get_parent, put=__set_parent))  parent;

constexpr void __set_parent(::System::Linq::OrderedEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> value) ;

constexpr ::System::Linq::OrderedEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> __get_parent() const;

 ::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t> __declspec(property(get=__get_keySelector, put=__set_keySelector))  keySelector;

constexpr void __set_keySelector(::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t> value) ;

constexpr ::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t> __get_keySelector() const;

 ::System::Collections::Generic::IComparer_1<int32_t> __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<int32_t> value) ;

constexpr ::System::Collections::Generic::IComparer_1<int32_t> __get_comparer() const;

 bool __declspec(property(get=__get_descending, put=__set_descending))  descending;

constexpr void __set_descending(bool value) ;

constexpr bool __get_descending() const;


// Methods

// Ctor Parameters [CppParam { name: "source", ty: "::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>", modifiers: "", def_value: None }, CppParam { name: "keySelector", ty: "::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "::System::Collections::Generic::IComparer_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }]
explicit OrderedEnumerable_2(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> source, ::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t> keySelector, ::System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> source, ::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t> keySelector, ::System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending) ;

/// @brief Method GetEnumerableSorter addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> GetEnumerableSorter(::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> next) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::OrderedEnumerable`2
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14572)), TypeDefinitionIndex(TypeDefinitionIndex(14573)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14572), inst: 1596 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14573), inst: 2213 })
// CS Name: System.Linq.OrderedEnumerable`2
class CORDL_TYPE OrderedEnumerable_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t> : public ::System::Linq::OrderedEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~OrderedEnumerable_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: " const&", def_value: None }]
constexpr OrderedEnumerable_2(OrderedEnumerable_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: "&&", def_value: None }]
constexpr OrderedEnumerable_2(OrderedEnumerable_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OrderedEnumerable_2(void* ptr) noexcept : ::System::Linq::OrderedEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>(ptr) {
}


  constexpr OrderedEnumerable_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OrderedEnumerable_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OrderedEnumerable_2& operator=(OrderedEnumerable_2&& o) noexcept = default;
  constexpr OrderedEnumerable_2& operator=(OrderedEnumerable_2 const& o) noexcept = default;
                


// Fields

 ::System::Linq::OrderedEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> __declspec(property(get=__get_parent, put=__set_parent))  parent;

constexpr void __set_parent(::System::Linq::OrderedEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> value) ;

constexpr ::System::Linq::OrderedEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> __get_parent() const;

 ::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t> __declspec(property(get=__get_keySelector, put=__set_keySelector))  keySelector;

constexpr void __set_keySelector(::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t> value) ;

constexpr ::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t> __get_keySelector() const;

 ::System::Collections::Generic::IComparer_1<uint32_t> __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<uint32_t> value) ;

constexpr ::System::Collections::Generic::IComparer_1<uint32_t> __get_comparer() const;

 bool __declspec(property(get=__get_descending, put=__set_descending))  descending;

constexpr void __set_descending(bool value) ;

constexpr bool __get_descending() const;


// Methods

// Ctor Parameters [CppParam { name: "source", ty: "::System::Collections::Generic::IEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>", modifiers: "", def_value: None }, CppParam { name: "keySelector", ty: "::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "::System::Collections::Generic::IComparer_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }]
explicit OrderedEnumerable_2(::System::Collections::Generic::IEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> source, ::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t> keySelector, ::System::Collections::Generic::IComparer_1<uint32_t> comparer, bool descending) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> source, ::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t> keySelector, ::System::Collections::Generic::IComparer_1<uint32_t> comparer, bool descending) ;

/// @brief Method GetEnumerableSorter addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> GetEnumerableSorter(::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> next) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::OrderedEnumerable`2
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14573)), TypeDefinitionIndex(TypeDefinitionIndex(14572)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14572), inst: 1596 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14573), inst: 2345 })
// CS Name: System.Linq.OrderedEnumerable`2
class CORDL_TYPE OrderedEnumerable_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t> : public ::System::Linq::OrderedEnumerable_1<::Zenject::____Zenject__DisposableManager__DisposableInfo> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~OrderedEnumerable_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: " const&", def_value: None }]
constexpr OrderedEnumerable_2(OrderedEnumerable_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: "&&", def_value: None }]
constexpr OrderedEnumerable_2(OrderedEnumerable_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OrderedEnumerable_2(void* ptr) noexcept : ::System::Linq::OrderedEnumerable_1<::Zenject::____Zenject__DisposableManager__DisposableInfo>(ptr) {
}


  constexpr OrderedEnumerable_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OrderedEnumerable_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OrderedEnumerable_2& operator=(OrderedEnumerable_2&& o) noexcept = default;
  constexpr OrderedEnumerable_2& operator=(OrderedEnumerable_2 const& o) noexcept = default;
                


// Fields

 ::System::Linq::OrderedEnumerable_1<::Zenject::____Zenject__DisposableManager__DisposableInfo> __declspec(property(get=__get_parent, put=__set_parent))  parent;

constexpr void __set_parent(::System::Linq::OrderedEnumerable_1<::Zenject::____Zenject__DisposableManager__DisposableInfo> value) ;

constexpr ::System::Linq::OrderedEnumerable_1<::Zenject::____Zenject__DisposableManager__DisposableInfo> __get_parent() const;

 ::System::Func_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t> __declspec(property(get=__get_keySelector, put=__set_keySelector))  keySelector;

constexpr void __set_keySelector(::System::Func_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t> value) ;

constexpr ::System::Func_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t> __get_keySelector() const;

 ::System::Collections::Generic::IComparer_1<int32_t> __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<int32_t> value) ;

constexpr ::System::Collections::Generic::IComparer_1<int32_t> __get_comparer() const;

 bool __declspec(property(get=__get_descending, put=__set_descending))  descending;

constexpr void __set_descending(bool value) ;

constexpr bool __get_descending() const;


// Methods

// Ctor Parameters [CppParam { name: "source", ty: "::System::Collections::Generic::IEnumerable_1<::Zenject::____Zenject__DisposableManager__DisposableInfo>", modifiers: "", def_value: None }, CppParam { name: "keySelector", ty: "::System::Func_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "::System::Collections::Generic::IComparer_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }]
explicit OrderedEnumerable_2(::System::Collections::Generic::IEnumerable_1<::Zenject::____Zenject__DisposableManager__DisposableInfo> source, ::System::Func_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t> keySelector, ::System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<::Zenject::____Zenject__DisposableManager__DisposableInfo> source, ::System::Func_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t> keySelector, ::System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending) ;

/// @brief Method GetEnumerableSorter addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Linq::EnumerableSorter_1<::Zenject::____Zenject__DisposableManager__DisposableInfo> GetEnumerableSorter(::System::Linq::EnumerableSorter_1<::Zenject::____Zenject__DisposableManager__DisposableInfo> next) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::OrderedEnumerable`2
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14572), inst: 1596 }), TypeDefinitionIndex(TypeDefinitionIndex(14572)), TypeDefinitionIndex(TypeDefinitionIndex(14573))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14573), inst: 2363 })
// CS Name: System.Linq.OrderedEnumerable`2
class CORDL_TYPE OrderedEnumerable_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t> : public ::System::Linq::OrderedEnumerable_1<::Zenject::____Zenject__PoolableManager__PoolableInfo> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~OrderedEnumerable_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: " const&", def_value: None }]
constexpr OrderedEnumerable_2(OrderedEnumerable_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: "&&", def_value: None }]
constexpr OrderedEnumerable_2(OrderedEnumerable_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OrderedEnumerable_2(void* ptr) noexcept : ::System::Linq::OrderedEnumerable_1<::Zenject::____Zenject__PoolableManager__PoolableInfo>(ptr) {
}


  constexpr OrderedEnumerable_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OrderedEnumerable_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OrderedEnumerable_2& operator=(OrderedEnumerable_2&& o) noexcept = default;
  constexpr OrderedEnumerable_2& operator=(OrderedEnumerable_2 const& o) noexcept = default;
                


// Fields

 ::System::Linq::OrderedEnumerable_1<::Zenject::____Zenject__PoolableManager__PoolableInfo> __declspec(property(get=__get_parent, put=__set_parent))  parent;

constexpr void __set_parent(::System::Linq::OrderedEnumerable_1<::Zenject::____Zenject__PoolableManager__PoolableInfo> value) ;

constexpr ::System::Linq::OrderedEnumerable_1<::Zenject::____Zenject__PoolableManager__PoolableInfo> __get_parent() const;

 ::System::Func_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t> __declspec(property(get=__get_keySelector, put=__set_keySelector))  keySelector;

constexpr void __set_keySelector(::System::Func_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t> value) ;

constexpr ::System::Func_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t> __get_keySelector() const;

 ::System::Collections::Generic::IComparer_1<int32_t> __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<int32_t> value) ;

constexpr ::System::Collections::Generic::IComparer_1<int32_t> __get_comparer() const;

 bool __declspec(property(get=__get_descending, put=__set_descending))  descending;

constexpr void __set_descending(bool value) ;

constexpr bool __get_descending() const;


// Methods

// Ctor Parameters [CppParam { name: "source", ty: "::System::Collections::Generic::IEnumerable_1<::Zenject::____Zenject__PoolableManager__PoolableInfo>", modifiers: "", def_value: None }, CppParam { name: "keySelector", ty: "::System::Func_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "::System::Collections::Generic::IComparer_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }]
explicit OrderedEnumerable_2(::System::Collections::Generic::IEnumerable_1<::Zenject::____Zenject__PoolableManager__PoolableInfo> source, ::System::Func_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t> keySelector, ::System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<::Zenject::____Zenject__PoolableManager__PoolableInfo> source, ::System::Func_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t> keySelector, ::System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending) ;

/// @brief Method GetEnumerableSorter addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Linq::EnumerableSorter_1<::Zenject::____Zenject__PoolableManager__PoolableInfo> GetEnumerableSorter(::System::Linq::EnumerableSorter_1<::Zenject::____Zenject__PoolableManager__PoolableInfo> next) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::OrderedEnumerable`2
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14573)), TypeDefinitionIndex(TypeDefinitionIndex(14572)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14572), inst: 1596 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14573), inst: 7119 })
// CS Name: System.Linq.OrderedEnumerable`2
class CORDL_TYPE OrderedEnumerable_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t> : public ::System::Linq::OrderedEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~OrderedEnumerable_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: " const&", def_value: None }]
constexpr OrderedEnumerable_2(OrderedEnumerable_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: "&&", def_value: None }]
constexpr OrderedEnumerable_2(OrderedEnumerable_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OrderedEnumerable_2(void* ptr) noexcept : ::System::Linq::OrderedEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>(ptr) {
}


  constexpr OrderedEnumerable_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OrderedEnumerable_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OrderedEnumerable_2& operator=(OrderedEnumerable_2&& o) noexcept = default;
  constexpr OrderedEnumerable_2& operator=(OrderedEnumerable_2 const& o) noexcept = default;
                


// Fields

 ::System::Linq::OrderedEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get_parent, put=__set_parent))  parent;

constexpr void __set_parent(::System::Linq::OrderedEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> value) ;

constexpr ::System::Linq::OrderedEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> __get_parent() const;

 ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t> __declspec(property(get=__get_keySelector, put=__set_keySelector))  keySelector;

constexpr void __set_keySelector(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t> value) ;

constexpr ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t> __get_keySelector() const;

 ::System::Collections::Generic::IComparer_1<int32_t> __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<int32_t> value) ;

constexpr ::System::Collections::Generic::IComparer_1<int32_t> __get_comparer() const;

 bool __declspec(property(get=__get_descending, put=__set_descending))  descending;

constexpr void __set_descending(bool value) ;

constexpr bool __get_descending() const;


// Methods

// Ctor Parameters [CppParam { name: "source", ty: "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>", modifiers: "", def_value: None }, CppParam { name: "keySelector", ty: "::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "::System::Collections::Generic::IComparer_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }]
explicit OrderedEnumerable_2(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> source, ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t> keySelector, ::System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> source, ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t> keySelector, ::System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending) ;

/// @brief Method GetEnumerableSorter addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Linq::EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> GetEnumerableSorter(::System::Linq::EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> next) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::OrderedEnumerable_2, "System.Linq", "OrderedEnumerable`2");
