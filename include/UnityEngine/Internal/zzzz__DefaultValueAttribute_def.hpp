#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Internal {
class DefaultValueAttribute;
}
// Type: UnityEngine.Internal::DefaultValueAttribute
namespace UnityEngine::Internal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10259))
// CS Name: UnityEngine.Internal.DefaultValueAttribute
class CORDL_TYPE DefaultValueAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DefaultValueAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultValueAttribute", modifiers: " const&", def_value: None }]
constexpr DefaultValueAttribute(DefaultValueAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultValueAttribute", modifiers: "&&", def_value: None }]
constexpr DefaultValueAttribute(DefaultValueAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultValueAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr DefaultValueAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultValueAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultValueAttribute& operator=(DefaultValueAttribute&& o) noexcept = default;
  constexpr DefaultValueAttribute& operator=(DefaultValueAttribute const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_DefaultValue, put=__set_DefaultValue))  DefaultValue;

constexpr void __set_DefaultValue(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_DefaultValue() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Value))  Value;


// Methods

static UnityEngine::Internal::DefaultValueAttribute New_ctor(::StringW value) ;

/// @brief Method .ctor addr 0x2b71c48 size 0x28 virtual false final false
 void _ctor(::StringW value) ;

/// @brief Method get_Value addr 0x2b71c70 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_Value() ;

/// @brief Method Equals addr 0x2b71c78 size 0xb8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2b71d30 size 0x24 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Internal
NEED_NO_BOX(UnityEngine::Internal::DefaultValueAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Internal::DefaultValueAttribute, "UnityEngine.Internal", "DefaultValueAttribute");
