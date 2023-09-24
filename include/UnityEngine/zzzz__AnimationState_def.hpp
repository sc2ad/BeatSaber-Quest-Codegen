#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__TrackedReference_def.hpp"
#include <cmath>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
class AnimationState;
}
// Type: UnityEngine::AnimationState
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10150))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15037))
// CS Name: UnityEngine.AnimationState
class CORDL_TYPE AnimationState : public UnityEngine::TrackedReference {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AnimationState() = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimationState", modifiers: " const&", def_value: None }]
constexpr AnimationState(AnimationState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimationState", modifiers: "&&", def_value: None }]
constexpr AnimationState(AnimationState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AnimationState(void* ptr) noexcept : UnityEngine::TrackedReference(ptr) {
}


  constexpr AnimationState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AnimationState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AnimationState& operator=(AnimationState&& o) noexcept = default;
  constexpr AnimationState& operator=(AnimationState const& o) noexcept = default;
                


// Properties

 float_t __declspec(property(put=set_time))  time;

 float_t __declspec(property(put=set_normalizedTime))  normalizedTime;

 float_t __declspec(property(put=set_speed))  speed;

 int32_t __declspec(property(put=set_layer))  layer;


// Methods

/// @brief Method set_time addr 0x2b1a968 size 0x4c virtual false final false
 void set_time(float_t value) ;

/// @brief Method set_normalizedTime addr 0x2b1a9b4 size 0x4c virtual false final false
 void set_normalizedTime(float_t value) ;

/// @brief Method set_speed addr 0x2b1aa00 size 0x4c virtual false final false
 void set_speed(float_t value) ;

/// @brief Method set_layer addr 0x2b1aa4c size 0x44 virtual false final false
 void set_layer(int32_t value) ;

static UnityEngine::AnimationState New_ctor() ;

/// @brief Method .ctor addr 0x2b1aa90 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::AnimationState);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AnimationState, "UnityEngine", "AnimationState");
