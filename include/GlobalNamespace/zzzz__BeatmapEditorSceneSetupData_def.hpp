#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace GlobalNamespace {
class BeatmapEditorSceneSetupData;
}
// Type: ::BeatmapEditorSceneSetupData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13869))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6100))
// CS Name: BeatmapEditorSceneSetupData
class CORDL_TYPE BeatmapEditorSceneSetupData : public GlobalNamespace::SceneSetupData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BeatmapEditorSceneSetupData() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEditorSceneSetupData", modifiers: " const&", def_value: None }]
constexpr BeatmapEditorSceneSetupData(BeatmapEditorSceneSetupData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEditorSceneSetupData", modifiers: "&&", def_value: None }]
constexpr BeatmapEditorSceneSetupData(BeatmapEditorSceneSetupData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapEditorSceneSetupData(void* ptr) noexcept : GlobalNamespace::SceneSetupData(ptr) {
}


  constexpr BeatmapEditorSceneSetupData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapEditorSceneSetupData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapEditorSceneSetupData& operator=(BeatmapEditorSceneSetupData&& o) noexcept = default;
  constexpr BeatmapEditorSceneSetupData& operator=(BeatmapEditorSceneSetupData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__levelDirPath, put=__set__levelDirPath))  _levelDirPath;

constexpr void __set__levelDirPath(::StringW value) ;

constexpr ::StringW __get__levelDirPath() const;

 ::StringW __declspec(property(get=__get__levelAssetPath, put=__set__levelAssetPath))  _levelAssetPath;

constexpr void __set__levelAssetPath(::StringW value) ;

constexpr ::StringW __get__levelAssetPath() const;


// Properties

 ::StringW __declspec(property(get=get_levelDirPath))  levelDirPath;

 ::StringW __declspec(property(get=get_levelAssetPath))  levelAssetPath;


// Methods

/// @brief Method get_levelDirPath addr 0x21b6a74 size 0x8 virtual false final false
 ::StringW get_levelDirPath() ;

/// @brief Method get_levelAssetPath addr 0x21b6a7c size 0x8 virtual false final false
 ::StringW get_levelAssetPath() ;

// Ctor Parameters [CppParam { name: "levelDirPath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "levelAssetPath", ty: "::StringW", modifiers: "", def_value: None }]
explicit BeatmapEditorSceneSetupData(::StringW levelDirPath, ::StringW levelAssetPath) ;

/// @brief Method .ctor addr 0x21b6a84 size 0x2c virtual false final false
 void _ctor(::StringW levelDirPath, ::StringW levelAssetPath) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapEditorSceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapEditorSceneSetupData, "", "BeatmapEditorSceneSetupData");
