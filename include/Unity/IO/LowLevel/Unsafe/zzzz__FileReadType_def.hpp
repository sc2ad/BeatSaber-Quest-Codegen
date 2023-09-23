#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Unity::IO::LowLevel::Unsafe {
struct FileReadType;
}
// Type: Unity.IO.LowLevel.Unsafe::FileReadType
namespace Unity::IO::LowLevel::Unsafe {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9931))
// CS Name: Unity.IO.LowLevel.Unsafe.FileReadType
struct CORDL_TYPE FileReadType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FileReadType(int32_t value__) noexcept;


                    constexpr FileReadType(FileReadType const&) = default;
                    constexpr FileReadType(FileReadType&&) = default;
                    constexpr FileReadType& operator=(FileReadType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FileReadType& operator=(FileReadType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FileReadType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __FileReadType_Unwrapped : int32_t {
__Sync = 0,
__Async = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FileReadType_Unwrapped () const noexcept {
return std::bit_cast<__FileReadType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Sync offset 0
static Unity::IO::LowLevel::Unsafe::FileReadType const Sync;

/// @brief Field Async offset 0
static Unity::IO::LowLevel::Unsafe::FileReadType const Async;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::IO::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE(Unity::IO::LowLevel::Unsafe::FileReadType, "Unity.IO.LowLevel.Unsafe", "FileReadType");
