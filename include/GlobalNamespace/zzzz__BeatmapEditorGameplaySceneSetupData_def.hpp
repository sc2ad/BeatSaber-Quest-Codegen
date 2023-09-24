#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class BeatmapEditorGameplaySceneSetupData;
}
// Type: ::BeatmapEditorGameplaySceneSetupData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13869))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6099))
// CS Name: BeatmapEditorGameplaySceneSetupData
class CORDL_TYPE BeatmapEditorGameplaySceneSetupData : public GlobalNamespace::SceneSetupData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BeatmapEditorGameplaySceneSetupData() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEditorGameplaySceneSetupData", modifiers: " const&", def_value: None }]
constexpr BeatmapEditorGameplaySceneSetupData(BeatmapEditorGameplaySceneSetupData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEditorGameplaySceneSetupData", modifiers: "&&", def_value: None }]
constexpr BeatmapEditorGameplaySceneSetupData(BeatmapEditorGameplaySceneSetupData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapEditorGameplaySceneSetupData(void* ptr) noexcept : GlobalNamespace::SceneSetupData(ptr) {
}


  constexpr BeatmapEditorGameplaySceneSetupData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapEditorGameplaySceneSetupData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapEditorGameplaySceneSetupData& operator=(BeatmapEditorGameplaySceneSetupData&& o) noexcept = default;
  constexpr BeatmapEditorGameplaySceneSetupData& operator=(BeatmapEditorGameplaySceneSetupData const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_useFirstPersonFlyingController, put=__set_useFirstPersonFlyingController))  useFirstPersonFlyingController;

constexpr void __set_useFirstPersonFlyingController(bool value) ;

constexpr bool __get_useFirstPersonFlyingController() const;

 bool __declspec(property(get=__get_recordVRMovement, put=__set_recordVRMovement))  recordVRMovement;

constexpr void __set_recordVRMovement(bool value) ;

constexpr bool __get_recordVRMovement() const;

 bool __declspec(property(get=__get_playVRMovement, put=__set_playVRMovement))  playVRMovement;

constexpr void __set_playVRMovement(bool value) ;

constexpr bool __get_playVRMovement() const;


// Methods

static GlobalNamespace::BeatmapEditorGameplaySceneSetupData New_ctor(bool useFirstPersonFlyingController, bool recordVRMovement, bool playVRMovement) ;

/// @brief Method .ctor addr 0x21b6a34 size 0x40 virtual false final false
 void _ctor(bool useFirstPersonFlyingController, bool recordVRMovement, bool playVRMovement) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapEditorGameplaySceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapEditorGameplaySceneSetupData, "", "BeatmapEditorGameplaySceneSetupData");
