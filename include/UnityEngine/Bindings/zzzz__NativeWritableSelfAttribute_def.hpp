#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::Bindings {
class NativeWritableSelfAttribute;
}
// Type: UnityEngine.Bindings::NativeWritableSelfAttribute
namespace UnityEngine::Bindings {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15872))
// CS Name: UnityEngine.Bindings.NativeWritableSelfAttribute
class CORDL_TYPE NativeWritableSelfAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~NativeWritableSelfAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeWritableSelfAttribute", modifiers: " const&", def_value: None }]
constexpr NativeWritableSelfAttribute(NativeWritableSelfAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeWritableSelfAttribute", modifiers: "&&", def_value: None }]
constexpr NativeWritableSelfAttribute(NativeWritableSelfAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NativeWritableSelfAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr NativeWritableSelfAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NativeWritableSelfAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NativeWritableSelfAttribute& operator=(NativeWritableSelfAttribute&& o) noexcept = default;
  constexpr NativeWritableSelfAttribute& operator=(NativeWritableSelfAttribute const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__WritableSelf_k__BackingField, put=__set__WritableSelf_k__BackingField))  _WritableSelf_k__BackingField;

constexpr void __set__WritableSelf_k__BackingField(bool value) ;

constexpr bool __get__WritableSelf_k__BackingField() const;


// Properties

 bool __declspec(property(put=set_WritableSelf))  WritableSelf;


// Methods

/// @brief Method set_WritableSelf addr 0x2ba12c8 size 0xc virtual true final true
 void set_WritableSelf(bool value) ;

// Ctor Parameters []
explicit NativeWritableSelfAttribute() ;

/// @brief Method .ctor addr 0x2ba12d4 size 0x20 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Bindings
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Bindings::NativeWritableSelfAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::NativeWritableSelfAttribute, "UnityEngine.Bindings", "NativeWritableSelfAttribute");
