#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
struct LogType;
}
// Type: UnityEngine::LogType
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9978))
// CS Name: UnityEngine.LogType
struct CORDL_TYPE LogType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LogType(int32_t value__) noexcept;


                    constexpr LogType(LogType const&) = default;
                    constexpr LogType(LogType&&) = default;
                    constexpr LogType& operator=(LogType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LogType& operator=(LogType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LogType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __LogType_Unwrapped : int32_t {
__Error = 0,
__Assert = 1,
__Warning = 2,
__Log = 3,
__Exception = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LogType_Unwrapped () const noexcept {
return std::bit_cast<__LogType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Error offset 0
static ::UnityEngine::LogType const Error;

/// @brief Field Assert offset 0
static ::UnityEngine::LogType const Assert;

/// @brief Field Warning offset 0
static ::UnityEngine::LogType const Warning;

/// @brief Field Log offset 0
static ::UnityEngine::LogType const Log;

/// @brief Field Exception offset 0
static ::UnityEngine::LogType const Exception;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LogType, "UnityEngine", "LogType");
