#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRFeature;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR {
struct ____UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode;
}
namespace UnityEngine::XR::OpenXR {
struct ____UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRSettings;
}
// Type: ::RenderMode
namespace UnityEngine::XR::OpenXR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14157))
// CS Name: UnityEngine.XR.OpenXR.OpenXRSettings::RenderMode
struct CORDL_TYPE ____UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode(int32_t value__) noexcept;


                    constexpr ____UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode(____UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode const&) = default;
                    constexpr ____UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode(____UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode&&) = default;
                    constexpr ____UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode& operator=(____UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode& operator=(____UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode_Unwrapped : int32_t {
__MultiPass = 0,
__SinglePassInstanced = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field MultiPass offset 0
static ::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode const MultiPass;

/// @brief Field SinglePassInstanced offset 0
static ::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode const SinglePassInstanced;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR
// Type: ::DepthSubmissionMode
namespace UnityEngine::XR::OpenXR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14158))
// CS Name: UnityEngine.XR.OpenXR.OpenXRSettings::DepthSubmissionMode
struct CORDL_TYPE ____UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode(int32_t value__) noexcept;


                    constexpr ____UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode(____UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode const&) = default;
                    constexpr ____UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode(____UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode&&) = default;
                    constexpr ____UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode& operator=(____UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode& operator=(____UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode_Unwrapped : int32_t {
__None = 0,
__Depth16Bit = 1,
__Depth24Bit = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode const None;

/// @brief Field Depth16Bit offset 0
static ::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode const Depth16Bit;

/// @brief Field Depth24Bit offset 0
static ::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode const Depth24Bit;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR
// Type: UnityEngine.XR.OpenXR::OpenXRSettings
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14159))
// CS Name: UnityEngine.XR.OpenXR.OpenXRSettings
class CORDL_TYPE OpenXRSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using DepthSubmissionMode = ::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode;

using RenderMode = ::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~OpenXRSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRSettings", modifiers: " const&", def_value: None }]
constexpr OpenXRSettings(OpenXRSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRSettings", modifiers: "&&", def_value: None }]
constexpr OpenXRSettings(OpenXRSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OpenXRSettings(void* ptr) noexcept : ::UnityEngine::ScriptableObject(ptr) {
}


  constexpr OpenXRSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OpenXRSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OpenXRSettings& operator=(OpenXRSettings&& o) noexcept = default;
  constexpr OpenXRSettings& operator=(OpenXRSettings const& o) noexcept = default;
                


// Fields

 ::ArrayW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature> __declspec(property(get=__get_features, put=__set_features))  features;

constexpr void __set_features(::ArrayW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature> value) ;

constexpr ::ArrayW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature> __get_features() const;

 ::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode __declspec(property(get=__get_m_renderMode, put=__set_m_renderMode))  m_renderMode;

constexpr void __set_m_renderMode(::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode value) ;

constexpr ::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode __get_m_renderMode() const;

 ::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode __declspec(property(get=__get_m_depthSubmissionMode, put=__set_m_depthSubmissionMode))  m_depthSubmissionMode;

constexpr void __set_m_depthSubmissionMode(::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode value) ;

constexpr ::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode __get_m_depthSubmissionMode() const;

/// @brief Field LibraryName offset 0
static constexpr ::ConstString  LibraryName{u"UnityOpenXR"};

static ::UnityEngine::XR::OpenXR::OpenXRSettings __declspec(property(get=__get_s_RuntimeInstance, put=__set_s_RuntimeInstance))  s_RuntimeInstance;

static void __set_s_RuntimeInstance(::UnityEngine::XR::OpenXR::OpenXRSettings value) ;

static ::UnityEngine::XR::OpenXR::OpenXRSettings __get_s_RuntimeInstance() ;


// Properties

 int32_t __declspec(property(get=get_featureCount))  featureCount;

 ::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode __declspec(property(get=get_renderMode, put=set_renderMode))  renderMode;

 ::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode __declspec(property(get=get_depthSubmissionMode, put=set_depthSubmissionMode))  depthSubmissionMode;

static ::UnityEngine::XR::OpenXR::OpenXRSettings __declspec(property(get=get_ActiveBuildTargetInstance))  ActiveBuildTargetInstance;

static ::UnityEngine::XR::OpenXR::OpenXRSettings __declspec(property(get=get_Instance))  Instance;


// Methods

/// @brief Method get_featureCount addr 0x2ae4698 size 0x1c virtual false final false
 int32_t get_featureCount() ;

/// @brief Method GetFeature addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFeature>
 TFeature GetFeature() ;

/// @brief Method GetFeature addr 0x2ae46b4 size 0x8c virtual false final false
 ::UnityEngine::XR::OpenXR::Features::OpenXRFeature GetFeature(::System::Type featureType) ;

/// @brief Method GetFeatures addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFeature>
 ::ArrayW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature> GetFeatures() ;

/// @brief Method GetFeatures addr 0x2ae4740 size 0x16c virtual false final false
 ::ArrayW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature> GetFeatures(::System::Type featureType) ;

/// @brief Method GetFeatures addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFeature>
 int32_t GetFeatures(::System::Collections::Generic::List_1<TFeature> featuresOut) ;

/// @brief Method GetFeatures addr 0x2ae48ac size 0x158 virtual false final false
 int32_t GetFeatures(::System::Type featureType, ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRFeature> featuresOut) ;

/// @brief Method GetFeatures addr 0x2ae4a04 size 0x8c virtual false final false
 ::ArrayW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature> GetFeatures() ;

/// @brief Method GetFeatures addr 0x2ae4a90 size 0x9c virtual false final false
 int32_t GetFeatures(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRFeature> featuresOut) ;

/// @brief Method get_renderMode addr 0x2ae4b2c size 0xd8 virtual false final false
 ::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode get_renderMode() ;

/// @brief Method set_renderMode addr 0x2ae4c6c size 0xec virtual false final false
 void set_renderMode(::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode value) ;

/// @brief Method get_depthSubmissionMode addr 0x2ae4dd4 size 0xd8 virtual false final false
 ::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode get_depthSubmissionMode() ;

/// @brief Method set_depthSubmissionMode addr 0x2ae4f14 size 0xec virtual false final false
 void set_depthSubmissionMode(::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode value) ;

/// @brief Method ApplyRenderSettings addr 0x2ae507c size 0x1c virtual false final false
 void ApplyRenderSettings() ;

/// @brief Method Internal_SetRenderMode addr 0x2ae4d58 size 0x7c virtual false final false
static void Internal_SetRenderMode(::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode renderMode) ;

/// @brief Method Internal_GetRenderMode addr 0x2ae4c04 size 0x68 virtual false final false
static ::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode Internal_GetRenderMode() ;

/// @brief Method Internal_SetDepthSubmissionMode addr 0x2ae5000 size 0x7c virtual false final false
static void Internal_SetDepthSubmissionMode(::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode depthSubmissionMode) ;

/// @brief Method Internal_GetDepthSubmissionMode addr 0x2ae4eac size 0x68 virtual false final false
static ::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode Internal_GetDepthSubmissionMode() ;

/// @brief Method Awake addr 0x2ae5098 size 0x4c virtual false final false
 void Awake() ;

/// @brief Method ApplySettings addr 0x2ae50e4 size 0x1c virtual false final false
 void ApplySettings() ;

/// @brief Method GetInstance addr 0x2ae5100 size 0xa8 virtual false final false
static ::UnityEngine::XR::OpenXR::OpenXRSettings GetInstance(bool useActiveBuildTarget) ;

/// @brief Method get_ActiveBuildTargetInstance addr 0x2ae51a8 size 0x8 virtual false final false
static ::UnityEngine::XR::OpenXR::OpenXRSettings get_ActiveBuildTargetInstance() ;

/// @brief Method get_Instance addr 0x2ae51b0 size 0x8 virtual false final false
static ::UnityEngine::XR::OpenXR::OpenXRSettings get_Instance() ;

// Ctor Parameters []
explicit OpenXRSettings() ;

/// @brief Method .ctor addr 0x2ae51b8 size 0x60 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode, "UnityEngine.XR.OpenXR", "OpenXRSettings/DepthSubmissionMode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode, "UnityEngine.XR.OpenXR", "OpenXRSettings/RenderMode");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::OpenXRSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::OpenXRSettings, "UnityEngine.XR.OpenXR", "OpenXRSettings");
