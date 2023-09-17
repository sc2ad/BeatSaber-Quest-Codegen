#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlChildElementDescription;
}
// Type: UnityEngine.UIElements::UxmlChildElementDescription
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7105))
// CS Name: UnityEngine.UIElements.UxmlChildElementDescription
class CORDL_TYPE UxmlChildElementDescription : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UxmlChildElementDescription() = default;

// Ctor Parameters [CppParam { name: "", ty: "UxmlChildElementDescription", modifiers: " const&", def_value: None }]
constexpr UxmlChildElementDescription(UxmlChildElementDescription const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UxmlChildElementDescription", modifiers: "&&", def_value: None }]
constexpr UxmlChildElementDescription(UxmlChildElementDescription&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UxmlChildElementDescription(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UxmlChildElementDescription& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UxmlChildElementDescription& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UxmlChildElementDescription& operator=(UxmlChildElementDescription&& o) noexcept = default;
  constexpr UxmlChildElementDescription& operator=(UxmlChildElementDescription const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__elementName_k__BackingField, put=__set__elementName_k__BackingField))  _elementName_k__BackingField;

constexpr void __set__elementName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__elementName_k__BackingField() const;

 ::StringW __declspec(property(get=__get__elementNamespace_k__BackingField, put=__set__elementNamespace_k__BackingField))  _elementNamespace_k__BackingField;

constexpr void __set__elementNamespace_k__BackingField(::StringW value) ;

constexpr ::StringW __get__elementNamespace_k__BackingField() const;


// Properties

 ::StringW __declspec(property(put=set_elementName))  elementName;

 ::StringW __declspec(property(put=set_elementNamespace))  elementNamespace;


// Methods

// Ctor Parameters [CppParam { name: "t", ty: "::System::Type", modifiers: "", def_value: None }]
explicit UxmlChildElementDescription(::System::Type t) ;

/// @brief Method .ctor addr 0x2c9db78 size 0xa0 virtual false final false
 void _ctor(::System::Type t) ;

/// @brief Method set_elementName addr 0x2c9dc18 size 0x8 virtual false final false
 void set_elementName(::StringW value) ;

/// @brief Method set_elementNamespace addr 0x2c9dc20 size 0x8 virtual false final false
 void set_elementNamespace(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::UxmlChildElementDescription);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlChildElementDescription, "UnityEngine.UIElements", "UxmlChildElementDescription");
