#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace UnityEngine {
class Animation;
}
// Forward declare root types
namespace GlobalNamespace {
class RandomAnimationStartTime;
}
// Type: ::RandomAnimationStartTime
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13819))
// CS Name: RandomAnimationStartTime
class CORDL_TYPE RandomAnimationStartTime : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RandomAnimationStartTime() = default;

// Ctor Parameters [CppParam { name: "", ty: "RandomAnimationStartTime", modifiers: " const&", def_value: None }]
constexpr RandomAnimationStartTime(RandomAnimationStartTime const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RandomAnimationStartTime", modifiers: "&&", def_value: None }]
constexpr RandomAnimationStartTime(RandomAnimationStartTime&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RandomAnimationStartTime(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr RandomAnimationStartTime& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RandomAnimationStartTime& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RandomAnimationStartTime& operator=(RandomAnimationStartTime&& o) noexcept = default;
  constexpr RandomAnimationStartTime& operator=(RandomAnimationStartTime const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Animation __declspec(property(get=__get__animation, put=__set__animation))  _animation;

constexpr void __set__animation(::UnityEngine::Animation value) ;

constexpr ::UnityEngine::Animation __get__animation() const;


// Methods

/// @brief Method Start addr 0x1f799f4 size 0x2e4 virtual false final false
 void Start() ;

// Ctor Parameters []
explicit RandomAnimationStartTime() ;

/// @brief Method .ctor addr 0x1f79cd8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::RandomAnimationStartTime);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RandomAnimationStartTime, "", "RandomAnimationStartTime");
