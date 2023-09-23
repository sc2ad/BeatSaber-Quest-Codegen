#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
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
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
class UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1;
}
namespace UnityEngine::InputSystem::Utilities {
class MiscHelpers;
}
namespace UnityEngine::InputSystem::Utilities {
template<::cordl_internals::il2cpp_reference_type TValue>
class UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1<TValue>;
}
// Type: ::<EveryNth>d__1`1
// Type: UnityEngine.InputSystem.Utilities::MiscHelpers
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6763))
// CS Name: UnityEngine.InputSystem.Utilities.MiscHelpers
class CORDL_TYPE MiscHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename TValue>
using _EveryNth_d__1_1 = UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1<TValue>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MiscHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "MiscHelpers", modifiers: " const&", def_value: None }]
constexpr MiscHelpers(MiscHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MiscHelpers", modifiers: "&&", def_value: None }]
constexpr MiscHelpers(MiscHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MiscHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MiscHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MiscHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MiscHelpers& operator=(MiscHelpers&& o) noexcept = default;
  constexpr MiscHelpers& operator=(MiscHelpers const& o) noexcept = default;
                


// Methods

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TKey,typename TValue>
static TValue GetValueOrDefault(System::Collections::Generic::Dictionary_2<TKey,TValue> dictionary, TKey key) ;

/// @brief Method EveryNth addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static System::Collections::Generic::IEnumerable_1<TValue> EveryNth(System::Collections::Generic::IEnumerable_1<TValue> enumerable, int32_t n, int32_t start) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static int32_t IndexOf(System::Collections::Generic::IEnumerable_1<TValue> enumerable, TValue value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::<EveryNth>d__1`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6762))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6762), inst: 2 })
// CS Name: UnityEngine.InputSystem.Utilities.MiscHelpers::<EveryNth>d__1`1
class CORDL_TYPE UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1<TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<TValue>
constexpr operator  System::Collections::Generic::IEnumerable_1<TValue>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<TValue>
constexpr operator  System::Collections::Generic::IEnumerator_1<TValue>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1(UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1(UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1& operator=(UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1& operator=(UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 TValue __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(TValue value) ;

constexpr TValue __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 System::Collections::Generic::IEnumerable_1<TValue> __declspec(property(get=__get_enumerable, put=__set_enumerable))  enumerable;

constexpr void __set_enumerable(System::Collections::Generic::IEnumerable_1<TValue> value) ;

constexpr System::Collections::Generic::IEnumerable_1<TValue> __get_enumerable() const;

 System::Collections::Generic::IEnumerable_1<TValue> __declspec(property(get=__get___3__enumerable, put=__set___3__enumerable))  __3__enumerable;

constexpr void __set___3__enumerable(System::Collections::Generic::IEnumerable_1<TValue> value) ;

constexpr System::Collections::Generic::IEnumerable_1<TValue> __get___3__enumerable() const;

 int32_t __declspec(property(get=__get_start, put=__set_start))  start;

constexpr void __set_start(int32_t value) ;

constexpr int32_t __get_start() const;

 int32_t __declspec(property(get=__get___3__start, put=__set___3__start))  __3__start;

constexpr void __set___3__start(int32_t value) ;

constexpr int32_t __get___3__start() const;

 int32_t __declspec(property(get=__get_n, put=__set_n))  n;

constexpr void __set_n(int32_t value) ;

constexpr int32_t __get_n() const;

 int32_t __declspec(property(get=__get___3__n, put=__set___3__n))  __3__n;

constexpr void __set___3__n(int32_t value) ;

constexpr int32_t __get___3__n() const;

 int32_t __declspec(property(get=__get__index_5__2, put=__set__index_5__2))  _index_5__2;

constexpr void __set__index_5__2(int32_t value) ;

constexpr int32_t __get__index_5__2() const;

 System::Collections::Generic::IEnumerator_1<TValue> __declspec(property(get=__get___7__wrap2, put=__set___7__wrap2))  __7__wrap2;

constexpr void __set___7__wrap2(System::Collections::Generic::IEnumerator_1<TValue> value) ;

constexpr System::Collections::Generic::IEnumerator_1<TValue> __get___7__wrap2() const;


// Properties

 TValue __declspec(property(get=System_Collections_Generic_IEnumerator_TValue__get_Current))  System_Collections_Generic_IEnumerator_TValue__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1(int32_t __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x0 size 0xffffffffffffffff virtual false final false
 void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<TValue>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 TValue System_Collections_Generic_IEnumerator_TValue__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<TValue>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<TValue> System_Collections_Generic_IEnumerable_TValue__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1, "UnityEngine.InputSystem.Utilities", "MiscHelpers/<EveryNth>d__1`1");
NEED_NO_BOX(UnityEngine::InputSystem::Utilities::MiscHelpers);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Utilities::MiscHelpers, "UnityEngine.InputSystem.Utilities", "MiscHelpers");
