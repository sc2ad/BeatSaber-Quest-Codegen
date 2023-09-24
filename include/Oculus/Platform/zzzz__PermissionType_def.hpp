#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform {
struct PermissionType;
}
// Type: Oculus.Platform::PermissionType
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13309))
// CS Name: Oculus.Platform.PermissionType
struct CORDL_TYPE PermissionType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PermissionType(int32_t value__) noexcept;


                    constexpr PermissionType(PermissionType const&) = default;
                    constexpr PermissionType(PermissionType&&) = default;
                    constexpr PermissionType& operator=(PermissionType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PermissionType& operator=(PermissionType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PermissionType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __PermissionType_Unwrapped : int32_t {
__Unknown = 0,
__Microphone = 1,
__WriteExternalStorage = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PermissionType_Unwrapped () const noexcept {
return std::bit_cast<__PermissionType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static Oculus::Platform::PermissionType const Unknown;

/// @brief Field Microphone offset 0
static Oculus::Platform::PermissionType const Microphone;

/// @brief Field WriteExternalStorage offset 0
static Oculus::Platform::PermissionType const WriteExternalStorage;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::PermissionType, "Oculus.Platform", "PermissionType");
