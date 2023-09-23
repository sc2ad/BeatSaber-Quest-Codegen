#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentSceneSetupData;
}
// Type: ::EnvironmentSceneSetupData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13869))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6101))
// CS Name: EnvironmentSceneSetupData
class CORDL_TYPE EnvironmentSceneSetupData : public GlobalNamespace::SceneSetupData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~EnvironmentSceneSetupData() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentSceneSetupData", modifiers: " const&", def_value: None }]
constexpr EnvironmentSceneSetupData(EnvironmentSceneSetupData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentSceneSetupData", modifiers: "&&", def_value: None }]
constexpr EnvironmentSceneSetupData(EnvironmentSceneSetupData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnvironmentSceneSetupData(void* ptr) noexcept : GlobalNamespace::SceneSetupData(ptr) {
}


  constexpr EnvironmentSceneSetupData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnvironmentSceneSetupData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnvironmentSceneSetupData& operator=(EnvironmentSceneSetupData&& o) noexcept = default;
  constexpr EnvironmentSceneSetupData& operator=(EnvironmentSceneSetupData const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_hideBranding, put=__set_hideBranding))  hideBranding;

constexpr void __set_hideBranding(bool value) ;

constexpr bool __get_hideBranding() const;

 GlobalNamespace::EnvironmentInfoSO __declspec(property(get=__get_environmentInfo, put=__set_environmentInfo))  environmentInfo;

constexpr void __set_environmentInfo(GlobalNamespace::EnvironmentInfoSO value) ;

constexpr GlobalNamespace::EnvironmentInfoSO __get_environmentInfo() const;

 GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=__get_previewBeatmapLevel, put=__set_previewBeatmapLevel))  previewBeatmapLevel;

constexpr void __set_previewBeatmapLevel(GlobalNamespace::IPreviewBeatmapLevel value) ;

constexpr GlobalNamespace::IPreviewBeatmapLevel __get_previewBeatmapLevel() const;


// Methods

// Ctor Parameters [CppParam { name: "environmentInfo", ty: "GlobalNamespace::EnvironmentInfoSO", modifiers: "", def_value: None }, CppParam { name: "previewBeatmapLevel", ty: "GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: None }, CppParam { name: "hideBranding", ty: "bool", modifiers: "", def_value: None }]
explicit EnvironmentSceneSetupData(GlobalNamespace::EnvironmentInfoSO environmentInfo, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, bool hideBranding) ;

/// @brief Method .ctor addr 0x21b6ab0 size 0x3c virtual false final false
 void _ctor(GlobalNamespace::EnvironmentInfoSO environmentInfo, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, bool hideBranding) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::EnvironmentSceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentSceneSetupData, "", "EnvironmentSceneSetupData");
