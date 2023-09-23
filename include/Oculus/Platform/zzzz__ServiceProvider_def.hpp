#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform {
struct ServiceProvider;
}
// Type: Oculus.Platform::ServiceProvider
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13359))
// CS Name: Oculus.Platform.ServiceProvider
struct CORDL_TYPE ServiceProvider : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ServiceProvider(int32_t value__) noexcept;


                    constexpr ServiceProvider(ServiceProvider const&) = default;
                    constexpr ServiceProvider(ServiceProvider&&) = default;
                    constexpr ServiceProvider& operator=(ServiceProvider const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ServiceProvider& operator=(ServiceProvider&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ServiceProvider(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ServiceProvider_Unwrapped : int32_t {
__Unknown = 0,
__Dropbox = 1,
__Facebook = 2,
__Google = 3,
__Instagram = 4,
__RemoteMedia = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ServiceProvider_Unwrapped () const noexcept {
return std::bit_cast<__ServiceProvider_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static Oculus::Platform::ServiceProvider const Unknown;

/// @brief Field Dropbox offset 0
static Oculus::Platform::ServiceProvider const Dropbox;

/// @brief Field Facebook offset 0
static Oculus::Platform::ServiceProvider const Facebook;

/// @brief Field Google offset 0
static Oculus::Platform::ServiceProvider const Google;

/// @brief Field Instagram offset 0
static Oculus::Platform::ServiceProvider const Instagram;

/// @brief Field RemoteMedia offset 0
static Oculus::Platform::ServiceProvider const RemoteMedia;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::ServiceProvider, "Oculus.Platform", "ServiceProvider");
