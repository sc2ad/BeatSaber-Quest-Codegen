#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::XR::OpenXR {
class OpenXRAnalytics;
}
namespace UnityEngine::XR::OpenXR {
struct ____UnityEngine__XR__OpenXR__OpenXRAnalytics__InitializeEvent;
}
// Type: ::InitializeEvent
namespace UnityEngine::XR::OpenXR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14160))
// CS Name: UnityEngine.XR.OpenXR.OpenXRAnalytics::InitializeEvent
struct CORDL_TYPE ____UnityEngine__XR__OpenXR__OpenXRAnalytics__InitializeEvent : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "success", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "runtime", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "runtime_version", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "plugin_version", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "api_version", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "available_extensions", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }, CppParam { name: "enabled_extensions", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }, CppParam { name: "enabled_features", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }, CppParam { name: "failed_features", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }]
constexpr ____UnityEngine__XR__OpenXR__OpenXRAnalytics__InitializeEvent(bool success, ::StringW runtime, ::StringW runtime_version, ::StringW plugin_version, ::StringW api_version, ::ArrayW<::StringW> available_extensions, ::ArrayW<::StringW> enabled_extensions, ::ArrayW<::StringW> enabled_features, ::ArrayW<::StringW> failed_features) noexcept;


                    constexpr ____UnityEngine__XR__OpenXR__OpenXRAnalytics__InitializeEvent(____UnityEngine__XR__OpenXR__OpenXRAnalytics__InitializeEvent const&) = default;
                    constexpr ____UnityEngine__XR__OpenXR__OpenXRAnalytics__InitializeEvent(____UnityEngine__XR__OpenXR__OpenXRAnalytics__InitializeEvent&&) = default;
                    constexpr ____UnityEngine__XR__OpenXR__OpenXRAnalytics__InitializeEvent& operator=(____UnityEngine__XR__OpenXR__OpenXRAnalytics__InitializeEvent const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__XR__OpenXR__OpenXRAnalytics__InitializeEvent& operator=(____UnityEngine__XR__OpenXR__OpenXRAnalytics__InitializeEvent&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__XR__OpenXR__OpenXRAnalytics__InitializeEvent(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_success, put=__set_success))  success;

constexpr void __set_success(bool value) ;

constexpr bool __get_success() const;

 ::StringW __declspec(property(get=__get_runtime, put=__set_runtime))  runtime;

constexpr void __set_runtime(::StringW value) ;

constexpr ::StringW __get_runtime() const;

 ::StringW __declspec(property(get=__get_runtime_version, put=__set_runtime_version))  runtime_version;

constexpr void __set_runtime_version(::StringW value) ;

constexpr ::StringW __get_runtime_version() const;

 ::StringW __declspec(property(get=__get_plugin_version, put=__set_plugin_version))  plugin_version;

constexpr void __set_plugin_version(::StringW value) ;

constexpr ::StringW __get_plugin_version() const;

 ::StringW __declspec(property(get=__get_api_version, put=__set_api_version))  api_version;

constexpr void __set_api_version(::StringW value) ;

constexpr ::StringW __get_api_version() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_available_extensions, put=__set_available_extensions))  available_extensions;

constexpr void __set_available_extensions(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_available_extensions() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_enabled_extensions, put=__set_enabled_extensions))  enabled_extensions;

constexpr void __set_enabled_extensions(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_enabled_extensions() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_enabled_features, put=__set_enabled_features))  enabled_features;

constexpr void __set_enabled_features(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_enabled_features() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_failed_features, put=__set_failed_features))  failed_features;

constexpr void __set_failed_features(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_failed_features() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR
// Type: UnityEngine.XR.OpenXR::OpenXRAnalytics
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14161))
// CS Name: UnityEngine.XR.OpenXR.OpenXRAnalytics
class CORDL_TYPE OpenXRAnalytics : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using InitializeEvent = ::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRAnalytics__InitializeEvent;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OpenXRAnalytics() = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRAnalytics", modifiers: " const&", def_value: None }]
constexpr OpenXRAnalytics(OpenXRAnalytics const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRAnalytics", modifiers: "&&", def_value: None }]
constexpr OpenXRAnalytics(OpenXRAnalytics&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OpenXRAnalytics(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OpenXRAnalytics& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OpenXRAnalytics& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OpenXRAnalytics& operator=(OpenXRAnalytics&& o) noexcept = default;
  constexpr OpenXRAnalytics& operator=(OpenXRAnalytics const& o) noexcept = default;
                


// Fields

/// @brief Field kMaxEventsPerHour offset 0
static constexpr int32_t  kMaxEventsPerHour{1000};

/// @brief Field kMaxNumberOfElements offset 0
static constexpr int32_t  kMaxNumberOfElements{1000};

/// @brief Field kVendorKey offset 0
static constexpr ::ConstString  kVendorKey{u"unity.openxr"};

/// @brief Field kEventInitialize offset 0
static constexpr ::ConstString  kEventInitialize{u"openxr_initialize"};


// Methods

/// @brief Method Initialize addr 0x2ae5218 size 0x8 virtual false final false
static bool Initialize() ;

/// @brief Method SendInitializeEvent addr 0x2ae5220 size 0x4 virtual false final false
static void SendInitializeEvent(bool success) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::XR::OpenXR::OpenXRAnalytics);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::OpenXRAnalytics, "UnityEngine.XR.OpenXR", "OpenXRAnalytics");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRAnalytics__InitializeEvent, "UnityEngine.XR.OpenXR", "OpenXRAnalytics/InitializeEvent");
