#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
struct AudioType;
}
// Type: UnityEngine::AudioType
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9994))
// CS Name: UnityEngine.AudioType
struct CORDL_TYPE AudioType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AudioType(int32_t value__) noexcept;


                    constexpr AudioType(AudioType const&) = default;
                    constexpr AudioType(AudioType&&) = default;
                    constexpr AudioType& operator=(AudioType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AudioType& operator=(AudioType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AudioType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AudioType_Unwrapped : int32_t {
__UNKNOWN = 0,
__ACC = 1,
__AIFF = 2,
__IT = 10,
__MOD = 12,
__MPEG = 13,
__OGGVORBIS = 14,
__S3M = 17,
__WAV = 20,
__XM = 21,
__XMA = 22,
__VAG = 23,
__AUDIOQUEUE = 24,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AudioType_Unwrapped () const noexcept {
return std::bit_cast<__AudioType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field UNKNOWN offset 0
static ::UnityEngine::AudioType const UNKNOWN;

/// @brief Field ACC offset 0
static ::UnityEngine::AudioType const ACC;

/// @brief Field AIFF offset 0
static ::UnityEngine::AudioType const AIFF;

/// @brief Field IT offset 0
static ::UnityEngine::AudioType const IT;

/// @brief Field MOD offset 0
static ::UnityEngine::AudioType const MOD;

/// @brief Field MPEG offset 0
static ::UnityEngine::AudioType const MPEG;

/// @brief Field OGGVORBIS offset 0
static ::UnityEngine::AudioType const OGGVORBIS;

/// @brief Field S3M offset 0
static ::UnityEngine::AudioType const S3M;

/// @brief Field WAV offset 0
static ::UnityEngine::AudioType const WAV;

/// @brief Field XM offset 0
static ::UnityEngine::AudioType const XM;

/// @brief Field XMA offset 0
static ::UnityEngine::AudioType const XMA;

/// @brief Field VAG offset 0
static ::UnityEngine::AudioType const VAG;

/// @brief Field AUDIOQUEUE offset 0
static ::UnityEngine::AudioType const AUDIOQUEUE;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioType, "UnityEngine", "AudioType");
