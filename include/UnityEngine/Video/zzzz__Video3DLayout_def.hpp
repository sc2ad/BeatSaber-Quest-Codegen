#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::Video {
struct Video3DLayout;
}
// Type: UnityEngine.Video::Video3DLayout
namespace UnityEngine::Video {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15910))
// CS Name: UnityEngine.Video.Video3DLayout
struct CORDL_TYPE Video3DLayout : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Video3DLayout(int32_t value__) noexcept;


                    constexpr Video3DLayout(Video3DLayout const&) = default;
                    constexpr Video3DLayout(Video3DLayout&&) = default;
                    constexpr Video3DLayout& operator=(Video3DLayout const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Video3DLayout& operator=(Video3DLayout&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Video3DLayout(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Video3DLayout_Unwrapped : int32_t {
__No3D = 0,
__SideBySide3D = 1,
__OverUnder3D = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Video3DLayout_Unwrapped () const noexcept {
return std::bit_cast<__Video3DLayout_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field No3D offset 0
static ::UnityEngine::Video::Video3DLayout const No3D;

/// @brief Field SideBySide3D offset 0
static ::UnityEngine::Video::Video3DLayout const SideBySide3D;

/// @brief Field OverUnder3D offset 0
static ::UnityEngine::Video::Video3DLayout const OverUnder3D;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Video
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::Video3DLayout, "UnityEngine.Video", "Video3DLayout");
