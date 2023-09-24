#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Newtonsoft::Json::Utilities {
struct PrimitiveTypeCode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class TypeInformation;
}
// Type: Newtonsoft.Json.Utilities::TypeInformation
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11813))
// CS Name: Newtonsoft.Json.Utilities.TypeInformation
class CORDL_TYPE TypeInformation : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TypeInformation() = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeInformation", modifiers: " const&", def_value: None }]
constexpr TypeInformation(TypeInformation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeInformation", modifiers: "&&", def_value: None }]
constexpr TypeInformation(TypeInformation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypeInformation(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TypeInformation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TypeInformation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TypeInformation& operator=(TypeInformation&& o) noexcept = default;
  constexpr TypeInformation& operator=(TypeInformation const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get__Type_k__BackingField, put=__set__Type_k__BackingField))  _Type_k__BackingField;

constexpr void __set__Type_k__BackingField(System::Type value) ;

constexpr System::Type __get__Type_k__BackingField() const;

 Newtonsoft::Json::Utilities::PrimitiveTypeCode __declspec(property(get=__get__TypeCode_k__BackingField, put=__set__TypeCode_k__BackingField))  _TypeCode_k__BackingField;

constexpr void __set__TypeCode_k__BackingField(Newtonsoft::Json::Utilities::PrimitiveTypeCode value) ;

constexpr Newtonsoft::Json::Utilities::PrimitiveTypeCode __get__TypeCode_k__BackingField() const;


// Properties

 System::Type __declspec(property(get=get_Type, put=set_Type))  Type;

 Newtonsoft::Json::Utilities::PrimitiveTypeCode __declspec(property(get=get_TypeCode, put=set_TypeCode))  TypeCode;


// Methods

/// @brief Method get_Type addr 0x24e3c38 size 0x8 virtual false final false
 System::Type get_Type() ;

/// @brief Method set_Type addr 0x24e3c40 size 0x8 virtual false final false
 void set_Type(System::Type value) ;

/// @brief Method get_TypeCode addr 0x24e3c48 size 0x8 virtual false final false
 Newtonsoft::Json::Utilities::PrimitiveTypeCode get_TypeCode() ;

/// @brief Method set_TypeCode addr 0x24e3c50 size 0x8 virtual false final false
 void set_TypeCode(Newtonsoft::Json::Utilities::PrimitiveTypeCode value) ;

static Newtonsoft::Json::Utilities::TypeInformation New_ctor() ;

/// @brief Method .ctor addr 0x24e3c58 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
NEED_NO_BOX(Newtonsoft::Json::Utilities::TypeInformation);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Utilities::TypeInformation, "Newtonsoft.Json.Utilities", "TypeInformation");
