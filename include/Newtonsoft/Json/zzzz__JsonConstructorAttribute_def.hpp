#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace Newtonsoft::Json {
class JsonConstructorAttribute;
}
// Type: Newtonsoft.Json::JsonConstructorAttribute
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11744))
// CS Name: Newtonsoft.Json.JsonConstructorAttribute
class CORDL_TYPE JsonConstructorAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~JsonConstructorAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonConstructorAttribute", modifiers: " const&", def_value: None }]
constexpr JsonConstructorAttribute(JsonConstructorAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonConstructorAttribute", modifiers: "&&", def_value: None }]
constexpr JsonConstructorAttribute(JsonConstructorAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonConstructorAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr JsonConstructorAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonConstructorAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonConstructorAttribute& operator=(JsonConstructorAttribute&& o) noexcept = default;
  constexpr JsonConstructorAttribute& operator=(JsonConstructorAttribute const& o) noexcept = default;
                


// Methods

static Newtonsoft::Json::JsonConstructorAttribute New_ctor() ;

/// @brief Method .ctor addr 0x24c737c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
NEED_NO_BOX(Newtonsoft::Json::JsonConstructorAttribute);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::JsonConstructorAttribute, "Newtonsoft.Json", "JsonConstructorAttribute");
