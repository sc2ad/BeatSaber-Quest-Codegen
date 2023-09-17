#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
// Forward declare root types
namespace GlobalNamespace {
class MeshRendererSwitchEventEffect;
}
// Type: ::MeshRendererSwitchEventEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5055))
// CS Name: MeshRendererSwitchEventEffect
class CORDL_TYPE MeshRendererSwitchEventEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MeshRendererSwitchEventEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "MeshRendererSwitchEventEffect", modifiers: " const&", def_value: None }]
constexpr MeshRendererSwitchEventEffect(MeshRendererSwitchEventEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MeshRendererSwitchEventEffect", modifiers: "&&", def_value: None }]
constexpr MeshRendererSwitchEventEffect(MeshRendererSwitchEventEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MeshRendererSwitchEventEffect(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MeshRendererSwitchEventEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MeshRendererSwitchEventEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MeshRendererSwitchEventEffect& operator=(MeshRendererSwitchEventEffect&& o) noexcept = default;
  constexpr MeshRendererSwitchEventEffect& operator=(MeshRendererSwitchEventEffect const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::BasicBeatmapEventType __declspec(property(get=__get__beatmapEvent, put=__set__beatmapEvent))  _beatmapEvent;

constexpr void __set__beatmapEvent(::GlobalNamespace::BasicBeatmapEventType value) ;

constexpr ::GlobalNamespace::BasicBeatmapEventType __get__beatmapEvent() const;

 ::ArrayW<::UnityEngine::MeshRenderer> __declspec(property(get=__get__deactivateOnBoostRenderers, put=__set__deactivateOnBoostRenderers))  _deactivateOnBoostRenderers;

constexpr void __set__deactivateOnBoostRenderers(::ArrayW<::UnityEngine::MeshRenderer> value) ;

constexpr ::ArrayW<::UnityEngine::MeshRenderer> __get__deactivateOnBoostRenderers() const;

 ::ArrayW<::UnityEngine::MeshRenderer> __declspec(property(get=__get__activateOnBoostRenderers, put=__set__activateOnBoostRenderers))  _activateOnBoostRenderers;

constexpr void __set__activateOnBoostRenderers(::ArrayW<::UnityEngine::MeshRenderer> value) ;

constexpr ::ArrayW<::UnityEngine::MeshRenderer> __get__activateOnBoostRenderers() const;

 ::GlobalNamespace::BeatmapCallbacksController __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController))  _beatmapCallbacksController;

constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController value) ;

constexpr ::GlobalNamespace::BeatmapCallbacksController __get__beatmapCallbacksController() const;

 ::GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__beatmapDataCallbackWrapper, put=__set__beatmapDataCallbackWrapper))  _beatmapDataCallbackWrapper;

constexpr void __set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper __get__beatmapDataCallbackWrapper() const;


// Methods

/// @brief Method Start addr 0x226438c size 0x124 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x22644b0 size 0x1c virtual false final false
 void OnDestroy() ;

/// @brief Method HandleBeatmapEvent addr 0x22644cc size 0x20 virtual false final false
 void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData basicBeatmapEventData) ;

/// @brief Method ToggleObjects addr 0x22644ec size 0xc4 virtual false final false
 void ToggleObjects(bool isBoostOn) ;

// Ctor Parameters []
explicit MeshRendererSwitchEventEffect() ;

/// @brief Method .ctor addr 0x22645b0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MeshRendererSwitchEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MeshRendererSwitchEventEffect, "", "MeshRendererSwitchEventEffect");
