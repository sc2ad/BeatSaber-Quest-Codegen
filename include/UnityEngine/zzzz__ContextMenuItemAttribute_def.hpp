#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace UnityEngine {
class ContextMenuItemAttribute;
}
// Type: UnityEngine::ContextMenuItemAttribute
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10112))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10113))
// CS Name: UnityEngine.ContextMenuItemAttribute
class CORDL_TYPE ContextMenuItemAttribute : public UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ContextMenuItemAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContextMenuItemAttribute", modifiers: " const&", def_value: None }]
constexpr ContextMenuItemAttribute(ContextMenuItemAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContextMenuItemAttribute", modifiers: "&&", def_value: None }]
constexpr ContextMenuItemAttribute(ContextMenuItemAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContextMenuItemAttribute(void* ptr) noexcept : UnityEngine::PropertyAttribute(ptr) {
}


  constexpr ContextMenuItemAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContextMenuItemAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContextMenuItemAttribute& operator=(ContextMenuItemAttribute&& o) noexcept = default;
  constexpr ContextMenuItemAttribute& operator=(ContextMenuItemAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 ::StringW __declspec(property(get=__get_function, put=__set_function))  function;

constexpr void __set_function(::StringW value) ;

constexpr ::StringW __get_function() const;


// Methods

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "function", ty: "::StringW", modifiers: "", def_value: None }]
explicit ContextMenuItemAttribute(::StringW name, ::StringW function) ;

/// @brief Method .ctor addr 0x2b54db8 size 0x2c virtual false final false
 void _ctor(::StringW name, ::StringW function) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::ContextMenuItemAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ContextMenuItemAttribute, "UnityEngine", "ContextMenuItemAttribute");
