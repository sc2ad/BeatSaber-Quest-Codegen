#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace UnityEngine::SpatialTracking {
struct PoseDataFlags;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace UnityEngine::Experimental::XR::Interaction {
class BasePoseProvider;
}
// Type: UnityEngine.Experimental.XR.Interaction::BasePoseProvider
namespace UnityEngine::Experimental::XR::Interaction {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16023))
// CS Name: UnityEngine.Experimental.XR.Interaction.BasePoseProvider
class CORDL_TYPE BasePoseProvider : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BasePoseProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "BasePoseProvider", modifiers: " const&", def_value: None }]
constexpr BasePoseProvider(BasePoseProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BasePoseProvider", modifiers: "&&", def_value: None }]
constexpr BasePoseProvider(BasePoseProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BasePoseProvider(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BasePoseProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BasePoseProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BasePoseProvider& operator=(BasePoseProvider&& o) noexcept = default;
  constexpr BasePoseProvider& operator=(BasePoseProvider const& o) noexcept = default;
                


// Methods

/// @brief Method GetPoseFromProvider addr 0x2ba2e98 size 0x24 virtual true final false
 UnityEngine::SpatialTracking::PoseDataFlags GetPoseFromProvider(ByRef<UnityEngine::Pose> output) ;

/// @brief Method TryGetPoseFromProvider addr 0x2ba2ebc size 0x88 virtual true final false
 bool TryGetPoseFromProvider(ByRef<UnityEngine::Pose> output) ;

static UnityEngine::Experimental::XR::Interaction::BasePoseProvider New_ctor() ;

/// @brief Method .ctor addr 0x2ba2f44 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Experimental::XR::Interaction
NEED_NO_BOX(UnityEngine::Experimental::XR::Interaction::BasePoseProvider);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::XR::Interaction::BasePoseProvider, "UnityEngine.Experimental.XR.Interaction", "BasePoseProvider");
