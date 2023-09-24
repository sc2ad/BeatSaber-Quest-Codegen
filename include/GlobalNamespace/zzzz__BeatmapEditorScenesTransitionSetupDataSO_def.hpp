#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SingleFixedSceneScenesTransitionSetupDataSO_def.hpp"
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapEditorScenesTransitionSetupDataSO;
}
// Type: ::BeatmapEditorScenesTransitionSetupDataSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13875))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6117))
// CS Name: BeatmapEditorScenesTransitionSetupDataSO
class CORDL_TYPE BeatmapEditorScenesTransitionSetupDataSO : public GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~BeatmapEditorScenesTransitionSetupDataSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEditorScenesTransitionSetupDataSO", modifiers: " const&", def_value: None }]
constexpr BeatmapEditorScenesTransitionSetupDataSO(BeatmapEditorScenesTransitionSetupDataSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEditorScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
constexpr BeatmapEditorScenesTransitionSetupDataSO(BeatmapEditorScenesTransitionSetupDataSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapEditorScenesTransitionSetupDataSO(void* ptr) noexcept : GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO(ptr) {
}


  constexpr BeatmapEditorScenesTransitionSetupDataSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapEditorScenesTransitionSetupDataSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapEditorScenesTransitionSetupDataSO& operator=(BeatmapEditorScenesTransitionSetupDataSO&& o) noexcept = default;
  constexpr BeatmapEditorScenesTransitionSetupDataSO& operator=(BeatmapEditorScenesTransitionSetupDataSO const& o) noexcept = default;
                


// Fields

 System::Action_1<GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO> __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent))  didFinishEvent;

constexpr void __set_didFinishEvent(System::Action_1<GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO> value) ;

constexpr System::Action_1<GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO> __get_didFinishEvent() const;

 bool __declspec(property(get=__get__goStraightToEditor_k__BackingField, put=__set__goStraightToEditor_k__BackingField))  _goStraightToEditor_k__BackingField;

constexpr void __set__goStraightToEditor_k__BackingField(bool value) ;

constexpr bool __get__goStraightToEditor_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_goStraightToEditor, put=set_goStraightToEditor))  goStraightToEditor;


// Methods

/// @brief Method add_didFinishEvent addr 0x21cfcbc size 0xb0 virtual false final false
 void add_didFinishEvent(System::Action_1<GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO> value) ;

/// @brief Method remove_didFinishEvent addr 0x21cfd6c size 0xb0 virtual false final false
 void remove_didFinishEvent(System::Action_1<GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO> value) ;

/// @brief Method get_goStraightToEditor addr 0x21cfe1c size 0x8 virtual false final false
 bool get_goStraightToEditor() ;

/// @brief Method set_goStraightToEditor addr 0x21cfe24 size 0xc virtual false final false
 void set_goStraightToEditor(bool value) ;

/// @brief Method Init addr 0x21cfe30 size 0x84 virtual false final false
 void Init(bool goStraightToEditor) ;

/// @brief Method Finish addr 0x21cfeb4 size 0x20 virtual false final false
 void Finish() ;

static GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO New_ctor() ;

/// @brief Method .ctor addr 0x21cfed4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO, "", "BeatmapEditorScenesTransitionSetupDataSO");
