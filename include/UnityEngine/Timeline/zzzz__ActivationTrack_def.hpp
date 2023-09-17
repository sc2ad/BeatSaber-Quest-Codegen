#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::Timeline {
class ActivationMixerPlayable;
}
namespace UnityEngine::Timeline {
class IPropertyCollector;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Timeline {
class TimelineClip;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
// Forward declare root types
namespace UnityEngine::Timeline {
struct ____UnityEngine__Timeline__ActivationTrack__PostPlaybackState;
}
namespace UnityEngine::Timeline {
class ActivationTrack;
}
// Type: ::PostPlaybackState
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14038))
// CS Name: UnityEngine.Timeline.ActivationTrack::PostPlaybackState
struct CORDL_TYPE ____UnityEngine__Timeline__ActivationTrack__PostPlaybackState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__Timeline__ActivationTrack__PostPlaybackState(int32_t value__) noexcept;


                    constexpr ____UnityEngine__Timeline__ActivationTrack__PostPlaybackState(____UnityEngine__Timeline__ActivationTrack__PostPlaybackState const&) = default;
                    constexpr ____UnityEngine__Timeline__ActivationTrack__PostPlaybackState(____UnityEngine__Timeline__ActivationTrack__PostPlaybackState&&) = default;
                    constexpr ____UnityEngine__Timeline__ActivationTrack__PostPlaybackState& operator=(____UnityEngine__Timeline__ActivationTrack__PostPlaybackState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__Timeline__ActivationTrack__PostPlaybackState& operator=(____UnityEngine__Timeline__ActivationTrack__PostPlaybackState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__Timeline__ActivationTrack__PostPlaybackState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__Timeline__ActivationTrack__PostPlaybackState_Unwrapped : int32_t {
__Active = 0,
__Inactive = 1,
__Revert = 2,
__LeaveAsIs = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__Timeline__ActivationTrack__PostPlaybackState_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__Timeline__ActivationTrack__PostPlaybackState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Active offset 0
static ::UnityEngine::Timeline::____UnityEngine__Timeline__ActivationTrack__PostPlaybackState const Active;

/// @brief Field Inactive offset 0
static ::UnityEngine::Timeline::____UnityEngine__Timeline__ActivationTrack__PostPlaybackState const Inactive;

/// @brief Field Revert offset 0
static ::UnityEngine::Timeline::____UnityEngine__Timeline__ActivationTrack__PostPlaybackState const Revert;

/// @brief Field LeaveAsIs offset 0
static ::UnityEngine::Timeline::____UnityEngine__Timeline__ActivationTrack__PostPlaybackState const LeaveAsIs;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
// Type: UnityEngine.Timeline::ActivationTrack
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14073))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14039))
// CS Name: UnityEngine.Timeline.ActivationTrack
class CORDL_TYPE ActivationTrack : public ::UnityEngine::Timeline::TrackAsset {
public:
// Declarations
using PostPlaybackState = ::UnityEngine::Timeline::____UnityEngine__Timeline__ActivationTrack__PostPlaybackState;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~ActivationTrack() = default;

// Ctor Parameters [CppParam { name: "", ty: "ActivationTrack", modifiers: " const&", def_value: None }]
constexpr ActivationTrack(ActivationTrack const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ActivationTrack", modifiers: "&&", def_value: None }]
constexpr ActivationTrack(ActivationTrack&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ActivationTrack(void* ptr) noexcept : ::UnityEngine::Timeline::TrackAsset(ptr) {
}


  constexpr ActivationTrack& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ActivationTrack& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ActivationTrack& operator=(ActivationTrack&& o) noexcept = default;
  constexpr ActivationTrack& operator=(ActivationTrack const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Timeline::____UnityEngine__Timeline__ActivationTrack__PostPlaybackState __declspec(property(get=__get_m_PostPlaybackState, put=__set_m_PostPlaybackState))  m_PostPlaybackState;

constexpr void __set_m_PostPlaybackState(::UnityEngine::Timeline::____UnityEngine__Timeline__ActivationTrack__PostPlaybackState value) ;

constexpr ::UnityEngine::Timeline::____UnityEngine__Timeline__ActivationTrack__PostPlaybackState __get_m_PostPlaybackState() const;

 ::UnityEngine::Timeline::ActivationMixerPlayable __declspec(property(get=__get_m_ActivationMixer, put=__set_m_ActivationMixer))  m_ActivationMixer;

constexpr void __set_m_ActivationMixer(::UnityEngine::Timeline::ActivationMixerPlayable value) ;

constexpr ::UnityEngine::Timeline::ActivationMixerPlayable __get_m_ActivationMixer() const;


// Properties

 ::UnityEngine::Timeline::____UnityEngine__Timeline__ActivationTrack__PostPlaybackState __declspec(property(get=get_postPlaybackState, put=set_postPlaybackState))  postPlaybackState;


// Methods

/// @brief Method CanCompileClips addr 0x2ab6398 size 0x5c virtual true final false
 bool CanCompileClips() ;

/// @brief Method get_postPlaybackState addr 0x2ab64a4 size 0x8 virtual false final false
 ::UnityEngine::Timeline::____UnityEngine__Timeline__ActivationTrack__PostPlaybackState get_postPlaybackState() ;

/// @brief Method set_postPlaybackState addr 0x2ab64ac size 0x14 virtual false final false
 void set_postPlaybackState(::UnityEngine::Timeline::____UnityEngine__Timeline__ActivationTrack__PostPlaybackState value) ;

/// @brief Method CreateTrackMixer addr 0x2ab64d4 size 0xe4 virtual true final false
 ::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject go, int32_t inputCount) ;

/// @brief Method UpdateTrackMode addr 0x2ab64c0 size 0x14 virtual false final false
 void UpdateTrackMode() ;

/// @brief Method GatherProperties addr 0x2ab65b8 size 0x12c virtual true final false
 void GatherProperties(::UnityEngine::Playables::PlayableDirector director, ::UnityEngine::Timeline::IPropertyCollector driver) ;

/// @brief Method OnCreateClip addr 0x2ab685c size 0x50 virtual true final false
 void OnCreateClip(::UnityEngine::Timeline::TimelineClip clip) ;

// Ctor Parameters []
explicit ActivationTrack() ;

/// @brief Method .ctor addr 0x2ab68b0 size 0x5c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::____UnityEngine__Timeline__ActivationTrack__PostPlaybackState, "UnityEngine.Timeline", "ActivationTrack/PostPlaybackState");
NEED_NO_BOX(::UnityEngine::Timeline::ActivationTrack);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::ActivationTrack, "UnityEngine.Timeline", "ActivationTrack");
