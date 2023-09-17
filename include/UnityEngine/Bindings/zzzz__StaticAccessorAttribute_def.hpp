#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine::Bindings {
struct StaticAccessorType;
}
// Forward declare root types
namespace UnityEngine::Bindings {
class StaticAccessorAttribute;
}
// Type: UnityEngine.Bindings::StaticAccessorAttribute
namespace UnityEngine::Bindings {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15884))
// CS Name: UnityEngine.Bindings.StaticAccessorAttribute
class CORDL_TYPE StaticAccessorAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~StaticAccessorAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticAccessorAttribute", modifiers: " const&", def_value: None }]
constexpr StaticAccessorAttribute(StaticAccessorAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticAccessorAttribute", modifiers: "&&", def_value: None }]
constexpr StaticAccessorAttribute(StaticAccessorAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StaticAccessorAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr StaticAccessorAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StaticAccessorAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StaticAccessorAttribute& operator=(StaticAccessorAttribute&& o) noexcept = default;
  constexpr StaticAccessorAttribute& operator=(StaticAccessorAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Name_k__BackingField, put=__set__Name_k__BackingField))  _Name_k__BackingField;

constexpr void __set__Name_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Name_k__BackingField() const;

 ::UnityEngine::Bindings::StaticAccessorType __declspec(property(get=__get__Type_k__BackingField, put=__set__Type_k__BackingField))  _Type_k__BackingField;

constexpr void __set__Type_k__BackingField(::UnityEngine::Bindings::StaticAccessorType value) ;

constexpr ::UnityEngine::Bindings::StaticAccessorType __get__Type_k__BackingField() const;


// Properties

 ::StringW __declspec(property(put=set_Name))  Name;

 ::UnityEngine::Bindings::StaticAccessorType __declspec(property(put=set_Type))  Type;


// Methods

/// @brief Method set_Name addr 0x2ba177c size 0x8 virtual false final false
 void set_Name(::StringW value) ;

/// @brief Method set_Type addr 0x2ba1784 size 0x8 virtual false final false
 void set_Type(::UnityEngine::Bindings::StaticAccessorType value) ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
explicit StaticAccessorAttribute(::StringW name) ;

/// @brief Method .ctor addr 0x2ba178c size 0x28 virtual false final false
 void _ctor(::StringW name) ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::UnityEngine::Bindings::StaticAccessorType", modifiers: "", def_value: None }]
explicit StaticAccessorAttribute(::StringW name, ::UnityEngine::Bindings::StaticAccessorType type) ;

/// @brief Method .ctor addr 0x2ba17b4 size 0x30 virtual false final false
 void _ctor(::StringW name, ::UnityEngine::Bindings::StaticAccessorType type) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Bindings
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Bindings::StaticAccessorAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::StaticAccessorAttribute, "UnityEngine.Bindings", "StaticAccessorAttribute");
