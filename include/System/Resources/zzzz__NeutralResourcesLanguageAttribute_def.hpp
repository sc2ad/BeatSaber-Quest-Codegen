#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Resources {
struct UltimateResourceFallbackLocation;
}
// Forward declare root types
namespace System::Resources {
class NeutralResourcesLanguageAttribute;
}
// Type: System.Resources::NeutralResourcesLanguageAttribute
namespace System::Resources {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3419))
// CS Name: System.Resources.NeutralResourcesLanguageAttribute
class CORDL_TYPE NeutralResourcesLanguageAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~NeutralResourcesLanguageAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "NeutralResourcesLanguageAttribute", modifiers: " const&", def_value: None }]
constexpr NeutralResourcesLanguageAttribute(NeutralResourcesLanguageAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NeutralResourcesLanguageAttribute", modifiers: "&&", def_value: None }]
constexpr NeutralResourcesLanguageAttribute(NeutralResourcesLanguageAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NeutralResourcesLanguageAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr NeutralResourcesLanguageAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NeutralResourcesLanguageAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NeutralResourcesLanguageAttribute& operator=(NeutralResourcesLanguageAttribute&& o) noexcept = default;
  constexpr NeutralResourcesLanguageAttribute& operator=(NeutralResourcesLanguageAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__CultureName_k__BackingField, put=__set__CultureName_k__BackingField))  _CultureName_k__BackingField;

constexpr void __set__CultureName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__CultureName_k__BackingField() const;

 System::Resources::UltimateResourceFallbackLocation __declspec(property(get=__get__Location_k__BackingField, put=__set__Location_k__BackingField))  _Location_k__BackingField;

constexpr void __set__Location_k__BackingField(System::Resources::UltimateResourceFallbackLocation value) ;

constexpr System::Resources::UltimateResourceFallbackLocation __get__Location_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_CultureName))  CultureName;

 System::Resources::UltimateResourceFallbackLocation __declspec(property(get=get_Location))  Location;


// Methods

static System::Resources::NeutralResourcesLanguageAttribute New_ctor(::StringW cultureName) ;

/// @brief Method .ctor addr 0x2370d08 size 0x7c virtual false final false
 void _ctor(::StringW cultureName) ;

/// @brief Method get_CultureName addr 0x2370d84 size 0x8 virtual false final false
 ::StringW get_CultureName() ;

/// @brief Method get_Location addr 0x2370d8c size 0x8 virtual false final false
 System::Resources::UltimateResourceFallbackLocation get_Location() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Resources
NEED_NO_BOX(System::Resources::NeutralResourcesLanguageAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Resources::NeutralResourcesLanguageAttribute, "System.Resources", "NeutralResourcesLanguageAttribute");
