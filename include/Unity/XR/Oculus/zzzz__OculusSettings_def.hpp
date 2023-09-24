#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstddef>
#include <cstdint>
namespace Unity::XR::Oculus {
struct Unity__XR__Oculus__OculusSettings__StereoRenderingModeDesktop;
}
namespace Unity::XR::Oculus {
struct Unity__XR__Oculus__OculusSettings__FoveationMethod;
}
namespace Unity::XR::Oculus {
struct Unity__XR__Oculus__OculusSettings__StereoRenderingModeAndroid;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace Unity::XR::Oculus {
struct Unity__XR__Oculus__OculusSettings__FoveationMethod;
}
namespace Unity::XR::Oculus {
struct Unity__XR__Oculus__OculusSettings__StereoRenderingModeAndroid;
}
namespace Unity::XR::Oculus {
struct Unity__XR__Oculus__OculusSettings__StereoRenderingModeDesktop;
}
namespace Unity::XR::Oculus {
class OculusSettings;
}
// Type: ::StereoRenderingModeDesktop
namespace Unity::XR::Oculus {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15236))
// CS Name: Unity.XR.Oculus.OculusSettings::StereoRenderingModeDesktop
struct CORDL_TYPE Unity__XR__Oculus__OculusSettings__StereoRenderingModeDesktop : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__XR__Oculus__OculusSettings__StereoRenderingModeDesktop(int32_t value__) noexcept;


                    constexpr Unity__XR__Oculus__OculusSettings__StereoRenderingModeDesktop(Unity__XR__Oculus__OculusSettings__StereoRenderingModeDesktop const&) = default;
                    constexpr Unity__XR__Oculus__OculusSettings__StereoRenderingModeDesktop(Unity__XR__Oculus__OculusSettings__StereoRenderingModeDesktop&&) = default;
                    constexpr Unity__XR__Oculus__OculusSettings__StereoRenderingModeDesktop& operator=(Unity__XR__Oculus__OculusSettings__StereoRenderingModeDesktop const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__XR__Oculus__OculusSettings__StereoRenderingModeDesktop& operator=(Unity__XR__Oculus__OculusSettings__StereoRenderingModeDesktop&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__XR__Oculus__OculusSettings__StereoRenderingModeDesktop(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Unity__XR__Oculus__OculusSettings__StereoRenderingModeDesktop_Unwrapped : int32_t {
__MultiPass = 0,
__SinglePassInstanced = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Unity__XR__Oculus__OculusSettings__StereoRenderingModeDesktop_Unwrapped () const noexcept {
return std::bit_cast<__Unity__XR__Oculus__OculusSettings__StereoRenderingModeDesktop_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field MultiPass offset 0
static Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__StereoRenderingModeDesktop const MultiPass;

/// @brief Field SinglePassInstanced offset 0
static Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__StereoRenderingModeDesktop const SinglePassInstanced;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::XR::Oculus
// Type: ::StereoRenderingModeAndroid
namespace Unity::XR::Oculus {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15237))
// CS Name: Unity.XR.Oculus.OculusSettings::StereoRenderingModeAndroid
struct CORDL_TYPE Unity__XR__Oculus__OculusSettings__StereoRenderingModeAndroid : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__XR__Oculus__OculusSettings__StereoRenderingModeAndroid(int32_t value__) noexcept;


                    constexpr Unity__XR__Oculus__OculusSettings__StereoRenderingModeAndroid(Unity__XR__Oculus__OculusSettings__StereoRenderingModeAndroid const&) = default;
                    constexpr Unity__XR__Oculus__OculusSettings__StereoRenderingModeAndroid(Unity__XR__Oculus__OculusSettings__StereoRenderingModeAndroid&&) = default;
                    constexpr Unity__XR__Oculus__OculusSettings__StereoRenderingModeAndroid& operator=(Unity__XR__Oculus__OculusSettings__StereoRenderingModeAndroid const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__XR__Oculus__OculusSettings__StereoRenderingModeAndroid& operator=(Unity__XR__Oculus__OculusSettings__StereoRenderingModeAndroid&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__XR__Oculus__OculusSettings__StereoRenderingModeAndroid(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Unity__XR__Oculus__OculusSettings__StereoRenderingModeAndroid_Unwrapped : int32_t {
__MultiPass = 0,
__Multiview = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Unity__XR__Oculus__OculusSettings__StereoRenderingModeAndroid_Unwrapped () const noexcept {
return std::bit_cast<__Unity__XR__Oculus__OculusSettings__StereoRenderingModeAndroid_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field MultiPass offset 0
static Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__StereoRenderingModeAndroid const MultiPass;

/// @brief Field Multiview offset 0
static Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__StereoRenderingModeAndroid const Multiview;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::XR::Oculus
// Type: ::FoveationMethod
namespace Unity::XR::Oculus {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15238))
// CS Name: Unity.XR.Oculus.OculusSettings::FoveationMethod
struct CORDL_TYPE Unity__XR__Oculus__OculusSettings__FoveationMethod : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__XR__Oculus__OculusSettings__FoveationMethod(int32_t value__) noexcept;


                    constexpr Unity__XR__Oculus__OculusSettings__FoveationMethod(Unity__XR__Oculus__OculusSettings__FoveationMethod const&) = default;
                    constexpr Unity__XR__Oculus__OculusSettings__FoveationMethod(Unity__XR__Oculus__OculusSettings__FoveationMethod&&) = default;
                    constexpr Unity__XR__Oculus__OculusSettings__FoveationMethod& operator=(Unity__XR__Oculus__OculusSettings__FoveationMethod const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__XR__Oculus__OculusSettings__FoveationMethod& operator=(Unity__XR__Oculus__OculusSettings__FoveationMethod&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__XR__Oculus__OculusSettings__FoveationMethod(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Unity__XR__Oculus__OculusSettings__FoveationMethod_Unwrapped : int32_t {
__FixedFoveatedRendering = 0,
__EyeTrackedFoveatedRendering = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Unity__XR__Oculus__OculusSettings__FoveationMethod_Unwrapped () const noexcept {
return std::bit_cast<__Unity__XR__Oculus__OculusSettings__FoveationMethod_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field FixedFoveatedRendering offset 0
static Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__FoveationMethod const FixedFoveatedRendering;

/// @brief Field EyeTrackedFoveatedRendering offset 0
static Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__FoveationMethod const EyeTrackedFoveatedRendering;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::XR::Oculus
// Type: Unity.XR.Oculus::OculusSettings
namespace Unity::XR::Oculus {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15239))
// CS Name: Unity.XR.Oculus.OculusSettings
class CORDL_TYPE OculusSettings : public UnityEngine::ScriptableObject {
public:
// Declarations
using FoveationMethod = Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__FoveationMethod;

using StereoRenderingModeAndroid = Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__StereoRenderingModeAndroid;

using StereoRenderingModeDesktop = Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__StereoRenderingModeDesktop;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~OculusSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusSettings", modifiers: " const&", def_value: None }]
constexpr OculusSettings(OculusSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusSettings", modifiers: "&&", def_value: None }]
constexpr OculusSettings(OculusSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OculusSettings(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr OculusSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OculusSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OculusSettings& operator=(OculusSettings&& o) noexcept = default;
  constexpr OculusSettings& operator=(OculusSettings const& o) noexcept = default;
                


// Fields

 Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__StereoRenderingModeDesktop __declspec(property(get=__get_m_StereoRenderingModeDesktop, put=__set_m_StereoRenderingModeDesktop))  m_StereoRenderingModeDesktop;

constexpr void __set_m_StereoRenderingModeDesktop(Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__StereoRenderingModeDesktop value) ;

constexpr Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__StereoRenderingModeDesktop __get_m_StereoRenderingModeDesktop() const;

 Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__StereoRenderingModeAndroid __declspec(property(get=__get_m_StereoRenderingModeAndroid, put=__set_m_StereoRenderingModeAndroid))  m_StereoRenderingModeAndroid;

constexpr void __set_m_StereoRenderingModeAndroid(Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__StereoRenderingModeAndroid value) ;

constexpr Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__StereoRenderingModeAndroid __get_m_StereoRenderingModeAndroid() const;

 bool __declspec(property(get=__get_SharedDepthBuffer, put=__set_SharedDepthBuffer))  SharedDepthBuffer;

constexpr void __set_SharedDepthBuffer(bool value) ;

constexpr bool __get_SharedDepthBuffer() const;

 bool __declspec(property(get=__get_DepthSubmission, put=__set_DepthSubmission))  DepthSubmission;

constexpr void __set_DepthSubmission(bool value) ;

constexpr bool __get_DepthSubmission() const;

 bool __declspec(property(get=__get_DashSupport, put=__set_DashSupport))  DashSupport;

constexpr void __set_DashSupport(bool value) ;

constexpr bool __get_DashSupport() const;

 bool __declspec(property(get=__get_LowOverheadMode, put=__set_LowOverheadMode))  LowOverheadMode;

constexpr void __set_LowOverheadMode(bool value) ;

constexpr bool __get_LowOverheadMode() const;

 bool __declspec(property(get=__get_OptimizeBufferDiscards, put=__set_OptimizeBufferDiscards))  OptimizeBufferDiscards;

constexpr void __set_OptimizeBufferDiscards(bool value) ;

constexpr bool __get_OptimizeBufferDiscards() const;

 bool __declspec(property(get=__get_PhaseSync, put=__set_PhaseSync))  PhaseSync;

constexpr void __set_PhaseSync(bool value) ;

constexpr bool __get_PhaseSync() const;

 bool __declspec(property(get=__get_SymmetricProjection, put=__set_SymmetricProjection))  SymmetricProjection;

constexpr void __set_SymmetricProjection(bool value) ;

constexpr bool __get_SymmetricProjection() const;

 bool __declspec(property(get=__get_SubsampledLayout, put=__set_SubsampledLayout))  SubsampledLayout;

constexpr void __set_SubsampledLayout(bool value) ;

constexpr bool __get_SubsampledLayout() const;

 Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__FoveationMethod __declspec(property(get=__get_FoveatedRenderingMethod, put=__set_FoveatedRenderingMethod))  FoveatedRenderingMethod;

constexpr void __set_FoveatedRenderingMethod(Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__FoveationMethod value) ;

constexpr Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__FoveationMethod __get_FoveatedRenderingMethod() const;

 bool __declspec(property(get=__get_LateLatching, put=__set_LateLatching))  LateLatching;

constexpr void __set_LateLatching(bool value) ;

constexpr bool __get_LateLatching() const;

 bool __declspec(property(get=__get_LateLatchingDebug, put=__set_LateLatchingDebug))  LateLatchingDebug;

constexpr void __set_LateLatchingDebug(bool value) ;

constexpr bool __get_LateLatchingDebug() const;

 bool __declspec(property(get=__get_EnableTrackingOriginStageMode, put=__set_EnableTrackingOriginStageMode))  EnableTrackingOriginStageMode;

constexpr void __set_EnableTrackingOriginStageMode(bool value) ;

constexpr bool __get_EnableTrackingOriginStageMode() const;

 bool __declspec(property(get=__get_SpaceWarp, put=__set_SpaceWarp))  SpaceWarp;

constexpr void __set_SpaceWarp(bool value) ;

constexpr bool __get_SpaceWarp() const;

 bool __declspec(property(get=__get_TargetQuest, put=__set_TargetQuest))  TargetQuest;

constexpr void __set_TargetQuest(bool value) ;

constexpr bool __get_TargetQuest() const;

 bool __declspec(property(get=__get_TargetQuest2, put=__set_TargetQuest2))  TargetQuest2;

constexpr void __set_TargetQuest2(bool value) ;

constexpr bool __get_TargetQuest2() const;

 bool __declspec(property(get=__get_TargetQuestPro, put=__set_TargetQuestPro))  TargetQuestPro;

constexpr void __set_TargetQuestPro(bool value) ;

constexpr bool __get_TargetQuestPro() const;

 UnityEngine::Texture2D __declspec(property(get=__get_SystemSplashScreen, put=__set_SystemSplashScreen))  SystemSplashScreen;

constexpr void __set_SystemSplashScreen(UnityEngine::Texture2D value) ;

constexpr UnityEngine::Texture2D __get_SystemSplashScreen() const;

static Unity::XR::Oculus::OculusSettings __declspec(property(get=__get_s_Settings, put=__set_s_Settings))  s_Settings;

static void __set_s_Settings(Unity::XR::Oculus::OculusSettings value) ;

static Unity::XR::Oculus::OculusSettings __get_s_Settings() ;


// Methods

/// @brief Method GetStereoRenderingMode addr 0x2adfa70 size 0x8 virtual false final false
 uint16_t GetStereoRenderingMode() ;

/// @brief Method Awake addr 0x2ae3288 size 0x4c virtual false final false
 void Awake() ;

static Unity::XR::Oculus::OculusSettings New_ctor() ;

/// @brief Method .ctor addr 0x2ae32d4 size 0x30 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::Oculus
DEFINE_IL2CPP_ARG_TYPE(Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__FoveationMethod, "Unity.XR.Oculus", "OculusSettings/FoveationMethod");
DEFINE_IL2CPP_ARG_TYPE(Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__StereoRenderingModeAndroid, "Unity.XR.Oculus", "OculusSettings/StereoRenderingModeAndroid");
DEFINE_IL2CPP_ARG_TYPE(Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__StereoRenderingModeDesktop, "Unity.XR.Oculus", "OculusSettings/StereoRenderingModeDesktop");
NEED_NO_BOX(Unity::XR::Oculus::OculusSettings);
DEFINE_IL2CPP_ARG_TYPE(Unity::XR::Oculus::OculusSettings, "Unity.XR.Oculus", "OculusSettings");
