#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine::Timeline {
struct ClipCaps;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine::Timeline {
class ITimelineClipAsset;
}
namespace UnityEngine::Timeline {
class IPropertyCollector;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine::Playables {
class PlayableAsset;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::Timeline {
class IPropertyPreview;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine::Timeline {
struct ____UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine {
template<typename T>
struct ExposedReference_1;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class ControlPlayableAsset;
}
namespace UnityEngine::Timeline {
class ____UnityEngine__Timeline__ControlPlayableAsset___GetControlableScripts_d__39;
}
// Type: ::<GetControlableScripts>d__39
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14084))
// CS Name: UnityEngine.Timeline.ControlPlayableAsset::<GetControlableScripts>d__39
class CORDL_TYPE ____UnityEngine__Timeline__ControlPlayableAsset___GetControlableScripts_d__39 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::UnityEngine::MonoBehaviour>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::MonoBehaviour>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~____UnityEngine__Timeline__ControlPlayableAsset___GetControlableScripts_d__39() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Timeline__ControlPlayableAsset___GetControlableScripts_d__39", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__Timeline__ControlPlayableAsset___GetControlableScripts_d__39(____UnityEngine__Timeline__ControlPlayableAsset___GetControlableScripts_d__39 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Timeline__ControlPlayableAsset___GetControlableScripts_d__39", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__Timeline__ControlPlayableAsset___GetControlableScripts_d__39(____UnityEngine__Timeline__ControlPlayableAsset___GetControlableScripts_d__39&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__Timeline__ControlPlayableAsset___GetControlableScripts_d__39(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__Timeline__ControlPlayableAsset___GetControlableScripts_d__39& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__Timeline__ControlPlayableAsset___GetControlableScripts_d__39& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__Timeline__ControlPlayableAsset___GetControlableScripts_d__39& operator=(____UnityEngine__Timeline__ControlPlayableAsset___GetControlableScripts_d__39&& o) noexcept = default;
  constexpr ____UnityEngine__Timeline__ControlPlayableAsset___GetControlableScripts_d__39& operator=(____UnityEngine__Timeline__ControlPlayableAsset___GetControlableScripts_d__39 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::UnityEngine::MonoBehaviour __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::UnityEngine::MonoBehaviour value) ;

constexpr ::UnityEngine::MonoBehaviour __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 ::UnityEngine::GameObject __declspec(property(get=__get_root, put=__set_root))  root;

constexpr void __set_root(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get_root() const;

 ::UnityEngine::GameObject __declspec(property(get=__get___3__root, put=__set___3__root))  __3__root;

constexpr void __set___3__root(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get___3__root() const;

 ::ArrayW<::UnityEngine::MonoBehaviour> __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1))  __7__wrap1;

constexpr void __set___7__wrap1(::ArrayW<::UnityEngine::MonoBehaviour> value) ;

constexpr ::ArrayW<::UnityEngine::MonoBehaviour> __get___7__wrap1() const;

 int32_t __declspec(property(get=__get___7__wrap2, put=__set___7__wrap2))  __7__wrap2;

constexpr void __set___7__wrap2(int32_t value) ;

constexpr int32_t __get___7__wrap2() const;


// Properties

 ::UnityEngine::MonoBehaviour __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_MonoBehaviour__get_Current))  System_Collections_Generic_IEnumerator_UnityEngine_MonoBehaviour__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____UnityEngine__Timeline__ControlPlayableAsset___GetControlableScripts_d__39(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2accb18 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2ace368 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2ace36c size 0x13c virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.MonoBehaviour>.get_Current addr 0x2ace4a8 size 0x8 virtual true final true
 ::UnityEngine::MonoBehaviour System_Collections_Generic_IEnumerator_UnityEngine_MonoBehaviour__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2ace4b0 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2ace4f0 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.MonoBehaviour>.GetEnumerator addr 0x2ace4f8 size 0xa4 virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::MonoBehaviour> System_Collections_Generic_IEnumerable_UnityEngine_MonoBehaviour__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2ace59c size 0x4 virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
// Type: UnityEngine.Timeline::ControlPlayableAsset
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10358))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14085))
// CS Name: UnityEngine.Timeline.ControlPlayableAsset
class CORDL_TYPE ControlPlayableAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
// Declarations
using _GetControlableScripts_d__39 = ::UnityEngine::Timeline::____UnityEngine__Timeline__ControlPlayableAsset___GetControlableScripts_d__39;

/// @brief Convert operator to ::UnityEngine::Timeline::IPropertyPreview
constexpr operator  ::UnityEngine::Timeline::IPropertyPreview() const noexcept;

