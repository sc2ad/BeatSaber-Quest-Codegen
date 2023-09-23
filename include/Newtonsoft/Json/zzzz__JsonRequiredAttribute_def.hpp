#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace Newtonsoft::Json {
class JsonRequiredAttribute;
}
// Type: Newtonsoft.Json::JsonRequiredAttribute
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11750))
// CS Name: Newtonsoft.Json.JsonRequiredAttribute
class CORDL_TYPE JsonRequiredAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~JsonRequiredAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonRequiredAttribute", modifiers: " const&", def_value: None }]
constexpr JsonRequiredAttribute(JsonRequiredAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonRequiredAttribute", modifiers: "&&", def_value: None }]
constexpr JsonRequiredAttribute(JsonRequiredAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonRequiredAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr JsonRequiredAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonRequiredAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonRequiredAttribute& operator=(JsonRequiredAttribute&& o) noexcept = default;
  constexpr JsonRequiredAttribute& operator=(JsonRequiredAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit JsonRequiredAttribute() ;

/// @brief Method .ctor addr 0x24c7f70 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
NEED_NO_BOX(Newtonsoft::Json::JsonRequiredAttribute);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::JsonRequiredAttribute, "Newtonsoft.Json", "JsonRequiredAttribute");
