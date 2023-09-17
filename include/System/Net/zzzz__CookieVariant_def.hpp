#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Net {
struct CookieVariant;
}
// Type: System.Net::CookieVariant
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7970))
// CS Name: System.Net.CookieVariant
struct CORDL_TYPE CookieVariant : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CookieVariant(int32_t value__) noexcept;


                    constexpr CookieVariant(CookieVariant const&) = default;
                    constexpr CookieVariant(CookieVariant&&) = default;
                    constexpr CookieVariant& operator=(CookieVariant const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CookieVariant& operator=(CookieVariant&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CookieVariant(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __CookieVariant_Unwrapped : int32_t {
__Unknown = 0,
__Plain = 1,
__Rfc2109 = 2,
__Rfc2965 = 3,
__Default = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CookieVariant_Unwrapped () const noexcept {
return std::bit_cast<__CookieVariant_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static ::System::Net::CookieVariant const Unknown;

/// @brief Field Plain offset 0
static ::System::Net::CookieVariant const Plain;

/// @brief Field Rfc2109 offset 0
static ::System::Net::CookieVariant const Rfc2109;

/// @brief Field Rfc2965 offset 0
static ::System::Net::CookieVariant const Rfc2965;

/// @brief Field Default offset 0
static ::System::Net::CookieVariant const Default;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Net::CookieVariant, "System.Net", "CookieVariant");
