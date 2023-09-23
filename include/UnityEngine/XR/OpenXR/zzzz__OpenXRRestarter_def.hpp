#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class Coroutine;
}
namespace System {
class Action;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR {
class OpenXRRestarter;
}
namespace UnityEngine::XR::OpenXR {
class UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndRetryInitializationCoroutine_d__25;
}
namespace UnityEngine::XR::OpenXR {
class UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndShutdownAndRestartCoroutine_d__24;
}
namespace UnityEngine::XR::OpenXR {
class UnityEngine__XR__OpenXR__OpenXRRestarter___RestartCoroutine_d__26;
}
// Type: ::<PauseAndShutdownAndRestartCoroutine>d__24
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14170))
// CS Name: UnityEngine.XR.OpenXR.OpenXRRestarter::<PauseAndShutdownAndRestartCoroutine>d__24
class CORDL_TYPE UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndShutdownAndRestartCoroutine_d__24 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndShutdownAndRestartCoroutine_d__24() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndShutdownAndRestartCoroutine_d__24", modifiers: " const&", def_value: None }]
constexpr UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndShutdownAndRestartCoroutine_d__24(UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndShutdownAndRestartCoroutine_d__24 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndShutdownAndRestartCoroutine_d__24", modifiers: "&&", def_value: None }]
constexpr UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndShutdownAndRestartCoroutine_d__24(UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndShutdownAndRestartCoroutine_d__24&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndShutdownAndRestartCoroutine_d__24(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndShutdownAndRestartCoroutine_d__24& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndShutdownAndRestartCoroutine_d__24& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndShutdownAndRestartCoroutine_d__24& operator=(UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndShutdownAndRestartCoroutine_d__24&& o) noexcept = default;
  constexpr UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndShutdownAndRestartCoroutine_d__24& operator=(UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndShutdownAndRestartCoroutine_d__24 const& o) noexcept = default;
                


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

 UnityEngine::XR::OpenXR::OpenXRRestarter __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(UnityEngine::XR::OpenXR::OpenXRRestarter value) ;

constexpr UnityEngine::XR::OpenXR::OpenXRRestarter __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndShutdownAndRestartCoroutine_d__24(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2aeb6a8 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2aeb728 size 0x2c virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2aeb754 size 0x220 virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x2aeb9a8 size 0x3c virtual false final false
 void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2aeb9e4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2aeb9ec size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2aeba2c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR
// Type: ::<PauseAndRetryInitializationCoroutine>d__25
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14171))
// CS Name: UnityEngine.XR.OpenXR.OpenXRRestarter::<PauseAndRetryInitializationCoroutine>d__25
class CORDL_TYPE UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndRetryInitializationCoroutine_d__25 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndRetryInitializationCoroutine_d__25() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndRetryInitializationCoroutine_d__25", modifiers: " const&", def_value: None }]
constexpr UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndRetryInitializationCoroutine_d__25(UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndRetryInitializationCoroutine_d__25 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndRetryInitializationCoroutine_d__25", modifiers: "&&", def_value: None }]
constexpr UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndRetryInitializationCoroutine_d__25(UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndRetryInitializationCoroutine_d__25&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndRetryInitializationCoroutine_d__25(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndRetryInitializationCoroutine_d__25& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndRetryInitializationCoroutine_d__25& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndRetryInitializationCoroutine_d__25& operator=(UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndRetryInitializationCoroutine_d__25&& o) noexcept = default;
  constexpr UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndRetryInitializationCoroutine_d__25& operator=(UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndRetryInitializationCoroutine_d__25 const& o) noexcept = default;
                


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

 UnityEngine::XR::OpenXR::OpenXRRestarter __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(UnityEngine::XR::OpenXR::OpenXRRestarter value) ;

constexpr UnityEngine::XR::OpenXR::OpenXRRestarter __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndRetryInitializationCoroutine_d__25(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2aeb6d0 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2aeba34 size 0x2c virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2aeba60 size 0x2e0 virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x2aebd40 size 0x3c virtual false final false
 void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2aebd7c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2aebd84 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2aebdc4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR
// Type: ::<RestartCoroutine>d__26
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14172))
// CS Name: UnityEngine.XR.OpenXR.OpenXRRestarter::<RestartCoroutine>d__26
class CORDL_TYPE UnityEngine__XR__OpenXR__OpenXRRestarter___RestartCoroutine_d__26 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~UnityEngine__XR__OpenXR__OpenXRRestarter___RestartCoroutine_d__26() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__XR__OpenXR__OpenXRRestarter___RestartCoroutine_d__26", modifiers: " const&", def_value: None }]
constexpr UnityEngine__XR__OpenXR__OpenXRRestarter___RestartCoroutine_d__26(UnityEngine__XR__OpenXR__OpenXRRestarter___RestartCoroutine_d__26 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__XR__OpenXR__OpenXRRestarter___RestartCoroutine_d__26", modifiers: "&&", def_value: None }]
constexpr UnityEngine__XR__OpenXR__OpenXRRestarter___RestartCoroutine_d__26(UnityEngine__XR__OpenXR__OpenXRRestarter___RestartCoroutine_d__26&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__XR__OpenXR__OpenXRRestarter___RestartCoroutine_d__26(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__XR__OpenXR__OpenXRRestarter___RestartCoroutine_d__26& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__XR__OpenXR__OpenXRRestarter___RestartCoroutine_d__26& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__XR__OpenXR__OpenXRRestarter___RestartCoroutine_d__26& operator=(UnityEngine__XR__OpenXR__OpenXRRestarter___RestartCoroutine_d__26&& o) noexcept = default;
  constexpr UnityEngine__XR__OpenXR__OpenXRRestarter___RestartCoroutine_d__26& operator=(UnityEngine__XR__OpenXR__OpenXRRestarter___RestartCoroutine_d__26 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 bool __declspec(property(get=__get_shouldShutdown, put=__set_shouldShutdown))  shouldShutdown;

constexpr void __set_shouldShutdown(bool value) ;

constexpr bool __get_shouldShutdown() const;

 UnityEngine::XR::OpenXR::OpenXRRestarter __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(UnityEngine::XR::OpenXR::OpenXRRestarter value) ;

constexpr UnityEngine::XR::OpenXR::OpenXRRestarter __get___4__this() const;

 bool __declspec(property(get=__get_shouldRestart, put=__set_shouldRestart))  shouldRestart;

constexpr void __set_shouldRestart(bool value) ;

constexpr bool __get_shouldRestart() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit UnityEngine__XR__OpenXR__OpenXRRestarter___RestartCoroutine_d__26(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2aeb6f8 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2aebdcc size 0x2c virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2aebdf8 size 0x4b0 virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x2aec338 size 0x40 virtual false final false
 void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2aec378 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2aec380 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2aec3c0 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR
// Type: UnityEngine.XR.OpenXR::OpenXRRestarter
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14173))
// CS Name: UnityEngine.XR.OpenXR.OpenXRRestarter
class CORDL_TYPE OpenXRRestarter : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _RestartCoroutine_d__26 = UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRRestarter___RestartCoroutine_d__26;

using _PauseAndRetryInitializationCoroutine_d__25 = UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndRetryInitializationCoroutine_d__25;

using _PauseAndShutdownAndRestartCoroutine_d__24 = UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndShutdownAndRestartCoroutine_d__24;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~OpenXRRestarter() = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRRestarter", modifiers: " const&", def_value: None }]
constexpr OpenXRRestarter(OpenXRRestarter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRRestarter", modifiers: "&&", def_value: None }]
constexpr OpenXRRestarter(OpenXRRestarter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OpenXRRestarter(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OpenXRRestarter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OpenXRRestarter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OpenXRRestarter& operator=(OpenXRRestarter&& o) noexcept = default;
  constexpr OpenXRRestarter& operator=(OpenXRRestarter const& o) noexcept = default;
                


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

 System::Action __declspec(property(get=__get_onAfterSuccessfulRestart, put=__set_onAfterSuccessfulRestart))  onAfterSuccessfulRestart;

constexpr void __set_onAfterSuccessfulRestart(System::Action value) ;

constexpr System::Action __get_onAfterSuccessfulRestart() const;

static UnityEngine::XR::OpenXR::OpenXRRestarter __declspec(property(get=__get_s_Instance, put=__set_s_Instance))  s_Instance;

static void __set_s_Instance(UnityEngine::XR::OpenXR::OpenXRRestarter value) ;

static UnityEngine::XR::OpenXR::OpenXRRestarter __get_s_Instance() ;

 UnityEngine::Coroutine __declspec(property(get=__get_m_Coroutine, put=__set_m_Coroutine))  m_Coroutine;

constexpr void __set_m_Coroutine(UnityEngine::Coroutine value) ;

constexpr UnityEngine::Coroutine __get_m_Coroutine() const;

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

static UnityEngine::XR::OpenXR::OpenXRRestarter __declspec(property(get=get_Instance))  Instance;


// Methods

/// @brief Method ResetCallbacks addr 0x2aeb3a0 size 0x6c virtual false final false
 void ResetCallbacks() ;

/// @brief Method get_isRunning addr 0x2aeb40c size 0x10 virtual false final false
 bool get_isRunning() ;

/// @brief Method get_TimeBetweenRestartAttempts addr 0x2aeb41c size 0x58 virtual false final false
static float_t get_TimeBetweenRestartAttempts() ;

/// @brief Method set_TimeBetweenRestartAttempts addr 0x2aeb474 size 0x64 virtual false final false
static void set_TimeBetweenRestartAttempts(float_t value) ;

/// @brief Method get_PauseAndRestartAttempts addr 0x2aeb4d8 size 0x58 virtual false final false
static int32_t get_PauseAndRestartAttempts() ;

/// @brief Method get_Instance addr 0x2aea550 size 0x1b0 virtual false final false
static UnityEngine::XR::OpenXR::OpenXRRestarter get_Instance() ;

/// @brief Method Shutdown addr 0x2aeadd0 size 0x140 virtual false final false
 void Shutdown() ;

/// @brief Method ShutdownAndRestart addr 0x2aea700 size 0x140 virtual false final false
 void ShutdownAndRestart() ;

/// @brief Method PauseAndShutdownAndRestart addr 0x2aea840 size 0x148 virtual false final false
 void PauseAndShutdownAndRestart() ;

/// @brief Method PauseAndRetryInitialization addr 0x2aea988 size 0x148 virtual false final false
 void PauseAndRetryInitialization() ;

/// @brief Method PauseAndShutdownAndRestartCoroutine addr 0x2aeb5b8 size 0x78 virtual false final false
 System::Collections::IEnumerator PauseAndShutdownAndRestartCoroutine(float_t pauseTimeInSeconds) ;

/// @brief Method PauseAndRetryInitializationCoroutine addr 0x2aeb630 size 0x78 virtual false final false
 System::Collections::IEnumerator PauseAndRetryInitializationCoroutine(float_t pauseTimeInSeconds) ;

/// @brief Method RestartCoroutine addr 0x2aeb530 size 0x88 virtual false final false
 System::Collections::IEnumerator RestartCoroutine(bool shouldRestart, bool shouldShutdown) ;

// Ctor Parameters []
explicit OpenXRRestarter() ;

/// @brief Method .ctor addr 0x2aeb720 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR
NEED_NO_BOX(UnityEngine::XR::OpenXR::OpenXRRestarter);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::OpenXRRestarter, "UnityEngine.XR.OpenXR", "OpenXRRestarter");
NEED_NO_BOX(UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndRetryInitializationCoroutine_d__25);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndRetryInitializationCoroutine_d__25, "UnityEngine.XR.OpenXR", "OpenXRRestarter/<PauseAndRetryInitializationCoroutine>d__25");
NEED_NO_BOX(UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndShutdownAndRestartCoroutine_d__24);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRRestarter___PauseAndShutdownAndRestartCoroutine_d__24, "UnityEngine.XR.OpenXR", "OpenXRRestarter/<PauseAndShutdownAndRestartCoroutine>d__24");
NEED_NO_BOX(UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRRestarter___RestartCoroutine_d__26);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRRestarter___RestartCoroutine_d__26, "UnityEngine.XR.OpenXR", "OpenXRRestarter/<RestartCoroutine>d__26");
