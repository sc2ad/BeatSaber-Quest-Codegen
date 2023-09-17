#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Runtime::CompilerServices {
struct Ephemeron;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
template<typename TKey,typename TValue>
class ConditionalWeakTable_2;
}
namespace System::Runtime::CompilerServices {
template<typename TKey,typename TValue>
class ____System__Runtime__CompilerServices__ConditionalWeakTable_2__CreateValueCallback;
}
namespace System::Runtime::CompilerServices {
template<typename TKey,typename TValue>
class ____System__Runtime__CompilerServices__ConditionalWeakTable_2__Enumerator;
}
namespace System::Runtime::CompilerServices {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
class ConditionalWeakTable_2<TKey,TValue>;
}
namespace System::Runtime::CompilerServices {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
class ____System__Runtime__CompilerServices__ConditionalWeakTable_2__CreateValueCallback<TKey,TValue>;
}
namespace System::Runtime::CompilerServices {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
class ____System__Runtime__CompilerServices__ConditionalWeakTable_2__Enumerator<TKey,TValue>;
}
// Type: ::CreateValueCallback
// Type: ::Enumerator
// Type: System.Runtime.CompilerServices::ConditionalWeakTable`2
// Type: ::CreateValueCallback
namespace System::Runtime::CompilerServices {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3412)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3412), inst: 80 })
// CS Name: System.Runtime.CompilerServices.ConditionalWeakTable`2::CreateValueCallback
class CORDL_TYPE ____System__Runtime__CompilerServices__ConditionalWeakTable_2__CreateValueCallback<TKey,TValue> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____System__Runtime__CompilerServices__ConditionalWeakTable_2__CreateValueCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Runtime__CompilerServices__ConditionalWeakTable_2__CreateValueCallback", modifiers: " const&", def_value: None }]
constexpr ____System__Runtime__CompilerServices__ConditionalWeakTable_2__CreateValueCallback(____System__Runtime__CompilerServices__ConditionalWeakTable_2__CreateValueCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Runtime__CompilerServices__ConditionalWeakTable_2__CreateValueCallback", modifiers: "&&", def_value: None }]
constexpr ____System__Runtime__CompilerServices__ConditionalWeakTable_2__CreateValueCallback(____System__Runtime__CompilerServices__ConditionalWeakTable_2__CreateValueCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Runtime__CompilerServices__ConditionalWeakTable_2__CreateValueCallback(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____System__Runtime__CompilerServices__ConditionalWeakTable_2__CreateValueCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Runtime__CompilerServices__ConditionalWeakTable_2__CreateValueCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Runtime__CompilerServices__ConditionalWeakTable_2__CreateValueCallback& operator=(____System__Runtime__CompilerServices__ConditionalWeakTable_2__CreateValueCallback&& o) noexcept = default;
  constexpr ____System__Runtime__CompilerServices__ConditionalWeakTable_2__CreateValueCallback& operator=(____System__Runtime__CompilerServices__ConditionalWeakTable_2__CreateValueCallback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____System__Runtime__CompilerServices__ConditionalWeakTable_2__CreateValueCallback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 TValue Invoke(TKey key) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: ::Enumerator
namespace System::Runtime::CompilerServices {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3413))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3413), inst: 80 })
// CS Name: System.Runtime.CompilerServices.ConditionalWeakTable`2::Enumerator
class CORDL_TYPE ____System__Runtime__CompilerServices__ConditionalWeakTable_2__Enumerator<TKey,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~____System__Runtime__CompilerServices__ConditionalWeakTable_2__Enumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Runtime__CompilerServices__ConditionalWeakTable_2__Enumerator", modifiers: " const&", def_value: None }]
constexpr ____System__Runtime__CompilerServices__ConditionalWeakTable_2__Enumerator(____System__Runtime__CompilerServices__ConditionalWeakTable_2__Enumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Runtime__CompilerServices__ConditionalWeakTable_2__Enumerator", modifiers: "&&", def_value: None }]
constexpr ____System__Runtime__CompilerServices__ConditionalWeakTable_2__Enumerator(____System__Runtime__CompilerServices__ConditionalWeakTable_2__Enumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Runtime__CompilerServices__ConditionalWeakTable_2__Enumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Runtime__CompilerServices__ConditionalWeakTable_2__Enumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Runtime__CompilerServices__ConditionalWeakTable_2__Enumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Runtime__CompilerServices__ConditionalWeakTable_2__Enumerator& operator=(____System__Runtime__CompilerServices__ConditionalWeakTable_2__Enumerator&& o) noexcept = default;
  constexpr ____System__Runtime__CompilerServices__ConditionalWeakTable_2__Enumerator& operator=(____System__Runtime__CompilerServices__ConditionalWeakTable_2__Enumerator const& o) noexcept = default;
                


// Fields

 ::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue> __declspec(property(get=__get__table, put=__set__table))  _table;

constexpr void __set__table(::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue> value) ;

constexpr ::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue> __get__table() const;

 int32_t __declspec(property(get=__get__currentIndex, put=__set__currentIndex))  _currentIndex;

constexpr void __set__currentIndex(int32_t value) ;

constexpr int32_t __get__currentIndex() const;

 ::System::Collections::Generic::KeyValuePair_2<TKey,TValue> __declspec(property(get=__get__current, put=__set__current))  _current;

constexpr void __set__current(::System::Collections::Generic::KeyValuePair_2<TKey,TValue> value) ;

constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,TValue> __get__current() const;


// Properties

 ::System::Collections::Generic::KeyValuePair_2<TKey,TValue> __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "table", ty: "::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>", modifiers: "", def_value: None }]
