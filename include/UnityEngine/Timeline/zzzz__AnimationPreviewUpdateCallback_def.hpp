#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::Animations {
struct AnimationPlayableOutput;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Timeline {
class ITimelineEvaluateCallback;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Animations {
class IAnimationWindowPreview;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class AnimationPreviewUpdateCallback;
}
// Type: UnityEngine.Timeline::AnimationPreviewUpdateCallback
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14047))
// CS Name: UnityEngine.Timeline.AnimationPreviewUpdateCallback
class CORDL_TYPE AnimationPreviewUpdateCallback : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to UnityEngine::Timeline::ITimelineEvaluateCallback
constexpr operator  UnityEngine::Timeline::ITimelineEvaluateCallback() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~AnimationPreviewUpdateCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimationPreviewUpdateCallback", modifiers: " const&", def_value: None }]
constexpr AnimationPreviewUpdateCallback(AnimationPreviewUpdateCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimationPreviewUpdateCallback", modifiers: "&&", def_value: None }]
constexpr AnimationPreviewUpdateCallback(AnimationPreviewUpdateCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AnimationPreviewUpdateCallback(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AnimationPreviewUpdateCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AnimationPreviewUpdateCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AnimationPreviewUpdateCallback& operator=(AnimationPreviewUpdateCallback&& o) noexcept = default;
  constexpr AnimationPreviewUpdateCallback& operator=(AnimationPreviewUpdateCallback const& o) noexcept = default;
                


// Fields

 UnityEngine::Animations::AnimationPlayableOutput __declspec(property(get=__get_m_Output, put=__set_m_Output))  m_Output;

constexpr void __set_m_Output(UnityEngine::Animations::AnimationPlayableOutput value) ;

constexpr UnityEngine::Animations::AnimationPlayableOutput __get_m_Output() const;

 UnityEngine::Playables::PlayableGraph __declspec(property(get=__get_m_Graph, put=__set_m_Graph))  m_Graph;

constexpr void __set_m_Graph(UnityEngine::Playables::PlayableGraph value) ;

constexpr UnityEngine::Playables::PlayableGraph __get_m_Graph() const;

 System::Collections::Generic::List_1<UnityEngine::Animations::IAnimationWindowPreview> __declspec(property(get=__get_m_PreviewComponents, put=__set_m_PreviewComponents))  m_PreviewComponents;

constexpr void __set_m_PreviewComponents(System::Collections::Generic::List_1<UnityEngine::Animations::IAnimationWindowPreview> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Animations::IAnimationWindowPreview> __get_m_PreviewComponents() const;


// Methods

static UnityEngine::Timeline::AnimationPreviewUpdateCallback New_ctor(UnityEngine::Animations::AnimationPlayableOutput output) ;

/// @brief Method .ctor addr 0x2ab7f9c size 0xc8 virtual false final false
 void _ctor(UnityEngine::Animations::AnimationPlayableOutput output) ;

/// @brief Method Evaluate addr 0x2ab8064 size 0x1d4 virtual true final true
 void Evaluate() ;

/// @brief Method FetchPreviewComponents addr 0x2ab8238 size 0x124 virtual false final false
 void FetchPreviewComponents() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::AnimationPreviewUpdateCallback);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::AnimationPreviewUpdateCallback, "UnityEngine.Timeline", "AnimationPreviewUpdateCallback");
