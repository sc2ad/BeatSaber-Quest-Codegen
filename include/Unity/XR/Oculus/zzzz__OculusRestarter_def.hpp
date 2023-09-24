#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class Coroutine;
}
namespace Unity::XR::Oculus {
class Unity__XR__Oculus__OculusRestarter___PauseAndRestartCoroutine_d__22;
}
namespace System {
class Action;
}
namespace System::Collections {
class IEnumerator;
}
namespace Unity::XR::Oculus {
class Unity__XR__Oculus__OculusRestarter___RestartCoroutine_d__23;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Forward declare root types
namespace Unity::XR::Oculus {
class OculusRestarter;
}
namespace Unity::XR::Oculus {
class Unity__XR__Oculus__OculusRestarter___PauseAndRestartCoroutine_d__22;
}
namespace Unity::XR::Oculus {
class Unity__XR__Oculus__OculusRestarter___RestartCoroutine_d__23;
}
// Type: ::<PauseAndRestartCoroutine>d__22
namespace Unity::XR::Oculus {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15232))
// CS Name: Unity.XR.Oculus.OculusRestarter::<PauseAndRestartCoroutine>d__22
class CORDL_TYPE Unity__XR__Oculus__OculusRestarter___PauseAndRestartCoroutine_d__22 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~Unity__XR__Oculus__OculusRestarter___PauseAndRestartCoroutine_d__22() = default;

