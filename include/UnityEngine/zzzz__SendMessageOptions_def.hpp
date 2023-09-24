#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct SendMessageOptions;
}
// Type: UnityEngine::SendMessageOptions
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9973))
// CS Name: UnityEngine.SendMessageOptions
struct CORDL_TYPE SendMessageOptions : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SendMessageOptions(int32_t value__) noexcept;


                    constexpr SendMessageOptions(SendMessageOptions const&) = default;
                    constexpr SendMessageOptions(SendMessageOptions&&) = default;
                    constexpr SendMessageOptions& operator=(SendMessageOptions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SendMessageOptions& operator=(SendMessageOptions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SendMessageOptions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __SendMessageOptions_Unwrapped : int32_t {
__RequireReceiver = 0,
__DontRequireReceiver = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SendMessageOptions_Unwrapped () const noexcept {
return std::bit_cast<__SendMessageOptions_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field RequireReceiver offset 0
static UnityEngine::SendMessageOptions const RequireReceiver;

/// @brief Field DontRequireReceiver offset 0
static UnityEngine::SendMessageOptions const DontRequireReceiver;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SendMessageOptions, "UnityEngine", "SendMessageOptions");
