#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace UnityEngine::Bindings {
class NativeHeaderAttribute;
}
// Type: UnityEngine.Bindings::NativeHeaderAttribute
namespace UnityEngine::Bindings {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15870))
// CS Name: UnityEngine.Bindings.NativeHeaderAttribute
class CORDL_TYPE NativeHeaderAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~NativeHeaderAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeHeaderAttribute", modifiers: " const&", def_value: None }]
constexpr NativeHeaderAttribute(NativeHeaderAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeHeaderAttribute", modifiers: "&&", def_value: None }]
constexpr NativeHeaderAttribute(NativeHeaderAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NativeHeaderAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr NativeHeaderAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NativeHeaderAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NativeHeaderAttribute& operator=(NativeHeaderAttribute&& o) noexcept = default;
  constexpr NativeHeaderAttribute& operator=(NativeHeaderAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Header_k__BackingField, put=__set__Header_k__BackingField))  _Header_k__BackingField;

constexpr void __set__Header_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Header_k__BackingField() const;


// Properties

 ::StringW __declspec(property(put=set_Header))  Header;


// Methods

/// @brief Method set_Header addr 0x2ba10b0 size 0x8 virtual true final true
 void set_Header(::StringW value) ;

// Ctor Parameters [CppParam { name: "header", ty: "::StringW", modifiers: "", def_value: None }]
explicit NativeHeaderAttribute(::StringW header) ;

/// @brief Method .ctor addr 0x2ba10b8 size 0x104 virtual false final false
 void _ctor(::StringW header) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Bindings
NEED_NO_BOX(UnityEngine::Bindings::NativeHeaderAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Bindings::NativeHeaderAttribute, "UnityEngine.Bindings", "NativeHeaderAttribute");
