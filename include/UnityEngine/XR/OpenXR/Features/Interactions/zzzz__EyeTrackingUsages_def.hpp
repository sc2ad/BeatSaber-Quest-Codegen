#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::XR {
template<typename T>
struct InputFeatureUsage_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class EyeTrackingUsages;
}
// Type: UnityEngine.XR.OpenXR.Features.Interactions::EyeTrackingUsages
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14211))
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.EyeTrackingUsages
class CORDL_TYPE EyeTrackingUsages : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EyeTrackingUsages() = default;

// Ctor Parameters [CppParam { name: "", ty: "EyeTrackingUsages", modifiers: " const&", def_value: None }]
constexpr EyeTrackingUsages(EyeTrackingUsages const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EyeTrackingUsages", modifiers: "&&", def_value: None }]
constexpr EyeTrackingUsages(EyeTrackingUsages&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EyeTrackingUsages(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EyeTrackingUsages& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EyeTrackingUsages& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EyeTrackingUsages& operator=(EyeTrackingUsages&& o) noexcept = default;
  constexpr EyeTrackingUsages& operator=(EyeTrackingUsages const& o) noexcept = default;
                


// Fields

static UnityEngine::XR::InputFeatureUsage_1<UnityEngine::Vector3> __declspec(property(get=__get_gazePosition, put=__set_gazePosition))  gazePosition;

static void __set_gazePosition(UnityEngine::XR::InputFeatureUsage_1<UnityEngine::Vector3> value) ;

static UnityEngine::XR::InputFeatureUsage_1<UnityEngine::Vector3> __get_gazePosition() ;

static UnityEngine::XR::InputFeatureUsage_1<UnityEngine::Quaternion> __declspec(property(get=__get_gazeRotation, put=__set_gazeRotation))  gazeRotation;

static void __set_gazeRotation(UnityEngine::XR::InputFeatureUsage_1<UnityEngine::Quaternion> value) ;

static UnityEngine::XR::InputFeatureUsage_1<UnityEngine::Quaternion> __get_gazeRotation() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Features::Interactions
NEED_NO_BOX(UnityEngine::XR::OpenXR::Features::Interactions::EyeTrackingUsages);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::Features::Interactions::EyeTrackingUsages, "UnityEngine.XR.OpenXR.Features.Interactions", "EyeTrackingUsages");
