#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::Playables {
class IPlayableAsset;
}
namespace UnityEngine::Playables {
struct PlayableBinding;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine {
class GameObject;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace UnityEngine::Playables {
class PlayableAsset;
}
// Type: UnityEngine.Playables::PlayableAsset
namespace UnityEngine::Playables {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10358))
// CS Name: UnityEngine.Playables.PlayableAsset
class CORDL_TYPE PlayableAsset : public UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Convert operator to UnityEngine::Playables::IPlayableAsset
constexpr operator  UnityEngine::Playables::IPlayableAsset() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PlayableAsset() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayableAsset", modifiers: " const&", def_value: None }]
constexpr PlayableAsset(PlayableAsset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayableAsset", modifiers: "&&", def_value: None }]
constexpr PlayableAsset(PlayableAsset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayableAsset(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr PlayableAsset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayableAsset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayableAsset& operator=(PlayableAsset&& o) noexcept = default;
  constexpr PlayableAsset& operator=(PlayableAsset const& o) noexcept = default;
                


// Properties

 double_t __declspec(property(get=get_duration))  duration;

 System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding> __declspec(property(get=get_outputs))  outputs;


// Methods

/// @brief Method CreatePlayable addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Playables::Playable CreatePlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject owner) ;

/// @brief Method get_duration addr 0x2b7c698 size 0x58 virtual true final false
 double_t get_duration() ;

/// @brief Method get_outputs addr 0x2b7c6f0 size 0x58 virtual true final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding> get_outputs() ;

/// @brief Method Internal_CreatePlayable addr 0x2b7c748 size 0xd8 virtual false final false
static void Internal_CreatePlayable(UnityEngine::Playables::PlayableAsset asset, UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject go, ::cordl_internals::intptr_t ptr) ;

/// @brief Method Internal_GetPlayableAssetDuration addr 0x2b7c878 size 0x28 virtual false final false
static void Internal_GetPlayableAssetDuration(UnityEngine::Playables::PlayableAsset asset, ::cordl_internals::intptr_t ptrToDouble) ;

// Ctor Parameters []
explicit PlayableAsset() ;

/// @brief Method .ctor addr 0x2b7c8a0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Playables
NEED_NO_BOX(UnityEngine::Playables::PlayableAsset);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::PlayableAsset, "UnityEngine.Playables", "PlayableAsset");
