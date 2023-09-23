#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
namespace GlobalNamespace {
class BoolSO;
}
namespace GlobalNamespace {
class RumbleHapticFeedbackPlayer;
}
namespace GlobalNamespace {
class IHapticFeedbackPlayer;
}
namespace UnityEngine::XR {
struct XRNode;
}
// Forward declare root types
namespace GlobalNamespace {
class HapticFeedbackManager;
}
// Type: ::HapticFeedbackManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13911))
// CS Name: HapticFeedbackManager
class CORDL_TYPE HapticFeedbackManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~HapticFeedbackManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "HapticFeedbackManager", modifiers: " const&", def_value: None }]
constexpr HapticFeedbackManager(HapticFeedbackManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HapticFeedbackManager", modifiers: "&&", def_value: None }]
constexpr HapticFeedbackManager(HapticFeedbackManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HapticFeedbackManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr HapticFeedbackManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HapticFeedbackManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HapticFeedbackManager& operator=(HapticFeedbackManager&& o) noexcept = default;
  constexpr HapticFeedbackManager& operator=(HapticFeedbackManager const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BoolSO __declspec(property(get=__get__controllersRumbleEnabled, put=__set__controllersRumbleEnabled))  _controllersRumbleEnabled;

constexpr void __set__controllersRumbleEnabled(GlobalNamespace::BoolSO value) ;

constexpr GlobalNamespace::BoolSO __get__controllersRumbleEnabled() const;

 Libraries::HM::HMLib::VR::HapticPresetSO __declspec(property(get=__get__continuousRumblePreset, put=__set__continuousRumblePreset))  _continuousRumblePreset;

constexpr void __set__continuousRumblePreset(Libraries::HM::HMLib::VR::HapticPresetSO value) ;

constexpr Libraries::HM::HMLib::VR::HapticPresetSO __get__continuousRumblePreset() const;

 GlobalNamespace::RumbleHapticFeedbackPlayer __declspec(property(get=__get__rumbleHapticFeedbackPlayer, put=__set__rumbleHapticFeedbackPlayer))  _rumbleHapticFeedbackPlayer;

constexpr void __set__rumbleHapticFeedbackPlayer(GlobalNamespace::RumbleHapticFeedbackPlayer value) ;

constexpr GlobalNamespace::RumbleHapticFeedbackPlayer __get__rumbleHapticFeedbackPlayer() const;

 GlobalNamespace::IHapticFeedbackPlayer __declspec(property(get=__get__advancedHapticFeedbackPlayer, put=__set__advancedHapticFeedbackPlayer))  _advancedHapticFeedbackPlayer;

constexpr void __set__advancedHapticFeedbackPlayer(GlobalNamespace::IHapticFeedbackPlayer value) ;

constexpr GlobalNamespace::IHapticFeedbackPlayer __get__advancedHapticFeedbackPlayer() const;


// Properties

 Libraries::HM::HMLib::VR::HapticPresetSO __declspec(property(get=get_continuousRumblePreset))  continuousRumblePreset;


// Methods

/// @brief Method get_continuousRumblePreset addr 0x1f84d44 size 0x8 virtual false final false
 Libraries::HM::HMLib::VR::HapticPresetSO get_continuousRumblePreset() ;

/// @brief Method PlayHapticFeedback addr 0x1f84d4c size 0x180 virtual false final false
 void PlayHapticFeedback(UnityEngine::XR::XRNode node, Libraries::HM::HMLib::VR::HapticPresetSO hapticPreset) ;

// Ctor Parameters []
explicit HapticFeedbackManager() ;

/// @brief Method .ctor addr 0x1f84ecc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::HapticFeedbackManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HapticFeedbackManager, "", "HapticFeedbackManager");
