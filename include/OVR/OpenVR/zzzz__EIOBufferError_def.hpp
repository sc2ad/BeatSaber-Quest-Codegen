#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct EIOBufferError;
}
// Type: OVR.OpenVR::EIOBufferError
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9423))
// CS Name: OVR.OpenVR.EIOBufferError
struct CORDL_TYPE EIOBufferError : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EIOBufferError(int32_t value__) noexcept;


                    constexpr EIOBufferError(EIOBufferError const&) = default;
                    constexpr EIOBufferError(EIOBufferError&&) = default;
                    constexpr EIOBufferError& operator=(EIOBufferError const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EIOBufferError& operator=(EIOBufferError&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EIOBufferError(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EIOBufferError_Unwrapped : int32_t {
__IOBuffer_Success = 0,
__IOBuffer_OperationFailed = 100,
__IOBuffer_InvalidHandle = 101,
__IOBuffer_InvalidArgument = 102,
__IOBuffer_PathExists = 103,
__IOBuffer_PathDoesNotExist = 104,
__IOBuffer_Permission = 105,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EIOBufferError_Unwrapped () const noexcept {
return std::bit_cast<__EIOBufferError_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field IOBuffer_Success offset 0
static OVR::OpenVR::EIOBufferError const IOBuffer_Success;

/// @brief Field IOBuffer_OperationFailed offset 0
static OVR::OpenVR::EIOBufferError const IOBuffer_OperationFailed;

/// @brief Field IOBuffer_InvalidHandle offset 0
static OVR::OpenVR::EIOBufferError const IOBuffer_InvalidHandle;

/// @brief Field IOBuffer_InvalidArgument offset 0
static OVR::OpenVR::EIOBufferError const IOBuffer_InvalidArgument;

/// @brief Field IOBuffer_PathExists offset 0
static OVR::OpenVR::EIOBufferError const IOBuffer_PathExists;

/// @brief Field IOBuffer_PathDoesNotExist offset 0
static OVR::OpenVR::EIOBufferError const IOBuffer_PathDoesNotExist;

/// @brief Field IOBuffer_Permission offset 0
static OVR::OpenVR::EIOBufferError const IOBuffer_Permission;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EIOBufferError, "OVR.OpenVR", "EIOBufferError");
