#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::Video {
struct VideoTimeSource;
}
// Type: UnityEngine.Video::VideoTimeSource
namespace UnityEngine::Video {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15912))
// CS Name: UnityEngine.Video.VideoTimeSource
struct CORDL_TYPE VideoTimeSource : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VideoTimeSource(int32_t value__) noexcept;


                    constexpr VideoTimeSource(VideoTimeSource const&) = default;
                    constexpr VideoTimeSource(VideoTimeSource&&) = default;
                    constexpr VideoTimeSource& operator=(VideoTimeSource const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VideoTimeSource& operator=(VideoTimeSource&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VideoTimeSource(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __VideoTimeSource_Unwrapped : int32_t {
__AudioDSPTimeSource = 0,
__GameTimeSource = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VideoTimeSource_Unwrapped () const noexcept {
return std::bit_cast<__VideoTimeSource_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field AudioDSPTimeSource offset 0
static ::UnityEngine::Video::VideoTimeSource const AudioDSPTimeSource;

/// @brief Field GameTimeSource offset 0
static ::UnityEngine::Video::VideoTimeSource const GameTimeSource;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Video
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::VideoTimeSource, "UnityEngine.Video", "VideoTimeSource");
