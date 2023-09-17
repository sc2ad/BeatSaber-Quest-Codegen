#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
namespace {
namespace GlobalNamespace {
class ColorScheme;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
// Forward declare root types
namespace GlobalNamespace {
class TutorialSceneSetupData;
}
// Type: ::TutorialSceneSetupData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13869))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6112))
// CS Name: TutorialSceneSetupData
class CORDL_TYPE TutorialSceneSetupData : public ::GlobalNamespace::SceneSetupData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TutorialSceneSetupData() = default;

// Ctor Parameters [CppParam { name: "", ty: "TutorialSceneSetupData", modifiers: " const&", def_value: None }]
constexpr TutorialSceneSetupData(TutorialSceneSetupData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TutorialSceneSetupData", modifiers: "&&", def_value: None }]
constexpr TutorialSceneSetupData(TutorialSceneSetupData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TutorialSceneSetupData(void* ptr) noexcept : ::GlobalNamespace::SceneSetupData(ptr) {
}


  constexpr TutorialSceneSetupData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TutorialSceneSetupData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TutorialSceneSetupData& operator=(TutorialSceneSetupData&& o) noexcept = default;
  constexpr TutorialSceneSetupData& operator=(TutorialSceneSetupData const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::ColorScheme __declspec(property(get=__get_colorScheme, put=__set_colorScheme))  colorScheme;

constexpr void __set_colorScheme(::GlobalNamespace::ColorScheme value) ;

constexpr ::GlobalNamespace::ColorScheme __get_colorScheme() const;

 ::GlobalNamespace::PlayerSpecificSettings __declspec(property(get=__get_playerSpecificSettings, put=__set_playerSpecificSettings))  playerSpecificSettings;

constexpr void __set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings value) ;

constexpr ::GlobalNamespace::PlayerSpecificSettings __get_playerSpecificSettings() const;


// Methods

// Ctor Parameters [CppParam { name: "colorScheme", ty: "::GlobalNamespace::ColorScheme", modifiers: "", def_value: None }, CppParam { name: "playerSpecificSettings", ty: "::GlobalNamespace::PlayerSpecificSettings", modifiers: "", def_value: None }]
explicit TutorialSceneSetupData(::GlobalNamespace::ColorScheme colorScheme, ::GlobalNamespace::PlayerSpecificSettings playerSpecificSettings) ;

/// @brief Method .ctor addr 0x21cfac8 size 0x2c virtual false final false
 void _ctor(::GlobalNamespace::ColorScheme colorScheme, ::GlobalNamespace::PlayerSpecificSettings playerSpecificSettings) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::TutorialSceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialSceneSetupData, "", "TutorialSceneSetupData");
