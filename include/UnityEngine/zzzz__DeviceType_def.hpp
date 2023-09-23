#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct DeviceType;
}
// Type: UnityEngine::DeviceType
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10080))
// CS Name: UnityEngine.DeviceType
struct CORDL_TYPE DeviceType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DeviceType(int32_t value__) noexcept;


                    constexpr DeviceType(DeviceType const&) = default;
                    constexpr DeviceType(DeviceType&&) = default;
                    constexpr DeviceType& operator=(DeviceType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DeviceType& operator=(DeviceType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DeviceType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __DeviceType_Unwrapped : int32_t {
__Unknown = 0,
__Handheld = 1,
__Console = 2,
__Desktop = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DeviceType_Unwrapped () const noexcept {
return std::bit_cast<__DeviceType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static UnityEngine::DeviceType const Unknown;

/// @brief Field Handheld offset 0
static UnityEngine::DeviceType const Handheld;

/// @brief Field Console offset 0
static UnityEngine::DeviceType const Console;

/// @brief Field Desktop offset 0
static UnityEngine::DeviceType const Desktop;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::DeviceType, "UnityEngine", "DeviceType");
