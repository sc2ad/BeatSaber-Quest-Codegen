#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::InputSystem::Utilities {
struct PrimitiveValue;
}
namespace System {
struct TypeCode;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
struct NamedValue;
}
// Type: UnityEngine.InputSystem.Utilities::NamedValue
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6766))
// CS Name: UnityEngine.InputSystem.Utilities.NamedValue
struct CORDL_TYPE NamedValue : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::NamedValue>
constexpr operator  ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::NamedValue>() const;

// Ctor Parameters [CppParam { name: "_name_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_value_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::PrimitiveValue", modifiers: "", def_value: None }]
constexpr NamedValue(::StringW _name_k__BackingField, ::UnityEngine::InputSystem::Utilities::PrimitiveValue _value_k__BackingField) noexcept;


                    constexpr NamedValue(NamedValue const&) = default;
                    constexpr NamedValue(NamedValue&&) = default;
                    constexpr NamedValue& operator=(NamedValue const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NamedValue& operator=(NamedValue&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NamedValue(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field Separator offset 0
static constexpr ::ConstString  Separator{u","};

 ::StringW __declspec(property(get=__get__name_k__BackingField, put=__set__name_k__BackingField))  _name_k__BackingField;

constexpr void __set__name_k__BackingField(::StringW value) ;

constexpr ::StringW __get__name_k__BackingField() const;

 ::UnityEngine::InputSystem::Utilities::PrimitiveValue __declspec(property(get=__get__value_k__BackingField, put=__set__value_k__BackingField))  _value_k__BackingField;

constexpr void __set__value_k__BackingField(::UnityEngine::InputSystem::Utilities::PrimitiveValue value) ;

constexpr ::UnityEngine::InputSystem::Utilities::PrimitiveValue __get__value_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_name, put=set_name))  name;

 ::UnityEngine::InputSystem::Utilities::PrimitiveValue __declspec(property(get=get_value, put=set_value))  value;

 ::System::TypeCode __declspec(property(get=get_type))  type;


// Methods

/// @brief Method get_name addr 0x2982034 size 0x8 virtual false final false
 ::StringW get_name() ;

/// @brief Method set_name addr 0x298203c size 0x8 virtual false final false
 void set_name(::StringW value) ;

/// @brief Method get_value addr 0x2982044 size 0xc virtual false final false
 ::UnityEngine::InputSystem::Utilities::PrimitiveValue get_value() ;

/// @brief Method set_value addr 0x2982050 size 0x8 virtual false final false
 void set_value(::UnityEngine::InputSystem::Utilities::PrimitiveValue value) ;

/// @brief Method get_type addr 0x2982058 size 0x8 virtual false final false
 ::System::TypeCode get_type() ;

/// @brief Method ConvertTo addr 0x2982060 size 0x3c virtual false final false
 ::UnityEngine::InputSystem::Utilities::NamedValue ConvertTo(::System::TypeCode type) ;

/// @brief Method From addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static ::UnityEngine::InputSystem::Utilities::NamedValue From(::StringW name, TValue value) ;

/// @brief Method ToString addr 0x2981fa0 size 0x94 virtual true final false
 ::StringW ToString() ;

/// @brief Method Equals addr 0x2982294 size 0x5c virtual true final true
 bool Equals(::UnityEngine::InputSystem::Utilities::NamedValue other) ;

/// @brief Method Equals addr 0x298231c size 0x90 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x29823ac size 0x5c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x2982490 size 0x30 virtual false final false
static bool op_Equality(::UnityEngine::InputSystem::Utilities::NamedValue left, ::UnityEngine::InputSystem::Utilities::NamedValue right) ;

/// @brief Method op_Inequality addr 0x29824c0 size 0x34 virtual false final false
static bool op_Inequality(::UnityEngine::InputSystem::Utilities::NamedValue left, ::UnityEngine::InputSystem::Utilities::NamedValue right) ;

/// @brief Method ParseMultiple addr 0x2981d94 size 0x198 virtual false final false
static ::ArrayW<::UnityEngine::InputSystem::Utilities::NamedValue> ParseMultiple(::StringW parameterString) ;

/// @brief Method Parse addr 0x29828b8 size 0x38 virtual false final false
static ::UnityEngine::InputSystem::Utilities::NamedValue Parse(::StringW str) ;

/// @brief Method ParseParameter addr 0x2982564 size 0x354 virtual false final false
static ::UnityEngine::InputSystem::Utilities::NamedValue ParseParameter(::StringW parameterString, ByRef<int32_t> index) ;

/// @brief Method ApplyToObject addr 0x2982bf8 size 0x2e8 virtual false final false
 void ApplyToObject(::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method ApplyAllToObject addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParameterList>
static void ApplyAllToObject(::bs_hook::Il2CppWrapperType instance, TParameterList parameters) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::NamedValue, "UnityEngine.InputSystem.Utilities", "NamedValue");
