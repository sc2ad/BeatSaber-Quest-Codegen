#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Oculus::Platform {
struct CloudStorageDataStatus;
}
// Type: Oculus.Platform::CloudStorageDataStatus
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13181))
// CS Name: Oculus.Platform.CloudStorageDataStatus
struct CORDL_TYPE CloudStorageDataStatus : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CloudStorageDataStatus(int32_t value__) noexcept;


                    constexpr CloudStorageDataStatus(CloudStorageDataStatus const&) = default;
                    constexpr CloudStorageDataStatus(CloudStorageDataStatus&&) = default;
                    constexpr CloudStorageDataStatus& operator=(CloudStorageDataStatus const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CloudStorageDataStatus& operator=(CloudStorageDataStatus&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CloudStorageDataStatus(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __CloudStorageDataStatus_Unwrapped : int32_t {
__Unknown = 0,
__InSync = 1,
__NeedsDownload = 2,
__RemoteDownloading = 3,
__NeedsUpload = 4,
__LocalUploading = 5,
__InConflict = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CloudStorageDataStatus_Unwrapped () const noexcept {
return std::bit_cast<__CloudStorageDataStatus_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static ::Oculus::Platform::CloudStorageDataStatus const Unknown;

/// @brief Field InSync offset 0
static ::Oculus::Platform::CloudStorageDataStatus const InSync;

/// @brief Field NeedsDownload offset 0
static ::Oculus::Platform::CloudStorageDataStatus const NeedsDownload;

/// @brief Field RemoteDownloading offset 0
static ::Oculus::Platform::CloudStorageDataStatus const RemoteDownloading;

/// @brief Field NeedsUpload offset 0
static ::Oculus::Platform::CloudStorageDataStatus const NeedsUpload;

/// @brief Field LocalUploading offset 0
static ::Oculus::Platform::CloudStorageDataStatus const LocalUploading;

/// @brief Field InConflict offset 0
static ::Oculus::Platform::CloudStorageDataStatus const InConflict;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::CloudStorageDataStatus, "Oculus.Platform", "CloudStorageDataStatus");
