#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace GlobalNamespace {
class Signal;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class SignalListener;
}
// Type: ::SignalListener
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13883))
// CS Name: SignalListener
class CORDL_TYPE SignalListener : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SignalListener() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalListener", modifiers: " const&", def_value: None }]
constexpr SignalListener(SignalListener const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalListener", modifiers: "&&", def_value: None }]
constexpr SignalListener(SignalListener&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignalListener(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SignalListener& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignalListener& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignalListener& operator=(SignalListener&& o) noexcept = default;
  constexpr SignalListener& operator=(SignalListener const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::Signal __declspec(property(get=__get__signal, put=__set__signal))  _signal;

constexpr void __set__signal(::GlobalNamespace::Signal value) ;

constexpr ::GlobalNamespace::Signal __get__signal() const;

 ::UnityEngine::Events::UnityEvent __declspec(property(get=__get__unityEvent, put=__set__unityEvent))  _unityEvent;

constexpr void __set__unityEvent(::UnityEngine::Events::UnityEvent value) ;

constexpr ::UnityEngine::Events::UnityEvent __get__unityEvent() const;


// Methods

/// @brief Method OnEnable addr 0x1f834ec size 0x94 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x1f83580 size 0x88 virtual false final false
 void OnDisable() ;

/// @brief Method HandleEvent addr 0x1f83608 size 0x1c virtual false final false
 void HandleEvent() ;

// Ctor Parameters []
explicit SignalListener() ;

/// @brief Method .ctor addr 0x1f83624 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::SignalListener);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SignalListener, "", "SignalListener");
