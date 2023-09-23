#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace Newtonsoft::Json {
class JsonIgnoreAttribute;
}
// Type: Newtonsoft.Json::JsonIgnoreAttribute
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11768))
// CS Name: Newtonsoft.Json.JsonIgnoreAttribute
class CORDL_TYPE JsonIgnoreAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~JsonIgnoreAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonIgnoreAttribute", modifiers: " const&", def_value: None }]
constexpr JsonIgnoreAttribute(JsonIgnoreAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonIgnoreAttribute", modifiers: "&&", def_value: None }]
constexpr JsonIgnoreAttribute(JsonIgnoreAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonIgnoreAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr JsonIgnoreAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonIgnoreAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonIgnoreAttribute& operator=(JsonIgnoreAttribute&& o) noexcept = default;
  constexpr JsonIgnoreAttribute& operator=(JsonIgnoreAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit JsonIgnoreAttribute() ;

/// @brief Method .ctor addr 0x24d129c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
NEED_NO_BOX(Newtonsoft::Json::JsonIgnoreAttribute);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::JsonIgnoreAttribute, "Newtonsoft.Json", "JsonIgnoreAttribute");
