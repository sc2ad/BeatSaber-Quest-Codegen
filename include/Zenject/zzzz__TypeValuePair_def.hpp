#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
namespace {
namespace System {
class Type;
}
// Forward declare root types
namespace Zenject {
struct TypeValuePair;
}
// Type: Zenject::TypeValuePair
namespace Zenject {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11056))
// CS Name: Zenject.TypeValuePair
struct CORDL_TYPE TypeValuePair : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Type", ty: "::System::Type", modifiers: "", def_value: None }, CppParam { name: "Value", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
constexpr TypeValuePair(::System::Type Type, ::bs_hook::Il2CppWrapperType Value) noexcept;


                    constexpr TypeValuePair(TypeValuePair const&) = default;
                    constexpr TypeValuePair(TypeValuePair&&) = default;
                    constexpr TypeValuePair& operator=(TypeValuePair const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TypeValuePair& operator=(TypeValuePair&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TypeValuePair(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Type __declspec(property(get=__get_Type, put=__set_Type))  Type;

constexpr void __set_Type(::System::Type value) ;

constexpr ::System::Type __get_Type() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_Value, put=__set_Value))  Value;

constexpr void __set_Value(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_Value() const;


// Methods

/// @brief Method .ctor addr 0x2d72340 size 0x8 virtual false final false
 void _ctor(::System::Type type, ::bs_hook::Il2CppWrapperType value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Zenject::TypeValuePair, "Zenject", "TypeValuePair");
