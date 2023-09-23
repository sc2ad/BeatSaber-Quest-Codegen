#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace UnityEngine::Scripting {
class UsedByNativeCodeAttribute;
}
// Type: UnityEngine.Scripting::UsedByNativeCodeAttribute
namespace UnityEngine::Scripting {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15866))
// CS Name: UnityEngine.Scripting.UsedByNativeCodeAttribute
class CORDL_TYPE UsedByNativeCodeAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UsedByNativeCodeAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "UsedByNativeCodeAttribute", modifiers: " const&", def_value: None }]
constexpr UsedByNativeCodeAttribute(UsedByNativeCodeAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UsedByNativeCodeAttribute", modifiers: "&&", def_value: None }]
constexpr UsedByNativeCodeAttribute(UsedByNativeCodeAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UsedByNativeCodeAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr UsedByNativeCodeAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UsedByNativeCodeAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UsedByNativeCodeAttribute& operator=(UsedByNativeCodeAttribute&& o) noexcept = default;
  constexpr UsedByNativeCodeAttribute& operator=(UsedByNativeCodeAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Name_k__BackingField, put=__set__Name_k__BackingField))  _Name_k__BackingField;

constexpr void __set__Name_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Name_k__BackingField() const;


// Properties

 ::StringW __declspec(property(put=set_Name))  Name;


// Methods

// Ctor Parameters []
explicit UsedByNativeCodeAttribute() ;

/// @brief Method .ctor addr 0x2ba0fd4 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
explicit UsedByNativeCodeAttribute(::StringW name) ;

/// @brief Method .ctor addr 0x2ba0fdc size 0x28 virtual false final false
 void _ctor(::StringW name) ;

/// @brief Method set_Name addr 0x2ba1004 size 0x8 virtual false final false
 void set_Name(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Scripting
NEED_NO_BOX(UnityEngine::Scripting::UsedByNativeCodeAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Scripting::UsedByNativeCodeAttribute, "UnityEngine.Scripting", "UsedByNativeCodeAttribute");
