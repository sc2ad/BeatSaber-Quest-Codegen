#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace UnityEngine {
class InspectorNameAttribute;
}
// Type: UnityEngine::InspectorNameAttribute
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10112))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10114))
// CS Name: UnityEngine.InspectorNameAttribute
class CORDL_TYPE InspectorNameAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~InspectorNameAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "InspectorNameAttribute", modifiers: " const&", def_value: None }]
constexpr InspectorNameAttribute(InspectorNameAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InspectorNameAttribute", modifiers: "&&", def_value: None }]
constexpr InspectorNameAttribute(InspectorNameAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InspectorNameAttribute(void* ptr) noexcept : ::UnityEngine::PropertyAttribute(ptr) {
}


  constexpr InspectorNameAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InspectorNameAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InspectorNameAttribute& operator=(InspectorNameAttribute&& o) noexcept = default;
  constexpr InspectorNameAttribute& operator=(InspectorNameAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_displayName, put=__set_displayName))  displayName;

constexpr void __set_displayName(::StringW value) ;

constexpr ::StringW __get_displayName() const;


// Methods

// Ctor Parameters [CppParam { name: "displayName", ty: "::StringW", modifiers: "", def_value: None }]
explicit InspectorNameAttribute(::StringW displayName) ;

/// @brief Method .ctor addr 0x2b54de4 size 0x28 virtual false final false
 void _ctor(::StringW displayName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InspectorNameAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InspectorNameAttribute, "UnityEngine", "InspectorNameAttribute");
