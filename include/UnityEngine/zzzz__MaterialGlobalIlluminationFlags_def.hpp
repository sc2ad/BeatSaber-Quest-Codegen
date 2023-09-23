#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct MaterialGlobalIlluminationFlags;
}
// Type: UnityEngine::MaterialGlobalIlluminationFlags
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10065))
// CS Name: UnityEngine.MaterialGlobalIlluminationFlags
struct CORDL_TYPE MaterialGlobalIlluminationFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MaterialGlobalIlluminationFlags(int32_t value__) noexcept;


                    constexpr MaterialGlobalIlluminationFlags(MaterialGlobalIlluminationFlags const&) = default;
                    constexpr MaterialGlobalIlluminationFlags(MaterialGlobalIlluminationFlags&&) = default;
                    constexpr MaterialGlobalIlluminationFlags& operator=(MaterialGlobalIlluminationFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MaterialGlobalIlluminationFlags& operator=(MaterialGlobalIlluminationFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MaterialGlobalIlluminationFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __MaterialGlobalIlluminationFlags_Unwrapped : int32_t {
__None = 0,
__RealtimeEmissive = 1,
__BakedEmissive = 2,
__EmissiveIsBlack = 4,
__AnyEmissive = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MaterialGlobalIlluminationFlags_Unwrapped () const noexcept {
return std::bit_cast<__MaterialGlobalIlluminationFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::MaterialGlobalIlluminationFlags const None;

/// @brief Field RealtimeEmissive offset 0
static UnityEngine::MaterialGlobalIlluminationFlags const RealtimeEmissive;

/// @brief Field BakedEmissive offset 0
static UnityEngine::MaterialGlobalIlluminationFlags const BakedEmissive;

/// @brief Field EmissiveIsBlack offset 0
static UnityEngine::MaterialGlobalIlluminationFlags const EmissiveIsBlack;

/// @brief Field AnyEmissive offset 0
static UnityEngine::MaterialGlobalIlluminationFlags const AnyEmissive;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::MaterialGlobalIlluminationFlags, "UnityEngine", "MaterialGlobalIlluminationFlags");
