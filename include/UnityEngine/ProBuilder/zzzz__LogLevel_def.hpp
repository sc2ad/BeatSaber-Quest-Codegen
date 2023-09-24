#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct LogLevel;
}
// Type: UnityEngine.ProBuilder::LogLevel
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12077))
// CS Name: UnityEngine.ProBuilder.LogLevel
struct CORDL_TYPE LogLevel : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LogLevel(int32_t value__) noexcept;


                    constexpr LogLevel(LogLevel const&) = default;
                    constexpr LogLevel(LogLevel&&) = default;
                    constexpr LogLevel& operator=(LogLevel const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LogLevel& operator=(LogLevel&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LogLevel(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __LogLevel_Unwrapped : int32_t {
__None = 0,
__Error = 1,
__Warning = 2,
__Info = 4,
__Default = 3,
__All = 255,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LogLevel_Unwrapped () const noexcept {
return std::bit_cast<__LogLevel_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::ProBuilder::LogLevel const None;

/// @brief Field Error offset 0
static UnityEngine::ProBuilder::LogLevel const Error;

/// @brief Field Warning offset 0
static UnityEngine::ProBuilder::LogLevel const Warning;

/// @brief Field Info offset 0
static UnityEngine::ProBuilder::LogLevel const Info;

/// @brief Field Default offset 0
static UnityEngine::ProBuilder::LogLevel const Default;

/// @brief Field All offset 0
static UnityEngine::ProBuilder::LogLevel const All;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::LogLevel, "UnityEngine.ProBuilder", "LogLevel");
