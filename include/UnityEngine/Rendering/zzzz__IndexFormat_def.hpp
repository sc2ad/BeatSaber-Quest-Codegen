#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Rendering {
struct IndexFormat;
}
// Type: UnityEngine.Rendering::IndexFormat
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10264))
// CS Name: UnityEngine.Rendering.IndexFormat
struct CORDL_TYPE IndexFormat : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr IndexFormat(int32_t value__) noexcept;


                    constexpr IndexFormat(IndexFormat const&) = default;
                    constexpr IndexFormat(IndexFormat&&) = default;
                    constexpr IndexFormat& operator=(IndexFormat const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr IndexFormat& operator=(IndexFormat&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit IndexFormat(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __IndexFormat_Unwrapped : int32_t {
__UInt16 = 0,
__UInt32 = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __IndexFormat_Unwrapped () const noexcept {
return std::bit_cast<__IndexFormat_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field UInt16 offset 0
static UnityEngine::Rendering::IndexFormat const UInt16;

/// @brief Field UInt32 offset 0
static UnityEngine::Rendering::IndexFormat const UInt32;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::IndexFormat, "UnityEngine.Rendering", "IndexFormat");
