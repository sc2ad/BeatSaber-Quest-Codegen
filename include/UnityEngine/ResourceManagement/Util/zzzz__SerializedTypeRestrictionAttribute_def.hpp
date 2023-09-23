#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class SerializedTypeRestrictionAttribute;
}
// Type: UnityEngine.ResourceManagement.Util::SerializedTypeRestrictionAttribute
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14261))
// CS Name: UnityEngine.ResourceManagement.Util.SerializedTypeRestrictionAttribute
class CORDL_TYPE SerializedTypeRestrictionAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SerializedTypeRestrictionAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "SerializedTypeRestrictionAttribute", modifiers: " const&", def_value: None }]
constexpr SerializedTypeRestrictionAttribute(SerializedTypeRestrictionAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SerializedTypeRestrictionAttribute", modifiers: "&&", def_value: None }]
constexpr SerializedTypeRestrictionAttribute(SerializedTypeRestrictionAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SerializedTypeRestrictionAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr SerializedTypeRestrictionAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SerializedTypeRestrictionAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SerializedTypeRestrictionAttribute& operator=(SerializedTypeRestrictionAttribute&& o) noexcept = default;
  constexpr SerializedTypeRestrictionAttribute& operator=(SerializedTypeRestrictionAttribute const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(System::Type value) ;

constexpr System::Type __get_type() const;


// Methods

// Ctor Parameters []
explicit SerializedTypeRestrictionAttribute() ;

/// @brief Method .ctor addr 0x2a3aad4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::Util
NEED_NO_BOX(UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute, "UnityEngine.ResourceManagement.Util", "SerializedTypeRestrictionAttribute");
