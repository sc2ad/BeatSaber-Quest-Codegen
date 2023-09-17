#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Oculus::Platform {
struct KeyValuePairType;
}
// Type: Oculus.Platform::KeyValuePairType
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13188))
// CS Name: Oculus.Platform.KeyValuePairType
struct CORDL_TYPE KeyValuePairType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr KeyValuePairType(int32_t value__) noexcept;


                    constexpr KeyValuePairType(KeyValuePairType const&) = default;
                    constexpr KeyValuePairType(KeyValuePairType&&) = default;
                    constexpr KeyValuePairType& operator=(KeyValuePairType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr KeyValuePairType& operator=(KeyValuePairType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit KeyValuePairType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __KeyValuePairType_Unwrapped : int32_t {
__String = 0,
__Int = 1,
__Double = 2,
__Unknown = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __KeyValuePairType_Unwrapped () const noexcept {
return std::bit_cast<__KeyValuePairType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field String offset 0
static ::Oculus::Platform::KeyValuePairType const String;

/// @brief Field Int offset 0
static ::Oculus::Platform::KeyValuePairType const Int;

/// @brief Field Double offset 0
static ::Oculus::Platform::KeyValuePairType const Double;

/// @brief Field Unknown offset 0
static ::Oculus::Platform::KeyValuePairType const Unknown;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::KeyValuePairType, "Oculus.Platform", "KeyValuePairType");
