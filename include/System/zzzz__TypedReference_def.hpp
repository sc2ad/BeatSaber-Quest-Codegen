#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class RuntimeType;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System {
struct RuntimeTypeHandle;
}
// Forward declare root types
namespace System {
struct TypedReference;
}
// Type: System::TypedReference
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2571))
// CS Name: System.TypedReference
struct CORDL_TYPE TypedReference : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "type", ty: "System::RuntimeTypeHandle", modifiers: "", def_value: None }, CppParam { name: "Value", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "Type", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr TypedReference(System::RuntimeTypeHandle type, ::cordl_internals::intptr_t Value, ::cordl_internals::intptr_t Type) noexcept;


                    constexpr TypedReference(TypedReference const&) = default;
                    constexpr TypedReference(TypedReference&&) = default;
                    constexpr TypedReference& operator=(TypedReference const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TypedReference& operator=(TypedReference&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TypedReference(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::RuntimeTypeHandle __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(System::RuntimeTypeHandle value) ;

constexpr System::RuntimeTypeHandle __get_type() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_Value, put=__set_Value))  Value;

constexpr void __set_Value(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_Value() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_Type, put=__set_Type))  Type;

constexpr void __set_Type(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_Type() const;


// Properties

 bool __declspec(property(get=get_IsNull))  IsNull;


// Methods

/// @brief Method MakeTypedReference addr 0x2483840 size 0x448 virtual false final false
static /* UNKNOWN TYPE! Il2CppType { data: TypeDefinitionIndex(TypeDefinitionIndex(2571)), attrs: 0, ty: Typedbyref, byref: true, pinned: true, valuetype: true } */ MakeTypedReference(::bs_hook::Il2CppWrapperType target, ::ArrayW<System::Reflection::FieldInfo> flds) ;

/// @brief Method InternalMakeTypedReference addr 0x2483c8c size 0x4 virtual false final false
static void InternalMakeTypedReference(void* result, ::bs_hook::Il2CppWrapperType target, ::ArrayW<::cordl_internals::intptr_t> flds, System::RuntimeType lastFieldType) ;

/// @brief Method GetHashCode addr 0x2483c90 size 0xac virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2483d48 size 0x58 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method get_IsNull addr 0x2483da0 size 0x6c virtual false final false
 bool get_IsNull() ;

/// @brief Method SetTypedReference addr 0x2483e0c size 0x50 virtual false final false
static void SetTypedReference(/* UNKNOWN TYPE! Il2CppType { data: TypeDefinitionIndex(TypeDefinitionIndex(2571)), attrs: 0, ty: Typedbyref, byref: true, pinned: true, valuetype: true } */ target, ::bs_hook::Il2CppWrapperType value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::TypedReference, "System", "TypedReference");