explicit ____System__Runtime__CompilerServices__ConditionalWeakTable_2__Enumerator(::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue> table) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue> table) ;

/// @brief Method Finalize addr 0x0 size 0xffffffffffffffff virtual true final false
 void Finalize() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::KeyValuePair_2<TKey,TValue> get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ConditionalWeakTable`2
namespace System::Runtime::CompilerServices {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3414))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3414), inst: 80 })
// CS Name: System.Runtime.CompilerServices.ConditionalWeakTable`2
class CORDL_TYPE ConditionalWeakTable_2<TKey,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Enumerator = ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConditionalWeakTable_2__Enumerator<TKey, TValue>;

using CreateValueCallback = ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConditionalWeakTable_2__CreateValueCallback<TKey, TValue>;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ConditionalWeakTable_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConditionalWeakTable_2", modifiers: " const&", def_value: None }]
constexpr ConditionalWeakTable_2(ConditionalWeakTable_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConditionalWeakTable_2", modifiers: "&&", def_value: None }]
constexpr ConditionalWeakTable_2(ConditionalWeakTable_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConditionalWeakTable_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ConditionalWeakTable_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConditionalWeakTable_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConditionalWeakTable_2& operator=(ConditionalWeakTable_2&& o) noexcept = default;
  constexpr ConditionalWeakTable_2& operator=(ConditionalWeakTable_2 const& o) noexcept = default;
                


// Fields

/// @brief Field INITIAL_SIZE offset 0
static constexpr int32_t  INITIAL_SIZE{13};

/// @brief Field LOAD_FACTOR offset 0
static constexpr float_t  LOAD_FACTOR{0.7};

/// @brief Field COMPACT_FACTOR offset 0
static constexpr float_t  COMPACT_FACTOR{0.5};

/// @brief Field EXPAND_FACTOR offset 0
static constexpr float_t  EXPAND_FACTOR{1.1};

 ::ArrayW<::System::Runtime::CompilerServices::Ephemeron> __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(::ArrayW<::System::Runtime::CompilerServices::Ephemeron> value) ;

constexpr ::ArrayW<::System::Runtime::CompilerServices::Ephemeron> __get_data() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__lock, put=__set__lock))  _lock;

constexpr void __set__lock(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__lock() const;

 int32_t __declspec(property(get=__get_size, put=__set_size))  size;

constexpr void __set_size(int32_t value) ;

constexpr int32_t __get_size() const;


// Methods

// Ctor Parameters []
explicit ConditionalWeakTable_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method Finalize addr 0x0 size 0xffffffffffffffff virtual true final false
 void Finalize() ;

/// @brief Method RehashWithoutResize addr 0x0 size 0xffffffffffffffff virtual false final false
 void RehashWithoutResize() ;

/// @brief Method RecomputeSize addr 0x0 size 0xffffffffffffffff virtual false final false
 void RecomputeSize() ;

/// @brief Method Rehash addr 0x0 size 0xffffffffffffffff virtual false final false
 void Rehash() ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(TKey key, TValue value) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Remove(TKey key) ;

/// @brief Method TryGetValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryGetValue(TKey key, ByRef<TValue> value) ;

/// @brief Method GetValue addr 0x0 size 0xffffffffffffffff virtual false final false
 TValue GetValue(TKey key, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConditionalWeakTable_2__CreateValueCallback<TKey,TValue> createValueCallback) ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>> System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey,TValue___GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Runtime::CompilerServices::ConditionalWeakTable_2, "System.Runtime.CompilerServices", "ConditionalWeakTable`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConditionalWeakTable_2__CreateValueCallback, "System.Runtime.CompilerServices", "ConditionalWeakTable`2/CreateValueCallback");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConditionalWeakTable_2__Enumerator, "System.Runtime.CompilerServices", "ConditionalWeakTable`2/Enumerator");
