#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Reflection {
struct CustomAttributeTypedArgument;
}
namespace System {
class Type;
}
namespace System::Reflection {
class MemberInfo;
}
// Forward declare root types
namespace System::Reflection {
struct CustomAttributeNamedArgument;
}
// Type: System.Reflection::CustomAttributeNamedArgument
namespace System::Reflection {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3495))
// CS Name: System.Reflection.CustomAttributeNamedArgument
struct CORDL_TYPE CustomAttributeNamedArgument : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_TypedValue_k__BackingField", ty: "System::Reflection::CustomAttributeTypedArgument", modifiers: "", def_value: None }, CppParam { name: "_IsField_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_MemberName_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_attributeType", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "_lazyMemberInfo", ty: "System::Reflection::MemberInfo", modifiers: "", def_value: None }]
constexpr CustomAttributeNamedArgument(System::Reflection::CustomAttributeTypedArgument _TypedValue_k__BackingField, bool _IsField_k__BackingField, ::StringW _MemberName_k__BackingField, System::Type _attributeType, System::Reflection::MemberInfo _lazyMemberInfo) noexcept;


                    constexpr CustomAttributeNamedArgument(CustomAttributeNamedArgument const&) = default;
                    constexpr CustomAttributeNamedArgument(CustomAttributeNamedArgument&&) = default;
                    constexpr CustomAttributeNamedArgument& operator=(CustomAttributeNamedArgument const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CustomAttributeNamedArgument& operator=(CustomAttributeNamedArgument&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CustomAttributeNamedArgument(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Reflection::CustomAttributeTypedArgument __declspec(property(get=__get__TypedValue_k__BackingField, put=__set__TypedValue_k__BackingField))  _TypedValue_k__BackingField;

constexpr void __set__TypedValue_k__BackingField(System::Reflection::CustomAttributeTypedArgument value) ;

constexpr System::Reflection::CustomAttributeTypedArgument __get__TypedValue_k__BackingField() const;

 bool __declspec(property(get=__get__IsField_k__BackingField, put=__set__IsField_k__BackingField))  _IsField_k__BackingField;

constexpr void __set__IsField_k__BackingField(bool value) ;

constexpr bool __get__IsField_k__BackingField() const;

 ::StringW __declspec(property(get=__get__MemberName_k__BackingField, put=__set__MemberName_k__BackingField))  _MemberName_k__BackingField;

constexpr void __set__MemberName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__MemberName_k__BackingField() const;

 System::Type __declspec(property(get=__get__attributeType, put=__set__attributeType))  _attributeType;

constexpr void __set__attributeType(System::Type value) ;

constexpr System::Type __get__attributeType() const;

 System::Reflection::MemberInfo __declspec(property(get=__get__lazyMemberInfo, put=__set__lazyMemberInfo))  _lazyMemberInfo;

constexpr void __set__lazyMemberInfo(System::Reflection::MemberInfo value) ;

constexpr System::Reflection::MemberInfo __get__lazyMemberInfo() const;


// Properties

 System::Reflection::CustomAttributeTypedArgument __declspec(property(get=get_TypedValue))  TypedValue;

 bool __declspec(property(get=get_IsField))  IsField;

 ::StringW __declspec(property(get=get_MemberName))  MemberName;

 System::Reflection::MemberInfo __declspec(property(get=get_MemberInfo))  MemberInfo;


// Methods

/// @brief Method .ctor addr 0x237f674 size 0x28 virtual false final false
 void _ctor(System::Type attributeType, ::StringW memberName, bool isField, System::Reflection::CustomAttributeTypedArgument typedValue) ;

/// @brief Method .ctor addr 0x237f69c size 0x22c virtual false final false
 void _ctor(System::Reflection::MemberInfo memberInfo, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method .ctor addr 0x237f8c8 size 0x124 virtual false final false
 void _ctor(System::Reflection::MemberInfo memberInfo, System::Reflection::CustomAttributeTypedArgument typedArgument) ;

/// @brief Method get_TypedValue addr 0x237f9ec size 0xc virtual false final false
 System::Reflection::CustomAttributeTypedArgument get_TypedValue() ;

/// @brief Method get_IsField addr 0x237f9f8 size 0x8 virtual false final false
 bool get_IsField() ;

/// @brief Method get_MemberName addr 0x237fa00 size 0x8 virtual false final false
 ::StringW get_MemberName() ;

/// @brief Method get_MemberInfo addr 0x237fa08 size 0x118 virtual false final false
 System::Reflection::MemberInfo get_MemberInfo() ;

/// @brief Method Equals addr 0x237fb20 size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x237fb98 size 0x6c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x237fc04 size 0x80 virtual false final false
static bool op_Equality(System::Reflection::CustomAttributeNamedArgument left, System::Reflection::CustomAttributeNamedArgument right) ;

/// @brief Method op_Inequality addr 0x237fc84 size 0x84 virtual false final false
static bool op_Inequality(System::Reflection::CustomAttributeNamedArgument left, System::Reflection::CustomAttributeNamedArgument right) ;

/// @brief Method ToString addr 0x237fd08 size 0x38c virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Reflection
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::CustomAttributeNamedArgument, "System.Reflection", "CustomAttributeNamedArgument");
