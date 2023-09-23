#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class GlobalNamespace__BatchExtensions___Batch_d__0_1;
}
namespace GlobalNamespace {
class BatchExtensions;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class GlobalNamespace__BatchExtensions___Batch_d__0_1<T>;
}
// Type: ::<Batch>d__0`1
// Type: ::BatchExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12627))
// CS Name: BatchExtensions
class CORDL_TYPE BatchExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename T>
using _Batch_d__0_1 = GlobalNamespace::GlobalNamespace__BatchExtensions___Batch_d__0_1<T>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BatchExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "BatchExtensions", modifiers: " const&", def_value: None }]
constexpr BatchExtensions(BatchExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BatchExtensions", modifiers: "&&", def_value: None }]
constexpr BatchExtensions(BatchExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BatchExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BatchExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BatchExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BatchExtensions& operator=(BatchExtensions&& o) noexcept = default;
  constexpr BatchExtensions& operator=(BatchExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method Batch addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static System::Collections::Generic::IEnumerable_1<System::Collections::Generic::List_1<T>> Batch(System::Collections::Generic::IEnumerable_1<T> enumerable, int32_t batchSize) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<Batch>d__0`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12626))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12626), inst: 2 })
// CS Name: BatchExtensions::<Batch>d__0`1
class CORDL_TYPE GlobalNamespace__BatchExtensions___Batch_d__0_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<System::Collections::Generic::List_1<T>>
constexpr operator  System::Collections::Generic::IEnumerable_1<System::Collections::Generic::List_1<T>>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<System::Collections::Generic::List_1<T>>
constexpr operator  System::Collections::Generic::IEnumerator_1<System::Collections::Generic::List_1<T>>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~GlobalNamespace__BatchExtensions___Batch_d__0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BatchExtensions___Batch_d__0_1", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BatchExtensions___Batch_d__0_1(GlobalNamespace__BatchExtensions___Batch_d__0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BatchExtensions___Batch_d__0_1", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BatchExtensions___Batch_d__0_1(GlobalNamespace__BatchExtensions___Batch_d__0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BatchExtensions___Batch_d__0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BatchExtensions___Batch_d__0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BatchExtensions___Batch_d__0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BatchExtensions___Batch_d__0_1& operator=(GlobalNamespace__BatchExtensions___Batch_d__0_1&& o) noexcept = default;
  constexpr GlobalNamespace__BatchExtensions___Batch_d__0_1& operator=(GlobalNamespace__BatchExtensions___Batch_d__0_1 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Collections::Generic::List_1<T> __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(System::Collections::Generic::List_1<T> value) ;

constexpr System::Collections::Generic::List_1<T> __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 System::Collections::Generic::IEnumerable_1<T> __declspec(property(get=__get_enumerable, put=__set_enumerable))  enumerable;

constexpr void __set_enumerable(System::Collections::Generic::IEnumerable_1<T> value) ;

constexpr System::Collections::Generic::IEnumerable_1<T> __get_enumerable() const;

 System::Collections::Generic::IEnumerable_1<T> __declspec(property(get=__get___3__enumerable, put=__set___3__enumerable))  __3__enumerable;

constexpr void __set___3__enumerable(System::Collections::Generic::IEnumerable_1<T> value) ;

constexpr System::Collections::Generic::IEnumerable_1<T> __get___3__enumerable() const;

 int32_t __declspec(property(get=__get_batchSize, put=__set_batchSize))  batchSize;

constexpr void __set_batchSize(int32_t value) ;

constexpr int32_t __get_batchSize() const;

 int32_t __declspec(property(get=__get___3__batchSize, put=__set___3__batchSize))  __3__batchSize;

constexpr void __set___3__batchSize(int32_t value) ;

constexpr int32_t __get___3__batchSize() const;

 System::Collections::Generic::IEnumerator_1<T> __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1))  __7__wrap1;

constexpr void __set___7__wrap1(System::Collections::Generic::IEnumerator_1<T> value) ;

constexpr System::Collections::Generic::IEnumerator_1<T> __get___7__wrap1() const;


// Properties

 System::Collections::Generic::List_1<T> __declspec(property(get=System_Collections_Generic_IEnumerator_System_Collections_Generic_List_T___get_Current))  System_Collections_Generic_IEnumerator_System_Collections_Generic_List_T___Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__BatchExtensions___Batch_d__0_1(int32_t __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x0 size 0xffffffffffffffff virtual false final false
 void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Collections.Generic.List<T>>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::List_1<T> System_Collections_Generic_IEnumerator_System_Collections_Generic_List_T___get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Collections.Generic.List<T>>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<System::Collections::Generic::List_1<T>> System_Collections_Generic_IEnumerable_System_Collections_Generic_List_T___GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::GlobalNamespace__BatchExtensions___Batch_d__0_1, "", "BatchExtensions/<Batch>d__0`1");
NEED_NO_BOX(GlobalNamespace::BatchExtensions);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BatchExtensions, "", "BatchExtensions");
