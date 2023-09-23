#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::OculusQuestSupport {
class OculusQuestFeature;
}
// Type: UnityEngine.XR.OpenXR.Features.OculusQuestSupport::OculusQuestFeature
namespace UnityEngine::XR::OpenXR::Features::OculusQuestSupport {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14201))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16103))
// CS Name: UnityEngine.XR.OpenXR.Features.OculusQuestSupport.OculusQuestFeature
class CORDL_TYPE OculusQuestFeature : public UnityEngine::XR::OpenXR::Features::OpenXRFeature {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~OculusQuestFeature() = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusQuestFeature", modifiers: " const&", def_value: None }]
constexpr OculusQuestFeature(OculusQuestFeature const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusQuestFeature", modifiers: "&&", def_value: None }]
constexpr OculusQuestFeature(OculusQuestFeature&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OculusQuestFeature(void* ptr) noexcept : UnityEngine::XR::OpenXR::Features::OpenXRFeature(ptr) {
}


  constexpr OculusQuestFeature& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OculusQuestFeature& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OculusQuestFeature& operator=(OculusQuestFeature&& o) noexcept = default;
  constexpr OculusQuestFeature& operator=(OculusQuestFeature const& o) noexcept = default;
                


// Fields

/// @brief Field featureId offset 0
static constexpr ::ConstString  featureId{u"com.unity.openxr.feature.oculusquest"};

 bool __declspec(property(get=__get_targetQuest, put=__set_targetQuest))  targetQuest;

constexpr void __set_targetQuest(bool value) ;

constexpr bool __get_targetQuest() const;

 bool __declspec(property(get=__get_targetQuest2, put=__set_targetQuest2))  targetQuest2;

constexpr void __set_targetQuest2(bool value) ;

constexpr bool __get_targetQuest2() const;


// Methods

// Ctor Parameters []
explicit OculusQuestFeature() ;

/// @brief Method .ctor addr 0x2b064fc size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Features::OculusQuestSupport
NEED_NO_BOX(UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature, "UnityEngine.XR.OpenXR.Features.OculusQuestSupport", "OculusQuestFeature");
