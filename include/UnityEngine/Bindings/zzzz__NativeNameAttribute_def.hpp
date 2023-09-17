#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::Bindings {
class NativeNameAttribute;
}
// Type: UnityEngine.Bindings::NativeNameAttribute
namespace UnityEngine::Bindings {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15871))
// CS Name: UnityEngine.Bindings.NativeNameAttribute
class CORDL_TYPE NativeNameAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~NativeNameAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeNameAttribute", modifiers: " const&", def_value: None }]
constexpr NativeNameAttribute(NativeNameAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeNameAttribute", modifiers: "&&", def_value: None }]
constexpr NativeNameAttribute(NativeNameAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NativeNameAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr NativeNameAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NativeNameAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NativeNameAttribute& operator=(NativeNameAttribute&& o) noexcept = default;
  constexpr NativeNameAttribute& operator=(NativeNameAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Name_k__BackingField, put=__set__Name_k__BackingField))  _Name_k__BackingField;

constexpr void __set__Name_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Name_k__BackingField() const;


// Properties

 ::StringW __declspec(property(put=set_Name))  Name;


// Methods

/// @brief Method set_Name addr 0x2ba11bc size 0x8 virtual true final true
 void set_Name(::StringW value) ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
explicit NativeNameAttribute(::StringW name) ;

/// @brief Method .ctor addr 0x2ba11c4 size 0x104 virtual false final false
 void _ctor(::StringW name) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Bindings
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Bindings::NativeNameAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::NativeNameAttribute, "UnityEngine.Bindings", "NativeNameAttribute");
