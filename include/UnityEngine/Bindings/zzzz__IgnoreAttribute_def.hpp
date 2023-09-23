#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace UnityEngine::Bindings {
class IgnoreAttribute;
}
// Type: UnityEngine.Bindings::IgnoreAttribute
namespace UnityEngine::Bindings {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15886))
// CS Name: UnityEngine.Bindings.IgnoreAttribute
class CORDL_TYPE IgnoreAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~IgnoreAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "IgnoreAttribute", modifiers: " const&", def_value: None }]
constexpr IgnoreAttribute(IgnoreAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IgnoreAttribute", modifiers: "&&", def_value: None }]
constexpr IgnoreAttribute(IgnoreAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IgnoreAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr IgnoreAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IgnoreAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IgnoreAttribute& operator=(IgnoreAttribute&& o) noexcept = default;
  constexpr IgnoreAttribute& operator=(IgnoreAttribute const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__DoesNotContributeToSize_k__BackingField, put=__set__DoesNotContributeToSize_k__BackingField))  _DoesNotContributeToSize_k__BackingField;

constexpr void __set__DoesNotContributeToSize_k__BackingField(bool value) ;

constexpr bool __get__DoesNotContributeToSize_k__BackingField() const;


// Properties

 bool __declspec(property(put=set_DoesNotContributeToSize))  DoesNotContributeToSize;


// Methods

/// @brief Method set_DoesNotContributeToSize addr 0x2ba1810 size 0xc virtual false final false
 void set_DoesNotContributeToSize(bool value) ;

// Ctor Parameters []
explicit IgnoreAttribute() ;

/// @brief Method .ctor addr 0x2ba181c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Bindings
NEED_NO_BOX(UnityEngine::Bindings::IgnoreAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Bindings::IgnoreAttribute, "UnityEngine.Bindings", "IgnoreAttribute");
