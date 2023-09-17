#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Net {
struct FtpMethodFlags;
}
// Type: System.Net::FtpMethodFlags
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7896))
// CS Name: System.Net.FtpMethodFlags
struct CORDL_TYPE FtpMethodFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FtpMethodFlags(int32_t value__) noexcept;


                    constexpr FtpMethodFlags(FtpMethodFlags const&) = default;
                    constexpr FtpMethodFlags(FtpMethodFlags&&) = default;
                    constexpr FtpMethodFlags& operator=(FtpMethodFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FtpMethodFlags& operator=(FtpMethodFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FtpMethodFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __FtpMethodFlags_Unwrapped : int32_t {
__None = 0,
__IsDownload = 1,
__IsUpload = 2,
__TakesParameter = 4,
__MayTakeParameter = 8,
__DoesNotTakeParameter = 16,
__ParameterIsDirectory = 32,
__ShouldParseForResponseUri = 64,
__HasHttpCommand = 128,
__MustChangeWorkingDirectoryToPath = 256,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FtpMethodFlags_Unwrapped () const noexcept {
return std::bit_cast<__FtpMethodFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::System::Net::FtpMethodFlags const None;

/// @brief Field IsDownload offset 0
static ::System::Net::FtpMethodFlags const IsDownload;

/// @brief Field IsUpload offset 0
static ::System::Net::FtpMethodFlags const IsUpload;

/// @brief Field TakesParameter offset 0
static ::System::Net::FtpMethodFlags const TakesParameter;

/// @brief Field MayTakeParameter offset 0
static ::System::Net::FtpMethodFlags const MayTakeParameter;

/// @brief Field DoesNotTakeParameter offset 0
static ::System::Net::FtpMethodFlags const DoesNotTakeParameter;

/// @brief Field ParameterIsDirectory offset 0
static ::System::Net::FtpMethodFlags const ParameterIsDirectory;

/// @brief Field ShouldParseForResponseUri offset 0
static ::System::Net::FtpMethodFlags const ShouldParseForResponseUri;

/// @brief Field HasHttpCommand offset 0
static ::System::Net::FtpMethodFlags const HasHttpCommand;

/// @brief Field MustChangeWorkingDirectoryToPath offset 0
static ::System::Net::FtpMethodFlags const MustChangeWorkingDirectoryToPath;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FtpMethodFlags, "System.Net", "FtpMethodFlags");