/// @brief Convert operator to ::UnityEngine::Timeline::ITimelineClipAsset
constexpr operator  ::UnityEngine::Timeline::ITimelineClipAsset() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~ControlPlayableAsset() = default;

// Ctor Parameters [CppParam { name: "", ty: "ControlPlayableAsset", modifiers: " const&", def_value: None }]
constexpr ControlPlayableAsset(ControlPlayableAsset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ControlPlayableAsset", modifiers: "&&", def_value: None }]
constexpr ControlPlayableAsset(ControlPlayableAsset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ControlPlayableAsset(void* ptr) noexcept : ::UnityEngine::Playables::PlayableAsset(ptr) {
}


  constexpr ControlPlayableAsset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ControlPlayableAsset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ControlPlayableAsset& operator=(ControlPlayableAsset&& o) noexcept = default;
  constexpr ControlPlayableAsset& operator=(ControlPlayableAsset const& o) noexcept = default;
                


// Fields

/// @brief Field k_MaxRandInt offset 0
static constexpr int32_t  k_MaxRandInt{10000};

static ::System::Collections::Generic::List_1<::UnityEngine::Playables::PlayableDirector> __declspec(property(get=__get_k_EmptyDirectorsList, put=__set_k_EmptyDirectorsList))  k_EmptyDirectorsList;

static void __set_k_EmptyDirectorsList(::System::Collections::Generic::List_1<::UnityEngine::Playables::PlayableDirector> value) ;

static ::System::Collections::Generic::List_1<::UnityEngine::Playables::PlayableDirector> __get_k_EmptyDirectorsList() ;

static ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem> __declspec(property(get=__get_k_EmptyParticlesList, put=__set_k_EmptyParticlesList))  k_EmptyParticlesList;

static void __set_k_EmptyParticlesList(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem> value) ;

static ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem> __get_k_EmptyParticlesList() ;

static ::System::Collections::Generic::HashSet_1<::UnityEngine::ParticleSystem> __declspec(property(get=__get_s_SubEmitterCollector, put=__set_s_SubEmitterCollector))  s_SubEmitterCollector;

static void __set_s_SubEmitterCollector(::System::Collections::Generic::HashSet_1<::UnityEngine::ParticleSystem> value) ;

static ::System::Collections::Generic::HashSet_1<::UnityEngine::ParticleSystem> __get_s_SubEmitterCollector() ;

 ::UnityEngine::ExposedReference_1<::UnityEngine::GameObject> __declspec(property(get=__get_sourceGameObject, put=__set_sourceGameObject))  sourceGameObject;

constexpr void __set_sourceGameObject(::UnityEngine::ExposedReference_1<::UnityEngine::GameObject> value) ;

constexpr ::UnityEngine::ExposedReference_1<::UnityEngine::GameObject> __get_sourceGameObject() const;

 ::UnityEngine::GameObject __declspec(property(get=__get_prefabGameObject, put=__set_prefabGameObject))  prefabGameObject;

constexpr void __set_prefabGameObject(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get_prefabGameObject() const;

 bool __declspec(property(get=__get_updateParticle, put=__set_updateParticle))  updateParticle;

constexpr void __set_updateParticle(bool value) ;

constexpr bool __get_updateParticle() const;

 uint32_t __declspec(property(get=__get_particleRandomSeed, put=__set_particleRandomSeed))  particleRandomSeed;

constexpr void __set_particleRandomSeed(uint32_t value) ;

constexpr uint32_t __get_particleRandomSeed() const;

 bool __declspec(property(get=__get_updateDirector, put=__set_updateDirector))  updateDirector;

constexpr void __set_updateDirector(bool value) ;

constexpr bool __get_updateDirector() const;

 bool __declspec(property(get=__get_updateITimeControl, put=__set_updateITimeControl))  updateITimeControl;

constexpr void __set_updateITimeControl(bool value) ;

constexpr bool __get_updateITimeControl() const;

 bool __declspec(property(get=__get_searchHierarchy, put=__set_searchHierarchy))  searchHierarchy;

constexpr void __set_searchHierarchy(bool value) ;

constexpr bool __get_searchHierarchy() const;

 bool __declspec(property(get=__get_active, put=__set_active))  active;

constexpr void __set_active(bool value) ;

constexpr bool __get_active() const;

 ::UnityEngine::Timeline::____UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState __declspec(property(get=__get_postPlayback, put=__set_postPlayback))  postPlayback;

constexpr void __set_postPlayback(::UnityEngine::Timeline::____UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState value) ;

constexpr ::UnityEngine::Timeline::____UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState __get_postPlayback() const;

 ::UnityEngine::Playables::PlayableAsset __declspec(property(get=__get_m_ControlDirectorAsset, put=__set_m_ControlDirectorAsset))  m_ControlDirectorAsset;

constexpr void __set_m_ControlDirectorAsset(::UnityEngine::Playables::PlayableAsset value) ;

constexpr ::UnityEngine::Playables::PlayableAsset __get_m_ControlDirectorAsset() const;

 double_t __declspec(property(get=__get_m_Duration, put=__set_m_Duration))  m_Duration;

constexpr void __set_m_Duration(double_t value) ;

constexpr double_t __get_m_Duration() const;

 bool __declspec(property(get=__get_m_SupportLoop, put=__set_m_SupportLoop))  m_SupportLoop;

constexpr void __set_m_SupportLoop(bool value) ;

constexpr bool __get_m_SupportLoop() const;

static ::System::Collections::Generic::HashSet_1<::UnityEngine::Playables::PlayableDirector> __declspec(property(get=__get_s_ProcessedDirectors, put=__set_s_ProcessedDirectors))  s_ProcessedDirectors;

static void __set_s_ProcessedDirectors(::System::Collections::Generic::HashSet_1<::UnityEngine::Playables::PlayableDirector> value) ;

static ::System::Collections::Generic::HashSet_1<::UnityEngine::Playables::PlayableDirector> __get_s_ProcessedDirectors() ;

static ::System::Collections::Generic::HashSet_1<::UnityEngine::GameObject> __declspec(property(get=__get_s_CreatedPrefabs, put=__set_s_CreatedPrefabs))  s_CreatedPrefabs;

static void __set_s_CreatedPrefabs(::System::Collections::Generic::HashSet_1<::UnityEngine::GameObject> value) ;

static ::System::Collections::Generic::HashSet_1<::UnityEngine::GameObject> __get_s_CreatedPrefabs() ;

 bool __declspec(property(get=__get__controllingDirectors_k__BackingField, put=__set__controllingDirectors_k__BackingField))  _controllingDirectors_k__BackingField;

constexpr void __set__controllingDirectors_k__BackingField(bool value) ;

constexpr bool __get__controllingDirectors_k__BackingField() const;

 bool __declspec(property(get=__get__controllingParticles_k__BackingField, put=__set__controllingParticles_k__BackingField))  _controllingParticles_k__BackingField;

constexpr void __set__controllingParticles_k__BackingField(bool value) ;

constexpr bool __get__controllingParticles_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_controllingDirectors, put=set_controllingDirectors))  controllingDirectors;

 bool __declspec(property(get=get_controllingParticles, put=set_controllingParticles))  controllingParticles;

 double_t __declspec(property(get=get_duration))  duration;

 ::UnityEngine::Timeline::ClipCaps __declspec(property(get=get_clipCaps))  clipCaps;


// Methods

/// @brief Method get_controllingDirectors addr 0x2aca4ac size 0x8 virtual false final false
 bool get_controllingDirectors() ;

/// @brief Method set_controllingDirectors addr 0x2aca4b4 size 0xc virtual false final false
 void set_controllingDirectors(bool value) ;

/// @brief Method get_controllingParticles addr 0x2aca4c0 size 0x8 virtual false final false
 bool get_controllingParticles() ;

/// @brief Method set_controllingParticles addr 0x2aca4c8 size 0xc virtual false final false
 void set_controllingParticles(bool value) ;

/// @brief Method OnEnable addr 0x2aca4d4 size 0x2c virtual false final false
 void OnEnable() ;

/// @brief Method get_duration addr 0x2aca500 size 0x8 virtual true final false
 double_t get_duration() ;

/// @brief Method get_clipCaps addr 0x2aca508 size 0xc virtual true final true
 ::UnityEngine::Timeline::ClipCaps get_clipCaps() ;

/// @brief Method CreatePlayable addr 0x2aca514 size 0x808 virtual true final false
 ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject go) ;

