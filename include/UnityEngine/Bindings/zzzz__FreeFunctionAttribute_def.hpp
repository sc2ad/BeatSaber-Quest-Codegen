#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Bindings/zzzz__NativeMethodAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace UnityEngine::Bindings {
class FreeFunctionAttribute;
}
// Type: UnityEngine.Bindings::FreeFunctionAttribute
namespace UnityEngine::Bindings {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15873))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15881))
// CS Name: UnityEngine.Bindings.FreeFunctionAttribute
class CORDL_TYPE FreeFunctionAttribute : public UnityEngine::Bindings::NativeMethodAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~FreeFunctionAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "FreeFunctionAttribute", modifiers: " const&", def_value: None }]
constexpr FreeFunctionAttribute(FreeFunctionAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FreeFunctionAttribute", modifiers: "&&", def_value: None }]
constexpr FreeFunctionAttribute(FreeFunctionAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FreeFunctionAttribute(void* ptr) noexcept : UnityEngine::Bindings::NativeMethodAttribute(ptr) {
}


  constexpr FreeFunctionAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FreeFunctionAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FreeFunctionAttribute& operator=(FreeFunctionAttribute&& o) noexcept = default;
  constexpr FreeFunctionAttribute& operator=(FreeFunctionAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit FreeFunctionAttribute() ;

/// @brief Method .ctor addr 0x2ba16f0 size 0x20 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
explicit FreeFunctionAttribute(::StringW name) ;

/// @brief Method .ctor addr 0x2ba1710 size 0x1c virtual false final false
 void _ctor(::StringW name) ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isThreadSafe", ty: "bool", modifiers: "", def_value: None }]
explicit FreeFunctionAttribute(::StringW name, bool isThreadSafe) ;

/// @brief Method .ctor addr 0x2ba172c size 0x30 virtual false final false
 void _ctor(::StringW name, bool isThreadSafe) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Bindings
NEED_NO_BOX(UnityEngine::Bindings::FreeFunctionAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Bindings::FreeFunctionAttribute, "UnityEngine.Bindings", "FreeFunctionAttribute");
