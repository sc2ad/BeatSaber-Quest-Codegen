#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class FloatSignal;
}
namespace GlobalNamespace {
class FloatUnityEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class FloatSignalListener;
}
// Type: ::FloatSignalListener
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13880))
// CS Name: FloatSignalListener
class CORDL_TYPE FloatSignalListener : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~FloatSignalListener() = default;

// Ctor Parameters [CppParam { name: "", ty: "FloatSignalListener", modifiers: " const&", def_value: None }]
constexpr FloatSignalListener(FloatSignalListener const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FloatSignalListener", modifiers: "&&", def_value: None }]
constexpr FloatSignalListener(FloatSignalListener&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FloatSignalListener(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr FloatSignalListener& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FloatSignalListener& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FloatSignalListener& operator=(FloatSignalListener&& o) noexcept = default;
  constexpr FloatSignalListener& operator=(FloatSignalListener const& o) noexcept = default;
                


// Fields

 GlobalNamespace::FloatSignal __declspec(property(get=__get__floatSignal, put=__set__floatSignal))  _floatSignal;

constexpr void __set__floatSignal(GlobalNamespace::FloatSignal value) ;

constexpr GlobalNamespace::FloatSignal __get__floatSignal() const;

 GlobalNamespace::FloatUnityEvent __declspec(property(get=__get__unityEvent, put=__set__unityEvent))  _unityEvent;

constexpr void __set__unityEvent(GlobalNamespace::FloatUnityEvent value) ;

constexpr GlobalNamespace::FloatUnityEvent __get__unityEvent() const;


// Methods

/// @brief Method OnEnable addr 0x1f831bc size 0xa0 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x1f8325c size 0xa0 virtual false final false
 void OnDisable() ;

/// @brief Method HandleEvent addr 0x1f832fc size 0x60 virtual false final false
 void HandleEvent(float_t f) ;

static GlobalNamespace::FloatSignalListener New_ctor() ;

/// @brief Method .ctor addr 0x1f8335c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::FloatSignalListener);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FloatSignalListener, "", "FloatSignalListener");
