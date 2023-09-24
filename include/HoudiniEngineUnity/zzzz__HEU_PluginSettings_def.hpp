#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace HoudiniEngineUnity {
struct SessionMode;
}
namespace UnityEngine {
struct Color;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_PluginSettings;
}
// Type: HoudiniEngineUnity::HEU_PluginSettings
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9617))
// CS Name: HoudiniEngineUnity.HEU_PluginSettings
class CORDL_TYPE HEU_PluginSettings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HEU_PluginSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_PluginSettings", modifiers: " const&", def_value: None }]
constexpr HEU_PluginSettings(HEU_PluginSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_PluginSettings", modifiers: "&&", def_value: None }]
constexpr HEU_PluginSettings(HEU_PluginSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_PluginSettings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_PluginSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_PluginSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_PluginSettings& operator=(HEU_PluginSettings&& o) noexcept = default;
  constexpr HEU_PluginSettings& operator=(HEU_PluginSettings const& o) noexcept = default;
                


// Properties

static ::StringW __declspec(property(get=get_HoudiniEngineEnvFilePath, put=set_HoudiniEngineEnvFilePath))  HoudiniEngineEnvFilePath;

static bool __declspec(property(get=get_CookingEnabled, put=set_CookingEnabled))  CookingEnabled;

static bool __declspec(property(get=get_CookingTriggersDownstreamCooks, put=set_CookingTriggersDownstreamCooks))  CookingTriggersDownstreamCooks;

static bool __declspec(property(get=get_CookTemplatedGeos, put=set_CookTemplatedGeos))  CookTemplatedGeos;

static bool __declspec(property(get=get_PushUnityTransformToHoudini, put=set_PushUnityTransformToHoudini))  PushUnityTransformToHoudini;

static bool __declspec(property(get=get_TransformChangeTriggersCooks, put=set_TransformChangeTriggersCooks))  TransformChangeTriggersCooks;

static ::StringW __declspec(property(get=get_CollisionGroupName, put=set_CollisionGroupName))  CollisionGroupName;

static ::StringW __declspec(property(get=get_RenderedCollisionGroupName, put=set_RenderedCollisionGroupName))  RenderedCollisionGroupName;

static ::StringW __declspec(property(get=get_RenderedConvexCollisionGroupName, put=set_RenderedConvexCollisionGroupName))  RenderedConvexCollisionGroupName;

static ::StringW __declspec(property(get=get_UnityMaterialAttribName, put=set_UnityMaterialAttribName))  UnityMaterialAttribName;

static ::StringW __declspec(property(get=get_UnitySubMaterialAttribName, put=set_UnitySubMaterialAttribName))  UnitySubMaterialAttribName;

static ::StringW __declspec(property(get=get_UnitySubMaterialIndexAttribName, put=set_UnitySubMaterialIndexAttribName))  UnitySubMaterialIndexAttribName;

static ::StringW __declspec(property(get=get_UnityTagAttributeName, put=set_UnityTagAttributeName))  UnityTagAttributeName;

static ::StringW __declspec(property(get=get_UnityStaticAttributeName, put=set_UnityStaticAttributeName))  UnityStaticAttributeName;

static ::StringW __declspec(property(get=get_UnityScriptAttributeName, put=set_UnityScriptAttributeName))  UnityScriptAttributeName;

static ::StringW __declspec(property(get=get_UnityLayerAttributeName, put=set_UnityLayerAttributeName))  UnityLayerAttributeName;

static float_t __declspec(property(get=get_ImageGamma, put=set_ImageGamma))  ImageGamma;

static float_t __declspec(property(get=get_NormalGenerationThresholdAngle, put=set_NormalGenerationThresholdAngle))  NormalGenerationThresholdAngle;

static ::StringW __declspec(property(get=get_LastLoadHDAPath, put=set_LastLoadHDAPath))  LastLoadHDAPath;

static ::StringW __declspec(property(get=get_LastLoadHIPPath, put=set_LastLoadHIPPath))  LastLoadHIPPath;

static ::StringW __declspec(property(get=get_InstanceAttr, put=set_InstanceAttr))  InstanceAttr;

static ::StringW __declspec(property(get=get_UnityInstanceAttr, put=set_UnityInstanceAttr))  UnityInstanceAttr;

static ::StringW __declspec(property(get=get_UnityInputMeshAttr, put=set_UnityInputMeshAttr))  UnityInputMeshAttr;

static UnityEngine::Color __declspec(property(get=get_LineColor, put=set_LineColor))  LineColor;

static ::StringW __declspec(property(get=get_EditorOnly_Tag, put=set_EditorOnly_Tag))  EditorOnly_Tag;

static ::StringW __declspec(property(get=get_HDAData_Name, put=set_HDAData_Name))  HDAData_Name;

static HoudiniEngineUnity::SessionMode __declspec(property(get=get_Session_Mode, put=set_Session_Mode))  Session_Mode;

static ::StringW __declspec(property(get=get_Session_PipeName, put=set_Session_PipeName))  Session_PipeName;

static ::StringW __declspec(property(get=get_Session_Localhost, put=set_Session_Localhost))  Session_Localhost;

static int32_t __declspec(property(get=get_Session_Port, put=set_Session_Port))  Session_Port;

static float_t __declspec(property(get=get_Session_Timeout, put=set_Session_Timeout))  Session_Timeout;

static bool __declspec(property(get=get_Session_AutoClose, put=set_Session_AutoClose))  Session_AutoClose;

static bool __declspec(property(get=get_Curves_ShowInSceneView, put=set_Curves_ShowInSceneView))  Curves_ShowInSceneView;

static ::StringW __declspec(property(get=get_AssetCachePath, put=set_AssetCachePath))  AssetCachePath;

static bool __declspec(property(get=get_UseFullPathNamesForOutput, put=set_UseFullPathNamesForOutput))  UseFullPathNamesForOutput;

static System::Collections::Generic::List_1<::StringW> __declspec(property(get=get_HEngineToolsShelves, put=set_HEngineToolsShelves))  HEngineToolsShelves;

static int32_t __declspec(property(get=get_HEngineShelfSelectedIndex, put=set_HEngineShelfSelectedIndex))  HEngineShelfSelectedIndex;

static ::StringW __declspec(property(get=get_DefaultTerrainMaterial, put=set_DefaultTerrainMaterial))  DefaultTerrainMaterial;

static ::StringW __declspec(property(get=get_TerrainSplatTextureDefault, put=set_TerrainSplatTextureDefault))  TerrainSplatTextureDefault;

static ::StringW __declspec(property(get=get_DefaultStandardShader, put=set_DefaultStandardShader))  DefaultStandardShader;

static ::StringW __declspec(property(get=get_DefaultVertexColorShader, put=set_DefaultVertexColorShader))  DefaultVertexColorShader;

static ::StringW __declspec(property(get=get_DefaultTransparentShader, put=set_DefaultTransparentShader))  DefaultTransparentShader;

static ::StringW __declspec(property(get=get_DefaultCurveShader, put=set_DefaultCurveShader))  DefaultCurveShader;

static bool __declspec(property(get=get_SupportHoudiniBoxType, put=set_SupportHoudiniBoxType))  SupportHoudiniBoxType;

static bool __declspec(property(get=get_SupportHoudiniSphereType, put=set_SupportHoudiniSphereType))  SupportHoudiniSphereType;

static bool __declspec(property(get=get_SetCurrentThreadToInvariantCulture, put=set_SetCurrentThreadToInvariantCulture))  SetCurrentThreadToInvariantCulture;

static ::StringW __declspec(property(get=get_HoudiniDebugLaunchPath, put=set_HoudiniDebugLaunchPath))  HoudiniDebugLaunchPath;

static ::StringW __declspec(property(get=get_LastExportPath, put=set_LastExportPath))  LastExportPath;

static int32_t __declspec(property(get=get_InputSelectionFilterLocation, put=set_InputSelectionFilterLocation))  InputSelectionFilterLocation;

static int32_t __declspec(property(get=get_InputSelectionFilterState, put=set_InputSelectionFilterState))  InputSelectionFilterState;

static bool __declspec(property(get=get_InputSelectionFilterRoots, put=set_InputSelectionFilterRoots))  InputSelectionFilterRoots;

static ::StringW __declspec(property(get=get_InputSelectionFilterName, put=set_InputSelectionFilterName))  InputSelectionFilterName;

static bool __declspec(property(get=get_CookOptionSplitGeosByGroup, put=set_CookOptionSplitGeosByGroup))  CookOptionSplitGeosByGroup;

static int32_t __declspec(property(get=get_MaxVerticesPerPrimitive, put=set_MaxVerticesPerPrimitive))  MaxVerticesPerPrimitive;

static ::StringW __declspec(property(get=get_HoudiniInstallPath, put=set_HoudiniInstallPath))  HoudiniInstallPath;

static ::StringW __declspec(property(get=get_LastHoudiniVersion, put=set_LastHoudiniVersion))  LastHoudiniVersion;

static bool __declspec(property(get=get_SessionSyncAutoCook, put=set_SessionSyncAutoCook))  SessionSyncAutoCook;

static bool __declspec(property(get=get_WriteCookLogs, put=set_WriteCookLogs))  WriteCookLogs;

static bool __declspec(property(get=get_UseHDRColor, put=set_UseHDRColor))  UseHDRColor;

static bool __declspec(property(get=get_UseSpecularShader, put=set_UseSpecularShader))  UseSpecularShader;

static bool __declspec(property(get=get_UseLegacyShaders, put=set_UseLegacyShaders))  UseLegacyShaders;

static bool __declspec(property(get=get_ShortenFolderPaths, put=set_ShortenFolderPaths))  ShortenFolderPaths;


// Methods

/// @brief Method get_HoudiniEngineEnvFilePath addr 0x2017b54 size 0x78 virtual false final false
static ::StringW get_HoudiniEngineEnvFilePath() ;

/// @brief Method set_HoudiniEngineEnvFilePath addr 0x2017eb0 size 0x60 virtual false final false
static void set_HoudiniEngineEnvFilePath(::StringW value) ;

/// @brief Method get_CookingEnabled addr 0x2018380 size 0x64 virtual false final false
static bool get_CookingEnabled() ;

/// @brief Method set_CookingEnabled addr 0x20184d8 size 0x54 virtual false final false
static void set_CookingEnabled(bool value) ;

/// @brief Method get_CookingTriggersDownstreamCooks addr 0x20185f8 size 0x64 virtual false final false
static bool get_CookingTriggersDownstreamCooks() ;

/// @brief Method set_CookingTriggersDownstreamCooks addr 0x201865c size 0x54 virtual false final false
static void set_CookingTriggersDownstreamCooks(bool value) ;

/// @brief Method get_CookTemplatedGeos addr 0x20186b0 size 0x64 virtual false final false
static bool get_CookTemplatedGeos() ;

/// @brief Method set_CookTemplatedGeos addr 0x2018714 size 0x54 virtual false final false
static void set_CookTemplatedGeos(bool value) ;

/// @brief Method get_PushUnityTransformToHoudini addr 0x2018768 size 0x64 virtual false final false
static bool get_PushUnityTransformToHoudini() ;

/// @brief Method set_PushUnityTransformToHoudini addr 0x20187cc size 0x54 virtual false final false
static void set_PushUnityTransformToHoudini(bool value) ;

/// @brief Method get_TransformChangeTriggersCooks addr 0x2018820 size 0x64 virtual false final false
static bool get_TransformChangeTriggersCooks() ;

/// @brief Method set_TransformChangeTriggersCooks addr 0x2018884 size 0x54 virtual false final false
static void set_TransformChangeTriggersCooks(bool value) ;

/// @brief Method get_CollisionGroupName addr 0x20188d8 size 0x78 virtual false final false
static ::StringW get_CollisionGroupName() ;

/// @brief Method set_CollisionGroupName addr 0x2018950 size 0x54 virtual false final false
static void set_CollisionGroupName(::StringW value) ;

/// @brief Method get_RenderedCollisionGroupName addr 0x20189a4 size 0x78 virtual false final false
static ::StringW get_RenderedCollisionGroupName() ;

/// @brief Method set_RenderedCollisionGroupName addr 0x2018a1c size 0x54 virtual false final false
static void set_RenderedCollisionGroupName(::StringW value) ;

/// @brief Method get_RenderedConvexCollisionGroupName addr 0x2018a70 size 0x78 virtual false final false
static ::StringW get_RenderedConvexCollisionGroupName() ;

/// @brief Method set_RenderedConvexCollisionGroupName addr 0x2018ae8 size 0x54 virtual false final false
static void set_RenderedConvexCollisionGroupName(::StringW value) ;

/// @brief Method get_UnityMaterialAttribName addr 0x2018b3c size 0x78 virtual false final false
static ::StringW get_UnityMaterialAttribName() ;

/// @brief Method set_UnityMaterialAttribName addr 0x2018bb4 size 0x54 virtual false final false
static void set_UnityMaterialAttribName(::StringW value) ;

/// @brief Method get_UnitySubMaterialAttribName addr 0x2018c08 size 0x78 virtual false final false
static ::StringW get_UnitySubMaterialAttribName() ;

/// @brief Method set_UnitySubMaterialAttribName addr 0x2018c80 size 0x54 virtual false final false
static void set_UnitySubMaterialAttribName(::StringW value) ;

/// @brief Method get_UnitySubMaterialIndexAttribName addr 0x2018cd4 size 0x78 virtual false final false
static ::StringW get_UnitySubMaterialIndexAttribName() ;

/// @brief Method set_UnitySubMaterialIndexAttribName addr 0x2018d4c size 0x54 virtual false final false
static void set_UnitySubMaterialIndexAttribName(::StringW value) ;

/// @brief Method get_UnityTagAttributeName addr 0x2018da0 size 0x78 virtual false final false
static ::StringW get_UnityTagAttributeName() ;

/// @brief Method set_UnityTagAttributeName addr 0x2018e18 size 0x54 virtual false final false
static void set_UnityTagAttributeName(::StringW value) ;

/// @brief Method get_UnityStaticAttributeName addr 0x2018e6c size 0x78 virtual false final false
static ::StringW get_UnityStaticAttributeName() ;

/// @brief Method set_UnityStaticAttributeName addr 0x2018ee4 size 0x54 virtual false final false
static void set_UnityStaticAttributeName(::StringW value) ;

/// @brief Method get_UnityScriptAttributeName addr 0x2018f38 size 0x78 virtual false final false
static ::StringW get_UnityScriptAttributeName() ;

/// @brief Method set_UnityScriptAttributeName addr 0x2018fb0 size 0x54 virtual false final false
static void set_UnityScriptAttributeName(::StringW value) ;

/// @brief Method get_UnityLayerAttributeName addr 0x2019004 size 0x78 virtual false final false
static ::StringW get_UnityLayerAttributeName() ;

/// @brief Method set_UnityLayerAttributeName addr 0x201907c size 0x54 virtual false final false
static void set_UnityLayerAttributeName(::StringW value) ;

/// @brief Method get_ImageGamma addr 0x20190d0 size 0x6c virtual false final false
static float_t get_ImageGamma() ;

/// @brief Method set_ImageGamma addr 0x2019270 size 0x54 virtual false final false
static void set_ImageGamma(float_t value) ;

/// @brief Method get_NormalGenerationThresholdAngle addr 0x201939c size 0x68 virtual false final false
static float_t get_NormalGenerationThresholdAngle() ;

/// @brief Method set_NormalGenerationThresholdAngle addr 0x2019404 size 0x54 virtual false final false
static void set_NormalGenerationThresholdAngle(float_t value) ;

/// @brief Method get_LastLoadHDAPath addr 0x2019458 size 0x78 virtual false final false
static ::StringW get_LastLoadHDAPath() ;

/// @brief Method set_LastLoadHDAPath addr 0x20194d0 size 0x54 virtual false final false
static void set_LastLoadHDAPath(::StringW value) ;

/// @brief Method get_LastLoadHIPPath addr 0x2019524 size 0x78 virtual false final false
static ::StringW get_LastLoadHIPPath() ;

/// @brief Method set_LastLoadHIPPath addr 0x201959c size 0x54 virtual false final false
static void set_LastLoadHIPPath(::StringW value) ;

/// @brief Method get_InstanceAttr addr 0x20195f0 size 0x78 virtual false final false
static ::StringW get_InstanceAttr() ;

/// @brief Method set_InstanceAttr addr 0x2019668 size 0x54 virtual false final false
static void set_InstanceAttr(::StringW value) ;

/// @brief Method get_UnityInstanceAttr addr 0x20196bc size 0x78 virtual false final false
static ::StringW get_UnityInstanceAttr() ;

/// @brief Method set_UnityInstanceAttr addr 0x2019734 size 0x54 virtual false final false
static void set_UnityInstanceAttr(::StringW value) ;

/// @brief Method get_UnityInputMeshAttr addr 0x2019788 size 0x78 virtual false final false
static ::StringW get_UnityInputMeshAttr() ;

/// @brief Method set_UnityInputMeshAttr addr 0x2019800 size 0x54 virtual false final false
static void set_UnityInputMeshAttr(::StringW value) ;

/// @brief Method get_LineColor addr 0x2019854 size 0x80 virtual false final false
static UnityEngine::Color get_LineColor() ;

/// @brief Method set_LineColor addr 0x20198d4 size 0x84 virtual false final false
static void set_LineColor(UnityEngine::Color value) ;

/// @brief Method get_EditorOnly_Tag addr 0x2013ca8 size 0x78 virtual false final false
static ::StringW get_EditorOnly_Tag() ;

/// @brief Method set_EditorOnly_Tag addr 0x2019958 size 0xf4 virtual false final false
static void set_EditorOnly_Tag(::StringW value) ;

/// @brief Method get_HDAData_Name addr 0x2013c30 size 0x78 virtual false final false
static ::StringW get_HDAData_Name() ;

/// @brief Method set_HDAData_Name addr 0x2019a4c size 0x54 virtual false final false
static void set_HDAData_Name(::StringW value) ;

/// @brief Method get_Session_Mode addr 0x2019aa0 size 0x68 virtual false final false
static HoudiniEngineUnity::SessionMode get_Session_Mode() ;

/// @brief Method set_Session_Mode addr 0x2019bfc size 0x54 virtual false final false
static void set_Session_Mode(HoudiniEngineUnity::SessionMode value) ;

/// @brief Method get_Session_PipeName addr 0x2019d20 size 0x78 virtual false final false
static ::StringW get_Session_PipeName() ;

/// @brief Method set_Session_PipeName addr 0x2019d98 size 0x54 virtual false final false
static void set_Session_PipeName(::StringW value) ;

/// @brief Method get_Session_Localhost addr 0x2019dec size 0x78 virtual false final false
static ::StringW get_Session_Localhost() ;

/// @brief Method set_Session_Localhost addr 0x2019e64 size 0x54 virtual false final false
static void set_Session_Localhost(::StringW value) ;

/// @brief Method get_Session_Port addr 0x2019eb8 size 0x64 virtual false final false
static int32_t get_Session_Port() ;

/// @brief Method set_Session_Port addr 0x2019f1c size 0x54 virtual false final false
static void set_Session_Port(int32_t value) ;

/// @brief Method get_Session_Timeout addr 0x2019f70 size 0x6c virtual false final false
static float_t get_Session_Timeout() ;

/// @brief Method set_Session_Timeout addr 0x2019fdc size 0x54 virtual false final false
static void set_Session_Timeout(float_t value) ;

/// @brief Method get_Session_AutoClose addr 0x201a030 size 0x64 virtual false final false
static bool get_Session_AutoClose() ;

/// @brief Method set_Session_AutoClose addr 0x201a094 size 0x54 virtual false final false
static void set_Session_AutoClose(bool value) ;

/// @brief Method get_Curves_ShowInSceneView addr 0x201a0e8 size 0x64 virtual false final false
static bool get_Curves_ShowInSceneView() ;

/// @brief Method set_Curves_ShowInSceneView addr 0x201a14c size 0x54 virtual false final false
static void set_Curves_ShowInSceneView(bool value) ;

/// @brief Method get_AssetCachePath addr 0x201a1a0 size 0x78 virtual false final false
static ::StringW get_AssetCachePath() ;

/// @brief Method set_AssetCachePath addr 0x201a218 size 0x54 virtual false final false
static void set_AssetCachePath(::StringW value) ;

/// @brief Method get_UseFullPathNamesForOutput addr 0x201a26c size 0x64 virtual false final false
static bool get_UseFullPathNamesForOutput() ;

/// @brief Method set_UseFullPathNamesForOutput addr 0x201a2d0 size 0x54 virtual false final false
static void set_UseFullPathNamesForOutput(bool value) ;

/// @brief Method get_HEngineToolsShelves addr 0x201a324 size 0x60 virtual false final false
static System::Collections::Generic::List_1<::StringW> get_HEngineToolsShelves() ;

/// @brief Method set_HEngineToolsShelves addr 0x201a550 size 0x58 virtual false final false
static void set_HEngineToolsShelves(System::Collections::Generic::List_1<::StringW> value) ;

/// @brief Method get_HEngineShelfSelectedIndex addr 0x201a6fc size 0x60 virtual false final false
static int32_t get_HEngineShelfSelectedIndex() ;

/// @brief Method set_HEngineShelfSelectedIndex addr 0x201a75c size 0x54 virtual false final false
static void set_HEngineShelfSelectedIndex(int32_t value) ;

/// @brief Method get_DefaultTerrainMaterial addr 0x201a7b0 size 0x78 virtual false final false
static ::StringW get_DefaultTerrainMaterial() ;

/// @brief Method set_DefaultTerrainMaterial addr 0x201a828 size 0x54 virtual false final false
static void set_DefaultTerrainMaterial(::StringW value) ;

/// @brief Method get_TerrainSplatTextureDefault addr 0x201a87c size 0x78 virtual false final false
static ::StringW get_TerrainSplatTextureDefault() ;

/// @brief Method set_TerrainSplatTextureDefault addr 0x201a8f4 size 0x54 virtual false final false
static void set_TerrainSplatTextureDefault(::StringW value) ;

/// @brief Method get_DefaultStandardShader addr 0x201a948 size 0x1a8 virtual false final false
static ::StringW get_DefaultStandardShader() ;

/// @brief Method set_DefaultStandardShader addr 0x201abb0 size 0x54 virtual false final false
static void set_DefaultStandardShader(::StringW value) ;

/// @brief Method get_DefaultVertexColorShader addr 0x201ac04 size 0x1a8 virtual false final false
static ::StringW get_DefaultVertexColorShader() ;

/// @brief Method set_DefaultVertexColorShader addr 0x201adac size 0x54 virtual false final false
static void set_DefaultVertexColorShader(::StringW value) ;

/// @brief Method get_DefaultTransparentShader addr 0x201ae00 size 0x1a8 virtual false final false
static ::StringW get_DefaultTransparentShader() ;

/// @brief Method set_DefaultTransparentShader addr 0x201afa8 size 0x54 virtual false final false
static void set_DefaultTransparentShader(::StringW value) ;

/// @brief Method get_DefaultCurveShader addr 0x201affc size 0x148 virtual false final false
static ::StringW get_DefaultCurveShader() ;

/// @brief Method set_DefaultCurveShader addr 0x201b144 size 0x54 virtual false final false
static void set_DefaultCurveShader(::StringW value) ;

/// @brief Method get_SupportHoudiniBoxType addr 0x201b198 size 0x60 virtual false final false
static bool get_SupportHoudiniBoxType() ;

/// @brief Method set_SupportHoudiniBoxType addr 0x201b1f8 size 0x54 virtual false final false
static void set_SupportHoudiniBoxType(bool value) ;

/// @brief Method get_SupportHoudiniSphereType addr 0x201b24c size 0x60 virtual false final false
static bool get_SupportHoudiniSphereType() ;

/// @brief Method set_SupportHoudiniSphereType addr 0x201b2ac size 0x54 virtual false final false
static void set_SupportHoudiniSphereType(bool value) ;

/// @brief Method get_SetCurrentThreadToInvariantCulture addr 0x201b300 size 0x64 virtual false final false
static bool get_SetCurrentThreadToInvariantCulture() ;

/// @brief Method set_SetCurrentThreadToInvariantCulture addr 0x201b364 size 0x60 virtual false final false
static void set_SetCurrentThreadToInvariantCulture(bool value) ;

/// @brief Method get_HoudiniDebugLaunchPath addr 0x201b4d0 size 0xec virtual false final false
static ::StringW get_HoudiniDebugLaunchPath() ;

/// @brief Method set_HoudiniDebugLaunchPath addr 0x201b5bc size 0x54 virtual false final false
static void set_HoudiniDebugLaunchPath(::StringW value) ;

/// @brief Method get_LastExportPath addr 0x201b610 size 0x78 virtual false final false
static ::StringW get_LastExportPath() ;

/// @brief Method set_LastExportPath addr 0x201b688 size 0x54 virtual false final false
static void set_LastExportPath(::StringW value) ;

/// @brief Method get_InputSelectionFilterLocation addr 0x201b6dc size 0x64 virtual false final false
static int32_t get_InputSelectionFilterLocation() ;

/// @brief Method set_InputSelectionFilterLocation addr 0x201b740 size 0x54 virtual false final false
static void set_InputSelectionFilterLocation(int32_t value) ;

/// @brief Method get_InputSelectionFilterState addr 0x201b794 size 0x64 virtual false final false
static int32_t get_InputSelectionFilterState() ;

/// @brief Method set_InputSelectionFilterState addr 0x201b7f8 size 0x54 virtual false final false
static void set_InputSelectionFilterState(int32_t value) ;

/// @brief Method get_InputSelectionFilterRoots addr 0x201b84c size 0x60 virtual false final false
static bool get_InputSelectionFilterRoots() ;

/// @brief Method set_InputSelectionFilterRoots addr 0x201b8ac size 0x54 virtual false final false
static void set_InputSelectionFilterRoots(bool value) ;

/// @brief Method get_InputSelectionFilterName addr 0x201b900 size 0x78 virtual false final false
static ::StringW get_InputSelectionFilterName() ;

/// @brief Method set_InputSelectionFilterName addr 0x201b978 size 0x54 virtual false final false
static void set_InputSelectionFilterName(::StringW value) ;

/// @brief Method get_CookOptionSplitGeosByGroup addr 0x201b9cc size 0x60 virtual false final false
static bool get_CookOptionSplitGeosByGroup() ;

/// @brief Method set_CookOptionSplitGeosByGroup addr 0x201ba2c size 0x54 virtual false final false
static void set_CookOptionSplitGeosByGroup(bool value) ;

/// @brief Method get_MaxVerticesPerPrimitive addr 0x201ba80 size 0x64 virtual false final false
static int32_t get_MaxVerticesPerPrimitive() ;

/// @brief Method set_MaxVerticesPerPrimitive addr 0x201bae4 size 0x54 virtual false final false
static void set_MaxVerticesPerPrimitive(int32_t value) ;

/// @brief Method get_HoudiniInstallPath addr 0x2016f40 size 0x78 virtual false final false
static ::StringW get_HoudiniInstallPath() ;

/// @brief Method set_HoudiniInstallPath addr 0x2017030 size 0x54 virtual false final false
static void set_HoudiniInstallPath(::StringW value) ;

/// @brief Method get_LastHoudiniVersion addr 0x2016fb8 size 0x78 virtual false final false
static ::StringW get_LastHoudiniVersion() ;

/// @brief Method set_LastHoudiniVersion addr 0x2017084 size 0x54 virtual false final false
static void set_LastHoudiniVersion(::StringW value) ;

/// @brief Method get_SessionSyncAutoCook addr 0x201bb38 size 0x64 virtual false final false
static bool get_SessionSyncAutoCook() ;

/// @brief Method set_SessionSyncAutoCook addr 0x201bb9c size 0x54 virtual false final false
static void set_SessionSyncAutoCook(bool value) ;

/// @brief Method get_WriteCookLogs addr 0x20146fc size 0x60 virtual false final false
static bool get_WriteCookLogs() ;

/// @brief Method set_WriteCookLogs addr 0x201bbf0 size 0x54 virtual false final false
static void set_WriteCookLogs(bool value) ;

/// @brief Method get_UseHDRColor addr 0x201bc44 size 0x64 virtual false final false
static bool get_UseHDRColor() ;

/// @brief Method set_UseHDRColor addr 0x201bca8 size 0x54 virtual false final false
static void set_UseHDRColor(bool value) ;

/// @brief Method get_UseSpecularShader addr 0x201aaf0 size 0x60 virtual false final false
static bool get_UseSpecularShader() ;

/// @brief Method set_UseSpecularShader addr 0x201bcfc size 0x54 virtual false final false
static void set_UseSpecularShader(bool value) ;

/// @brief Method get_UseLegacyShaders addr 0x201ab50 size 0x60 virtual false final false
static bool get_UseLegacyShaders() ;

/// @brief Method set_UseLegacyShaders addr 0x201bd50 size 0x54 virtual false final false
static void set_UseLegacyShaders(bool value) ;

/// @brief Method get_ShortenFolderPaths addr 0x201bda4 size 0x60 virtual false final false
static bool get_ShortenFolderPaths() ;

/// @brief Method set_ShortenFolderPaths addr 0x201be04 size 0x54 virtual false final false
static void set_ShortenFolderPaths(bool value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_PluginSettings);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_PluginSettings, "HoudiniEngineUnity", "HEU_PluginSettings");
