#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__DefaultContractResolver_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class CamelCasePropertyNamesContractResolver;
}
// Type: Newtonsoft.Json.Serialization::CamelCasePropertyNamesContractResolver
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11871))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11860))
// CS Name: Newtonsoft.Json.Serialization.CamelCasePropertyNamesContractResolver
class CORDL_TYPE CamelCasePropertyNamesContractResolver : public ::Newtonsoft::Json::Serialization::DefaultContractResolver {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CamelCasePropertyNamesContractResolver() = default;

// Ctor Parameters [CppParam { name: "", ty: "CamelCasePropertyNamesContractResolver", modifiers: " const&", def_value: None }]
constexpr CamelCasePropertyNamesContractResolver(CamelCasePropertyNamesContractResolver const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CamelCasePropertyNamesContractResolver", modifiers: "&&", def_value: None }]
constexpr CamelCasePropertyNamesContractResolver(CamelCasePropertyNamesContractResolver&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CamelCasePropertyNamesContractResolver(void* ptr) noexcept : ::Newtonsoft::Json::Serialization::DefaultContractResolver(ptr) {
}


  constexpr CamelCasePropertyNamesContractResolver& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CamelCasePropertyNamesContractResolver& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CamelCasePropertyNamesContractResolver& operator=(CamelCasePropertyNamesContractResolver&& o) noexcept = default;
  constexpr CamelCasePropertyNamesContractResolver& operator=(CamelCasePropertyNamesContractResolver const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit CamelCasePropertyNamesContractResolver() ;

/// @brief Method .ctor addr 0x24f6bf4 size 0x60 virtual false final false
 void _ctor() ;

/// @brief Method ResolvePropertyName addr 0x24f6c78 size 0xc virtual true final false
 ::StringW ResolvePropertyName(::StringW propertyName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
} // end anonymous namespace
NEED_NO_BOX(::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver, "Newtonsoft.Json.Serialization", "CamelCasePropertyNamesContractResolver");
