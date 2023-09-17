#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace {
namespace UnityEngine::Timeline {
class TrackAsset;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class ICurvesOwner;
}
// Type: UnityEngine.Timeline::ICurvesOwner
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14055))
// CS Name: UnityEngine.Timeline.ICurvesOwner
class CORDL_TYPE ICurvesOwner : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ICurvesOwner() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ICurvesOwner(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::UnityEngine::AnimationClip __declspec(property(get=get_curves))  curves;

 bool __declspec(property(get=get_hasCurves))  hasCurves;

 double_t __declspec(property(get=get_duration))  duration;

 ::StringW __declspec(property(get=get_defaultCurvesName))  defaultCurvesName;

 ::UnityEngine::Object __declspec(property(get=get_asset))  asset;

 ::UnityEngine::Object __declspec(property(get=get_assetOwner))  assetOwner;

 ::UnityEngine::Timeline::TrackAsset __declspec(property(get=get_targetTrack))  targetTrack;


// Methods

/// @brief Method get_curves addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::AnimationClip get_curves() ;

/// @brief Method get_hasCurves addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_hasCurves() ;

/// @brief Method get_duration addr 0x0 size 0xffffffffffffffff virtual true final false
 double_t get_duration() ;

/// @brief Method CreateCurves addr 0x0 size 0xffffffffffffffff virtual true final false
 void CreateCurves(::StringW curvesClipName) ;

/// @brief Method get_defaultCurvesName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_defaultCurvesName() ;

/// @brief Method get_asset addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Object get_asset() ;

/// @brief Method get_assetOwner addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Object get_assetOwner() ;

/// @brief Method get_targetTrack addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Timeline::TrackAsset get_targetTrack() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Timeline::ICurvesOwner);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::ICurvesOwner, "UnityEngine.Timeline", "ICurvesOwner");