// Ctor Parameters [CppParam { name: "", ty: "Unity__XR__Oculus__OculusRestarter___PauseAndRestartCoroutine_d__22", modifiers: " const&", def_value: None }]
constexpr Unity__XR__Oculus__OculusRestarter___PauseAndRestartCoroutine_d__22(Unity__XR__Oculus__OculusRestarter___PauseAndRestartCoroutine_d__22 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Unity__XR__Oculus__OculusRestarter___PauseAndRestartCoroutine_d__22", modifiers: "&&", def_value: None }]
constexpr Unity__XR__Oculus__OculusRestarter___PauseAndRestartCoroutine_d__22(Unity__XR__Oculus__OculusRestarter___PauseAndRestartCoroutine_d__22&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Unity__XR__Oculus__OculusRestarter___PauseAndRestartCoroutine_d__22(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Unity__XR__Oculus__OculusRestarter___PauseAndRestartCoroutine_d__22& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Unity__XR__Oculus__OculusRestarter___PauseAndRestartCoroutine_d__22& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Unity__XR__Oculus__OculusRestarter___PauseAndRestartCoroutine_d__22& operator=(Unity__XR__Oculus__OculusRestarter___PauseAndRestartCoroutine_d__22&& o) noexcept = default;
  constexpr Unity__XR__Oculus__OculusRestarter___PauseAndRestartCoroutine_d__22& operator=(Unity__XR__Oculus__OculusRestarter___PauseAndRestartCoroutine_d__22 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 float_t __declspec(property(get=__get_pauseTimeInSeconds, put=__set_pauseTimeInSeconds))  pauseTimeInSeconds;

constexpr void __set_pauseTimeInSeconds(float_t value) ;

constexpr float_t __get_pauseTimeInSeconds() const;

 Unity::XR::Oculus::OculusRestarter __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Unity::XR::Oculus::OculusRestarter value) ;

constexpr Unity::XR::Oculus::OculusRestarter __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static Unity::XR::Oculus::Unity__XR__Oculus__OculusRestarter___PauseAndRestartCoroutine_d__22 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2ae2898 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2ae296c size 0x1c virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2ae2988 size 0x254 virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x2ae2bdc size 0x40 virtual false final false
 void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2ae2c1c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2ae2c24 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2ae2c64 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::Oculus
// Type: ::<RestartCoroutine>d__23
namespace Unity::XR::Oculus {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15233))
// CS Name: Unity.XR.Oculus.OculusRestarter::<RestartCoroutine>d__23
class CORDL_TYPE Unity__XR__Oculus__OculusRestarter___RestartCoroutine_d__23 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~Unity__XR__Oculus__OculusRestarter___RestartCoroutine_d__23() = default;

// Ctor Parameters [CppParam { name: "", ty: "Unity__XR__Oculus__OculusRestarter___RestartCoroutine_d__23", modifiers: " const&", def_value: None }]
constexpr Unity__XR__Oculus__OculusRestarter___RestartCoroutine_d__23(Unity__XR__Oculus__OculusRestarter___RestartCoroutine_d__23 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Unity__XR__Oculus__OculusRestarter___RestartCoroutine_d__23", modifiers: "&&", def_value: None }]
constexpr Unity__XR__Oculus__OculusRestarter___RestartCoroutine_d__23(Unity__XR__Oculus__OculusRestarter___RestartCoroutine_d__23&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Unity__XR__Oculus__OculusRestarter___RestartCoroutine_d__23(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Unity__XR__Oculus__OculusRestarter___RestartCoroutine_d__23& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Unity__XR__Oculus__OculusRestarter___RestartCoroutine_d__23& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Unity__XR__Oculus__OculusRestarter___RestartCoroutine_d__23& operator=(Unity__XR__Oculus__OculusRestarter___RestartCoroutine_d__23&& o) noexcept = default;
  constexpr Unity__XR__Oculus__OculusRestarter___RestartCoroutine_d__23& operator=(Unity__XR__Oculus__OculusRestarter___RestartCoroutine_d__23 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 Unity::XR::Oculus::OculusRestarter __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Unity::XR::Oculus::OculusRestarter value) ;

constexpr Unity::XR::Oculus::OculusRestarter __get___4__this() const;

 bool __declspec(property(get=__get_shouldRestart, put=__set_shouldRestart))  shouldRestart;

constexpr void __set_shouldRestart(bool value) ;

constexpr bool __get_shouldRestart() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static Unity::XR::Oculus::Unity__XR__Oculus__OculusRestarter___RestartCoroutine_d__23 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2ae293c size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2ae2c6c size 0x2c virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2ae2c98 size 0x42c virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x2ae30c4 size 0x114 virtual false final false
 void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2ae31d8 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2ae31e0 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2ae3220 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::Oculus
// Type: Unity.XR.Oculus::OculusRestarter
namespace Unity::XR::Oculus {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15234))
// CS Name: Unity.XR.Oculus.OculusRestarter
class CORDL_TYPE OculusRestarter : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _RestartCoroutine_d__23 = Unity::XR::Oculus::Unity__XR__Oculus__OculusRestarter___RestartCoroutine_d__23;

using _PauseAndRestartCoroutine_d__22 = Unity::XR::Oculus::Unity__XR__Oculus__OculusRestarter___PauseAndRestartCoroutine_d__22;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~OculusRestarter() = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusRestarter", modifiers: " const&", def_value: None }]
constexpr OculusRestarter(OculusRestarter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusRestarter", modifiers: "&&", def_value: None }]
constexpr OculusRestarter(OculusRestarter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OculusRestarter(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OculusRestarter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OculusRestarter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OculusRestarter& operator=(OculusRestarter&& o) noexcept = default;
  constexpr OculusRestarter& operator=(OculusRestarter const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_onAfterRestart, put=__set_onAfterRestart))  onAfterRestart;

constexpr void __set_onAfterRestart(System::Action value) ;

constexpr System::Action __get_onAfterRestart() const;

 System::Action __declspec(property(get=__get_onAfterShutdown, put=__set_onAfterShutdown))  onAfterShutdown;

constexpr void __set_onAfterShutdown(System::Action value) ;

constexpr System::Action __get_onAfterShutdown() const;

 System::Action __declspec(property(get=__get_onQuit, put=__set_onQuit))  onQuit;

constexpr void __set_onQuit(System::Action value) ;

constexpr System::Action __get_onQuit() const;

 System::Action __declspec(property(get=__get_onAfterCoroutine, put=__set_onAfterCoroutine))  onAfterCoroutine;

constexpr void __set_onAfterCoroutine(System::Action value) ;

constexpr System::Action __get_onAfterCoroutine() const;

static ::StringW __declspec(property(get=__get_k_GameObjectName, put=__set_k_GameObjectName))  k_GameObjectName;

static void __set_k_GameObjectName(::StringW value) ;

static ::StringW __get_k_GameObjectName() ;

static Unity::XR::Oculus::OculusRestarter __declspec(property(get=__get_s_Instance, put=__set_s_Instance))  s_Instance;

static void __set_s_Instance(Unity::XR::Oculus::OculusRestarter value) ;

static Unity::XR::Oculus::OculusRestarter __get_s_Instance() ;

 UnityEngine::Coroutine __declspec(property(get=__get_m_Coroutine, put=__set_m_Coroutine))  m_Coroutine;

constexpr void __set_m_Coroutine(UnityEngine::Coroutine value) ;

constexpr UnityEngine::Coroutine __get_m_Coroutine() const;

 UnityEngine::Coroutine __declspec(property(get=__get_m_pauseAndRestartCoroutine, put=__set_m_pauseAndRestartCoroutine))  m_pauseAndRestartCoroutine;

constexpr void __set_m_pauseAndRestartCoroutine(UnityEngine::Coroutine value) ;

constexpr UnityEngine::Coroutine __get_m_pauseAndRestartCoroutine() const;

static int32_t __declspec(property(get=__get_m_pauseAndRestartAttempts, put=__set_m_pauseAndRestartAttempts))  m_pauseAndRestartAttempts;

static void __set_m_pauseAndRestartAttempts(int32_t value) ;

static int32_t __get_m_pauseAndRestartAttempts() ;

static float_t __declspec(property(get=__get__TimeBetweenRestartAttempts_k__BackingField, put=__set__TimeBetweenRestartAttempts_k__BackingField))  _TimeBetweenRestartAttempts_k__BackingField;

static void __set__TimeBetweenRestartAttempts_k__BackingField(float_t value) ;

static float_t __get__TimeBetweenRestartAttempts_k__BackingField() ;


// Properties

 bool __declspec(property(get=get_isRunning))  isRunning;

static float_t __declspec(property(get=get_TimeBetweenRestartAttempts, put=set_TimeBetweenRestartAttempts))  TimeBetweenRestartAttempts;

static int32_t __declspec(property(get=get_PauseAndRestartAttempts))  PauseAndRestartAttempts;

static Unity::XR::Oculus::OculusRestarter __declspec(property(get=get_Instance))  Instance;


// Methods

/// @brief Method ResetCallbacks addr 0x2ae23a0 size 0x68 virtual false final false
 void ResetCallbacks() ;

/// @brief Method get_isRunning addr 0x2ae2408 size 0x10 virtual false final false
 bool get_isRunning() ;

/// @brief Method get_TimeBetweenRestartAttempts addr 0x2ae2418 size 0x58 virtual false final false
static float_t get_TimeBetweenRestartAttempts() ;

/// @brief Method set_TimeBetweenRestartAttempts addr 0x2ae2470 size 0x64 virtual false final false
static void set_TimeBetweenRestartAttempts(float_t value) ;

/// @brief Method get_PauseAndRestartAttempts addr 0x2ae24d4 size 0x58 virtual false final false
static int32_t get_PauseAndRestartAttempts() ;

/// @brief Method get_Instance addr 0x2ae252c size 0x1d4 virtual false final false
static Unity::XR::Oculus::OculusRestarter get_Instance() ;

/// @brief Method PauseAndRestart addr 0x2ae2700 size 0x120 virtual false final false
 void PauseAndRestart() ;

/// @brief Method PauseAndRestartCoroutine addr 0x2ae2820 size 0x78 virtual false final false
 System::Collections::IEnumerator PauseAndRestartCoroutine(float_t pauseTimeInSeconds) ;

/// @brief Method RestartCoroutine addr 0x2ae28c0 size 0x7c virtual false final false
 System::Collections::IEnumerator RestartCoroutine(bool shouldRestart) ;

static Unity::XR::Oculus::OculusRestarter New_ctor() ;

/// @brief Method .ctor addr 0x2ae2964 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::Oculus
NEED_NO_BOX(Unity::XR::Oculus::OculusRestarter);
DEFINE_IL2CPP_ARG_TYPE(Unity::XR::Oculus::OculusRestarter, "Unity.XR.Oculus", "OculusRestarter");
NEED_NO_BOX(Unity::XR::Oculus::Unity__XR__Oculus__OculusRestarter___PauseAndRestartCoroutine_d__22);
DEFINE_IL2CPP_ARG_TYPE(Unity::XR::Oculus::Unity__XR__Oculus__OculusRestarter___PauseAndRestartCoroutine_d__22, "Unity.XR.Oculus", "OculusRestarter/<PauseAndRestartCoroutine>d__22");
NEED_NO_BOX(Unity::XR::Oculus::Unity__XR__Oculus__OculusRestarter___RestartCoroutine_d__23);
DEFINE_IL2CPP_ARG_TYPE(Unity::XR::Oculus::Unity__XR__Oculus__OculusRestarter___RestartCoroutine_d__23, "Unity.XR.Oculus", "OculusRestarter/<RestartCoroutine>d__23");
