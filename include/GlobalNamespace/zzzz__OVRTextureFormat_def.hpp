#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
struct OVRTextureFormat;
}
// Type: ::OVRTextureFormat
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8478))
// CS Name: OVRTextureFormat
struct CORDL_TYPE OVRTextureFormat : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OVRTextureFormat(int32_t value__) noexcept;


                    constexpr OVRTextureFormat(OVRTextureFormat const&) = default;
                    constexpr OVRTextureFormat(OVRTextureFormat&&) = default;
                    constexpr OVRTextureFormat& operator=(OVRTextureFormat const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr OVRTextureFormat& operator=(OVRTextureFormat&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit OVRTextureFormat(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __OVRTextureFormat_Unwrapped : int32_t {
__NONE = 0,
__KTX2 = 1,
__PNG = 2,
__JPEG = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRTextureFormat_Unwrapped () const noexcept {
return std::bit_cast<__OVRTextureFormat_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NONE offset 0
static ::GlobalNamespace::OVRTextureFormat const NONE;

/// @brief Field KTX2 offset 0
static ::GlobalNamespace::OVRTextureFormat const KTX2;

/// @brief Field PNG offset 0
static ::GlobalNamespace::OVRTextureFormat const PNG;

/// @brief Field JPEG offset 0
static ::GlobalNamespace::OVRTextureFormat const JPEG;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTextureFormat, "", "OVRTextureFormat");
