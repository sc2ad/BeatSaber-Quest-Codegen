#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Linq {
template<typename TElement>
class IOrderedEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System::Collections {
class IEnumerable;
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
namespace System {
class IDisposable;
}
namespace System::Linq {
template<typename TElement>
struct Buffer_1;
}
// Forward declare root types
namespace System::Linq {
template<typename TElement>
class OrderedEnumerable_1;
}
namespace System::Linq {
template<typename TElement>
class ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1;
}
namespace System::Linq {
template<::cordl_internals::il2cpp_reference_type TElement>
class OrderedEnumerable_1<TElement>;
}
namespace System::Linq {
template<>
class OrderedEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>;
}
namespace System::Linq {
template<>
class OrderedEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>;
}
namespace System::Linq {
template<>
class OrderedEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>;
}
namespace System::Linq {
template<>
class OrderedEnumerable_1<::Zenject::____Zenject__DisposableManager__DisposableInfo>;
}
namespace System::Linq {
template<>
class OrderedEnumerable_1<::Zenject::____Zenject__PoolableManager__PoolableInfo>;
}
namespace System::Linq {
template<>
class OrderedEnumerable_1<float_t>;
}
namespace System::Linq {
template<>
class OrderedEnumerable_1<int32_t>;
}
namespace System::Linq {
template<::cordl_internals::il2cpp_reference_type TElement>
class ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1<TElement>;
}
namespace System::Linq {
template<>
class ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>;
}
namespace System::Linq {
template<>
class ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>;
}
namespace System::Linq {
template<>
class ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>;
}
namespace System::Linq {
template<>
class ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1<::Zenject::____Zenject__DisposableManager__DisposableInfo>;
}
namespace System::Linq {
template<>
class ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1<::Zenject::____Zenject__PoolableManager__PoolableInfo>;
}
namespace System::Linq {
template<>
class ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1<float_t>;
}
namespace System::Linq {
template<>
class ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1<int32_t>;
}
// Type: ::<GetEnumerator>d__1
// Type: System.Linq::OrderedEnumerable`1
// Type: ::<GetEnumerator>d__1
namespace System::Linq {
// cpp template
template<::cordl_internals::il2cpp_reference_type TElement>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14571))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14571), inst: 2 })
// CS Name: System.Linq.OrderedEnumerable`1::<GetEnumerator>d__1
class CORDL_TYPE ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1<TElement> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<TElement>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<TElement>() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1", modifiers: " const&", def_value: None }]
constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1(____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1", modifiers: "&&", def_value: None }]
constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1(____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1& operator=(____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1&& o) noexcept = default;
  constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1& operator=(____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 TElement __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(TElement value) ;

constexpr TElement __get___2__current() const;

 ::System::Linq::OrderedEnumerable_1<TElement> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::System::Linq::OrderedEnumerable_1<TElement> value) ;

constexpr ::System::Linq::OrderedEnumerable_1<TElement> __get___4__this() const;

 ::System::Linq::Buffer_1<TElement> __declspec(property(get=__get__buffer_5__2, put=__set__buffer_5__2))  _buffer_5__2;

constexpr void __set__buffer_5__2(::System::Linq::Buffer_1<TElement> value) ;

constexpr ::System::Linq::Buffer_1<TElement> __get__buffer_5__2() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__map_5__3, put=__set__map_5__3))  _map_5__3;

