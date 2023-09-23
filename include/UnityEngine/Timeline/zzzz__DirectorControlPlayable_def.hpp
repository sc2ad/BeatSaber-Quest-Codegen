#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
template<typename T>
struct ScriptPlayable_1;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
struct FrameData;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class DirectorControlPlayable;
}
// Type: UnityEngine.Timeline::DirectorControlPlayable
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10361))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14115))
// CS Name: UnityEngine.Timeline.DirectorControlPlayable
class CORDL_TYPE DirectorControlPlayable : public UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~DirectorControlPlayable() = default;

// Ctor Parameters [CppParam { name: "", ty: "DirectorControlPlayable", modifiers: " const&", def_value: None }]
constexpr DirectorControlPlayable(DirectorControlPlayable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DirectorControlPlayable", modifiers: "&&", def_value: None }]
constexpr DirectorControlPlayable(DirectorControlPlayable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DirectorControlPlayable(void* ptr) noexcept : UnityEngine::Playables::PlayableBehaviour(ptr) {
}


  constexpr DirectorControlPlayable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DirectorControlPlayable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DirectorControlPlayable& operator=(DirectorControlPlayable&& o) noexcept = default;
  constexpr DirectorControlPlayable& operator=(DirectorControlPlayable const& o) noexcept = default;
                


// Fields

 UnityEngine::Playables::PlayableDirector __declspec(property(get=__get_director, put=__set_director))  director;

constexpr void __set_director(UnityEngine::Playables::PlayableDirector value) ;

constexpr UnityEngine::Playables::PlayableDirector __get_director() const;

 bool __declspec(property(get=__get_m_SyncTime, put=__set_m_SyncTime))  m_SyncTime;

constexpr void __set_m_SyncTime(bool value) ;

constexpr bool __get_m_SyncTime() const;

 double_t __declspec(property(get=__get_m_AssetDuration, put=__set_m_AssetDuration))  m_AssetDuration;

constexpr void __set_m_AssetDuration(double_t value) ;

constexpr double_t __get_m_AssetDuration() const;


// Methods

/// @brief Method Create addr 0x2acc9e8 size 0x130 virtual false final false
static UnityEngine::Playables::ScriptPlayable_1<UnityEngine::Timeline::DirectorControlPlayable> Create(UnityEngine::Playables::PlayableGraph graph, UnityEngine::Playables::PlayableDirector director) ;

/// @brief Method OnPlayableDestroy addr 0x2ad1e44 size 0xc0 virtual true final false
 void OnPlayableDestroy(UnityEngine::Playables::Playable playable) ;

/// @brief Method PrepareFrame addr 0x2ad1f04 size 0x1b4 virtual true final false
 void PrepareFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info) ;

/// @brief Method OnBehaviourPlay addr 0x2ad23b8 size 0xd4 virtual true final false
 void OnBehaviourPlay(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info) ;

/// @brief Method OnBehaviourPause addr 0x2ad248c size 0x100 virtual true final false
 void OnBehaviourPause(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info) ;

/// @brief Method ProcessFrame addr 0x2ad258c size 0x200 virtual true final false
 void ProcessFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info, ::bs_hook::Il2CppWrapperType playerData) ;

/// @brief Method SyncSpeed addr 0x2ad21cc size 0x12c virtual false final false
 void SyncSpeed(double_t speed) ;

/// @brief Method SyncStart addr 0x2ad22f8 size 0xc0 virtual false final false
 void SyncStart(UnityEngine::Playables::PlayableGraph graph, double_t time) ;

/// @brief Method SyncStop addr 0x2ad2a68 size 0x84 virtual false final false
 void SyncStop(UnityEngine::Playables::PlayableGraph graph, double_t time) ;

/// @brief Method DetectDiscontinuity addr 0x2ad20b8 size 0x114 virtual false final false
 bool DetectDiscontinuity(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info) ;

/// @brief Method DetectOutOfSync addr 0x2ad278c size 0x14c virtual false final false
 bool DetectOutOfSync(UnityEngine::Playables::Playable playable) ;

/// @brief Method UpdateTime addr 0x2ad28d8 size 0x190 virtual false final false
 void UpdateTime(UnityEngine::Playables::Playable playable) ;

// Ctor Parameters []
explicit DirectorControlPlayable() ;

/// @brief Method .ctor addr 0x2ad2aec size 0x1010 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::DirectorControlPlayable);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::DirectorControlPlayable, "UnityEngine.Timeline", "DirectorControlPlayable");
