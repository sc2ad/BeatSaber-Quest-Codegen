#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace UnityEngine {
class NativeClassAttribute;
}
// Type: UnityEngine::NativeClassAttribute
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15864))
// CS Name: UnityEngine.NativeClassAttribute
class CORDL_TYPE NativeClassAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~NativeClassAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeClassAttribute", modifiers: " const&", def_value: None }]
constexpr NativeClassAttribute(NativeClassAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeClassAttribute", modifiers: "&&", def_value: None }]
constexpr NativeClassAttribute(NativeClassAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NativeClassAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr NativeClassAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NativeClassAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NativeClassAttribute& operator=(NativeClassAttribute&& o) noexcept = default;
  constexpr NativeClassAttribute& operator=(NativeClassAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__QualifiedNativeName_k__BackingField, put=__set__QualifiedNativeName_k__BackingField))  _QualifiedNativeName_k__BackingField;

constexpr void __set__QualifiedNativeName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__QualifiedNativeName_k__BackingField() const;

 ::StringW __declspec(property(get=__get__Declaration_k__BackingField, put=__set__Declaration_k__BackingField))  _Declaration_k__BackingField;

constexpr void __set__Declaration_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Declaration_k__BackingField() const;


// Properties

 ::StringW __declspec(property(put=set_QualifiedNativeName))  QualifiedNativeName;

 ::StringW __declspec(property(put=set_Declaration))  Declaration;


// Methods

/// @brief Method set_QualifiedNativeName addr 0x2ba0ea0 size 0x8 virtual false final false
 void set_QualifiedNativeName(::StringW value) ;

/// @brief Method set_Declaration addr 0x2ba0ea8 size 0x8 virtual false final false
 void set_Declaration(::StringW value) ;

// Ctor Parameters [CppParam { name: "qualifiedCppName", ty: "::StringW", modifiers: "", def_value: None }]
explicit NativeClassAttribute(::StringW qualifiedCppName) ;

/// @brief Method .ctor addr 0x2ba0eb0 size 0x70 virtual false final false
 void _ctor(::StringW qualifiedCppName) ;

// Ctor Parameters [CppParam { name: "qualifiedCppName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "declaration", ty: "::StringW", modifiers: "", def_value: None }]
explicit NativeClassAttribute(::StringW qualifiedCppName, ::StringW declaration) ;

/// @brief Method .ctor addr 0x2ba0f20 size 0x2c virtual false final false
 void _ctor(::StringW qualifiedCppName, ::StringW declaration) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::NativeClassAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::NativeClassAttribute, "UnityEngine", "NativeClassAttribute");
