#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
namespace GlobalNamespace {
class BoolSO;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__HapticFeedbackController__RumbleData;
}
namespace GlobalNamespace {
class HapticFeedbackController;
}
namespace {
// Type: ::RumbleData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13981))
// CS Name: HapticFeedbackController::RumbleData
class CORDL_TYPE GlobalNamespace__HapticFeedbackController__RumbleData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__HapticFeedbackController__RumbleData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__HapticFeedbackController__RumbleData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__HapticFeedbackController__RumbleData(GlobalNamespace__HapticFeedbackController__RumbleData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__HapticFeedbackController__RumbleData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__HapticFeedbackController__RumbleData(GlobalNamespace__HapticFeedbackController__RumbleData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__HapticFeedbackController__RumbleData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__HapticFeedbackController__RumbleData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__HapticFeedbackController__RumbleData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__HapticFeedbackController__RumbleData& operator=(GlobalNamespace__HapticFeedbackController__RumbleData&& o) noexcept = default;
  constexpr GlobalNamespace__HapticFeedbackController__RumbleData& operator=(GlobalNamespace__HapticFeedbackController__RumbleData const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_active, put=__set_active))  active;

constexpr void __set_active(bool value) ;

constexpr bool __get_active() const;

 bool __declspec(property(get=__get_continuous, put=__set_continuous))  continuous;

constexpr void __set_continuous(bool value) ;

constexpr bool __get_continuous() const;

 float_t __declspec(property(get=__get_strength, put=__set_strength))  strength;

constexpr void __set_strength(float_t value) ;

constexpr float_t __get_strength() const;

 float_t __declspec(property(get=__get_endTime, put=__set_endTime))  endTime;

constexpr void __set_endTime(float_t value) ;

constexpr float_t __get_endTime() const;

 float_t __declspec(property(get=__get_frequency, put=__set_frequency))  frequency;

constexpr void __set_frequency(float_t value) ;

constexpr float_t __get_frequency() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__HapticFeedbackController__RumbleData() ;

/// @brief Method .ctor addr 0x1fa46c0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::HapticFeedbackController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13982))
// CS Name: HapticFeedbackController
class CORDL_TYPE HapticFeedbackController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using RumbleData = GlobalNamespace::GlobalNamespace__HapticFeedbackController__RumbleData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~HapticFeedbackController() = default;

// Ctor Parameters [CppParam { name: "", ty: "HapticFeedbackController", modifiers: " const&", def_value: None }]
constexpr HapticFeedbackController(HapticFeedbackController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HapticFeedbackController", modifiers: "&&", def_value: None }]
constexpr HapticFeedbackController(HapticFeedbackController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HapticFeedbackController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr HapticFeedbackController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HapticFeedbackController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HapticFeedbackController& operator=(HapticFeedbackController&& o) noexcept = default;
  constexpr HapticFeedbackController& operator=(HapticFeedbackController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BoolSO __declspec(property(get=__get__controllersRumbleEnabled, put=__set__controllersRumbleEnabled))  _controllersRumbleEnabled;

constexpr void __set__controllersRumbleEnabled(GlobalNamespace::BoolSO value) ;

constexpr GlobalNamespace::BoolSO __get__controllersRumbleEnabled() const;

 Libraries::HM::HMLib::VR::HapticPresetSO __declspec(property(get=__get__continuousRumblePreset, put=__set__continuousRumblePreset))  _continuousRumblePreset;

constexpr void __set__continuousRumblePreset(Libraries::HM::HMLib::VR::HapticPresetSO value) ;

constexpr Libraries::HM::HMLib::VR::HapticPresetSO __get__continuousRumblePreset() const;

 GlobalNamespace::IVRPlatformHelper __declspec(property(get=__get__vrPlatformHelper, put=__set__vrPlatformHelper))  _vrPlatformHelper;

constexpr void __set__vrPlatformHelper(GlobalNamespace::IVRPlatformHelper value) ;

constexpr GlobalNamespace::IVRPlatformHelper __get__vrPlatformHelper() const;

/// @brief Field kContinuousRumbleFrameDuration offset 0
static constexpr float_t  kContinuousRumbleFrameDuration{0.016666668};

 System::Collections::Generic::Dictionary_2<UnityEngine::XR::XRNode,System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,GlobalNamespace::GlobalNamespace__HapticFeedbackController__RumbleData>> __declspec(property(get=__get__rumblesByNode, put=__set__rumblesByNode))  _rumblesByNode;

constexpr void __set__rumblesByNode(System::Collections::Generic::Dictionary_2<UnityEngine::XR::XRNode,System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,GlobalNamespace::GlobalNamespace__HapticFeedbackController__RumbleData>> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::XR::XRNode,System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,GlobalNamespace::GlobalNamespace__HapticFeedbackController__RumbleData>> __get__rumblesByNode() const;


// Properties

 Libraries::HM::HMLib::VR::HapticPresetSO __declspec(property(get=get_continuousRumblePreset))  continuousRumblePreset;


// Methods

/// @brief Method get_continuousRumblePreset addr 0x1fa3f4c size 0x8 virtual false final false
 Libraries::HM::HMLib::VR::HapticPresetSO get_continuousRumblePreset() ;

/// @brief Method Awake addr 0x1fa3f54 size 0xe0 virtual false final false
 void Awake() ;

/// @brief Method PlayHapticFeedback addr 0x1fa4034 size 0xe4 virtual false final false
 void PlayHapticFeedback(UnityEngine::XR::XRNode node, Libraries::HM::HMLib::VR::HapticPresetSO hapticPreset) ;

/// @brief Method LateUpdate addr 0x1fa4238 size 0x4 virtual false final false
 void LateUpdate() ;

/// @brief Method UpdateRumbles addr 0x1fa423c size 0x484 virtual false final false
 void UpdateRumbles() ;

/// @brief Method GetRumble addr 0x1fa4118 size 0x120 virtual false final false
 GlobalNamespace::GlobalNamespace__HapticFeedbackController__RumbleData GetRumble(UnityEngine::XR::XRNode node, ::bs_hook::Il2CppWrapperType preset) ;

// Ctor Parameters []
explicit HapticFeedbackController() ;

/// @brief Method .ctor addr 0x1fa46c8 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GlobalNamespace__HapticFeedbackController__RumbleData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GlobalNamespace__HapticFeedbackController__RumbleData, "", "HapticFeedbackController/RumbleData");
NEED_NO_BOX(::GlobalNamespace::HapticFeedbackController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HapticFeedbackController, "", "HapticFeedbackController");
} // end anonymous namespace
