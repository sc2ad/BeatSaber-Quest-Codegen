#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/zzzz__JsonContainerAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace Newtonsoft::Json {
class JsonDictionaryAttribute;
}
// Type: Newtonsoft.Json::JsonDictionaryAttribute
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11757))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11745))
// CS Name: Newtonsoft.Json.JsonDictionaryAttribute
class CORDL_TYPE JsonDictionaryAttribute : public ::Newtonsoft::Json::JsonContainerAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~JsonDictionaryAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonDictionaryAttribute", modifiers: " const&", def_value: None }]
constexpr JsonDictionaryAttribute(JsonDictionaryAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonDictionaryAttribute", modifiers: "&&", def_value: None }]
constexpr JsonDictionaryAttribute(JsonDictionaryAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonDictionaryAttribute(void* ptr) noexcept : ::Newtonsoft::Json::JsonContainerAttribute(ptr) {
}


  constexpr JsonDictionaryAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonDictionaryAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonDictionaryAttribute& operator=(JsonDictionaryAttribute&& o) noexcept = default;
  constexpr JsonDictionaryAttribute& operator=(JsonDictionaryAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit JsonDictionaryAttribute() ;

/// @brief Method .ctor addr 0x24c7384 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }]
explicit JsonDictionaryAttribute(::StringW id) ;

/// @brief Method .ctor addr 0x24c7394 size 0x28 virtual false final false
 void _ctor(::StringW id) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
} // end anonymous namespace
NEED_NO_BOX(::Newtonsoft::Json::JsonDictionaryAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonDictionaryAttribute, "Newtonsoft.Json", "JsonDictionaryAttribute");
