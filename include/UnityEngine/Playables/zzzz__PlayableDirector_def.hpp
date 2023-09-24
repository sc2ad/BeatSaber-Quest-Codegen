#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
namespace UnityEngine::Playables {
struct DirectorWrapMode;
}
namespace UnityEngine {
class IExposedPropertyTable;
}
namespace UnityEngine::Playables {
class PlayableAsset;
}
namespace UnityEngine::Playables {
struct PlayState;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct PropertyName;
}
namespace UnityEngine::Playables {
struct FrameRate;
}
namespace UnityEngine {
class ScriptableObject;
}
// Forward declare root types
namespace UnityEngine::Playables {
class PlayableDirector;
}
// Type: UnityEngine.Playables::PlayableDirector
namespace UnityEngine::Playables {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10129))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15966))
// CS Name: UnityEngine.Playables.PlayableDirector
class CORDL_TYPE PlayableDirector : public UnityEngine::Behaviour {
public:
// Declarations
/// @brief Convert operator to UnityEngine::IExposedPropertyTable
constexpr operator  UnityEngine::IExposedPropertyTable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~PlayableDirector() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayableDirector", modifiers: " const&", def_value: None }]
constexpr PlayableDirector(PlayableDirector const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayableDirector", modifiers: "&&", def_value: None }]
constexpr PlayableDirector(PlayableDirector&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayableDirector(void* ptr) noexcept : UnityEngine::Behaviour(ptr) {
}


  constexpr PlayableDirector& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayableDirector& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayableDirector& operator=(PlayableDirector&& o) noexcept = default;
  constexpr PlayableDirector& operator=(PlayableDirector const& o) noexcept = default;
                


// Fields

 System::Action_1<UnityEngine::Playables::PlayableDirector> __declspec(property(get=__get_played, put=__set_played))  played;

constexpr void __set_played(System::Action_1<UnityEngine::Playables::PlayableDirector> value) ;

constexpr System::Action_1<UnityEngine::Playables::PlayableDirector> __get_played() const;

 System::Action_1<UnityEngine::Playables::PlayableDirector> __declspec(property(get=__get_paused, put=__set_paused))  paused;

constexpr void __set_paused(System::Action_1<UnityEngine::Playables::PlayableDirector> value) ;

constexpr System::Action_1<UnityEngine::Playables::PlayableDirector> __get_paused() const;

 System::Action_1<UnityEngine::Playables::PlayableDirector> __declspec(property(get=__get_stopped, put=__set_stopped))  stopped;

constexpr void __set_stopped(System::Action_1<UnityEngine::Playables::PlayableDirector> value) ;

constexpr System::Action_1<UnityEngine::Playables::PlayableDirector> __get_stopped() const;


// Properties

 UnityEngine::Playables::PlayState __declspec(property(get=get_state))  state;

 UnityEngine::Playables::DirectorWrapMode __declspec(property(get=get_extrapolationMode))  extrapolationMode;

 UnityEngine::Playables::PlayableAsset __declspec(property(get=get_playableAsset))  playableAsset;

 UnityEngine::Playables::PlayableGraph __declspec(property(get=get_playableGraph))  playableGraph;

 double_t __declspec(property(get=get_time, put=set_time))  time;

 double_t __declspec(property(get=get_duration))  duration;


// Methods

/// @brief Method get_state addr 0x2b82548 size 0x3c virtual false final false
 UnityEngine::Playables::PlayState get_state() ;

/// @brief Method get_extrapolationMode addr 0x2b825c0 size 0x3c virtual false final false
 UnityEngine::Playables::DirectorWrapMode get_extrapolationMode() ;

/// @brief Method get_playableAsset addr 0x2b82638 size 0xa0 virtual false final false
 UnityEngine::Playables::PlayableAsset get_playableAsset() ;

/// @brief Method get_playableGraph addr 0x2b82714 size 0x4 virtual false final false
 UnityEngine::Playables::PlayableGraph get_playableGraph() ;

/// @brief Method Play addr 0x2b8276c size 0x48 virtual false final false
 void Play(UnityEngine::Playables::FrameRate frameRate) ;

/// @brief Method SetGenericBinding addr 0x2b827fc size 0x54 virtual false final false
 void SetGenericBinding(UnityEngine::Object key, UnityEngine::Object value) ;

/// @brief Method set_time addr 0x2b828a4 size 0x4c virtual false final false
 void set_time(double_t value) ;

/// @brief Method get_time addr 0x2b828f0 size 0x3c virtual false final false
 double_t get_time() ;

/// @brief Method get_duration addr 0x2b8292c size 0x3c virtual false final false
 double_t get_duration() ;

/// @brief Method Evaluate addr 0x2b82968 size 0x3c virtual false final false
 void Evaluate() ;

/// @brief Method PlayOnFrame addr 0x2b827b4 size 0x48 virtual false final false
 void PlayOnFrame(UnityEngine::Playables::FrameRate frameRate) ;

/// @brief Method Play addr 0x2b829e8 size 0x3c virtual false final false
 void Play() ;

/// @brief Method Stop addr 0x2b82a24 size 0x3c virtual false final false
 void Stop() ;

/// @brief Method Pause addr 0x2b82a60 size 0x3c virtual false final false
 void Pause() ;

/// @brief Method SetReferenceValue addr 0x2b82a9c size 0x58 virtual true final true
 void SetReferenceValue(UnityEngine::PropertyName id, UnityEngine::Object value) ;

/// @brief Method GetReferenceValue addr 0x2b82b48 size 0x58 virtual true final true
 UnityEngine::Object GetReferenceValue(UnityEngine::PropertyName id, ByRef<bool> idValid) ;

/// @brief Method GetGenericBinding addr 0x2b82bf4 size 0x44 virtual false final false
 UnityEngine::Object GetGenericBinding(UnityEngine::Object key) ;

/// @brief Method GetPlayState addr 0x2b82584 size 0x3c virtual false final false
 UnityEngine::Playables::PlayState GetPlayState() ;

/// @brief Method GetWrapMode addr 0x2b825fc size 0x3c virtual false final false
 UnityEngine::Playables::DirectorWrapMode GetWrapMode() ;

/// @brief Method GetGraphHandle addr 0x2b82718 size 0x54 virtual false final false
 UnityEngine::Playables::PlayableGraph GetGraphHandle() ;

/// @brief Method Internal_SetGenericBinding addr 0x2b82850 size 0x54 virtual false final false
 void Internal_SetGenericBinding(UnityEngine::Object key, UnityEngine::Object value) ;

/// @brief Method Internal_GetPlayableAsset addr 0x2b826d8 size 0x3c virtual false final false
 UnityEngine::ScriptableObject Internal_GetPlayableAsset() ;

/// @brief Method SendOnPlayableDirectorPlay addr 0x2b82c7c size 0x20 virtual false final false
 void SendOnPlayableDirectorPlay() ;

/// @brief Method SendOnPlayableDirectorPause addr 0x2b82c9c size 0x20 virtual false final false
 void SendOnPlayableDirectorPause() ;

/// @brief Method SendOnPlayableDirectorStop addr 0x2b82cbc size 0x20 virtual false final false
 void SendOnPlayableDirectorStop() ;

/// @brief Method PlayOnFrame_Injected addr 0x2b829a4 size 0x44 virtual false final false
 void PlayOnFrame_Injected(ByRef<UnityEngine::Playables::FrameRate> frameRate) ;

/// @brief Method SetReferenceValue_Injected addr 0x2b82af4 size 0x54 virtual true final true
 void SetReferenceValue_Injected(ByRef<UnityEngine::PropertyName> id, UnityEngine::Object value) ;

/// @brief Method GetReferenceValue_Injected addr 0x2b82ba0 size 0x54 virtual true final true
 UnityEngine::Object GetReferenceValue_Injected(ByRef<UnityEngine::PropertyName> id, ByRef<bool> idValid) ;

/// @brief Method GetGraphHandle_Injected addr 0x2b82c38 size 0x44 virtual false final false
 void GetGraphHandle_Injected(ByRef<UnityEngine::Playables::PlayableGraph> ret) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Playables
NEED_NO_BOX(UnityEngine::Playables::PlayableDirector);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::PlayableDirector, "UnityEngine.Playables", "PlayableDirector");
