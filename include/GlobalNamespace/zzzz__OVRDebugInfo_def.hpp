#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRDebugInfo;
}
// Type: ::OVRDebugInfo
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8891))
// CS Name: OVRDebugInfo
class CORDL_TYPE OVRDebugInfo : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd0};

virtual ~OVRDebugInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRDebugInfo", modifiers: " const&", def_value: None }]
constexpr OVRDebugInfo(OVRDebugInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRDebugInfo", modifiers: "&&", def_value: None }]
constexpr OVRDebugInfo(OVRDebugInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRDebugInfo(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRDebugInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRDebugInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRDebugInfo& operator=(OVRDebugInfo&& o) noexcept = default;
  constexpr OVRDebugInfo& operator=(OVRDebugInfo const& o) noexcept = default;
                


// Fields

 UnityEngine::GameObject __declspec(property(get=__get_debugUIManager, put=__set_debugUIManager))  debugUIManager;

constexpr void __set_debugUIManager(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_debugUIManager() const;

 UnityEngine::GameObject __declspec(property(get=__get_debugUIObject, put=__set_debugUIObject))  debugUIObject;

constexpr void __set_debugUIObject(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_debugUIObject() const;

 UnityEngine::GameObject __declspec(property(get=__get_riftPresent, put=__set_riftPresent))  riftPresent;

constexpr void __set_riftPresent(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_riftPresent() const;

 UnityEngine::GameObject __declspec(property(get=__get_fps, put=__set_fps))  fps;

constexpr void __set_fps(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_fps() const;

 UnityEngine::GameObject __declspec(property(get=__get_ipd, put=__set_ipd))  ipd;

constexpr void __set_ipd(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_ipd() const;

 UnityEngine::GameObject __declspec(property(get=__get_fov, put=__set_fov))  fov;

constexpr void __set_fov(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_fov() const;

 UnityEngine::GameObject __declspec(property(get=__get_height, put=__set_height))  height;

constexpr void __set_height(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_height() const;

 UnityEngine::GameObject __declspec(property(get=__get_depth, put=__set_depth))  depth;

constexpr void __set_depth(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_depth() const;

 UnityEngine::GameObject __declspec(property(get=__get_resolutionEyeTexture, put=__set_resolutionEyeTexture))  resolutionEyeTexture;

constexpr void __set_resolutionEyeTexture(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_resolutionEyeTexture() const;

 UnityEngine::GameObject __declspec(property(get=__get_latencies, put=__set_latencies))  latencies;

constexpr void __set_latencies(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_latencies() const;

 UnityEngine::GameObject __declspec(property(get=__get_texts, put=__set_texts))  texts;

constexpr void __set_texts(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_texts() const;

 ::StringW __declspec(property(get=__get_strRiftPresent, put=__set_strRiftPresent))  strRiftPresent;

constexpr void __set_strRiftPresent(::StringW value) ;

constexpr ::StringW __get_strRiftPresent() const;

 ::StringW __declspec(property(get=__get_strFPS, put=__set_strFPS))  strFPS;

constexpr void __set_strFPS(::StringW value) ;

constexpr ::StringW __get_strFPS() const;

 ::StringW __declspec(property(get=__get_strIPD, put=__set_strIPD))  strIPD;

constexpr void __set_strIPD(::StringW value) ;

constexpr ::StringW __get_strIPD() const;

 ::StringW __declspec(property(get=__get_strFOV, put=__set_strFOV))  strFOV;

constexpr void __set_strFOV(::StringW value) ;

constexpr ::StringW __get_strFOV() const;

 ::StringW __declspec(property(get=__get_strHeight, put=__set_strHeight))  strHeight;

constexpr void __set_strHeight(::StringW value) ;

constexpr ::StringW __get_strHeight() const;

 ::StringW __declspec(property(get=__get_strDepth, put=__set_strDepth))  strDepth;

constexpr void __set_strDepth(::StringW value) ;

constexpr ::StringW __get_strDepth() const;

 ::StringW __declspec(property(get=__get_strResolutionEyeTexture, put=__set_strResolutionEyeTexture))  strResolutionEyeTexture;

constexpr void __set_strResolutionEyeTexture(::StringW value) ;

constexpr ::StringW __get_strResolutionEyeTexture() const;

 ::StringW __declspec(property(get=__get_strLatencies, put=__set_strLatencies))  strLatencies;

constexpr void __set_strLatencies(::StringW value) ;

constexpr ::StringW __get_strLatencies() const;

 float_t __declspec(property(get=__get_updateInterval, put=__set_updateInterval))  updateInterval;

constexpr void __set_updateInterval(float_t value) ;

constexpr float_t __get_updateInterval() const;

 float_t __declspec(property(get=__get_accum, put=__set_accum))  accum;

constexpr void __set_accum(float_t value) ;

constexpr float_t __get_accum() const;

 int32_t __declspec(property(get=__get_frames, put=__set_frames))  frames;

constexpr void __set_frames(int32_t value) ;

constexpr int32_t __get_frames() const;

 float_t __declspec(property(get=__get_timeLeft, put=__set_timeLeft))  timeLeft;

constexpr void __set_timeLeft(float_t value) ;

constexpr float_t __get_timeLeft() const;

 bool __declspec(property(get=__get_initUIComponent, put=__set_initUIComponent))  initUIComponent;

constexpr void __set_initUIComponent(bool value) ;

constexpr bool __get_initUIComponent() const;

 bool __declspec(property(get=__get_isInited, put=__set_isInited))  isInited;

constexpr void __set_isInited(bool value) ;

constexpr bool __get_isInited() const;

 float_t __declspec(property(get=__get_offsetY, put=__set_offsetY))  offsetY;

constexpr void __set_offsetY(float_t value) ;

constexpr float_t __get_offsetY() const;

 float_t __declspec(property(get=__get_riftPresentTimeout, put=__set_riftPresentTimeout))  riftPresentTimeout;

constexpr void __set_riftPresentTimeout(float_t value) ;

constexpr float_t __get_riftPresentTimeout() const;

 bool __declspec(property(get=__get_showVRVars, put=__set_showVRVars))  showVRVars;

constexpr void __set_showVRVars(bool value) ;

constexpr bool __get_showVRVars() const;


// Methods

/// @brief Method Awake addr 0x261eeec size 0x1e4 virtual false final false
 void Awake() ;

/// @brief Method Update addr 0x261f0d0 size 0xb8 virtual false final false
 void Update() ;

/// @brief Method OnDestroy addr 0x261f7d8 size 0x8 virtual false final false
 void OnDestroy() ;

/// @brief Method InitUIComponents addr 0x261f188 size 0x3b4 virtual false final false
 void InitUIComponents() ;

/// @brief Method UpdateVariable addr 0x261f570 size 0x38 virtual false final false
 void UpdateVariable() ;

/// @brief Method UpdateStrings addr 0x261f5a8 size 0x230 virtual false final false
 void UpdateStrings() ;

/// @brief Method RiftPresentGUI addr 0x261ff88 size 0x184 virtual false final false
 void RiftPresentGUI(UnityEngine::GameObject guiMainOBj) ;

/// @brief Method UpdateDeviceDetection addr 0x261f53c size 0x34 virtual false final false
 void UpdateDeviceDetection() ;

/// @brief Method VariableObjectManager addr 0x261f7e0 size 0x1ac virtual false final false
 UnityEngine::GameObject VariableObjectManager(UnityEngine::GameObject gameObject, ::StringW name, float_t posY, ::StringW str, int32_t fontSize) ;

/// @brief Method ComponentComposition addr 0x262010c size 0x338 virtual false final false
 UnityEngine::GameObject ComponentComposition(UnityEngine::GameObject GO) ;

/// @brief Method UpdateIPD addr 0x261f98c size 0xcc virtual false final false
 void UpdateIPD() ;

/// @brief Method UpdateEyeHeightOffset addr 0x261fa58 size 0xc0 virtual false final false
 void UpdateEyeHeightOffset() ;

/// @brief Method UpdateEyeDepthOffset addr 0x261fb18 size 0xc0 virtual false final false
 void UpdateEyeDepthOffset() ;

/// @brief Method UpdateFOV addr 0x261fbd8 size 0x100 virtual false final false
 void UpdateFOV() ;

/// @brief Method UpdateResolutionEyeTexture addr 0x261fcd8 size 0x1cc virtual false final false
 void UpdateResolutionEyeTexture() ;

/// @brief Method UpdateLatencyValues addr 0x261fea4 size 0x4 virtual false final false
 void UpdateLatencyValues() ;

/// @brief Method UpdateFPS addr 0x261fea8 size 0xe0 virtual false final false
 void UpdateFPS() ;

static GlobalNamespace::OVRDebugInfo New_ctor() ;

/// @brief Method .ctor addr 0x2620444 size 0x18 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRDebugInfo);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRDebugInfo, "", "OVRDebugInfo");
