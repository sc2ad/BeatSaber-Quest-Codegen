#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::IO {
struct FileOptions;
}
// Type: System.IO::FileOptions
namespace System::IO {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3555))
// CS Name: System.IO.FileOptions
struct CORDL_TYPE FileOptions : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FileOptions(int32_t value__) noexcept;


                    constexpr FileOptions(FileOptions const&) = default;
                    constexpr FileOptions(FileOptions&&) = default;
                    constexpr FileOptions& operator=(FileOptions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FileOptions& operator=(FileOptions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FileOptions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __FileOptions_Unwrapped : int32_t {
__None = 0,
__WriteThrough = -2147483648,
__Asynchronous = 1073741824,
__RandomAccess = 268435456,
__DeleteOnClose = 67108864,
__SequentialScan = 134217728,
__Encrypted = 16384,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FileOptions_Unwrapped () const noexcept {
return std::bit_cast<__FileOptions_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::System::IO::FileOptions const None;

/// @brief Field WriteThrough offset 0
static ::System::IO::FileOptions const WriteThrough;

/// @brief Field Asynchronous offset 0
static ::System::IO::FileOptions const Asynchronous;

/// @brief Field RandomAccess offset 0
static ::System::IO::FileOptions const RandomAccess;

/// @brief Field DeleteOnClose offset 0
static ::System::IO::FileOptions const DeleteOnClose;

/// @brief Field SequentialScan offset 0
static ::System::IO::FileOptions const SequentialScan;

/// @brief Field Encrypted offset 0
static ::System::IO::FileOptions const Encrypted;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::IO
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::IO::FileOptions, "System.IO", "FileOptions");
