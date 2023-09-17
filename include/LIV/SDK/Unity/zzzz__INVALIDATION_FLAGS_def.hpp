#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace LIV::SDK::Unity {
struct INVALIDATION_FLAGS;
}
// Type: LIV.SDK.Unity::INVALIDATION_FLAGS
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15140))
// CS Name: LIV.SDK.Unity.INVALIDATION_FLAGS
struct CORDL_TYPE INVALIDATION_FLAGS : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr INVALIDATION_FLAGS(uint32_t value__) noexcept;


                    constexpr INVALIDATION_FLAGS(INVALIDATION_FLAGS const&) = default;
                    constexpr INVALIDATION_FLAGS(INVALIDATION_FLAGS&&) = default;
                    constexpr INVALIDATION_FLAGS& operator=(INVALIDATION_FLAGS const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr INVALIDATION_FLAGS& operator=(INVALIDATION_FLAGS&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit INVALIDATION_FLAGS(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __INVALIDATION_FLAGS_Unwrapped : uint32_t {
__NONE = 0u,
__HMD_CAMERA = 1u,
__STAGE = 2u,
__MR_CAMERA_PREFAB = 4u,
__EXCLUDE_BEHAVIOURS = 8u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __INVALIDATION_FLAGS_Unwrapped () const noexcept {
return std::bit_cast<__INVALIDATION_FLAGS_Unwrapped>(__instance);
}


// Fields

 uint32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint32_t value) ;

constexpr uint32_t __get_value__() const;

/// @brief Field NONE offset 0
static ::LIV::SDK::Unity::INVALIDATION_FLAGS const NONE;

/// @brief Field HMD_CAMERA offset 0
static ::LIV::SDK::Unity::INVALIDATION_FLAGS const HMD_CAMERA;

/// @brief Field STAGE offset 0
static ::LIV::SDK::Unity::INVALIDATION_FLAGS const STAGE;

/// @brief Field MR_CAMERA_PREFAB offset 0
static ::LIV::SDK::Unity::INVALIDATION_FLAGS const MR_CAMERA_PREFAB;

/// @brief Field EXCLUDE_BEHAVIOURS offset 0
static ::LIV::SDK::Unity::INVALIDATION_FLAGS const EXCLUDE_BEHAVIOURS;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LIV::SDK::Unity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::INVALIDATION_FLAGS, "LIV.SDK.Unity", "INVALIDATION_FLAGS");
