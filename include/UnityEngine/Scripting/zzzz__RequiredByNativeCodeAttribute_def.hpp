#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace UnityEngine::Scripting {
class RequiredByNativeCodeAttribute;
}
// Type: UnityEngine.Scripting::RequiredByNativeCodeAttribute
namespace UnityEngine::Scripting {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15867))
// CS Name: UnityEngine.Scripting.RequiredByNativeCodeAttribute
class CORDL_TYPE RequiredByNativeCodeAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RequiredByNativeCodeAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "RequiredByNativeCodeAttribute", modifiers: " const&", def_value: None }]
constexpr RequiredByNativeCodeAttribute(RequiredByNativeCodeAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RequiredByNativeCodeAttribute", modifiers: "&&", def_value: None }]
constexpr RequiredByNativeCodeAttribute(RequiredByNativeCodeAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RequiredByNativeCodeAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr RequiredByNativeCodeAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RequiredByNativeCodeAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RequiredByNativeCodeAttribute& operator=(RequiredByNativeCodeAttribute&& o) noexcept = default;
  constexpr RequiredByNativeCodeAttribute& operator=(RequiredByNativeCodeAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Name_k__BackingField, put=__set__Name_k__BackingField))  _Name_k__BackingField;

constexpr void __set__Name_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Name_k__BackingField() const;

 bool __declspec(property(get=__get__Optional_k__BackingField, put=__set__Optional_k__BackingField))  _Optional_k__BackingField;

constexpr void __set__Optional_k__BackingField(bool value) ;

constexpr bool __get__Optional_k__BackingField() const;

 bool __declspec(property(get=__get__GenerateProxy_k__BackingField, put=__set__GenerateProxy_k__BackingField))  _GenerateProxy_k__BackingField;

constexpr void __set__GenerateProxy_k__BackingField(bool value) ;

constexpr bool __get__GenerateProxy_k__BackingField() const;


// Properties

 ::StringW __declspec(property(put=set_Name))  Name;

 bool __declspec(property(put=set_Optional))  Optional;

 bool __declspec(property(put=set_GenerateProxy))  GenerateProxy;


// Methods

static UnityEngine::Scripting::RequiredByNativeCodeAttribute New_ctor() ;

/// @brief Method .ctor addr 0x2ba100c size 0x8 virtual false final false
 void _ctor() ;

static UnityEngine::Scripting::RequiredByNativeCodeAttribute New_ctor(::StringW name) ;

/// @brief Method .ctor addr 0x2ba1014 size 0x28 virtual false final false
 void _ctor(::StringW name) ;

/// @brief Method set_Name addr 0x2ba103c size 0x8 virtual false final false
 void set_Name(::StringW value) ;

/// @brief Method set_Optional addr 0x2ba1044 size 0xc virtual false final false
 void set_Optional(bool value) ;

/// @brief Method set_GenerateProxy addr 0x2ba1050 size 0xc virtual false final false
 void set_GenerateProxy(bool value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Scripting
NEED_NO_BOX(UnityEngine::Scripting::RequiredByNativeCodeAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Scripting::RequiredByNativeCodeAttribute, "UnityEngine.Scripting", "RequiredByNativeCodeAttribute");
