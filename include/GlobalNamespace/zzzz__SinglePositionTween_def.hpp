#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
namespace GlobalNamespace {
class CustomTweenBehaviour;
}
namespace UnityEngine {
template<typename T>
struct ExposedReference_1;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine::Timeline {
class ITimelineClipAsset;
}
namespace UnityEngine::Timeline {
struct ClipCaps;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class SinglePositionTween;
}
// Type: ::SinglePositionTween
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10358))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6070))
// CS Name: SinglePositionTween
class CORDL_TYPE SinglePositionTween : public UnityEngine::Playables::PlayableAsset {
public:
// Declarations
/// @brief Convert operator to UnityEngine::Timeline::ITimelineClipAsset
constexpr operator  UnityEngine::Timeline::ITimelineClipAsset() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SinglePositionTween() = default;

// Ctor Parameters [CppParam { name: "", ty: "SinglePositionTween", modifiers: " const&", def_value: None }]
constexpr SinglePositionTween(SinglePositionTween const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SinglePositionTween", modifiers: "&&", def_value: None }]
constexpr SinglePositionTween(SinglePositionTween&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SinglePositionTween(void* ptr) noexcept : UnityEngine::Playables::PlayableAsset(ptr) {
}


  constexpr SinglePositionTween& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SinglePositionTween& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SinglePositionTween& operator=(SinglePositionTween&& o) noexcept = default;
  constexpr SinglePositionTween& operator=(SinglePositionTween const& o) noexcept = default;
                


// Fields

 UnityEngine::ExposedReference_1<UnityEngine::Transform> __declspec(property(get=__get_transformReference, put=__set_transformReference))  transformReference;

constexpr void __set_transformReference(UnityEngine::ExposedReference_1<UnityEngine::Transform> value) ;

constexpr UnityEngine::ExposedReference_1<UnityEngine::Transform> __get_transformReference() const;

 GlobalNamespace::CustomTweenBehaviour __declspec(property(get=__get_template, put=__set_template))  template;

constexpr void __set_template(GlobalNamespace::CustomTweenBehaviour value) ;

constexpr GlobalNamespace::CustomTweenBehaviour __get_template() const;


// Properties

 UnityEngine::Timeline::ClipCaps __declspec(property(get=get_clipCaps))  clipCaps;


// Methods

/// @brief Method get_clipCaps addr 0x21b3034 size 0x8 virtual true final true
 UnityEngine::Timeline::ClipCaps get_clipCaps() ;

/// @brief Method CreatePlayable addr 0x21b303c size 0x1c4 virtual true final false
 UnityEngine::Playables::Playable CreatePlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject go) ;

// Ctor Parameters []
explicit SinglePositionTween() ;

/// @brief Method .ctor addr 0x21b3200 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SinglePositionTween);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SinglePositionTween, "", "SinglePositionTween");
