#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
template<typename T>
struct ScriptPlayable_1;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Timeline {
class ITimeControl;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TimeControlPlayable;
}
// Type: UnityEngine.Timeline::TimeControlPlayable
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10361))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14120))
// CS Name: UnityEngine.Timeline.TimeControlPlayable
class CORDL_TYPE TimeControlPlayable : public UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TimeControlPlayable() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeControlPlayable", modifiers: " const&", def_value: None }]
constexpr TimeControlPlayable(TimeControlPlayable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeControlPlayable", modifiers: "&&", def_value: None }]
constexpr TimeControlPlayable(TimeControlPlayable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimeControlPlayable(void* ptr) noexcept : UnityEngine::Playables::PlayableBehaviour(ptr) {
}


  constexpr TimeControlPlayable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimeControlPlayable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimeControlPlayable& operator=(TimeControlPlayable&& o) noexcept = default;
  constexpr TimeControlPlayable& operator=(TimeControlPlayable const& o) noexcept = default;
                


// Fields

 UnityEngine::Timeline::ITimeControl __declspec(property(get=__get_m_timeControl, put=__set_m_timeControl))  m_timeControl;

constexpr void __set_m_timeControl(UnityEngine::Timeline::ITimeControl value) ;

constexpr UnityEngine::Timeline::ITimeControl __get_m_timeControl() const;

 bool __declspec(property(get=__get_m_started, put=__set_m_started))  m_started;

constexpr void __set_m_started(bool value) ;

constexpr bool __get_m_started() const;


// Methods

/// @brief Method Create addr 0x2ad49b8 size 0xf4 virtual false final false
static UnityEngine::Playables::ScriptPlayable_1<UnityEngine::Timeline::TimeControlPlayable> Create(UnityEngine::Playables::PlayableGraph graph, UnityEngine::Timeline::ITimeControl timeControl) ;

/// @brief Method Initialize addr 0x2ad4aac size 0x8 virtual false final false
 void Initialize(UnityEngine::Timeline::ITimeControl timeControl) ;

/// @brief Method PrepareFrame addr 0x2ad4ab4 size 0xf4 virtual true final false
 void PrepareFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info) ;

/// @brief Method OnBehaviourPlay addr 0x2ad4ba8 size 0xb4 virtual true final false
 void OnBehaviourPlay(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info) ;

/// @brief Method OnBehaviourPause addr 0x2ad4c5c size 0xb0 virtual true final false
 void OnBehaviourPause(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info) ;

static UnityEngine::Timeline::TimeControlPlayable New_ctor() ;

/// @brief Method .ctor addr 0x2ad4d0c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::TimeControlPlayable);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimeControlPlayable, "UnityEngine.Timeline", "TimeControlPlayable");
