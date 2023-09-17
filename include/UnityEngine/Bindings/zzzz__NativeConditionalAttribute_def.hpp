#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::Bindings {
class NativeConditionalAttribute;
}
// Type: UnityEngine.Bindings::NativeConditionalAttribute
namespace UnityEngine::Bindings {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15869))
// CS Name: UnityEngine.Bindings.NativeConditionalAttribute
class CORDL_TYPE NativeConditionalAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~NativeConditionalAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeConditionalAttribute", modifiers: " const&", def_value: None }]
constexpr NativeConditionalAttribute(NativeConditionalAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeConditionalAttribute", modifiers: "&&", def_value: None }]
constexpr NativeConditionalAttribute(NativeConditionalAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NativeConditionalAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr NativeConditionalAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NativeConditionalAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NativeConditionalAttribute& operator=(NativeConditionalAttribute&& o) noexcept = default;
  constexpr NativeConditionalAttribute& operator=(NativeConditionalAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Condition_k__BackingField, put=__set__Condition_k__BackingField))  _Condition_k__BackingField;

constexpr void __set__Condition_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Condition_k__BackingField() const;

 bool __declspec(property(get=__get__Enabled_k__BackingField, put=__set__Enabled_k__BackingField))  _Enabled_k__BackingField;

constexpr void __set__Enabled_k__BackingField(bool value) ;

constexpr bool __get__Enabled_k__BackingField() const;


// Properties

 ::StringW __declspec(property(put=set_Condition))  Condition;

 bool __declspec(property(put=set_Enabled))  Enabled;


// Methods

/// @brief Method set_Condition addr 0x2ba106c size 0x8 virtual false final false
 void set_Condition(::StringW value) ;

/// @brief Method set_Enabled addr 0x2ba1074 size 0xc virtual false final false
 void set_Enabled(bool value) ;

// Ctor Parameters [CppParam { name: "condition", ty: "::StringW", modifiers: "", def_value: None }]
explicit NativeConditionalAttribute(::StringW condition) ;

/// @brief Method .ctor addr 0x2ba1080 size 0x30 virtual false final false
 void _ctor(::StringW condition) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Bindings
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Bindings::NativeConditionalAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::NativeConditionalAttribute, "UnityEngine.Bindings", "NativeConditionalAttribute");
