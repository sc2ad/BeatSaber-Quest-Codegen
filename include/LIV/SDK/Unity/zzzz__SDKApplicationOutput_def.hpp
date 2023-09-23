#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
namespace LIV::SDK::Unity {
struct FEATURES;
}
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKApplicationOutput;
}
// Type: LIV.SDK.Unity::SDKApplicationOutput
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15162))
// CS Name: LIV.SDK.Unity.SDKApplicationOutput
struct CORDL_TYPE SDKApplicationOutput : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "supportedFeatures", ty: "LIV::SDK::Unity::FEATURES", modifiers: "", def_value: None }, CppParam { name: "engineName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "engineVersion", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "applicationName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "applicationVersion", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "xrDeviceName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "graphicsAPI", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "sdkID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "sdkVersion", ty: "::StringW", modifiers: "", def_value: None }]
constexpr SDKApplicationOutput(LIV::SDK::Unity::FEATURES supportedFeatures, ::StringW engineName, ::StringW engineVersion, ::StringW applicationName, ::StringW applicationVersion, ::StringW xrDeviceName, ::StringW graphicsAPI, ::StringW sdkID, ::StringW sdkVersion) noexcept;


                    constexpr SDKApplicationOutput(SDKApplicationOutput const&) = default;
                    constexpr SDKApplicationOutput(SDKApplicationOutput&&) = default;
                    constexpr SDKApplicationOutput& operator=(SDKApplicationOutput const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SDKApplicationOutput& operator=(SDKApplicationOutput&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SDKApplicationOutput(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 LIV::SDK::Unity::FEATURES __declspec(property(get=__get_supportedFeatures, put=__set_supportedFeatures))  supportedFeatures;

constexpr void __set_supportedFeatures(LIV::SDK::Unity::FEATURES value) ;

constexpr LIV::SDK::Unity::FEATURES __get_supportedFeatures() const;

 ::StringW __declspec(property(get=__get_engineName, put=__set_engineName))  engineName;

constexpr void __set_engineName(::StringW value) ;

constexpr ::StringW __get_engineName() const;

 ::StringW __declspec(property(get=__get_engineVersion, put=__set_engineVersion))  engineVersion;

constexpr void __set_engineVersion(::StringW value) ;

constexpr ::StringW __get_engineVersion() const;

 ::StringW __declspec(property(get=__get_applicationName, put=__set_applicationName))  applicationName;

constexpr void __set_applicationName(::StringW value) ;

constexpr ::StringW __get_applicationName() const;

 ::StringW __declspec(property(get=__get_applicationVersion, put=__set_applicationVersion))  applicationVersion;

constexpr void __set_applicationVersion(::StringW value) ;

constexpr ::StringW __get_applicationVersion() const;

 ::StringW __declspec(property(get=__get_xrDeviceName, put=__set_xrDeviceName))  xrDeviceName;

constexpr void __set_xrDeviceName(::StringW value) ;

constexpr ::StringW __get_xrDeviceName() const;

 ::StringW __declspec(property(get=__get_graphicsAPI, put=__set_graphicsAPI))  graphicsAPI;

constexpr void __set_graphicsAPI(::StringW value) ;

constexpr ::StringW __get_graphicsAPI() const;

 ::StringW __declspec(property(get=__get_sdkID, put=__set_sdkID))  sdkID;

constexpr void __set_sdkID(::StringW value) ;

constexpr ::StringW __get_sdkID() const;

 ::StringW __declspec(property(get=__get_sdkVersion, put=__set_sdkVersion))  sdkVersion;

constexpr void __set_sdkVersion(::StringW value) ;

constexpr ::StringW __get_sdkVersion() const;


// Properties

static LIV::SDK::Unity::SDKApplicationOutput __declspec(property(get=get_empty))  empty;


// Methods

/// @brief Method get_empty addr 0x209bc78 size 0x80 virtual false final false
static LIV::SDK::Unity::SDKApplicationOutput get_empty() ;

/// @brief Method ToString addr 0x20a2770 size 0x244 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(LIV::SDK::Unity::SDKApplicationOutput, "LIV.SDK.Unity", "SDKApplicationOutput");
