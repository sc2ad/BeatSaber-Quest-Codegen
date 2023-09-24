#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::Bindings {
struct CodegenOptions;
}
// Forward declare root types
namespace UnityEngine::Bindings {
class NativeTypeAttribute;
}
// Type: UnityEngine.Bindings::NativeTypeAttribute
namespace UnityEngine::Bindings {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15878))
// CS Name: UnityEngine.Bindings.NativeTypeAttribute
class CORDL_TYPE NativeTypeAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~NativeTypeAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeTypeAttribute", modifiers: " const&", def_value: None }]
constexpr NativeTypeAttribute(NativeTypeAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeTypeAttribute", modifiers: "&&", def_value: None }]
constexpr NativeTypeAttribute(NativeTypeAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NativeTypeAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr NativeTypeAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NativeTypeAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NativeTypeAttribute& operator=(NativeTypeAttribute&& o) noexcept = default;
  constexpr NativeTypeAttribute& operator=(NativeTypeAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Header_k__BackingField, put=__set__Header_k__BackingField))  _Header_k__BackingField;

constexpr void __set__Header_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Header_k__BackingField() const;

 ::StringW __declspec(property(get=__get__IntermediateScriptingStructName_k__BackingField, put=__set__IntermediateScriptingStructName_k__BackingField))  _IntermediateScriptingStructName_k__BackingField;

constexpr void __set__IntermediateScriptingStructName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__IntermediateScriptingStructName_k__BackingField() const;

 UnityEngine::Bindings::CodegenOptions __declspec(property(get=__get__CodegenOptions_k__BackingField, put=__set__CodegenOptions_k__BackingField))  _CodegenOptions_k__BackingField;

constexpr void __set__CodegenOptions_k__BackingField(UnityEngine::Bindings::CodegenOptions value) ;

constexpr UnityEngine::Bindings::CodegenOptions __get__CodegenOptions_k__BackingField() const;


// Properties

 ::StringW __declspec(property(put=set_Header))  Header;

 ::StringW __declspec(property(put=set_IntermediateScriptingStructName))  IntermediateScriptingStructName;

 UnityEngine::Bindings::CodegenOptions __declspec(property(put=set_CodegenOptions))  CodegenOptions;


// Methods

/// @brief Method set_Header addr 0x2ba1524 size 0x8 virtual true final true
 void set_Header(::StringW value) ;

/// @brief Method set_IntermediateScriptingStructName addr 0x2ba152c size 0x8 virtual false final false
 void set_IntermediateScriptingStructName(::StringW value) ;

/// @brief Method set_CodegenOptions addr 0x2ba1534 size 0x8 virtual true final true
 void set_CodegenOptions(UnityEngine::Bindings::CodegenOptions value) ;

static UnityEngine::Bindings::NativeTypeAttribute New_ctor() ;

/// @brief Method .ctor addr 0x2ba153c size 0x1c virtual false final false
 void _ctor() ;

static UnityEngine::Bindings::NativeTypeAttribute New_ctor(UnityEngine::Bindings::CodegenOptions codegenOptions) ;

/// @brief Method .ctor addr 0x2ba1558 size 0x28 virtual false final false
 void _ctor(UnityEngine::Bindings::CodegenOptions codegenOptions) ;

static UnityEngine::Bindings::NativeTypeAttribute New_ctor(::StringW header) ;

/// @brief Method .ctor addr 0x2ba1580 size 0x108 virtual false final false
 void _ctor(::StringW header) ;

static UnityEngine::Bindings::NativeTypeAttribute New_ctor(UnityEngine::Bindings::CodegenOptions codegenOptions, ::StringW intermediateStructName) ;

/// @brief Method .ctor addr 0x2ba1688 size 0x30 virtual false final false
 void _ctor(UnityEngine::Bindings::CodegenOptions codegenOptions, ::StringW intermediateStructName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Bindings
NEED_NO_BOX(UnityEngine::Bindings::NativeTypeAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Bindings::NativeTypeAttribute, "UnityEngine.Bindings", "NativeTypeAttribute");
