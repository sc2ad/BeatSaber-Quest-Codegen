#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace UnityEngine::Bindings {
class NativeThrowsAttribute;
}
// Type: UnityEngine.Bindings::NativeThrowsAttribute
namespace UnityEngine::Bindings {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15885))
// CS Name: UnityEngine.Bindings.NativeThrowsAttribute
class CORDL_TYPE NativeThrowsAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~NativeThrowsAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeThrowsAttribute", modifiers: " const&", def_value: None }]
constexpr NativeThrowsAttribute(NativeThrowsAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeThrowsAttribute", modifiers: "&&", def_value: None }]
constexpr NativeThrowsAttribute(NativeThrowsAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NativeThrowsAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr NativeThrowsAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NativeThrowsAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NativeThrowsAttribute& operator=(NativeThrowsAttribute&& o) noexcept = default;
  constexpr NativeThrowsAttribute& operator=(NativeThrowsAttribute const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__ThrowsException_k__BackingField, put=__set__ThrowsException_k__BackingField))  _ThrowsException_k__BackingField;

constexpr void __set__ThrowsException_k__BackingField(bool value) ;

constexpr bool __get__ThrowsException_k__BackingField() const;


// Properties

 bool __declspec(property(put=set_ThrowsException))  ThrowsException;


// Methods

/// @brief Method set_ThrowsException addr 0x2ba17e4 size 0xc virtual true final true
 void set_ThrowsException(bool value) ;

// Ctor Parameters []
explicit NativeThrowsAttribute() ;

/// @brief Method .ctor addr 0x2ba17f0 size 0x20 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Bindings
NEED_NO_BOX(UnityEngine::Bindings::NativeThrowsAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Bindings::NativeThrowsAttribute, "UnityEngine.Bindings", "NativeThrowsAttribute");
