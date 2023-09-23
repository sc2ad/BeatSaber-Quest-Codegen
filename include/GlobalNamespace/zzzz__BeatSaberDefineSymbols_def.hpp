#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace GlobalNamespace {
class BeatSaberDefineSymbols;
}
// Type: ::BeatSaberDefineSymbols
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16066))
// CS Name: BeatSaberDefineSymbols
class CORDL_TYPE BeatSaberDefineSymbols : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BeatSaberDefineSymbols() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatSaberDefineSymbols", modifiers: " const&", def_value: None }]
constexpr BeatSaberDefineSymbols(BeatSaberDefineSymbols const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatSaberDefineSymbols", modifiers: "&&", def_value: None }]
constexpr BeatSaberDefineSymbols(BeatSaberDefineSymbols&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatSaberDefineSymbols(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatSaberDefineSymbols& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatSaberDefineSymbols& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatSaberDefineSymbols& operator=(BeatSaberDefineSymbols&& o) noexcept = default;
  constexpr BeatSaberDefineSymbols& operator=(BeatSaberDefineSymbols const& o) noexcept = default;
                


// Fields

/// @brief Field kIgnoreVrFocusLostEvents offset 0
static constexpr ::ConstString  kIgnoreVrFocusLostEvents{u"IGNORE_VR_FOCUS_LOST_EVENTS"};

/// @brief Field kEnableMultiplayerMock offset 0
static constexpr ::ConstString  kEnableMultiplayerMock{u"MULTIPLAYER_MOCK"};

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatSaberDefineSymbols);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatSaberDefineSymbols, "", "BeatSaberDefineSymbols");