constexpr void __set__map_5__3(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__map_5__3() const;

 int32_t __declspec(property(get=__get__i_5__4, put=__set__i_5__4))  _i_5__4;

constexpr void __set__i_5__4(int32_t value) ;

constexpr int32_t __get__i_5__4() const;


// Properties

 TElement __declspec(property(get=System_Collections_Generic_IEnumerator_TElement__get_Current))  System_Collections_Generic_IEnumerator_TElement__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1(int32_t __1__state) ;

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
} // namespace end def System::Linq
// Type: ::<GetEnumerator>d__1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14571))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14571), inst: 92 })
// CS Name: System.Linq.OrderedEnumerable`1::<GetEnumerator>d__1
class CORDL_TYPE ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1<int32_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<int32_t>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<int32_t>() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1", modifiers: " const&", def_value: None }]
constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1(____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1", modifiers: "&&", def_value: None }]
constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1(____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1& operator=(____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1&& o) noexcept = default;
  constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1& operator=(____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 int32_t __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(int32_t value) ;

constexpr int32_t __get___2__current() const;

 ::System::Linq::OrderedEnumerable_1<int32_t> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::System::Linq::OrderedEnumerable_1<int32_t> value) ;

constexpr ::System::Linq::OrderedEnumerable_1<int32_t> __get___4__this() const;

 ::System::Linq::Buffer_1<int32_t> __declspec(property(get=__get__buffer_5__2, put=__set__buffer_5__2))  _buffer_5__2;

constexpr void __set__buffer_5__2(::System::Linq::Buffer_1<int32_t> value) ;

constexpr ::System::Linq::Buffer_1<int32_t> __get__buffer_5__2() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__map_5__3, put=__set__map_5__3))  _map_5__3;

constexpr void __set__map_5__3(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__map_5__3() const;

 int32_t __declspec(property(get=__get__i_5__4, put=__set__i_5__4))  _i_5__4;

constexpr void __set__i_5__4(int32_t value) ;

constexpr int32_t __get__i_5__4() const;


// Properties

 int32_t __declspec(property(get=System_Collections_Generic_IEnumerator_TElement__get_Current))  System_Collections_Generic_IEnumerator_TElement__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1(int32_t __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<TElement>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Collections_Generic_IEnumerator_TElement__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: ::<GetEnumerator>d__1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14571))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14571), inst: 289 })
// CS Name: System.Linq.OrderedEnumerable`1::<GetEnumerator>d__1
class CORDL_TYPE ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1", modifiers: " const&", def_value: None }]
constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1(____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1", modifiers: "&&", def_value: None }]
constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1(____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1& operator=(____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1&& o) noexcept = default;
  constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1& operator=(____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent value) ;

constexpr ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent __get___2__current() const;

 ::System::Linq::OrderedEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::System::Linq::OrderedEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> value) ;

constexpr ::System::Linq::OrderedEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> __get___4__this() const;

 ::System::Linq::Buffer_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> __declspec(property(get=__get__buffer_5__2, put=__set__buffer_5__2))  _buffer_5__2;

constexpr void __set__buffer_5__2(::System::Linq::Buffer_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> value) ;

constexpr ::System::Linq::Buffer_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> __get__buffer_5__2() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__map_5__3, put=__set__map_5__3))  _map_5__3;

constexpr void __set__map_5__3(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__map_5__3() const;

 int32_t __declspec(property(get=__get__i_5__4, put=__set__i_5__4))  _i_5__4;

constexpr void __set__i_5__4(int32_t value) ;

constexpr int32_t __get__i_5__4() const;


// Properties

 ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent __declspec(property(get=System_Collections_Generic_IEnumerator_TElement__get_Current))  System_Collections_Generic_IEnumerator_TElement__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1(int32_t __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<TElement>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent System_Collections_Generic_IEnumerator_TElement__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: ::<GetEnumerator>d__1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14571))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14571), inst: 374 })
// CS Name: System.Linq.OrderedEnumerable`1::<GetEnumerator>d__1
class CORDL_TYPE ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1<float_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<float_t>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<float_t>() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1", modifiers: " const&", def_value: None }]
constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1(____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1", modifiers: "&&", def_value: None }]
constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1(____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1& operator=(____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1&& o) noexcept = default;
  constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1& operator=(____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 float_t __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(float_t value) ;

constexpr float_t __get___2__current() const;

 ::System::Linq::OrderedEnumerable_1<float_t> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::System::Linq::OrderedEnumerable_1<float_t> value) ;

constexpr ::System::Linq::OrderedEnumerable_1<float_t> __get___4__this() const;

 ::System::Linq::Buffer_1<float_t> __declspec(property(get=__get__buffer_5__2, put=__set__buffer_5__2))  _buffer_5__2;

constexpr void __set__buffer_5__2(::System::Linq::Buffer_1<float_t> value) ;

constexpr ::System::Linq::Buffer_1<float_t> __get__buffer_5__2() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__map_5__3, put=__set__map_5__3))  _map_5__3;