/// @brief Method ConnectPlayablesToMixer addr 0x2acc678 size 0x168 virtual false final false
static ::UnityEngine::Playables::Playable ConnectPlayablesToMixer(::UnityEngine::Playables::PlayableGraph graph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable> playables) ;

/// @brief Method CreateActivationPlayable addr 0x2acb798 size 0x158 virtual false final false
 void CreateActivationPlayable(::UnityEngine::GameObject root, ::UnityEngine::Playables::PlayableGraph graph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable> outplayables) ;

/// @brief Method SearchHierarchyAndConnectParticleSystem addr 0x2acbd9c size 0x438 virtual false final false
 void SearchHierarchyAndConnectParticleSystem(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ParticleSystem> particleSystems, ::UnityEngine::Playables::PlayableGraph graph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable> outplayables) ;

/// @brief Method SearchHierarchyAndConnectDirector addr 0x2acb8f0 size 0x4ac virtual false final false
 void SearchHierarchyAndConnectDirector(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableDirector> directors, ::UnityEngine::Playables::PlayableGraph graph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable> outplayables, bool disableSelfReferences) ;

/// @brief Method SearchHierarchyAndConnectControlableScripts addr 0x2acc24c size 0x42c virtual false final false
static void SearchHierarchyAndConnectControlableScripts(::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour> controlableScripts, ::UnityEngine::Playables::PlayableGraph graph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable> outplayables) ;

