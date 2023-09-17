#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::IO {
struct MonoFileType;
}
// Type: System.IO::MonoFileType
namespace System::IO {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3614))
// CS Name: System.IO.MonoFileType
struct CORDL_TYPE MonoFileType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MonoFileType(int32_t value__) noexcept;


                    constexpr MonoFileType(MonoFileType const&) = default;
                    constexpr MonoFileType(MonoFileType&&) = default;
                    constexpr MonoFileType& operator=(MonoFileType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MonoFileType& operator=(MonoFileType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MonoFileType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __MonoFileType_Unwrapped : int32_t {
__Unknown = 0,
__Disk = 1,
__Char = 2,
__Pipe = 3,
__Remote = 32768,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MonoFileType_Unwrapped () const noexcept {
return std::bit_cast<__MonoFileType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static ::System::IO::MonoFileType const Unknown;

/// @brief Field Disk offset 0
static ::System::IO::MonoFileType const Disk;

/// @brief Field Char offset 0
static ::System::IO::MonoFileType const Char;

/// @brief Field Pipe offset 0
static ::System::IO::MonoFileType const Pipe;

/// @brief Field Remote offset 0
static ::System::IO::MonoFileType const Remote;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::IO
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::IO::MonoFileType, "System.IO", "MonoFileType");
