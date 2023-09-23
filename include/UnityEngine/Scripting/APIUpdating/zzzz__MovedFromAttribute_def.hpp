#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::Scripting::APIUpdating {
struct MovedFromAttributeData;
}
// Forward declare root types
namespace UnityEngine::Scripting::APIUpdating {
class MovedFromAttribute;
}
// Type: UnityEngine.Scripting.APIUpdating::MovedFromAttribute
namespace UnityEngine::Scripting::APIUpdating {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10257))
// CS Name: UnityEngine.Scripting.APIUpdating.MovedFromAttribute
class CORDL_TYPE MovedFromAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MovedFromAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "MovedFromAttribute", modifiers: " const&", def_value: None }]
constexpr MovedFromAttribute(MovedFromAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MovedFromAttribute", modifiers: "&&", def_value: None }]
constexpr MovedFromAttribute(MovedFromAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MovedFromAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr MovedFromAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MovedFromAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MovedFromAttribute& operator=(MovedFromAttribute&& o) noexcept = default;
  constexpr MovedFromAttribute& operator=(MovedFromAttribute const& o) noexcept = default;
                


// Fields

 UnityEngine::Scripting::APIUpdating::MovedFromAttributeData __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(UnityEngine::Scripting::APIUpdating::MovedFromAttributeData value) ;

constexpr UnityEngine::Scripting::APIUpdating::MovedFromAttributeData __get_data() const;


// Methods

// Ctor Parameters [CppParam { name: "autoUpdateAPI", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "sourceNamespace", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "sourceAssembly", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "sourceClassName", ty: "::StringW", modifiers: "", def_value: None }]
explicit MovedFromAttribute(bool autoUpdateAPI, ::StringW sourceNamespace, ::StringW sourceAssembly, ::StringW sourceClassName) ;

/// @brief Method .ctor addr 0x2b71b90 size 0x6c virtual false final false
 void _ctor(bool autoUpdateAPI, ::StringW sourceNamespace, ::StringW sourceAssembly, ::StringW sourceClassName) ;

// Ctor Parameters [CppParam { name: "sourceNamespace", ty: "::StringW", modifiers: "", def_value: None }]
explicit MovedFromAttribute(::StringW sourceNamespace) ;

/// @brief Method .ctor addr 0x2b71bfc size 0x44 virtual false final false
 void _ctor(::StringW sourceNamespace) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Scripting::APIUpdating
NEED_NO_BOX(UnityEngine::Scripting::APIUpdating::MovedFromAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Scripting::APIUpdating::MovedFromAttribute, "UnityEngine.Scripting.APIUpdating", "MovedFromAttribute");
