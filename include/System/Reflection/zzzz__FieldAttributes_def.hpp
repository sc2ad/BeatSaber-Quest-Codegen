#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Reflection {
struct FieldAttributes;
}
// Type: System.Reflection::FieldAttributes
namespace System::Reflection {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3460))
// CS Name: System.Reflection.FieldAttributes
struct CORDL_TYPE FieldAttributes : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FieldAttributes(int32_t value__) noexcept;


                    constexpr FieldAttributes(FieldAttributes const&) = default;
                    constexpr FieldAttributes(FieldAttributes&&) = default;
                    constexpr FieldAttributes& operator=(FieldAttributes const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FieldAttributes& operator=(FieldAttributes&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FieldAttributes(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __FieldAttributes_Unwrapped : int32_t {
__FieldAccessMask = 7,
__PrivateScope = 0,
__Private = 1,
__FamANDAssem = 2,
__Assembly = 3,
__Family = 4,
__FamORAssem = 5,
__Public = 6,
__Static = 16,
__InitOnly = 32,
__Literal = 64,
__NotSerialized = 128,
__SpecialName = 512,
__PinvokeImpl = 8192,
__RTSpecialName = 1024,
__HasFieldMarshal = 4096,
__HasDefault = 32768,
__HasFieldRVA = 256,
__ReservedMask = 38144,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FieldAttributes_Unwrapped () const noexcept {
return std::bit_cast<__FieldAttributes_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field FieldAccessMask offset 0
static System::Reflection::FieldAttributes const FieldAccessMask;

/// @brief Field PrivateScope offset 0
static System::Reflection::FieldAttributes const PrivateScope;

/// @brief Field Private offset 0
static System::Reflection::FieldAttributes const Private;

/// @brief Field FamANDAssem offset 0
static System::Reflection::FieldAttributes const FamANDAssem;

/// @brief Field Assembly offset 0
static System::Reflection::FieldAttributes const Assembly;

/// @brief Field Family offset 0
static System::Reflection::FieldAttributes const Family;

/// @brief Field FamORAssem offset 0
static System::Reflection::FieldAttributes const FamORAssem;

/// @brief Field Public offset 0
static System::Reflection::FieldAttributes const Public;

/// @brief Field Static offset 0
static System::Reflection::FieldAttributes const Static;

/// @brief Field InitOnly offset 0
static System::Reflection::FieldAttributes const InitOnly;

/// @brief Field Literal offset 0
static System::Reflection::FieldAttributes const Literal;

/// @brief Field NotSerialized offset 0
static System::Reflection::FieldAttributes const NotSerialized;

/// @brief Field SpecialName offset 0
static System::Reflection::FieldAttributes const SpecialName;

/// @brief Field PinvokeImpl offset 0
static System::Reflection::FieldAttributes const PinvokeImpl;

/// @brief Field RTSpecialName offset 0
static System::Reflection::FieldAttributes const RTSpecialName;

/// @brief Field HasFieldMarshal offset 0
static System::Reflection::FieldAttributes const HasFieldMarshal;

/// @brief Field HasDefault offset 0
static System::Reflection::FieldAttributes const HasDefault;

/// @brief Field HasFieldRVA offset 0
static System::Reflection::FieldAttributes const HasFieldRVA;

/// @brief Field ReservedMask offset 0
static System::Reflection::FieldAttributes const ReservedMask;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Reflection
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::FieldAttributes, "System.Reflection", "FieldAttributes");
