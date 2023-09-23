#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
struct EntitlementsStatus;
}
// Type: ::EntitlementsStatus
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12669))
// CS Name: EntitlementsStatus
struct CORDL_TYPE EntitlementsStatus : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EntitlementsStatus(int32_t value__) noexcept;


                    constexpr EntitlementsStatus(EntitlementsStatus const&) = default;
                    constexpr EntitlementsStatus(EntitlementsStatus&&) = default;
                    constexpr EntitlementsStatus& operator=(EntitlementsStatus const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EntitlementsStatus& operator=(EntitlementsStatus&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EntitlementsStatus(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EntitlementsStatus_Unwrapped : int32_t {
__Unknown = 0,
__NotOwned = 1,
__NotDownloaded = 2,
__Ok = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EntitlementsStatus_Unwrapped () const noexcept {
return std::bit_cast<__EntitlementsStatus_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static GlobalNamespace::EntitlementsStatus const Unknown;

/// @brief Field NotOwned offset 0
static GlobalNamespace::EntitlementsStatus const NotOwned;

/// @brief Field NotDownloaded offset 0
static GlobalNamespace::EntitlementsStatus const NotDownloaded;

/// @brief Field Ok offset 0
static GlobalNamespace::EntitlementsStatus const Ok;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EntitlementsStatus, "", "EntitlementsStatus");
