#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
struct TouchScreenKeyboardType;
}
// Type: UnityEngine::TouchScreenKeyboardType
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10127))
// CS Name: UnityEngine.TouchScreenKeyboardType
struct CORDL_TYPE TouchScreenKeyboardType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TouchScreenKeyboardType(int32_t value__) noexcept;


                    constexpr TouchScreenKeyboardType(TouchScreenKeyboardType const&) = default;
                    constexpr TouchScreenKeyboardType(TouchScreenKeyboardType&&) = default;
                    constexpr TouchScreenKeyboardType& operator=(TouchScreenKeyboardType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TouchScreenKeyboardType& operator=(TouchScreenKeyboardType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TouchScreenKeyboardType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TouchScreenKeyboardType_Unwrapped : int32_t {
__Default = 0,
__ASCIICapable = 1,
__NumbersAndPunctuation = 2,
__URL = 3,
__NumberPad = 4,
__PhonePad = 5,
__NamePhonePad = 6,
__EmailAddress = 7,
__NintendoNetworkAccount = 8,
__Social = 9,
__Search = 10,
__DecimalPad = 11,
__OneTimeCode = 12,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TouchScreenKeyboardType_Unwrapped () const noexcept {
return std::bit_cast<__TouchScreenKeyboardType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Default offset 0
static ::UnityEngine::TouchScreenKeyboardType const Default;

/// @brief Field ASCIICapable offset 0
static ::UnityEngine::TouchScreenKeyboardType const ASCIICapable;

/// @brief Field NumbersAndPunctuation offset 0
static ::UnityEngine::TouchScreenKeyboardType const NumbersAndPunctuation;

/// @brief Field URL offset 0
static ::UnityEngine::TouchScreenKeyboardType const URL;

/// @brief Field NumberPad offset 0
static ::UnityEngine::TouchScreenKeyboardType const NumberPad;

/// @brief Field PhonePad offset 0
static ::UnityEngine::TouchScreenKeyboardType const PhonePad;

/// @brief Field NamePhonePad offset 0
static ::UnityEngine::TouchScreenKeyboardType const NamePhonePad;

/// @brief Field EmailAddress offset 0
static ::UnityEngine::TouchScreenKeyboardType const EmailAddress;

/// @brief Field NintendoNetworkAccount offset 0
static ::UnityEngine::TouchScreenKeyboardType const NintendoNetworkAccount;

/// @brief Field Social offset 0
static ::UnityEngine::TouchScreenKeyboardType const Social;

/// @brief Field Search offset 0
static ::UnityEngine::TouchScreenKeyboardType const Search;

/// @brief Field DecimalPad offset 0
static ::UnityEngine::TouchScreenKeyboardType const DecimalPad;

/// @brief Field OneTimeCode offset 0
static ::UnityEngine::TouchScreenKeyboardType const OneTimeCode;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TouchScreenKeyboardType, "UnityEngine", "TouchScreenKeyboardType");
