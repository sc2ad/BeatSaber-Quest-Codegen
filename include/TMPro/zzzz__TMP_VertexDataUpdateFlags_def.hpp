#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace TMPro {
struct TMP_VertexDataUpdateFlags;
}
// Type: TMPro::TMP_VertexDataUpdateFlags
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12258))
// CS Name: TMPro.TMP_VertexDataUpdateFlags
struct CORDL_TYPE TMP_VertexDataUpdateFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TMP_VertexDataUpdateFlags(int32_t value__) noexcept;


                    constexpr TMP_VertexDataUpdateFlags(TMP_VertexDataUpdateFlags const&) = default;
                    constexpr TMP_VertexDataUpdateFlags(TMP_VertexDataUpdateFlags&&) = default;
                    constexpr TMP_VertexDataUpdateFlags& operator=(TMP_VertexDataUpdateFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMP_VertexDataUpdateFlags& operator=(TMP_VertexDataUpdateFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMP_VertexDataUpdateFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TMP_VertexDataUpdateFlags_Unwrapped : int32_t {
__None = 0,
__Vertices = 1,
__Uv0 = 2,
__Uv2 = 4,
__Uv4 = 8,
__Colors32 = 16,
__All = 255,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TMP_VertexDataUpdateFlags_Unwrapped () const noexcept {
return std::bit_cast<__TMP_VertexDataUpdateFlags_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static TMPro::TMP_VertexDataUpdateFlags const None;

/// @brief Field Vertices offset 0
static TMPro::TMP_VertexDataUpdateFlags const Vertices;

/// @brief Field Uv0 offset 0
static TMPro::TMP_VertexDataUpdateFlags const Uv0;

/// @brief Field Uv2 offset 0
static TMPro::TMP_VertexDataUpdateFlags const Uv2;

/// @brief Field Uv4 offset 0
static TMPro::TMP_VertexDataUpdateFlags const Uv4;

/// @brief Field Colors32 offset 0
static TMPro::TMP_VertexDataUpdateFlags const Colors32;

/// @brief Field All offset 0
static TMPro::TMP_VertexDataUpdateFlags const All;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_VertexDataUpdateFlags, "TMPro", "TMP_VertexDataUpdateFlags");