constexpr void __set__map_5__3(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__map_5__3() const;

 int32_t __declspec(property(get=__get__i_5__4, put=__set__i_5__4))  _i_5__4;

constexpr void __set__i_5__4(int32_t value) ;

constexpr int32_t __get__i_5__4() const;


// Properties

 float_t __declspec(property(get=System_Collections_Generic_IEnumerator_TElement__get_Current))  System_Collections_Generic_IEnumerator_TElement__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1(int32_t __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<TElement>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 float_t System_Collections_Generic_IEnumerator_TElement__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: ::<GetEnumerator>d__1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14571))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14571), inst: 3180 })
// CS Name: System.Linq.OrderedEnumerable`1::<GetEnumerator>d__1
class CORDL_TYPE ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1", modifiers: " const&", def_value: None }]
constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1(____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1", modifiers: "&&", def_value: None }]
constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1(____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1& operator=(____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1&& o) noexcept = default;
  constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1& operator=(____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord value) ;

constexpr ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord __get___2__current() const;

 ::System::Linq::OrderedEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::System::Linq::OrderedEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> value) ;

constexpr ::System::Linq::OrderedEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> __get___4__this() const;

 ::System::Linq::Buffer_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> __declspec(property(get=__get__buffer_5__2, put=__set__buffer_5__2))  _buffer_5__2;

constexpr void __set__buffer_5__2(::System::Linq::Buffer_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> value) ;

constexpr ::System::Linq::Buffer_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> __get__buffer_5__2() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__map_5__3, put=__set__map_5__3))  _map_5__3;

constexpr void __set__map_5__3(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__map_5__3() const;

 int32_t __declspec(property(get=__get__i_5__4, put=__set__i_5__4))  _i_5__4;

constexpr void __set__i_5__4(int32_t value) ;

constexpr int32_t __get__i_5__4() const;


// Properties

 ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord __declspec(property(get=System_Collections_Generic_IEnumerator_TElement__get_Current))  System_Collections_Generic_IEnumerator_TElement__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1(int32_t __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<TElement>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord System_Collections_Generic_IEnumerator_TElement__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: ::<GetEnumerator>d__1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14571))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14571), inst: 4209 })
// CS Name: System.Linq.OrderedEnumerable`1::<GetEnumerator>d__1
class CORDL_TYPE ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1<::Zenject::____Zenject__DisposableManager__DisposableInfo> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::Zenject::____Zenject__DisposableManager__DisposableInfo>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Zenject::____Zenject__DisposableManager__DisposableInfo>() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1", modifiers: " const&", def_value: None }]
constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1(____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1", modifiers: "&&", def_value: None }]
constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1(____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1& operator=(____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1&& o) noexcept = default;
  constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1& operator=(____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::Zenject::____Zenject__DisposableManager__DisposableInfo __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::Zenject::____Zenject__DisposableManager__DisposableInfo value) ;

constexpr ::Zenject::____Zenject__DisposableManager__DisposableInfo __get___2__current() const;

 ::System::Linq::OrderedEnumerable_1<::Zenject::____Zenject__DisposableManager__DisposableInfo> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::System::Linq::OrderedEnumerable_1<::Zenject::____Zenject__DisposableManager__DisposableInfo> value) ;

constexpr ::System::Linq::OrderedEnumerable_1<::Zenject::____Zenject__DisposableManager__DisposableInfo> __get___4__this() const;

 ::System::Linq::Buffer_1<::Zenject::____Zenject__DisposableManager__DisposableInfo> __declspec(property(get=__get__buffer_5__2, put=__set__buffer_5__2))  _buffer_5__2;

constexpr void __set__buffer_5__2(::System::Linq::Buffer_1<::Zenject::____Zenject__DisposableManager__DisposableInfo> value) ;

constexpr ::System::Linq::Buffer_1<::Zenject::____Zenject__DisposableManager__DisposableInfo> __get__buffer_5__2() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__map_5__3, put=__set__map_5__3))  _map_5__3;

