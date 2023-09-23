#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class PreferenceKeys;
}
// Type: UnityEngine.ProBuilder::PreferenceKeys
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12094))
// CS Name: UnityEngine.ProBuilder.PreferenceKeys
class CORDL_TYPE PreferenceKeys : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PreferenceKeys() = default;

// Ctor Parameters [CppParam { name: "", ty: "PreferenceKeys", modifiers: " const&", def_value: None }]
constexpr PreferenceKeys(PreferenceKeys const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PreferenceKeys", modifiers: "&&", def_value: None }]
constexpr PreferenceKeys(PreferenceKeys&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PreferenceKeys(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PreferenceKeys& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PreferenceKeys& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PreferenceKeys& operator=(PreferenceKeys&& o) noexcept = default;
  constexpr PreferenceKeys& operator=(PreferenceKeys const& o) noexcept = default;
                


// Fields

/// @brief Field pluginTitle offset 0
static constexpr ::ConstString  pluginTitle{u"ProBuilder"};

/// @brief Field k_MaxPointDistanceFromControl offset 0
static constexpr float_t  k_MaxPointDistanceFromControl{20};

/// @brief Field DEGREE_SYMBOL offset 0
static constexpr char16_t  DEGREE_SYMBOL{°};

/// @brief Field CMD_SUPER offset 0
static constexpr char16_t  CMD_SUPER{⌘};

/// @brief Field CMD_SHIFT offset 0
static constexpr char16_t  CMD_SHIFT{⇧};

/// @brief Field CMD_OPTION offset 0
static constexpr char16_t  CMD_OPTION{⌥};

/// @brief Field CMD_ALT offset 0
static constexpr char16_t  CMD_ALT{⎇};

/// @brief Field CMD_DELETE offset 0
static constexpr char16_t  CMD_DELETE{⌫};

static UnityEngine::Color __declspec(property(get=__get_proBuilderBlue, put=__set_proBuilderBlue))  proBuilderBlue;

static void __set_proBuilderBlue(UnityEngine::Color value) ;

static UnityEngine::Color __get_proBuilderBlue() ;

static UnityEngine::Color __declspec(property(get=__get_proBuilderLightGray, put=__set_proBuilderLightGray))  proBuilderLightGray;

static void __set_proBuilderLightGray(UnityEngine::Color value) ;

static UnityEngine::Color __get_proBuilderLightGray() ;

static UnityEngine::Color __declspec(property(get=__get_proBuilderDarkGray, put=__set_proBuilderDarkGray))  proBuilderDarkGray;

static void __set_proBuilderDarkGray(UnityEngine::Color value) ;

static UnityEngine::Color __get_proBuilderDarkGray() ;

/// @brief Field menuEditor offset 0
static constexpr int32_t  menuEditor{100};

/// @brief Field menuSelection offset 0
static constexpr int32_t  menuSelection{200};

/// @brief Field menuGeometry offset 0
static constexpr int32_t  menuGeometry{200};

/// @brief Field menuActions offset 0
static constexpr int32_t  menuActions{300};

/// @brief Field menuMaterialColors offset 0
static constexpr int32_t  menuMaterialColors{400};

/// @brief Field menuVertexColors offset 0
static constexpr int32_t  menuVertexColors{400};

/// @brief Field menuRepair offset 0
static constexpr int32_t  menuRepair{600};

/// @brief Field menuMisc offset 0
static constexpr int32_t  menuMisc{600};

/// @brief Field menuExport offset 0
static constexpr int32_t  menuExport{800};

/// @brief Field pbDefaultEditLevel offset 0
static constexpr ::ConstString  pbDefaultEditLevel{u"pbDefaultEditLevel"};

/// @brief Field pbDefaultSelectionMode offset 0
static constexpr ::ConstString  pbDefaultSelectionMode{u"pbDefaultSelectionMode"};

/// @brief Field pbHandleAlignment offset 0
static constexpr ::ConstString  pbHandleAlignment{u"pbHandleAlignment"};

/// @brief Field pbVertexColorTool offset 0
static constexpr ::ConstString  pbVertexColorTool{u"pbVertexColorTool"};

/// @brief Field pbToolbarLocation offset 0
static constexpr ::ConstString  pbToolbarLocation{u"pbToolbarLocation"};

/// @brief Field pbDefaultEntity offset 0
static constexpr ::ConstString  pbDefaultEntity{u"pbDefaultEntity"};

/// @brief Field pbExtrudeMethod offset 0
static constexpr ::ConstString  pbExtrudeMethod{u"pbExtrudeMethod"};

/// @brief Field pbDefaultStaticFlags offset 0
static constexpr ::ConstString  pbDefaultStaticFlags{u"pbDefaultStaticFlags"};

/// @brief Field pbSelectedFaceColor offset 0
static constexpr ::ConstString  pbSelectedFaceColor{u"pbDefaultFaceColor"};

/// @brief Field pbWireframeColor offset 0
static constexpr ::ConstString  pbWireframeColor{u"pbDefaultEdgeColor"};

/// @brief Field pbUnselectedEdgeColor offset 0
static constexpr ::ConstString  pbUnselectedEdgeColor{u"pbUnselectedEdgeColor"};

/// @brief Field pbSelectedEdgeColor offset 0
static constexpr ::ConstString  pbSelectedEdgeColor{u"pbSelectedEdgeColor"};

/// @brief Field pbSelectedVertexColor offset 0
static constexpr ::ConstString  pbSelectedVertexColor{u"pbDefaultSelectedVertexColor"};

/// @brief Field pbUnselectedVertexColor offset 0
static constexpr ::ConstString  pbUnselectedVertexColor{u"pbDefaultVertexColor"};

/// @brief Field pbPreselectionColor offset 0
static constexpr ::ConstString  pbPreselectionColor{u"pbPreselectionColor"};

/// @brief Field pbDefaultOpenInDockableWindow offset 0
static constexpr ::ConstString  pbDefaultOpenInDockableWindow{u"pbDefaultOpenInDockableWindow"};

/// @brief Field pbEditorPrefVersion offset 0
static constexpr ::ConstString  pbEditorPrefVersion{u"pbEditorPrefVersion"};

/// @brief Field pbEditorShortcutsVersion offset 0
static constexpr ::ConstString  pbEditorShortcutsVersion{u"pbEditorShortcutsVersion"};

/// @brief Field pbDefaultCollider offset 0
static constexpr ::ConstString  pbDefaultCollider{u"pbDefaultCollider"};

/// @brief Field pbForceConvex offset 0
static constexpr ::ConstString  pbForceConvex{u"pbForceConvex"};

/// @brief Field pbVertexColorPrefs offset 0
static constexpr ::ConstString  pbVertexColorPrefs{u"pbVertexColorPrefs"};

/// @brief Field pbShowEditorNotifications offset 0
static constexpr ::ConstString  pbShowEditorNotifications{u"pbShowEditorNotifications"};

/// @brief Field pbDragCheckLimit offset 0
static constexpr ::ConstString  pbDragCheckLimit{u"pbDragCheckLimit"};

/// @brief Field pbForceVertexPivot offset 0
static constexpr ::ConstString  pbForceVertexPivot{u"pbForceVertexPivot"};

/// @brief Field pbForceGridPivot offset 0
static constexpr ::ConstString  pbForceGridPivot{u"pbForceGridPivot"};

/// @brief Field pbManifoldEdgeExtrusion offset 0
static constexpr ::ConstString  pbManifoldEdgeExtrusion{u"pbManifoldEdgeExtrusion"};

/// @brief Field pbPerimeterEdgeBridgeOnly offset 0
static constexpr ::ConstString  pbPerimeterEdgeBridgeOnly{u"pbPerimeterEdgeBridgeOnly"};

/// @brief Field pbPBOSelectionOnly offset 0
static constexpr ::ConstString  pbPBOSelectionOnly{u"pbPBOSelectionOnly"};

/// @brief Field pbCloseShapeWindow offset 0
static constexpr ::ConstString  pbCloseShapeWindow{u"pbCloseShapeWindow"};

/// @brief Field pbUVEditorFloating offset 0
static constexpr ::ConstString  pbUVEditorFloating{u"pbUVEditorFloating"};

/// @brief Field pbUVMaterialPreview offset 0
static constexpr ::ConstString  pbUVMaterialPreview{u"pbUVMaterialPreview"};

/// @brief Field pbShowSceneToolbar offset 0
static constexpr ::ConstString  pbShowSceneToolbar{u"pbShowSceneToolbar"};

/// @brief Field pbNormalizeUVsOnPlanarProjection offset 0
static constexpr ::ConstString  pbNormalizeUVsOnPlanarProjection{u"pbNormalizeUVsOnPlanarProjection"};

/// @brief Field pbStripProBuilderOnBuild offset 0
static constexpr ::ConstString  pbStripProBuilderOnBuild{u"pbStripProBuilderOnBuild"};

/// @brief Field pbDisableAutoUV2Generation offset 0
static constexpr ::ConstString  pbDisableAutoUV2Generation{u"pbDisableAutoUV2Generation"};

/// @brief Field pbShowSceneInfo offset 0
static constexpr ::ConstString  pbShowSceneInfo{u"pbShowSceneInfo"};

/// @brief Field pbEnableBackfaceSelection offset 0
static constexpr ::ConstString  pbEnableBackfaceSelection{u"pbEnableBackfaceSelection"};

/// @brief Field pbVertexPaletteDockable offset 0
static constexpr ::ConstString  pbVertexPaletteDockable{u"pbVertexPaletteDockable"};

/// @brief Field pbExtrudeAsGroup offset 0
static constexpr ::ConstString  pbExtrudeAsGroup{u"pbExtrudeAsGroup"};

/// @brief Field pbUniqueModeShortcuts offset 0
static constexpr ::ConstString  pbUniqueModeShortcuts{u"pbUniqueModeShortcuts"};

/// @brief Field pbMaterialEditorFloating offset 0
static constexpr ::ConstString  pbMaterialEditorFloating{u"pbMaterialEditorFloating"};

/// @brief Field pbShapeWindowFloating offset 0
static constexpr ::ConstString  pbShapeWindowFloating{u"pbShapeWindowFloating"};

/// @brief Field pbIconGUI offset 0
static constexpr ::ConstString  pbIconGUI{u"pbIconGUI"};

/// @brief Field pbShiftOnlyTooltips offset 0
static constexpr ::ConstString  pbShiftOnlyTooltips{u"pbShiftOnlyTooltips"};

/// @brief Field pbDrawAxisLines offset 0
static constexpr ::ConstString  pbDrawAxisLines{u"pbDrawAxisLines"};

/// @brief Field pbCollapseVertexToFirst offset 0
static constexpr ::ConstString  pbCollapseVertexToFirst{u"pbCollapseVertexToFirst"};

/// @brief Field pbMeshesAreAssets offset 0
static constexpr ::ConstString  pbMeshesAreAssets{u"pbMeshesAreAssets"};

/// @brief Field pbElementSelectIsHamFisted offset 0
static constexpr ::ConstString  pbElementSelectIsHamFisted{u"pbElementSelectIsHamFisted"};

/// @brief Field pbFillHoleSelectsEntirePath offset 0
static constexpr ::ConstString  pbFillHoleSelectsEntirePath{u"pbFillHoleSelectsEntirePath"};

/// @brief Field pbDetachToNewObject offset 0
static constexpr ::ConstString  pbDetachToNewObject{u"pbDetachToNewObject"};

/// @brief Field pbPreserveFaces offset 0
static constexpr ::ConstString  pbPreserveFaces{u"pbPreserveFaces"};

/// @brief Field pbDragSelectWholeElement offset 0
static constexpr ::ConstString  pbDragSelectWholeElement{u"pbDragSelectWholeElement"};

/// @brief Field pbShowPreselectionHighlight offset 0
static constexpr ::ConstString  pbShowPreselectionHighlight{u"pbShowPreselectionHighlight"};

/// @brief Field pbRectSelectMode offset 0
static constexpr ::ConstString  pbRectSelectMode{u"pbRectSelectMode"};

/// @brief Field pbDragSelectMode offset 0
static constexpr ::ConstString  pbDragSelectMode{u"pbDragSelectMode"};

/// @brief Field pbShadowCastingMode offset 0
static constexpr ::ConstString  pbShadowCastingMode{u"pbShadowCastingMode"};

/// @brief Field pbEnableExperimental offset 0
static constexpr ::ConstString  pbEnableExperimental{u"pbEnableExperimental"};

/// @brief Field pbCheckForProBuilderUpdates offset 0
static constexpr ::ConstString  pbCheckForProBuilderUpdates{u"pbCheckForProBuilderUpdates"};

/// @brief Field pbManageLightmappingStaticFlag offset 0
static constexpr ::ConstString  pbManageLightmappingStaticFlag{u"pbManageLightmappingStaticFlag"};

/// @brief Field pbShowMissingLightmapUvWarning offset 0
static constexpr ::ConstString  pbShowMissingLightmapUvWarning{u"pb_Lightmapping::showMissingLightmapUvWarning"};

/// @brief Field pbSelectedFaceDither offset 0
static constexpr ::ConstString  pbSelectedFaceDither{u"pbSelectedFaceDither"};

/// @brief Field pbUseUnityColors offset 0
static constexpr ::ConstString  pbUseUnityColors{u"pbUseUnityColors"};

/// @brief Field pbVertexHandleSize offset 0
static constexpr ::ConstString  pbVertexHandleSize{u"pbVertexHandleSize"};

/// @brief Field pbUVGridSnapValue offset 0
static constexpr ::ConstString  pbUVGridSnapValue{u"pbUVGridSnapValue"};

/// @brief Field pbUVWeldDistance offset 0
static constexpr ::ConstString  pbUVWeldDistance{u"pbUVWeldDistance"};

/// @brief Field pbLineHandleSize offset 0
static constexpr ::ConstString  pbLineHandleSize{u"pbLineHandleSize"};

/// @brief Field pbWireframeSize offset 0
static constexpr ::ConstString  pbWireframeSize{u"pbWireframeSize"};

/// @brief Field pbWeldDistance offset 0
static constexpr ::ConstString  pbWeldDistance{u"pbWeldDistance"};

/// @brief Field pbExtrudeDistance offset 0
static constexpr ::ConstString  pbExtrudeDistance{u"pbExtrudeDistance"};

/// @brief Field pbBevelAmount offset 0
static constexpr ::ConstString  pbBevelAmount{u"pbBevelAmount"};

/// @brief Field pbEdgeSubdivisions offset 0
static constexpr ::ConstString  pbEdgeSubdivisions{u"pbEdgeSubdivisions"};

/// @brief Field pbDefaultShortcuts offset 0
static constexpr ::ConstString  pbDefaultShortcuts{u"pbDefaultShortcuts"};

/// @brief Field pbDefaultMaterial offset 0
static constexpr ::ConstString  pbDefaultMaterial{u"pbDefaultMaterial"};

/// @brief Field pbCurrentMaterialPalette offset 0
static constexpr ::ConstString  pbCurrentMaterialPalette{u"pbCurrentMaterialPalette"};

/// @brief Field pbGrowSelectionUsingAngle offset 0
static constexpr ::ConstString  pbGrowSelectionUsingAngle{u"pbGrowSelectionUsingAngle"};

/// @brief Field pbGrowSelectionAngle offset 0
static constexpr ::ConstString  pbGrowSelectionAngle{u"pbGrowSelectionAngle"};

/// @brief Field pbGrowSelectionAngleIterative offset 0
static constexpr ::ConstString  pbGrowSelectionAngleIterative{u"pbGrowSelectionAngleIterative"};

/// @brief Field pbShowDetail offset 0
static constexpr ::ConstString  pbShowDetail{u"pbShowDetail"};

/// @brief Field pbShowOccluder offset 0
static constexpr ::ConstString  pbShowOccluder{u"pbShowOccluder"};

/// @brief Field pbShowMover offset 0
static constexpr ::ConstString  pbShowMover{u"pbShowMover"};

/// @brief Field pbShowCollider offset 0
static constexpr ::ConstString  pbShowCollider{u"pbShowCollider"};

/// @brief Field pbShowTrigger offset 0
static constexpr ::ConstString  pbShowTrigger{u"pbShowTrigger"};

/// @brief Field pbShowNoDraw offset 0
static constexpr ::ConstString  pbShowNoDraw{u"pbShowNoDraw"};

/// @brief Field defaultUnwrapParameters offset 0
static constexpr ::ConstString  defaultUnwrapParameters{u"pbDefaultUnwrapParameters"};


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::PreferenceKeys);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::PreferenceKeys, "UnityEngine.ProBuilder", "PreferenceKeys");
