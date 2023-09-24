#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace UnityEngine::Timeline {
struct UnityEngine__Timeline__ActivationTrack__PostPlaybackState;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
template<typename T>
struct ScriptPlayable_1;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class ActivationMixerPlayable;
}
// Type: UnityEngine.Timeline::ActivationMixerPlayable
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10361))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14036))
// CS Name: UnityEngine.Timeline.ActivationMixerPlayable
class CORDL_TYPE ActivationMixerPlayable : public UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ActivationMixerPlayable() = default;

// Ctor Parameters [CppParam { name: "", ty: "ActivationMixerPlayable", modifiers: " const&", def_value: None }]
constexpr ActivationMixerPlayable(ActivationMixerPlayable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ActivationMixerPlayable", modifiers: "&&", def_value: None }]
constexpr ActivationMixerPlayable(ActivationMixerPlayable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ActivationMixerPlayable(void* ptr) noexcept : UnityEngine::Playables::PlayableBehaviour(ptr) {
}


  constexpr ActivationMixerPlayable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ActivationMixerPlayable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ActivationMixerPlayable& operator=(ActivationMixerPlayable&& o) noexcept = default;
  constexpr ActivationMixerPlayable& operator=(ActivationMixerPlayable const& o) noexcept = default;
                


// Fields

 UnityEngine::Timeline::UnityEngine__Timeline__ActivationTrack__PostPlaybackState __declspec(property(get=__get_m_PostPlaybackState, put=__set_m_PostPlaybackState))  m_PostPlaybackState;

constexpr void __set_m_PostPlaybackState(UnityEngine::Timeline::UnityEngine__Timeline__ActivationTrack__PostPlaybackState value) ;

constexpr UnityEngine::Timeline::UnityEngine__Timeline__ActivationTrack__PostPlaybackState __get_m_PostPlaybackState() const;

 bool __declspec(property(get=__get_m_BoundGameObjectInitialStateIsActive, put=__set_m_BoundGameObjectInitialStateIsActive))  m_BoundGameObjectInitialStateIsActive;

constexpr void __set_m_BoundGameObjectInitialStateIsActive(bool value) ;

constexpr bool __get_m_BoundGameObjectInitialStateIsActive() const;

 UnityEngine::GameObject __declspec(property(get=__get_m_BoundGameObject, put=__set_m_BoundGameObject))  m_BoundGameObject;

constexpr void __set_m_BoundGameObject(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_m_BoundGameObject() const;


// Properties

 UnityEngine::Timeline::UnityEngine__Timeline__ActivationTrack__PostPlaybackState __declspec(property(get=get_postPlaybackState, put=set_postPlaybackState))  postPlaybackState;


// Methods

/// @brief Method Create addr 0x2ab5ffc size 0x84 virtual false final false
static UnityEngine::Playables::ScriptPlayable_1<UnityEngine::Timeline::ActivationMixerPlayable> Create(UnityEngine::Playables::PlayableGraph graph, int32_t inputCount) ;

/// @brief Method get_postPlaybackState addr 0x2ab6080 size 0x8 virtual false final false
 UnityEngine::Timeline::UnityEngine__Timeline__ActivationTrack__PostPlaybackState get_postPlaybackState() ;

/// @brief Method set_postPlaybackState addr 0x2ab6088 size 0x8 virtual false final false
 void set_postPlaybackState(UnityEngine::Timeline::UnityEngine__Timeline__ActivationTrack__PostPlaybackState value) ;

/// @brief Method OnPlayableDestroy addr 0x2ab6090 size 0xc0 virtual true final false
 void OnPlayableDestroy(UnityEngine::Playables::Playable playable) ;

/// @brief Method ProcessFrame addr 0x2ab6150 size 0x1c4 virtual true final false
 void ProcessFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info, ::bs_hook::Il2CppWrapperType playerData) ;

static UnityEngine::Timeline::ActivationMixerPlayable New_ctor() ;

/// @brief Method .ctor addr 0x2ab6314 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::ActivationMixerPlayable);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::ActivationMixerPlayable, "UnityEngine.Timeline", "ActivationMixerPlayable");
