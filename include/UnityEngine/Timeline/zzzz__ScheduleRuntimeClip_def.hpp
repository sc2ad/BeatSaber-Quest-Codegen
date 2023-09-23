#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Timeline/zzzz__RuntimeClipBase_def.hpp"
#include <cmath>
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Timeline {
class TimelineClip;
}
namespace UnityEngine::Playables {
struct FrameData;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class ScheduleRuntimeClip;
}
// Type: UnityEngine.Timeline::ScheduleRuntimeClip
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14094))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14096))
// CS Name: UnityEngine.Timeline.ScheduleRuntimeClip
class CORDL_TYPE ScheduleRuntimeClip : public UnityEngine::Timeline::RuntimeClipBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~ScheduleRuntimeClip() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScheduleRuntimeClip", modifiers: " const&", def_value: None }]
constexpr ScheduleRuntimeClip(ScheduleRuntimeClip const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScheduleRuntimeClip", modifiers: "&&", def_value: None }]
constexpr ScheduleRuntimeClip(ScheduleRuntimeClip&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScheduleRuntimeClip(void* ptr) noexcept : UnityEngine::Timeline::RuntimeClipBase(ptr) {
}


  constexpr ScheduleRuntimeClip& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScheduleRuntimeClip& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScheduleRuntimeClip& operator=(ScheduleRuntimeClip&& o) noexcept = default;
  constexpr ScheduleRuntimeClip& operator=(ScheduleRuntimeClip const& o) noexcept = default;
                


// Fields

 UnityEngine::Timeline::TimelineClip __declspec(property(get=__get_m_Clip, put=__set_m_Clip))  m_Clip;

constexpr void __set_m_Clip(UnityEngine::Timeline::TimelineClip value) ;

constexpr UnityEngine::Timeline::TimelineClip __get_m_Clip() const;

 UnityEngine::Playables::Playable __declspec(property(get=__get_m_Playable, put=__set_m_Playable))  m_Playable;

constexpr void __set_m_Playable(UnityEngine::Playables::Playable value) ;

constexpr UnityEngine::Playables::Playable __get_m_Playable() const;

 UnityEngine::Playables::Playable __declspec(property(get=__get_m_ParentMixer, put=__set_m_ParentMixer))  m_ParentMixer;

constexpr void __set_m_ParentMixer(UnityEngine::Playables::Playable value) ;

constexpr UnityEngine::Playables::Playable __get_m_ParentMixer() const;

 double_t __declspec(property(get=__get_m_StartDelay, put=__set_m_StartDelay))  m_StartDelay;

constexpr void __set_m_StartDelay(double_t value) ;

constexpr double_t __get_m_StartDelay() const;

 double_t __declspec(property(get=__get_m_FinishTail, put=__set_m_FinishTail))  m_FinishTail;

constexpr void __set_m_FinishTail(double_t value) ;

constexpr double_t __get_m_FinishTail() const;

 bool __declspec(property(get=__get_m_Started, put=__set_m_Started))  m_Started;

constexpr void __set_m_Started(bool value) ;

constexpr bool __get_m_Started() const;


// Properties

 double_t __declspec(property(get=get_start))  start;

 double_t __declspec(property(get=get_duration))  duration;

 UnityEngine::Timeline::TimelineClip __declspec(property(get=get_clip))  clip;

 UnityEngine::Playables::Playable __declspec(property(get=get_mixer))  mixer;

 UnityEngine::Playables::Playable __declspec(property(get=get_playable))  playable;

 bool __declspec(property(put=set_enable))  enable;


// Methods

/// @brief Method get_start addr 0x2acf738 size 0x78 virtual true final false
 double_t get_start() ;

/// @brief Method get_duration addr 0x2acf7b0 size 0x4c virtual true final false
 double_t get_duration() ;

/// @brief Method SetTime addr 0x2acf7fc size 0x58 virtual false final false
 void SetTime(double_t time) ;

/// @brief Method get_clip addr 0x2acf854 size 0x8 virtual false final false
 UnityEngine::Timeline::TimelineClip get_clip() ;

/// @brief Method get_mixer addr 0x2acf85c size 0xc virtual false final false
 UnityEngine::Playables::Playable get_mixer() ;

/// @brief Method get_playable addr 0x2acf868 size 0xc virtual false final false
 UnityEngine::Playables::Playable get_playable() ;

// Ctor Parameters [CppParam { name: "clip", ty: "UnityEngine::Timeline::TimelineClip", modifiers: "", def_value: None }, CppParam { name: "clipPlayable", ty: "UnityEngine::Playables::Playable", modifiers: "", def_value: None }, CppParam { name: "parentMixer", ty: "UnityEngine::Playables::Playable", modifiers: "", def_value: None }, CppParam { name: "startDelay", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "finishTail", ty: "double_t", modifiers: "", def_value: None }]
explicit ScheduleRuntimeClip(UnityEngine::Timeline::TimelineClip clip, UnityEngine::Playables::Playable clipPlayable, UnityEngine::Playables::Playable parentMixer, double_t startDelay, double_t finishTail) ;

/// @brief Method .ctor addr 0x2aca034 size 0x74 virtual false final false
 void _ctor(UnityEngine::Timeline::TimelineClip clip, UnityEngine::Playables::Playable clipPlayable, UnityEngine::Playables::Playable parentMixer, double_t startDelay, double_t finishTail) ;

/// @brief Method Create addr 0x2acf874 size 0x98 virtual false final false
 void Create(UnityEngine::Timeline::TimelineClip clip, UnityEngine::Playables::Playable clipPlayable, UnityEngine::Playables::Playable parentMixer, double_t startDelay, double_t finishTail) ;

/// @brief Method set_enable addr 0x2acf90c size 0x104 virtual true final false
 void set_enable(bool value) ;

/// @brief Method EvaluateAt addr 0x2acfa10 size 0x268 virtual true final false
 void EvaluateAt(double_t localTime, UnityEngine::Playables::FrameData frameData) ;

/// @brief Method DisableAt addr 0x2acfc78 size 0x10 virtual true final false
 void DisableAt(double_t localTime, double_t rootDuration, UnityEngine::Playables::FrameData frameData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::ScheduleRuntimeClip);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::ScheduleRuntimeClip, "UnityEngine.Timeline", "ScheduleRuntimeClip");
