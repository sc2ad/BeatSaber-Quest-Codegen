#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::UIElements {
struct HelpBoxMessageType;
}
// Type: UnityEngine.UIElements::HelpBoxMessageType
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7207))
// CS Name: UnityEngine.UIElements.HelpBoxMessageType
struct CORDL_TYPE HelpBoxMessageType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HelpBoxMessageType(int32_t value__) noexcept;


                    constexpr HelpBoxMessageType(HelpBoxMessageType const&) = default;
                    constexpr HelpBoxMessageType(HelpBoxMessageType&&) = default;
                    constexpr HelpBoxMessageType& operator=(HelpBoxMessageType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HelpBoxMessageType& operator=(HelpBoxMessageType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HelpBoxMessageType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HelpBoxMessageType_Unwrapped : int32_t {
__None = 0,
__Info = 1,
__Warning = 2,
__Error = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HelpBoxMessageType_Unwrapped () const noexcept {
return std::bit_cast<__HelpBoxMessageType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::UIElements::HelpBoxMessageType const None;

/// @brief Field Info offset 0
static UnityEngine::UIElements::HelpBoxMessageType const Info;

/// @brief Field Warning offset 0
static UnityEngine::UIElements::HelpBoxMessageType const Warning;

/// @brief Field Error offset 0
static UnityEngine::UIElements::HelpBoxMessageType const Error;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::HelpBoxMessageType, "UnityEngine.UIElements", "HelpBoxMessageType");
