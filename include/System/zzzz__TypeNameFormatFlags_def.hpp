#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System {
struct TypeNameFormatFlags;
}
// Type: System::TypeNameFormatFlags
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2562))
// CS Name: System.TypeNameFormatFlags
struct CORDL_TYPE TypeNameFormatFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TypeNameFormatFlags(int32_t value__) noexcept;


                    constexpr TypeNameFormatFlags(TypeNameFormatFlags const&) = default;
                    constexpr TypeNameFormatFlags(TypeNameFormatFlags&&) = default;
                    constexpr TypeNameFormatFlags& operator=(TypeNameFormatFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TypeNameFormatFlags& operator=(TypeNameFormatFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TypeNameFormatFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TypeNameFormatFlags_Unwrapped : int32_t {
__FormatBasic = 0,
__FormatNamespace = 1,
__FormatFullInst = 2,
__FormatAssembly = 4,
__FormatSignature = 8,
__FormatNoVersion = 16,
__FormatAngleBrackets = 64,
__FormatStubInfo = 128,
__FormatGenericParam = 256,
__FormatSerialization = 259,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TypeNameFormatFlags_Unwrapped () const noexcept {
return std::bit_cast<__TypeNameFormatFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field FormatBasic offset 0
static ::System::TypeNameFormatFlags const FormatBasic;

/// @brief Field FormatNamespace offset 0
static ::System::TypeNameFormatFlags const FormatNamespace;

/// @brief Field FormatFullInst offset 0
static ::System::TypeNameFormatFlags const FormatFullInst;

/// @brief Field FormatAssembly offset 0
static ::System::TypeNameFormatFlags const FormatAssembly;

/// @brief Field FormatSignature offset 0
static ::System::TypeNameFormatFlags const FormatSignature;

/// @brief Field FormatNoVersion offset 0
static ::System::TypeNameFormatFlags const FormatNoVersion;

/// @brief Field FormatAngleBrackets offset 0
static ::System::TypeNameFormatFlags const FormatAngleBrackets;

/// @brief Field FormatStubInfo offset 0
static ::System::TypeNameFormatFlags const FormatStubInfo;

/// @brief Field FormatGenericParam offset 0
static ::System::TypeNameFormatFlags const FormatGenericParam;

/// @brief Field FormatSerialization offset 0
static ::System::TypeNameFormatFlags const FormatSerialization;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::TypeNameFormatFlags, "System", "TypeNameFormatFlags");
