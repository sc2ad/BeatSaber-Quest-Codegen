#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class OnErrorAttribute;
}
// Type: Newtonsoft.Json.Serialization::OnErrorAttribute
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11906))
// CS Name: Newtonsoft.Json.Serialization.OnErrorAttribute
class CORDL_TYPE OnErrorAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OnErrorAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "OnErrorAttribute", modifiers: " const&", def_value: None }]
constexpr OnErrorAttribute(OnErrorAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OnErrorAttribute", modifiers: "&&", def_value: None }]
constexpr OnErrorAttribute(OnErrorAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OnErrorAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr OnErrorAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OnErrorAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OnErrorAttribute& operator=(OnErrorAttribute&& o) noexcept = default;
  constexpr OnErrorAttribute& operator=(OnErrorAttribute const& o) noexcept = default;
                


// Methods

static Newtonsoft::Json::Serialization::OnErrorAttribute New_ctor() ;

/// @brief Method .ctor addr 0x2517920 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(Newtonsoft::Json::Serialization::OnErrorAttribute);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::OnErrorAttribute, "Newtonsoft.Json.Serialization", "OnErrorAttribute");
