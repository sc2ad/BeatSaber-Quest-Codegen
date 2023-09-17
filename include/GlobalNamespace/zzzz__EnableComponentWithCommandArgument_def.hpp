#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine {
class Behaviour;
}
// Forward declare root types
namespace GlobalNamespace {
class EnableComponentWithCommandArgument;
}
// Type: ::EnableComponentWithCommandArgument
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13791))
// CS Name: EnableComponentWithCommandArgument
class CORDL_TYPE EnableComponentWithCommandArgument : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~EnableComponentWithCommandArgument() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnableComponentWithCommandArgument", modifiers: " const&", def_value: None }]
constexpr EnableComponentWithCommandArgument(EnableComponentWithCommandArgument const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnableComponentWithCommandArgument", modifiers: "&&", def_value: None }]
constexpr EnableComponentWithCommandArgument(EnableComponentWithCommandArgument&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnableComponentWithCommandArgument(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr EnableComponentWithCommandArgument& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnableComponentWithCommandArgument& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnableComponentWithCommandArgument& operator=(EnableComponentWithCommandArgument&& o) noexcept = default;
  constexpr EnableComponentWithCommandArgument& operator=(EnableComponentWithCommandArgument const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__argument, put=__set__argument))  _argument;

constexpr void __set__argument(::StringW value) ;

constexpr ::StringW __get__argument() const;

 ::UnityEngine::Behaviour __declspec(property(get=__get__component, put=__set__component))  _component;

constexpr void __set__component(::UnityEngine::Behaviour value) ;

constexpr ::UnityEngine::Behaviour __get__component() const;


// Methods

/// @brief Method Awake addr 0x1f769f8 size 0x90 virtual false final false
 void Awake() ;

// Ctor Parameters []
explicit EnableComponentWithCommandArgument() ;

/// @brief Method .ctor addr 0x1f76a88 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::EnableComponentWithCommandArgument);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnableComponentWithCommandArgument, "", "EnableComponentWithCommandArgument");
