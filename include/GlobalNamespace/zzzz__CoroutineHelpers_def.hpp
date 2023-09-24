#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class ICoroutineStarter;
}
namespace UnityEngine {
class Coroutine;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class GlobalNamespace__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Forward declare root types
namespace GlobalNamespace {
class CoroutineHelpers;
}
namespace GlobalNamespace {
class GlobalNamespace__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0;
}
// Type: ::<ExecuteAfterDelayCoroutine>d__0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13783))
// CS Name: CoroutineHelpers::<ExecuteAfterDelayCoroutine>d__0
class CORDL_TYPE GlobalNamespace__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0(GlobalNamespace__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0(GlobalNamespace__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0& operator=(GlobalNamespace__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0&& o) noexcept = default;
  constexpr GlobalNamespace__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0& operator=(GlobalNamespace__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 float_t __declspec(property(get=__get_time, put=__set_time))  time;

constexpr void __set_time(float_t value) ;

constexpr float_t __get_time() const;

 System::Action __declspec(property(get=__get_action, put=__set_action))  action;

constexpr void __set_action(System::Action value) ;

constexpr System::Action __get_action() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::GlobalNamespace__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x1f76300 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x1f764a4 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x1f764a8 size 0xb8 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1f76560 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x1f76568 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x1f765a8 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CoroutineHelpers
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13784))
// CS Name: CoroutineHelpers
class CORDL_TYPE CoroutineHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _ExecuteAfterDelayCoroutine_d__0 = GlobalNamespace::GlobalNamespace__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CoroutineHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "CoroutineHelpers", modifiers: " const&", def_value: None }]
constexpr CoroutineHelpers(CoroutineHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CoroutineHelpers", modifiers: "&&", def_value: None }]
constexpr CoroutineHelpers(CoroutineHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CoroutineHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CoroutineHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CoroutineHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CoroutineHelpers& operator=(CoroutineHelpers&& o) noexcept = default;
  constexpr CoroutineHelpers& operator=(CoroutineHelpers const& o) noexcept = default;
                


// Methods

/// @brief Method ExecuteAfterDelayCoroutine addr 0x1f76288 size 0x78 virtual false final false
static System::Collections::IEnumerator ExecuteAfterDelayCoroutine(System::Action action, float_t time) ;

/// @brief Method StartSingleCoroutine addr 0x1f76328 size 0xc4 virtual false final false
static void StartSingleCoroutine(GlobalNamespace::ICoroutineStarter coroutineStarter, ByRef<UnityEngine::Coroutine> handle, System::Collections::IEnumerator routine) ;

/// @brief Method StopSingleCoroutine addr 0x1f763ec size 0xb8 virtual false final false
static void StopSingleCoroutine(GlobalNamespace::ICoroutineStarter coroutineStarter, ByRef<UnityEngine::Coroutine> handle) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::CoroutineHelpers);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CoroutineHelpers, "", "CoroutineHelpers");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0, "", "CoroutineHelpers/<ExecuteAfterDelayCoroutine>d__0");
