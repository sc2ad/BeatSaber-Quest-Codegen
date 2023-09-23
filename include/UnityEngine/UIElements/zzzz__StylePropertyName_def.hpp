#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StylePropertyName;
}
// Type: UnityEngine.UIElements::StylePropertyName
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6876))
// CS Name: UnityEngine.UIElements.StylePropertyName
struct CORDL_TYPE StylePropertyName : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::UIElements::StylePropertyName>
constexpr operator  System::IEquatable_1<UnityEngine::UIElements::StylePropertyName>() const;

// Ctor Parameters [CppParam { name: "_id_k__BackingField", ty: "UnityEngine::UIElements::StyleSheets::StylePropertyId", modifiers: "", def_value: None }, CppParam { name: "_name_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }]
constexpr StylePropertyName(UnityEngine::UIElements::StyleSheets::StylePropertyId _id_k__BackingField, ::StringW _name_k__BackingField) noexcept;


                    constexpr StylePropertyName(StylePropertyName const&) = default;
                    constexpr StylePropertyName(StylePropertyName&&) = default;
                    constexpr StylePropertyName& operator=(StylePropertyName const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StylePropertyName& operator=(StylePropertyName&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StylePropertyName(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::UIElements::StyleSheets::StylePropertyId __declspec(property(get=__get__id_k__BackingField, put=__set__id_k__BackingField))  _id_k__BackingField;

constexpr void __set__id_k__BackingField(UnityEngine::UIElements::StyleSheets::StylePropertyId value) ;

constexpr UnityEngine::UIElements::StyleSheets::StylePropertyId __get__id_k__BackingField() const;

 ::StringW __declspec(property(get=__get__name_k__BackingField, put=__set__name_k__BackingField))  _name_k__BackingField;

constexpr void __set__name_k__BackingField(::StringW value) ;

constexpr ::StringW __get__name_k__BackingField() const;


// Properties

 UnityEngine::UIElements::StyleSheets::StylePropertyId __declspec(property(get=get_id))  id;

 ::StringW __declspec(property(get=get_name))  name;


// Methods

/// @brief Method get_id addr 0x2c41fc8 size 0x8 virtual false final false
 UnityEngine::UIElements::StyleSheets::StylePropertyId get_id() ;

/// @brief Method get_name addr 0x2c41fd0 size 0x8 virtual false final false
 ::StringW get_name() ;

/// @brief Method StylePropertyIdFromString addr 0x2c41fd8 size 0xa0 virtual false final false
static UnityEngine::UIElements::StyleSheets::StylePropertyId StylePropertyIdFromString(::StringW name) ;

/// @brief Method .ctor addr 0x2c42078 size 0xac virtual false final false
 void _ctor(UnityEngine::UIElements::StyleSheets::StylePropertyId stylePropertyId) ;

/// @brief Method .ctor addr 0x2c42124 size 0x34 virtual false final false
 void _ctor(::StringW name) ;

/// @brief Method op_Equality addr 0x2c42158 size 0xc virtual false final false
static bool op_Equality(UnityEngine::UIElements::StylePropertyName lhs, UnityEngine::UIElements::StylePropertyName rhs) ;

/// @brief Method op_Inequality addr 0x2c42164 size 0xc virtual false final false
static bool op_Inequality(UnityEngine::UIElements::StylePropertyName lhs, UnityEngine::UIElements::StylePropertyName rhs) ;

/// @brief Method op_Implicit addr 0x2c42170 size 0x20 virtual false final false
static UnityEngine::UIElements::StylePropertyName op_Implicit_UnityEngine__UIElements__StylePropertyName(::StringW name) ;

/// @brief Method GetHashCode addr 0x2c42190 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2c42198 size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method Equals addr 0x2c42210 size 0x10 virtual true final true
 bool Equals(UnityEngine::UIElements::StylePropertyName other) ;

/// @brief Method ToString addr 0x2c42220 size 0x8 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StylePropertyName, "UnityEngine.UIElements", "StylePropertyName");