/// @brief Method ConnectMixerAndPlayable addr 0x2acc7e0 size 0xc8 virtual false final false
static void ConnectMixerAndPlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Playables::Playable mixer, ::UnityEngine::Playables::Playable playable, int32_t portIndex) ;

/// @brief Method GetComponent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 ::System::Collections::Generic::IList_1<T> GetComponent(::UnityEngine::GameObject gameObject) ;

/// @brief Method GetControlableScripts addr 0x2acc1d4 size 0x78 virtual false final false
static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour> GetControlableScripts(::UnityEngine::GameObject root) ;

/// @brief Method UpdateDurationAndLoopFlag addr 0x2acae8c size 0x90c virtual false final false
 void UpdateDurationAndLoopFlag(::System::Collections::Generic::IList_1<::UnityEngine::Playables::PlayableDirector> directors, ::System::Collections::Generic::IList_1<::UnityEngine::ParticleSystem> particleSystems) ;

/// @brief Method GetControllableParticleSystems addr 0x2acad1c size 0x170 virtual false final false
 ::System::Collections::Generic::IList_1<::UnityEngine::ParticleSystem> GetControllableParticleSystems(::UnityEngine::GameObject go) ;

/// @brief Method GetControllableParticleSystems addr 0x2accb58 size 0x1e8 virtual false final false
static void GetControllableParticleSystems(::UnityEngine::Transform t, ::System::Collections::Generic::ICollection_1<::UnityEngine::ParticleSystem> roots, ::System::Collections::Generic::HashSet_1<::UnityEngine::ParticleSystem> subEmitters) ;

/// @brief Method CacheSubEmitters addr 0x2accd40 size 0x114 virtual false final false
static void CacheSubEmitters(::UnityEngine::ParticleSystem ps, ::System::Collections::Generic::HashSet_1<::UnityEngine::ParticleSystem> subEmitters) ;

/// @brief Method GatherProperties addr 0x2acce54 size 0x30c virtual true final true
 void GatherProperties(::UnityEngine::Playables::PlayableDirector director, ::UnityEngine::Timeline::IPropertyCollector driver) ;

/// @brief Method PreviewParticles addr 0x2acd160 size 0x460 virtual false final false
static void PreviewParticles(::UnityEngine::Timeline::IPropertyCollector driver, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ParticleSystem> particles) ;

/// @brief Method PreviewActivation addr 0x2acd5c0 size 0x37c virtual false final false
static void PreviewActivation(::UnityEngine::Timeline::IPropertyCollector driver, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject> objects) ;

/// @brief Method PreviewTimeControl addr 0x2acd93c size 0x41c virtual false final false
static void PreviewTimeControl(::UnityEngine::Timeline::IPropertyCollector driver, ::UnityEngine::Playables::PlayableDirector director, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour> scripts) ;

/// @brief Method PreviewDirectors addr 0x2acdd58 size 0x3c8 virtual false final false
static void PreviewDirectors(::UnityEngine::Timeline::IPropertyCollector driver, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableDirector> directors) ;

// Ctor Parameters []
explicit ControlPlayableAsset() ;

/// @brief Method .ctor addr 0x2ace120 size 0x84 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Timeline::ControlPlayableAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::ControlPlayableAsset, "UnityEngine.Timeline", "ControlPlayableAsset");
NEED_NO_BOX(::UnityEngine::Timeline::____UnityEngine__Timeline__ControlPlayableAsset___GetControlableScripts_d__39);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::____UnityEngine__Timeline__ControlPlayableAsset___GetControlableScripts_d__39, "UnityEngine.Timeline", "ControlPlayableAsset/<GetControlableScripts>d__39");
