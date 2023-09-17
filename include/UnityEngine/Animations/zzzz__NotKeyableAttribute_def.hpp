#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::Animations {
class NotKeyableAttribute;
}
// Type: UnityEngine.Animations::NotKeyableAttribute
namespace UnityEngine::Animations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15075))
// CS Name: UnityEngine.Animations.NotKeyableAttribute
class CORDL_TYPE NotKeyableAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NotKeyableAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "NotKeyableAttribute", modifiers: " const&", def_value: None }]
constexpr NotKeyableAttribute(NotKeyableAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NotKeyableAttribute", modifiers: "&&", def_value: None }]
constexpr NotKeyableAttribute(NotKeyableAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NotKeyableAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr NotKeyableAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NotKeyableAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NotKeyableAttribute& operator=(NotKeyableAttribute&& o) noexcept = default;
  constexpr NotKeyableAttribute& operator=(NotKeyableAttribute const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Animations
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Animations::NotKeyableAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::NotKeyableAttribute, "UnityEngine.Animations", "NotKeyableAttribute");
