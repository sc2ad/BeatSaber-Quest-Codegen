#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Security {
struct SecurityElementType;
}
// Type: System.Security::SecurityElementType
namespace System::Security {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2882))
// CS Name: System.Security.SecurityElementType
struct CORDL_TYPE SecurityElementType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SecurityElementType(int32_t value__) noexcept;


                    constexpr SecurityElementType(SecurityElementType const&) = default;
                    constexpr SecurityElementType(SecurityElementType&&) = default;
                    constexpr SecurityElementType& operator=(SecurityElementType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SecurityElementType& operator=(SecurityElementType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SecurityElementType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __SecurityElementType_Unwrapped : int32_t {
__Regular = 0,
__Format = 1,
__Comment = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SecurityElementType_Unwrapped () const noexcept {
return std::bit_cast<__SecurityElementType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Regular offset 0
static System::Security::SecurityElementType const Regular;

/// @brief Field Format offset 0
static System::Security::SecurityElementType const Format;

/// @brief Field Comment offset 0
static System::Security::SecurityElementType const Comment;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security
DEFINE_IL2CPP_ARG_TYPE(System::Security::SecurityElementType, "System.Security", "SecurityElementType");
