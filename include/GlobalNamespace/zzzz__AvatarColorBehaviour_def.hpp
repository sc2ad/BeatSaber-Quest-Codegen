#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace GlobalNamespace {
class AvatarVisualController;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class AvatarColorBehaviour;
}
// Type: ::AvatarColorBehaviour
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10361))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6057))
// CS Name: AvatarColorBehaviour
class CORDL_TYPE AvatarColorBehaviour : public UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~AvatarColorBehaviour() = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarColorBehaviour", modifiers: " const&", def_value: None }]
constexpr AvatarColorBehaviour(AvatarColorBehaviour const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarColorBehaviour", modifiers: "&&", def_value: None }]
constexpr AvatarColorBehaviour(AvatarColorBehaviour&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AvatarColorBehaviour(void* ptr) noexcept : UnityEngine::Playables::PlayableBehaviour(ptr) {
}


  constexpr AvatarColorBehaviour& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AvatarColorBehaviour& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AvatarColorBehaviour& operator=(AvatarColorBehaviour&& o) noexcept = default;
  constexpr AvatarColorBehaviour& operator=(AvatarColorBehaviour const& o) noexcept = default;
                


// Fields

 UnityEngine::Color __declspec(property(get=__get__startColor, put=__set__startColor))  _startColor;

constexpr void __set__startColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__startColor() const;

 UnityEngine::Color __declspec(property(get=__get__endColor, put=__set__endColor))  _endColor;

constexpr void __set__endColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__endColor() const;

 GlobalNamespace::EaseType __declspec(property(get=__get__easeType, put=__set__easeType))  _easeType;

constexpr void __set__easeType(GlobalNamespace::EaseType value) ;

constexpr GlobalNamespace::EaseType __get__easeType() const;

 GlobalNamespace::AvatarVisualController __declspec(property(get=__get__avatarVisualController, put=__set__avatarVisualController))  _avatarVisualController;

constexpr void __set__avatarVisualController(GlobalNamespace::AvatarVisualController value) ;

constexpr GlobalNamespace::AvatarVisualController __get__avatarVisualController() const;

 float_t __declspec(property(get=__get__duration, put=__set__duration))  _duration;

constexpr void __set__duration(float_t value) ;

constexpr float_t __get__duration() const;


// Methods

/// @brief Method OnGraphStart addr 0x21b1758 size 0x74 virtual true final false
 void OnGraphStart(UnityEngine::Playables::Playable playable) ;

/// @brief Method ProcessFrame addr 0x21b17cc size 0x1e8 virtual true final false
 void ProcessFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info, ::bs_hook::Il2CppWrapperType playerData) ;

/// @brief Method OnPlayableDestroy addr 0x21b19b4 size 0x8c virtual true final false
 void OnPlayableDestroy(UnityEngine::Playables::Playable playable) ;

static GlobalNamespace::AvatarColorBehaviour New_ctor() ;

/// @brief Method .ctor addr 0x21b1a40 size 0x20 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::AvatarColorBehaviour);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarColorBehaviour, "", "AvatarColorBehaviour");
