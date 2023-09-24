#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
namespace GlobalNamespace {
class IHapticFeedbackPlayer;
}
namespace UnityEngine::XR {
struct XRNode;
}
// Forward declare root types
namespace GlobalNamespace {
class EmptyAdvancedHapticsPlayer;
}
// Type: ::EmptyAdvancedHapticsPlayer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13922))
// CS Name: EmptyAdvancedHapticsPlayer
class CORDL_TYPE EmptyAdvancedHapticsPlayer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IHapticFeedbackPlayer
constexpr operator  GlobalNamespace::IHapticFeedbackPlayer() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EmptyAdvancedHapticsPlayer() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyAdvancedHapticsPlayer", modifiers: " const&", def_value: None }]
constexpr EmptyAdvancedHapticsPlayer(EmptyAdvancedHapticsPlayer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyAdvancedHapticsPlayer", modifiers: "&&", def_value: None }]
constexpr EmptyAdvancedHapticsPlayer(EmptyAdvancedHapticsPlayer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyAdvancedHapticsPlayer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyAdvancedHapticsPlayer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyAdvancedHapticsPlayer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyAdvancedHapticsPlayer& operator=(EmptyAdvancedHapticsPlayer&& o) noexcept = default;
  constexpr EmptyAdvancedHapticsPlayer& operator=(EmptyAdvancedHapticsPlayer const& o) noexcept = default;
                


// Methods

/// @brief Method PlayHapticFeedback addr 0x1f87ee0 size 0x4 virtual true final true
 void PlayHapticFeedback(UnityEngine::XR::XRNode node, Libraries::HM::HMLib::VR::HapticPresetSO hapticPreset) ;

/// @brief Method CanPlayHapticPreset addr 0x1f87ee4 size 0x8 virtual true final true
 bool CanPlayHapticPreset(Libraries::HM::HMLib::VR::HapticPresetSO hapticPreset) ;

static GlobalNamespace::EmptyAdvancedHapticsPlayer New_ctor() ;

/// @brief Method .ctor addr 0x1f87eec size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::EmptyAdvancedHapticsPlayer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EmptyAdvancedHapticsPlayer, "", "EmptyAdvancedHapticsPlayer");
