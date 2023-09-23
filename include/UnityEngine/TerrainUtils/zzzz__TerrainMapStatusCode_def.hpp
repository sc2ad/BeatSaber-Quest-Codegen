#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::TerrainUtils {
struct TerrainMapStatusCode;
}
// Type: UnityEngine.TerrainUtils::TerrainMapStatusCode
namespace UnityEngine::TerrainUtils {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15452))
// CS Name: UnityEngine.TerrainUtils.TerrainMapStatusCode
struct CORDL_TYPE TerrainMapStatusCode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TerrainMapStatusCode(int32_t value__) noexcept;


                    constexpr TerrainMapStatusCode(TerrainMapStatusCode const&) = default;
                    constexpr TerrainMapStatusCode(TerrainMapStatusCode&&) = default;
                    constexpr TerrainMapStatusCode& operator=(TerrainMapStatusCode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TerrainMapStatusCode& operator=(TerrainMapStatusCode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TerrainMapStatusCode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TerrainMapStatusCode_Unwrapped : int32_t {
__OK = 0,
__Overlapping = 1,
__SizeMismatch = 4,
__EdgeAlignmentMismatch = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TerrainMapStatusCode_Unwrapped () const noexcept {
return std::bit_cast<__TerrainMapStatusCode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field OK offset 0
static UnityEngine::TerrainUtils::TerrainMapStatusCode const OK;

/// @brief Field Overlapping offset 0
static UnityEngine::TerrainUtils::TerrainMapStatusCode const Overlapping;

/// @brief Field SizeMismatch offset 0
static UnityEngine::TerrainUtils::TerrainMapStatusCode const SizeMismatch;

/// @brief Field EdgeAlignmentMismatch offset 0
static UnityEngine::TerrainUtils::TerrainMapStatusCode const EdgeAlignmentMismatch;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TerrainUtils
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TerrainUtils::TerrainMapStatusCode, "UnityEngine.TerrainUtils", "TerrainMapStatusCode");
