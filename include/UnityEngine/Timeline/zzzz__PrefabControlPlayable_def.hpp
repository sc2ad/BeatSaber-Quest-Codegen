#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
namespace {
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
template<typename T>
struct ScriptPlayable_1;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class PrefabControlPlayable;
}
// Type: UnityEngine.Timeline::PrefabControlPlayable
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10361))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14119))
// CS Name: UnityEngine.Timeline.PrefabControlPlayable
class CORDL_TYPE PrefabControlPlayable : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PrefabControlPlayable() = default;

// Ctor Parameters [CppParam { name: "", ty: "PrefabControlPlayable", modifiers: " const&", def_value: None }]
constexpr PrefabControlPlayable(PrefabControlPlayable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PrefabControlPlayable", modifiers: "&&", def_value: None }]
constexpr PrefabControlPlayable(PrefabControlPlayable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PrefabControlPlayable(void* ptr) noexcept : ::UnityEngine::Playables::PlayableBehaviour(ptr) {
}


  constexpr PrefabControlPlayable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PrefabControlPlayable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PrefabControlPlayable& operator=(PrefabControlPlayable&& o) noexcept = default;
  constexpr PrefabControlPlayable& operator=(PrefabControlPlayable const& o) noexcept = default;
                


// Fields

 ::UnityEngine::GameObject __declspec(property(get=__get_m_Instance, put=__set_m_Instance))  m_Instance;

constexpr void __set_m_Instance(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get_m_Instance() const;


// Properties

 ::UnityEngine::GameObject __declspec(property(get=get_prefabInstance))  prefabInstance;


// Methods

/// @brief Method Create addr 0x2ad40b8 size 0x144 virtual false final false
static ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::PrefabControlPlayable> Create(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject prefabGameObject, ::UnityEngine::Transform parentTransform) ;

/// @brief Method get_prefabInstance addr 0x2ad4484 size 0x8 virtual false final false
 ::UnityEngine::GameObject get_prefabInstance() ;

/// @brief Method Initialize addr 0x2ad41fc size 0x288 virtual false final false
 ::UnityEngine::GameObject Initialize(::UnityEngine::GameObject prefabGameObject, ::UnityEngine::Transform parentTransform) ;

/// @brief Method OnPlayableDestroy addr 0x2ad47d4 size 0xac virtual true final false
 void OnPlayableDestroy(::UnityEngine::Playables::Playable playable) ;

/// @brief Method OnBehaviourPlay addr 0x2ad4880 size 0x88 virtual true final false
 void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info) ;

/// @brief Method OnBehaviourPause addr 0x2ad4908 size 0xa8 virtual true final false
 void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info) ;

/// @brief Method SetHideFlagsRecursive addr 0x2ad448c size 0x348 virtual false final false
static void SetHideFlagsRecursive(::UnityEngine::GameObject gameObject) ;

// Ctor Parameters []
explicit PrefabControlPlayable() ;

/// @brief Method .ctor addr 0x2ad49b0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Timeline::PrefabControlPlayable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::PrefabControlPlayable, "UnityEngine.Timeline", "PrefabControlPlayable");
