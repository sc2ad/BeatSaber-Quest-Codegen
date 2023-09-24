#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
struct OVRGLTFComponentType;
}
// Type: ::OVRGLTFComponentType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8469))
// CS Name: OVRGLTFComponentType
struct CORDL_TYPE OVRGLTFComponentType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OVRGLTFComponentType(int32_t value__) noexcept;


                    constexpr OVRGLTFComponentType(OVRGLTFComponentType const&) = default;
                    constexpr OVRGLTFComponentType(OVRGLTFComponentType&&) = default;
                    constexpr OVRGLTFComponentType& operator=(OVRGLTFComponentType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr OVRGLTFComponentType& operator=(OVRGLTFComponentType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit OVRGLTFComponentType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __OVRGLTFComponentType_Unwrapped : int32_t {
__BYTE = 5120,
__UNSIGNED_BYTE = 5121,
__SHORT = 5122,
__UNSIGNED_SHORT = 5123,
__UNSIGNED_INT = 5125,
__FLOAT = 5126,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRGLTFComponentType_Unwrapped () const noexcept {
return std::bit_cast<__OVRGLTFComponentType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field BYTE offset 0
static GlobalNamespace::OVRGLTFComponentType const BYTE;

/// @brief Field UNSIGNED_BYTE offset 0
static GlobalNamespace::OVRGLTFComponentType const UNSIGNED_BYTE;

/// @brief Field SHORT offset 0
static GlobalNamespace::OVRGLTFComponentType const SHORT;

/// @brief Field UNSIGNED_SHORT offset 0
static GlobalNamespace::OVRGLTFComponentType const UNSIGNED_SHORT;

/// @brief Field UNSIGNED_INT offset 0
static GlobalNamespace::OVRGLTFComponentType const UNSIGNED_INT;

/// @brief Field FLOAT offset 0
static GlobalNamespace::OVRGLTFComponentType const FLOAT;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRGLTFComponentType, "", "OVRGLTFComponentType");