constexpr void __set__map_5__3(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__map_5__3() const;

 int32_t __declspec(property(get=__get__i_5__4, put=__set__i_5__4))  _i_5__4;

constexpr void __set__i_5__4(int32_t value) ;

constexpr int32_t __get__i_5__4() const;


// Properties

 ::Zenject::____Zenject__DisposableManager__DisposableInfo __declspec(property(get=System_Collections_Generic_IEnumerator_TElement__get_Current))  System_Collections_Generic_IEnumerator_TElement__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1(int32_t __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<TElement>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::Zenject::____Zenject__DisposableManager__DisposableInfo System_Collections_Generic_IEnumerator_TElement__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: ::<GetEnumerator>d__1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14571))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14571), inst: 5964 })
// CS Name: System.Linq.OrderedEnumerable`1::<GetEnumerator>d__1
class CORDL_TYPE ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1<::Zenject::____Zenject__PoolableManager__PoolableInfo> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::Zenject::____Zenject__PoolableManager__PoolableInfo>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Zenject::____Zenject__PoolableManager__PoolableInfo>() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1", modifiers: " const&", def_value: None }]
constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1(____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1", modifiers: "&&", def_value: None }]
constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1(____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1& operator=(____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1&& o) noexcept = default;
  constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1& operator=(____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::Zenject::____Zenject__PoolableManager__PoolableInfo __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::Zenject::____Zenject__PoolableManager__PoolableInfo value) ;

constexpr ::Zenject::____Zenject__PoolableManager__PoolableInfo __get___2__current() const;

 ::System::Linq::OrderedEnumerable_1<::Zenject::____Zenject__PoolableManager__PoolableInfo> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::System::Linq::OrderedEnumerable_1<::Zenject::____Zenject__PoolableManager__PoolableInfo> value) ;

constexpr ::System::Linq::OrderedEnumerable_1<::Zenject::____Zenject__PoolableManager__PoolableInfo> __get___4__this() const;

 ::System::Linq::Buffer_1<::Zenject::____Zenject__PoolableManager__PoolableInfo> __declspec(property(get=__get__buffer_5__2, put=__set__buffer_5__2))  _buffer_5__2;

constexpr void __set__buffer_5__2(::System::Linq::Buffer_1<::Zenject::____Zenject__PoolableManager__PoolableInfo> value) ;

constexpr ::System::Linq::Buffer_1<::Zenject::____Zenject__PoolableManager__PoolableInfo> __get__buffer_5__2() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__map_5__3, put=__set__map_5__3))  _map_5__3;

constexpr void __set__map_5__3(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__map_5__3() const;

 int32_t __declspec(property(get=__get__i_5__4, put=__set__i_5__4))  _i_5__4;

constexpr void __set__i_5__4(int32_t value) ;

constexpr int32_t __get__i_5__4() const;


// Properties

 ::Zenject::____Zenject__PoolableManager__PoolableInfo __declspec(property(get=System_Collections_Generic_IEnumerator_TElement__get_Current))  System_Collections_Generic_IEnumerator_TElement__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1(int32_t __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<TElement>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::Zenject::____Zenject__PoolableManager__PoolableInfo System_Collections_Generic_IEnumerator_TElement__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: ::<GetEnumerator>d__1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14571))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14571), inst: 6236 })
// CS Name: System.Linq.OrderedEnumerable`1::<GetEnumerator>d__1
class CORDL_TYPE ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1", modifiers: " const&", def_value: None }]
constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1(____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1", modifiers: "&&", def_value: None }]
constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1(____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1& operator=(____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1&& o) noexcept = default;
  constexpr ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1& operator=(____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType> __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType> value) ;

constexpr ::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType> __get___2__current() const;

 ::System::Linq::OrderedEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::System::Linq::OrderedEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> value) ;

constexpr ::System::Linq::OrderedEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> __get___4__this() const;

 ::System::Linq::Buffer_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get__buffer_5__2, put=__set__buffer_5__2))  _buffer_5__2;

