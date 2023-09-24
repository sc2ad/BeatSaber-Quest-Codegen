#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include <cmath>
// Forward declare root types
namespace GlobalNamespace {
class FloatUnityEvent;
}
// Type: ::FloatUnityEvent
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10401), inst: 374 }), TypeDefinitionIndex(TypeDefinitionIndex(10401))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13895))
// CS Name: FloatUnityEvent
class CORDL_TYPE FloatUnityEvent : public UnityEngine::Events::UnityEvent_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~FloatUnityEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "FloatUnityEvent", modifiers: " const&", def_value: None }]
constexpr FloatUnityEvent(FloatUnityEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FloatUnityEvent", modifiers: "&&", def_value: None }]
constexpr FloatUnityEvent(FloatUnityEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FloatUnityEvent(void* ptr) noexcept : UnityEngine::Events::UnityEvent_1<float_t>(ptr) {
}


  constexpr FloatUnityEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FloatUnityEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FloatUnityEvent& operator=(FloatUnityEvent&& o) noexcept = default;
  constexpr FloatUnityEvent& operator=(FloatUnityEvent const& o) noexcept = default;
                


// Methods

static GlobalNamespace::FloatUnityEvent New_ctor() ;

/// @brief Method .ctor addr 0x1f83c20 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::FloatUnityEvent);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FloatUnityEvent, "", "FloatUnityEvent");
