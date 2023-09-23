#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKConstants;
}
// Type: LIV.SDK.Unity::SDKConstants
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15147))
// CS Name: LIV.SDK.Unity.SDKConstants
struct CORDL_TYPE SDKConstants : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr SDKConstants(SDKConstants const&) = default;
                    constexpr SDKConstants(SDKConstants&&) = default;
                    constexpr SDKConstants& operator=(SDKConstants const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SDKConstants& operator=(SDKConstants&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SDKConstants(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field SDK_ID offset 0
static constexpr ::ConstString  SDK_ID{u"7R9Y1V7WEROGDMRF6F3ESO2C6F858GCD"};

/// @brief Field SDK_VERSION offset 0
static constexpr ::ConstString  SDK_VERSION{u"1.5.4"};

/// @brief Field ENGINE_NAME offset 0
static constexpr ::ConstString  ENGINE_NAME{u"unity"};

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(LIV::SDK::Unity::SDKConstants, "LIV.SDK.Unity", "SDKConstants");