constexpr void __set__buffer_5__2(::System::Linq::Buffer_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> value) ;

constexpr ::System::Linq::Buffer_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> __get__buffer_5__2() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__map_5__3, put=__set__map_5__3))  _map_5__3;

constexpr void __set__map_5__3(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__map_5__3() const;

 int32_t __declspec(property(get=__get__i_5__4, put=__set__i_5__4))  _i_5__4;

constexpr void __set__i_5__4(int32_t value) ;

constexpr int32_t __get__i_5__4() const;


// Properties

 ::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType> __declspec(property(get=System_Collections_Generic_IEnumerator_TElement__get_Current))  System_Collections_Generic_IEnumerator_TElement__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1(int32_t __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<TElement>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType> System_Collections_Generic_IEnumerator_TElement__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::OrderedEnumerable`1
namespace System::Linq {
// cpp template
template<::cordl_internals::il2cpp_reference_type TElement>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14572))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14572), inst: 2 })
// CS Name: System.Linq.OrderedEnumerable`1
class CORDL_TYPE OrderedEnumerable_1<TElement> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetEnumerator_d__1 = ::System::Linq::____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1<TElement>;

/// @brief Convert operator to ::System::Linq::IOrderedEnumerable_1<TElement>
constexpr operator  ::System::Linq::IOrderedEnumerable_1<TElement>() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<TElement>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<TElement>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OrderedEnumerable_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_1", modifiers: " const&", def_value: None }]
constexpr OrderedEnumerable_1(OrderedEnumerable_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_1", modifiers: "&&", def_value: None }]
constexpr OrderedEnumerable_1(OrderedEnumerable_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OrderedEnumerable_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OrderedEnumerable_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OrderedEnumerable_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OrderedEnumerable_1& operator=(OrderedEnumerable_1&& o) noexcept = default;
  constexpr OrderedEnumerable_1& operator=(OrderedEnumerable_1 const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::IEnumerable_1<TElement> __declspec(property(get=__get_source, put=__set_source))  source;

constexpr void __set_source(::System::Collections::Generic::IEnumerable_1<TElement> value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<TElement> __get_source() const;


// Methods

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<TElement> GetEnumerator() ;

/// @brief Method GetEnumerableSorter addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Linq::EnumerableSorter_1<TElement> GetEnumerableSorter(::System::Linq::EnumerableSorter_1<TElement> next) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename TKey>
 ::System::Linq::IOrderedEnumerable_1<TElement> System_Linq_IOrderedEnumerable_TElement__CreateOrderedEnumerable(::System::Func_2<TElement,TKey> keySelector, ::System::Collections::Generic::IComparer_1<TKey> comparer, bool descending) ;

// Ctor Parameters []
explicit OrderedEnumerable_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::OrderedEnumerable`1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14572))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14572), inst: 92 })
// CS Name: System.Linq.OrderedEnumerable`1
class CORDL_TYPE OrderedEnumerable_1<int32_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetEnumerator_d__1 = ::System::Linq::____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1<int32_t>;

/// @brief Convert operator to ::System::Linq::IOrderedEnumerable_1<int32_t>
constexpr operator  ::System::Linq::IOrderedEnumerable_1<int32_t>() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<int32_t>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<int32_t>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OrderedEnumerable_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_1", modifiers: " const&", def_value: None }]
constexpr OrderedEnumerable_1(OrderedEnumerable_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_1", modifiers: "&&", def_value: None }]
constexpr OrderedEnumerable_1(OrderedEnumerable_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OrderedEnumerable_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OrderedEnumerable_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OrderedEnumerable_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OrderedEnumerable_1& operator=(OrderedEnumerable_1&& o) noexcept = default;
  constexpr OrderedEnumerable_1& operator=(OrderedEnumerable_1 const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::IEnumerable_1<int32_t> __declspec(property(get=__get_source, put=__set_source))  source;

constexpr void __set_source(::System::Collections::Generic::IEnumerable_1<int32_t> value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<int32_t> __get_source() const;


// Methods

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<int32_t> GetEnumerator() ;

/// @brief Method GetEnumerableSorter addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Linq::EnumerableSorter_1<int32_t> GetEnumerableSorter(::System::Linq::EnumerableSorter_1<int32_t> next) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename TKey>
 ::System::Linq::IOrderedEnumerable_1<int32_t> System_Linq_IOrderedEnumerable_TElement__CreateOrderedEnumerable(::System::Func_2<int32_t,TKey> keySelector, ::System::Collections::Generic::IComparer_1<TKey> comparer, bool descending) ;

// Ctor Parameters []
explicit OrderedEnumerable_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::OrderedEnumerable`1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14572))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14572), inst: 289 })
// CS Name: System.Linq.OrderedEnumerable`1
class CORDL_TYPE OrderedEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetEnumerator_d__1 = ::System::Linq::____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>;

/// @brief Convert operator to ::System::Linq::IOrderedEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>
constexpr operator  ::System::Linq::IOrderedEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OrderedEnumerable_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_1", modifiers: " const&", def_value: None }]
constexpr OrderedEnumerable_1(OrderedEnumerable_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_1", modifiers: "&&", def_value: None }]
constexpr OrderedEnumerable_1(OrderedEnumerable_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OrderedEnumerable_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OrderedEnumerable_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OrderedEnumerable_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OrderedEnumerable_1& operator=(OrderedEnumerable_1&& o) noexcept = default;
  constexpr OrderedEnumerable_1& operator=(OrderedEnumerable_1 const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> __declspec(property(get=__get_source, put=__set_source))  source;

constexpr void __set_source(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> __get_source() const;


// Methods

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> GetEnumerator() ;

/// @brief Method GetEnumerableSorter addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> GetEnumerableSorter(::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> next) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename TKey>
 ::System::Linq::IOrderedEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> System_Linq_IOrderedEnumerable_TElement__CreateOrderedEnumerable(::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,TKey> keySelector, ::System::Collections::Generic::IComparer_1<TKey> comparer, bool descending) ;

// Ctor Parameters []
explicit OrderedEnumerable_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::OrderedEnumerable`1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14572))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14572), inst: 374 })
// CS Name: System.Linq.OrderedEnumerable`1
class CORDL_TYPE OrderedEnumerable_1<float_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetEnumerator_d__1 = ::System::Linq::____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1<float_t>;

/// @brief Convert operator to ::System::Linq::IOrderedEnumerable_1<float_t>
constexpr operator  ::System::Linq::IOrderedEnumerable_1<float_t>() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<float_t>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<float_t>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OrderedEnumerable_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_1", modifiers: " const&", def_value: None }]
constexpr OrderedEnumerable_1(OrderedEnumerable_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_1", modifiers: "&&", def_value: None }]
constexpr OrderedEnumerable_1(OrderedEnumerable_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OrderedEnumerable_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OrderedEnumerable_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OrderedEnumerable_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OrderedEnumerable_1& operator=(OrderedEnumerable_1&& o) noexcept = default;
  constexpr OrderedEnumerable_1& operator=(OrderedEnumerable_1 const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::IEnumerable_1<float_t> __declspec(property(get=__get_source, put=__set_source))  source;

constexpr void __set_source(::System::Collections::Generic::IEnumerable_1<float_t> value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<float_t> __get_source() const;


// Methods

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<float_t> GetEnumerator() ;

/// @brief Method GetEnumerableSorter addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Linq::EnumerableSorter_1<float_t> GetEnumerableSorter(::System::Linq::EnumerableSorter_1<float_t> next) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename TKey>
 ::System::Linq::IOrderedEnumerable_1<float_t> System_Linq_IOrderedEnumerable_TElement__CreateOrderedEnumerable(::System::Func_2<float_t,TKey> keySelector, ::System::Collections::Generic::IComparer_1<TKey> comparer, bool descending) ;

// Ctor Parameters []
explicit OrderedEnumerable_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::OrderedEnumerable`1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14572))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14572), inst: 3180 })
// CS Name: System.Linq.OrderedEnumerable`1
class CORDL_TYPE OrderedEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetEnumerator_d__1 = ::System::Linq::____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>;

/// @brief Convert operator to ::System::Linq::IOrderedEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>
constexpr operator  ::System::Linq::IOrderedEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OrderedEnumerable_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_1", modifiers: " const&", def_value: None }]
constexpr OrderedEnumerable_1(OrderedEnumerable_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_1", modifiers: "&&", def_value: None }]
constexpr OrderedEnumerable_1(OrderedEnumerable_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OrderedEnumerable_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OrderedEnumerable_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OrderedEnumerable_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OrderedEnumerable_1& operator=(OrderedEnumerable_1&& o) noexcept = default;
  constexpr OrderedEnumerable_1& operator=(OrderedEnumerable_1 const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> __declspec(property(get=__get_source, put=__set_source))  source;

constexpr void __set_source(::System::Collections::Generic::IEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> __get_source() const;


// Methods

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> GetEnumerator() ;

/// @brief Method GetEnumerableSorter addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> GetEnumerableSorter(::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> next) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename TKey>
 ::System::Linq::IOrderedEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> System_Linq_IOrderedEnumerable_TElement__CreateOrderedEnumerable(::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,TKey> keySelector, ::System::Collections::Generic::IComparer_1<TKey> comparer, bool descending) ;

// Ctor Parameters []
explicit OrderedEnumerable_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::OrderedEnumerable`1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14572))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14572), inst: 4209 })
// CS Name: System.Linq.OrderedEnumerable`1
class CORDL_TYPE OrderedEnumerable_1<::Zenject::____Zenject__DisposableManager__DisposableInfo> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetEnumerator_d__1 = ::System::Linq::____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1<::Zenject::____Zenject__DisposableManager__DisposableInfo>;

/// @brief Convert operator to ::System::Linq::IOrderedEnumerable_1<::Zenject::____Zenject__DisposableManager__DisposableInfo>
constexpr operator  ::System::Linq::IOrderedEnumerable_1<::Zenject::____Zenject__DisposableManager__DisposableInfo>() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::Zenject::____Zenject__DisposableManager__DisposableInfo>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Zenject::____Zenject__DisposableManager__DisposableInfo>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OrderedEnumerable_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_1", modifiers: " const&", def_value: None }]
constexpr OrderedEnumerable_1(OrderedEnumerable_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_1", modifiers: "&&", def_value: None }]
constexpr OrderedEnumerable_1(OrderedEnumerable_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OrderedEnumerable_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OrderedEnumerable_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OrderedEnumerable_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OrderedEnumerable_1& operator=(OrderedEnumerable_1&& o) noexcept = default;
  constexpr OrderedEnumerable_1& operator=(OrderedEnumerable_1 const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::IEnumerable_1<::Zenject::____Zenject__DisposableManager__DisposableInfo> __declspec(property(get=__get_source, put=__set_source))  source;

constexpr void __set_source(::System::Collections::Generic::IEnumerable_1<::Zenject::____Zenject__DisposableManager__DisposableInfo> value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<::Zenject::____Zenject__DisposableManager__DisposableInfo> __get_source() const;


// Methods

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::Zenject::____Zenject__DisposableManager__DisposableInfo> GetEnumerator() ;

/// @brief Method GetEnumerableSorter addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Linq::EnumerableSorter_1<::Zenject::____Zenject__DisposableManager__DisposableInfo> GetEnumerableSorter(::System::Linq::EnumerableSorter_1<::Zenject::____Zenject__DisposableManager__DisposableInfo> next) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename TKey>
 ::System::Linq::IOrderedEnumerable_1<::Zenject::____Zenject__DisposableManager__DisposableInfo> System_Linq_IOrderedEnumerable_TElement__CreateOrderedEnumerable(::System::Func_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,TKey> keySelector, ::System::Collections::Generic::IComparer_1<TKey> comparer, bool descending) ;

// Ctor Parameters []
explicit OrderedEnumerable_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::OrderedEnumerable`1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14572))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14572), inst: 5964 })
// CS Name: System.Linq.OrderedEnumerable`1
class CORDL_TYPE OrderedEnumerable_1<::Zenject::____Zenject__PoolableManager__PoolableInfo> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetEnumerator_d__1 = ::System::Linq::____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1<::Zenject::____Zenject__PoolableManager__PoolableInfo>;

/// @brief Convert operator to ::System::Linq::IOrderedEnumerable_1<::Zenject::____Zenject__PoolableManager__PoolableInfo>
constexpr operator  ::System::Linq::IOrderedEnumerable_1<::Zenject::____Zenject__PoolableManager__PoolableInfo>() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::Zenject::____Zenject__PoolableManager__PoolableInfo>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Zenject::____Zenject__PoolableManager__PoolableInfo>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OrderedEnumerable_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_1", modifiers: " const&", def_value: None }]
constexpr OrderedEnumerable_1(OrderedEnumerable_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_1", modifiers: "&&", def_value: None }]
constexpr OrderedEnumerable_1(OrderedEnumerable_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OrderedEnumerable_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OrderedEnumerable_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OrderedEnumerable_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OrderedEnumerable_1& operator=(OrderedEnumerable_1&& o) noexcept = default;
  constexpr OrderedEnumerable_1& operator=(OrderedEnumerable_1 const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::IEnumerable_1<::Zenject::____Zenject__PoolableManager__PoolableInfo> __declspec(property(get=__get_source, put=__set_source))  source;

constexpr void __set_source(::System::Collections::Generic::IEnumerable_1<::Zenject::____Zenject__PoolableManager__PoolableInfo> value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<::Zenject::____Zenject__PoolableManager__PoolableInfo> __get_source() const;


// Methods

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::Zenject::____Zenject__PoolableManager__PoolableInfo> GetEnumerator() ;

/// @brief Method GetEnumerableSorter addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Linq::EnumerableSorter_1<::Zenject::____Zenject__PoolableManager__PoolableInfo> GetEnumerableSorter(::System::Linq::EnumerableSorter_1<::Zenject::____Zenject__PoolableManager__PoolableInfo> next) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename TKey>
 ::System::Linq::IOrderedEnumerable_1<::Zenject::____Zenject__PoolableManager__PoolableInfo> System_Linq_IOrderedEnumerable_TElement__CreateOrderedEnumerable(::System::Func_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,TKey> keySelector, ::System::Collections::Generic::IComparer_1<TKey> comparer, bool descending) ;

// Ctor Parameters []
explicit OrderedEnumerable_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::OrderedEnumerable`1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14572))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14572), inst: 6236 })
// CS Name: System.Linq.OrderedEnumerable`1
class CORDL_TYPE OrderedEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetEnumerator_d__1 = ::System::Linq::____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>;

/// @brief Convert operator to ::System::Linq::IOrderedEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>
constexpr operator  ::System::Linq::IOrderedEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OrderedEnumerable_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_1", modifiers: " const&", def_value: None }]
constexpr OrderedEnumerable_1(OrderedEnumerable_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_1", modifiers: "&&", def_value: None }]
constexpr OrderedEnumerable_1(OrderedEnumerable_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OrderedEnumerable_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OrderedEnumerable_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OrderedEnumerable_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OrderedEnumerable_1& operator=(OrderedEnumerable_1&& o) noexcept = default;
  constexpr OrderedEnumerable_1& operator=(OrderedEnumerable_1 const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get_source, put=__set_source))  source;

constexpr void __set_source(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> __get_source() const;


// Methods

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> GetEnumerator() ;

/// @brief Method GetEnumerableSorter addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Linq::EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> GetEnumerableSorter(::System::Linq::EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> next) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename TKey>
 ::System::Linq::IOrderedEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> System_Linq_IOrderedEnumerable_TElement__CreateOrderedEnumerable(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,TKey> keySelector, ::System::Collections::Generic::IComparer_1<TKey> comparer, bool descending) ;

// Ctor Parameters []
explicit OrderedEnumerable_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::OrderedEnumerable_1, "System.Linq", "OrderedEnumerable`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::____System__Linq__OrderedEnumerable_1___GetEnumerator_d__1, "System.Linq", "OrderedEnumerable`1/<GetEnumerator>d__1");
