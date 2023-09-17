#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::Rendering {
struct VertexAttributeFormat;
}
// Type: UnityEngine.Rendering::VertexAttributeFormat
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10266))
// CS Name: UnityEngine.Rendering.VertexAttributeFormat
struct CORDL_TYPE VertexAttributeFormat : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VertexAttributeFormat(int32_t value__) noexcept;


                    constexpr VertexAttributeFormat(VertexAttributeFormat const&) = default;
                    constexpr VertexAttributeFormat(VertexAttributeFormat&&) = default;
                    constexpr VertexAttributeFormat& operator=(VertexAttributeFormat const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VertexAttributeFormat& operator=(VertexAttributeFormat&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VertexAttributeFormat(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __VertexAttributeFormat_Unwrapped : int32_t {
__Float32 = 0,
__Float16 = 1,
__UNorm8 = 2,
__SNorm8 = 3,
__UNorm16 = 4,
__SNorm16 = 5,
__UInt8 = 6,
__SInt8 = 7,
__UInt16 = 8,
__SInt16 = 9,
__UInt32 = 10,
__SInt32 = 11,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VertexAttributeFormat_Unwrapped () const noexcept {
return std::bit_cast<__VertexAttributeFormat_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Float32 offset 0
static ::UnityEngine::Rendering::VertexAttributeFormat const Float32;

/// @brief Field Float16 offset 0
static ::UnityEngine::Rendering::VertexAttributeFormat const Float16;

/// @brief Field UNorm8 offset 0
static ::UnityEngine::Rendering::VertexAttributeFormat const UNorm8;

/// @brief Field SNorm8 offset 0
static ::UnityEngine::Rendering::VertexAttributeFormat const SNorm8;

/// @brief Field UNorm16 offset 0
static ::UnityEngine::Rendering::VertexAttributeFormat const UNorm16;

/// @brief Field SNorm16 offset 0
static ::UnityEngine::Rendering::VertexAttributeFormat const SNorm16;

/// @brief Field UInt8 offset 0
static ::UnityEngine::Rendering::VertexAttributeFormat const UInt8;

/// @brief Field SInt8 offset 0
static ::UnityEngine::Rendering::VertexAttributeFormat const SInt8;

/// @brief Field UInt16 offset 0
static ::UnityEngine::Rendering::VertexAttributeFormat const UInt16;

/// @brief Field SInt16 offset 0
static ::UnityEngine::Rendering::VertexAttributeFormat const SInt16;

/// @brief Field UInt32 offset 0
static ::UnityEngine::Rendering::VertexAttributeFormat const UInt32;

/// @brief Field SInt32 offset 0
static ::UnityEngine::Rendering::VertexAttributeFormat const SInt32;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::VertexAttributeFormat, "UnityEngine.Rendering", "VertexAttributeFormat");
