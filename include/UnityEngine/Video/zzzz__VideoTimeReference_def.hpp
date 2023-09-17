#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::Video {
struct VideoTimeReference;
}
// Type: UnityEngine.Video::VideoTimeReference
namespace UnityEngine::Video {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15913))
// CS Name: UnityEngine.Video.VideoTimeReference
struct CORDL_TYPE VideoTimeReference : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VideoTimeReference(int32_t value__) noexcept;


                    constexpr VideoTimeReference(VideoTimeReference const&) = default;
                    constexpr VideoTimeReference(VideoTimeReference&&) = default;
                    constexpr VideoTimeReference& operator=(VideoTimeReference const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VideoTimeReference& operator=(VideoTimeReference&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VideoTimeReference(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __VideoTimeReference_Unwrapped : int32_t {
__Freerun = 0,
__InternalTime = 1,
__ExternalTime = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VideoTimeReference_Unwrapped () const noexcept {
return std::bit_cast<__VideoTimeReference_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Freerun offset 0
static ::UnityEngine::Video::VideoTimeReference const Freerun;

/// @brief Field InternalTime offset 0
static ::UnityEngine::Video::VideoTimeReference const InternalTime;

/// @brief Field ExternalTime offset 0
static ::UnityEngine::Video::VideoTimeReference const ExternalTime;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Video
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::VideoTimeReference, "UnityEngine.Video", "VideoTimeReference");
