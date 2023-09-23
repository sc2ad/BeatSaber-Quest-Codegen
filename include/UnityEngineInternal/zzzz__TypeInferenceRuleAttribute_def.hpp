#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngineInternal {
struct TypeInferenceRules;
}
// Forward declare root types
namespace UnityEngineInternal {
class TypeInferenceRuleAttribute;
}
// Type: UnityEngineInternal::TypeInferenceRuleAttribute
namespace UnityEngineInternal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9904))
// CS Name: UnityEngineInternal.TypeInferenceRuleAttribute
class CORDL_TYPE TypeInferenceRuleAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TypeInferenceRuleAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeInferenceRuleAttribute", modifiers: " const&", def_value: None }]
constexpr TypeInferenceRuleAttribute(TypeInferenceRuleAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeInferenceRuleAttribute", modifiers: "&&", def_value: None }]
constexpr TypeInferenceRuleAttribute(TypeInferenceRuleAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypeInferenceRuleAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr TypeInferenceRuleAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TypeInferenceRuleAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TypeInferenceRuleAttribute& operator=(TypeInferenceRuleAttribute&& o) noexcept = default;
  constexpr TypeInferenceRuleAttribute& operator=(TypeInferenceRuleAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__rule, put=__set__rule))  _rule;

constexpr void __set__rule(::StringW value) ;

constexpr ::StringW __get__rule() const;


// Methods

// Ctor Parameters [CppParam { name: "rule", ty: "UnityEngineInternal::TypeInferenceRules", modifiers: "", def_value: None }]
explicit TypeInferenceRuleAttribute(UnityEngineInternal::TypeInferenceRules rule) ;

/// @brief Method .ctor addr 0x2b279cc size 0x84 virtual false final false
 void _ctor(UnityEngineInternal::TypeInferenceRules rule) ;

// Ctor Parameters [CppParam { name: "rule", ty: "::StringW", modifiers: "", def_value: None }]
explicit TypeInferenceRuleAttribute(::StringW rule) ;

/// @brief Method .ctor addr 0x2b27a50 size 0x28 virtual false final false
 void _ctor(::StringW rule) ;

/// @brief Method ToString addr 0x2b27a78 size 0x8 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngineInternal
NEED_NO_BOX(UnityEngineInternal::TypeInferenceRuleAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngineInternal::TypeInferenceRuleAttribute, "UnityEngineInternal", "TypeInferenceRuleAttribute");
