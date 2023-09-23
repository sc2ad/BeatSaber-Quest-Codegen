#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class BoolSO;
}
// Forward declare root types
namespace GlobalNamespace {
class ConditionalActivation;
}
// Type: ::ConditionalActivation
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5443))
// CS Name: ConditionalActivation
class CORDL_TYPE ConditionalActivation : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ConditionalActivation() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConditionalActivation", modifiers: " const&", def_value: None }]
constexpr ConditionalActivation(ConditionalActivation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConditionalActivation", modifiers: "&&", def_value: None }]
constexpr ConditionalActivation(ConditionalActivation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConditionalActivation(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ConditionalActivation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConditionalActivation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConditionalActivation& operator=(ConditionalActivation&& o) noexcept = default;
  constexpr ConditionalActivation& operator=(ConditionalActivation const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BoolSO __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(GlobalNamespace::BoolSO value) ;

constexpr GlobalNamespace::BoolSO __get__value() const;

 bool __declspec(property(get=__get__activateOnFalse, put=__set__activateOnFalse))  _activateOnFalse;

constexpr void __set__activateOnFalse(bool value) ;

constexpr bool __get__activateOnFalse() const;


// Methods

/// @brief Method Awake addr 0x21155b8 size 0x84 virtual false final false
 void Awake() ;

// Ctor Parameters []
explicit ConditionalActivation() ;

/// @brief Method .ctor addr 0x211563c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ConditionalActivation);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ConditionalActivation, "", "ConditionalActivation");
