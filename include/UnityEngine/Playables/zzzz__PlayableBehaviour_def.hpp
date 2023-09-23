#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
class ICloneable;
}
namespace UnityEngine::Playables {
class IPlayableBehaviour;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace UnityEngine::Playables {
class PlayableBehaviour;
}
// Type: UnityEngine.Playables::PlayableBehaviour
namespace UnityEngine::Playables {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10361))
// CS Name: UnityEngine.Playables.PlayableBehaviour
class CORDL_TYPE PlayableBehaviour : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to UnityEngine::Playables::IPlayableBehaviour
constexpr operator  UnityEngine::Playables::IPlayableBehaviour() const noexcept;

/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PlayableBehaviour() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayableBehaviour", modifiers: " const&", def_value: None }]
constexpr PlayableBehaviour(PlayableBehaviour const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayableBehaviour", modifiers: "&&", def_value: None }]
constexpr PlayableBehaviour(PlayableBehaviour&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayableBehaviour(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PlayableBehaviour& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayableBehaviour& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayableBehaviour& operator=(PlayableBehaviour&& o) noexcept = default;
  constexpr PlayableBehaviour& operator=(PlayableBehaviour const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit PlayableBehaviour() ;

/// @brief Method .ctor addr 0x2b7cac0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method OnGraphStart addr 0x2b7cac8 size 0x4 virtual true final false
 void OnGraphStart(UnityEngine::Playables::Playable playable) ;

/// @brief Method OnGraphStop addr 0x2b7cacc size 0x4 virtual true final false
 void OnGraphStop(UnityEngine::Playables::Playable playable) ;

/// @brief Method OnPlayableCreate addr 0x2b7cad0 size 0x4 virtual true final false
 void OnPlayableCreate(UnityEngine::Playables::Playable playable) ;

/// @brief Method OnPlayableDestroy addr 0x2b7cad4 size 0x4 virtual true final false
 void OnPlayableDestroy(UnityEngine::Playables::Playable playable) ;

/// @brief Method OnBehaviourPlay addr 0x2b7cad8 size 0x4 virtual true final false
 void OnBehaviourPlay(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info) ;

/// @brief Method OnBehaviourPause addr 0x2b7cadc size 0x4 virtual true final false
 void OnBehaviourPause(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info) ;

/// @brief Method PrepareFrame addr 0x2b7cae0 size 0x4 virtual true final false
 void PrepareFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info) ;

/// @brief Method ProcessFrame addr 0x2b7cae4 size 0x4 virtual true final false
 void ProcessFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info, ::bs_hook::Il2CppWrapperType playerData) ;

/// @brief Method Clone addr 0x2b7cae8 size 0x8 virtual true final false
 ::bs_hook::Il2CppWrapperType Clone() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Playables
NEED_NO_BOX(UnityEngine::Playables::PlayableBehaviour);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::PlayableBehaviour, "UnityEngine.Playables", "PlayableBehaviour");
