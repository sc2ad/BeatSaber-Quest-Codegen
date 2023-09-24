#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace UnityEngine::Bindings {
class NotNullAttribute;
}
// Type: UnityEngine.Bindings::NotNullAttribute
namespace UnityEngine::Bindings {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15879))
// CS Name: UnityEngine.Bindings.NotNullAttribute
class CORDL_TYPE NotNullAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~NotNullAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "NotNullAttribute", modifiers: " const&", def_value: None }]
constexpr NotNullAttribute(NotNullAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NotNullAttribute", modifiers: "&&", def_value: None }]
constexpr NotNullAttribute(NotNullAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NotNullAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr NotNullAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NotNullAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NotNullAttribute& operator=(NotNullAttribute&& o) noexcept = default;
  constexpr NotNullAttribute& operator=(NotNullAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Exception_k__BackingField, put=__set__Exception_k__BackingField))  _Exception_k__BackingField;

constexpr void __set__Exception_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Exception_k__BackingField() const;


// Properties

 ::StringW __declspec(property(put=set_Exception))  Exception;


// Methods

/// @brief Method set_Exception addr 0x2ba16b8 size 0x8 virtual false final false
 void set_Exception(::StringW value) ;

static UnityEngine::Bindings::NotNullAttribute New_ctor(::StringW exception) ;

/// @brief Method .ctor addr 0x2ba16c0 size 0x28 virtual false final false
 void _ctor(::StringW exception) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Bindings
NEED_NO_BOX(UnityEngine::Bindings::NotNullAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Bindings::NotNullAttribute, "UnityEngine.Bindings", "NotNullAttribute");
