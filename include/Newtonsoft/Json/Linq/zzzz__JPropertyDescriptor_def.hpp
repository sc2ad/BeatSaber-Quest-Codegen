#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class Type;
}
namespace Newtonsoft::Json::Linq {
class JObject;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JPropertyDescriptor;
}
// Type: Newtonsoft.Json.Linq::JPropertyDescriptor
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8295))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11910))
// CS Name: Newtonsoft.Json.Linq.JPropertyDescriptor
class CORDL_TYPE JPropertyDescriptor : public System::ComponentModel::PropertyDescriptor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~JPropertyDescriptor() = default;

// Ctor Parameters [CppParam { name: "", ty: "JPropertyDescriptor", modifiers: " const&", def_value: None }]
constexpr JPropertyDescriptor(JPropertyDescriptor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JPropertyDescriptor", modifiers: "&&", def_value: None }]
constexpr JPropertyDescriptor(JPropertyDescriptor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JPropertyDescriptor(void* ptr) noexcept : System::ComponentModel::PropertyDescriptor(ptr) {
}


  constexpr JPropertyDescriptor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JPropertyDescriptor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JPropertyDescriptor& operator=(JPropertyDescriptor&& o) noexcept = default;
  constexpr JPropertyDescriptor& operator=(JPropertyDescriptor const& o) noexcept = default;
                


// Properties

 System::Type __declspec(property(get=get_ComponentType))  ComponentType;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 System::Type __declspec(property(get=get_PropertyType))  PropertyType;

 int32_t __declspec(property(get=get_NameHashCode))  NameHashCode;


// Methods

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
explicit JPropertyDescriptor(::StringW name) ;

/// @brief Method .ctor addr 0x2517928 size 0xc virtual false final false
 void _ctor(::StringW name) ;

/// @brief Method CastInstance addr 0x2517934 size 0x7c virtual false final false
static Newtonsoft::Json::Linq::JObject CastInstance(::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method CanResetValue addr 0x25179b0 size 0x8 virtual true final false
 bool CanResetValue(::bs_hook::Il2CppWrapperType component) ;

/// @brief Method GetValue addr 0x25179b8 size 0x44 virtual true final false
 ::bs_hook::Il2CppWrapperType GetValue(::bs_hook::Il2CppWrapperType component) ;

/// @brief Method ResetValue addr 0x2517a7c size 0x4 virtual true final false
 void ResetValue(::bs_hook::Il2CppWrapperType component) ;

/// @brief Method SetValue addr 0x2517a80 size 0xe8 virtual true final false
 void SetValue(::bs_hook::Il2CppWrapperType component, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ShouldSerializeValue addr 0x2517c48 size 0x8 virtual true final false
 bool ShouldSerializeValue(::bs_hook::Il2CppWrapperType component) ;

/// @brief Method get_ComponentType addr 0x2517c50 size 0x6c virtual true final false
 System::Type get_ComponentType() ;

/// @brief Method get_IsReadOnly addr 0x2517cbc size 0x8 virtual true final false
 bool get_IsReadOnly() ;

/// @brief Method get_PropertyType addr 0x2517cc4 size 0x6c virtual true final false
 System::Type get_PropertyType() ;

/// @brief Method get_NameHashCode addr 0x2517d30 size 0x8 virtual true final false
 int32_t get_NameHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq
NEED_NO_BOX(Newtonsoft::Json::Linq::JPropertyDescriptor);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Linq::JPropertyDescriptor, "Newtonsoft.Json.Linq", "JPropertyDescriptor");
