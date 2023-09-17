#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
namespace UnityEngine::XR {
struct XRNode;
}
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
// Forward declare root types
namespace GlobalNamespace {
class IHapticFeedbackPlayer;
}
// Type: ::IHapticFeedbackPlayer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13912))
// CS Name: IHapticFeedbackPlayer
class CORDL_TYPE IHapticFeedbackPlayer : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IHapticFeedbackPlayer() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IHapticFeedbackPlayer(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method PlayHapticFeedback addr 0x0 size 0xffffffffffffffff virtual true final false
 void PlayHapticFeedback(::UnityEngine::XR::XRNode node, ::Libraries::HM::HMLib::VR::HapticPresetSO hapticPreset) ;

/// @brief Method CanPlayHapticPreset addr 0x0 size 0xffffffffffffffff virtual true final false
 bool CanPlayHapticPreset(::Libraries::HM::HMLib::VR::HapticPresetSO hapticPreset) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IHapticFeedbackPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IHapticFeedbackPlayer, "", "IHapticFeedbackPlayer");
