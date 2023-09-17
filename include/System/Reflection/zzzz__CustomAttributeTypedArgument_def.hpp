#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
struct CustomAttributeTypedArgument;
}
// Type: System.Reflection::CustomAttributeTypedArgument
namespace System::Reflection {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3496))
// CS Name: System.Reflection.CustomAttributeTypedArgument
struct CORDL_TYPE CustomAttributeTypedArgument : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_ArgumentType_k__BackingField", ty: "::System::Type", modifiers: "", def_value: None }, CppParam { name: "_Value_k__BackingField", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
constexpr CustomAttributeTypedArgument(::System::Type _ArgumentType_k__BackingField, ::bs_hook::Il2CppWrapperType _Value_k__BackingField) noexcept;


                    constexpr CustomAttributeTypedArgument(CustomAttributeTypedArgument const&) = default;
                    constexpr CustomAttributeTypedArgument(CustomAttributeTypedArgument&&) = default;
                    constexpr CustomAttributeTypedArgument& operator=(CustomAttributeTypedArgument const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CustomAttributeTypedArgument& operator=(CustomAttributeTypedArgument&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CustomAttributeTypedArgument(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Type __declspec(property(get=__get__ArgumentType_k__BackingField, put=__set__ArgumentType_k__BackingField))  _ArgumentType_k__BackingField;

constexpr void __set__ArgumentType_k__BackingField(::System::Type value) ;

constexpr ::System::Type __get__ArgumentType_k__BackingField() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__Value_k__BackingField, put=__set__Value_k__BackingField))  _Value_k__BackingField;

constexpr void __set__Value_k__BackingField(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__Value_k__BackingField() const;


// Properties

 ::System::Type __declspec(property(get=get_ArgumentType))  ArgumentType;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x238098c size 0x88 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method .ctor addr 0x237a278 size 0x2b0 virtual false final false
 void _ctor(::System::Type argumentType, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_ArgumentType addr 0x2380acc size 0x8 virtual false final false
 ::System::Type get_ArgumentType() ;

/// @brief Method get_Value addr 0x2380ad4 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_Value() ;

/// @brief Method Equals addr 0x2380adc size 0x70 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2380b4c size 0x64 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x2380bb0 size 0x78 virtual false final false
static bool op_Equality(::System::Reflection::CustomAttributeTypedArgument left, ::System::Reflection::CustomAttributeTypedArgument right) ;

/// @brief Method op_Inequality addr 0x2380c28 size 0x7c virtual false final false
static bool op_Inequality(::System::Reflection::CustomAttributeTypedArgument left, ::System::Reflection::CustomAttributeTypedArgument right) ;

/// @brief Method ToString addr 0x2380ca4 size 0x8 virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x2380094 size 0x8f8 virtual false final false
 ::StringW ToString(bool typed) ;

/// @brief Method CanonicalizeValue addr 0x2380a14 size 0xb8 virtual false final false
static ::bs_hook::Il2CppWrapperType CanonicalizeValue(::bs_hook::Il2CppWrapperType value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Reflection
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::CustomAttributeTypedArgument, "System.Reflection", "CustomAttributeTypedArgument");
