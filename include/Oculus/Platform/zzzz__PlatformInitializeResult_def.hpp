#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform {
struct PlatformInitializeResult;
}
// Type: Oculus.Platform::PlatformInitializeResult
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13340))
// CS Name: Oculus.Platform.PlatformInitializeResult
struct CORDL_TYPE PlatformInitializeResult : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PlatformInitializeResult(int32_t value__) noexcept;


                    constexpr PlatformInitializeResult(PlatformInitializeResult const&) = default;
                    constexpr PlatformInitializeResult(PlatformInitializeResult&&) = default;
                    constexpr PlatformInitializeResult& operator=(PlatformInitializeResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PlatformInitializeResult& operator=(PlatformInitializeResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PlatformInitializeResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __PlatformInitializeResult_Unwrapped : int32_t {
__Success = 0,
__Uninitialized = -1,
__PreLoaded = -2,
__FileInvalid = -3,
__SignatureInvalid = -4,
__UnableToVerify = -5,
__VersionMismatch = -6,
__Unknown = -7,
__InvalidCredentials = -8,
__NotEntitled = -9,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlatformInitializeResult_Unwrapped () const noexcept {
return std::bit_cast<__PlatformInitializeResult_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Success offset 0
static Oculus::Platform::PlatformInitializeResult const Success;

/// @brief Field Uninitialized offset 0
static Oculus::Platform::PlatformInitializeResult const Uninitialized;

/// @brief Field PreLoaded offset 0
static Oculus::Platform::PlatformInitializeResult const PreLoaded;

/// @brief Field FileInvalid offset 0
static Oculus::Platform::PlatformInitializeResult const FileInvalid;

/// @brief Field SignatureInvalid offset 0
static Oculus::Platform::PlatformInitializeResult const SignatureInvalid;

/// @brief Field UnableToVerify offset 0
static Oculus::Platform::PlatformInitializeResult const UnableToVerify;

/// @brief Field VersionMismatch offset 0
static Oculus::Platform::PlatformInitializeResult const VersionMismatch;

/// @brief Field Unknown offset 0
static Oculus::Platform::PlatformInitializeResult const Unknown;

/// @brief Field InvalidCredentials offset 0
static Oculus::Platform::PlatformInitializeResult const InvalidCredentials;

/// @brief Field NotEntitled offset 0
static Oculus::Platform::PlatformInitializeResult const NotEntitled;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::PlatformInitializeResult, "Oculus.Platform", "PlatformInitializeResult");
