#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKResolution;
}
// Type: LIV.SDK.Unity::SDKResolution
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15156))
// CS Name: LIV.SDK.Unity.SDKResolution
struct CORDL_TYPE SDKResolution : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SDKResolution(int32_t width, int32_t height) noexcept;


                    constexpr SDKResolution(SDKResolution const&) = default;
                    constexpr SDKResolution(SDKResolution&&) = default;
                    constexpr SDKResolution& operator=(SDKResolution const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SDKResolution& operator=(SDKResolution&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SDKResolution(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_width, put=__set_width))  width;

constexpr void __set_width(int32_t value) ;

constexpr int32_t __get_width() const;

 int32_t __declspec(property(get=__get_height, put=__set_height))  height;

constexpr void __set_height(int32_t value) ;

constexpr int32_t __get_height() const;


// Properties

static LIV::SDK::Unity::SDKResolution __declspec(property(get=get_zero))  zero;


// Methods

/// @brief Method get_zero addr 0x209d324 size 0x8 virtual false final false
static LIV::SDK::Unity::SDKResolution get_zero() ;

/// @brief Method ToString addr 0x20a1574 size 0xa0 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(LIV::SDK::Unity::SDKResolution, "LIV.SDK.Unity", "SDKResolution");
