#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace UnityEngine {
class Animator;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class ZenjectStateMachineBehaviourAutoInjecter;
}
// Type: Zenject::ZenjectStateMachineBehaviourAutoInjecter
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11306))
// CS Name: Zenject.ZenjectStateMachineBehaviourAutoInjecter
class CORDL_TYPE ZenjectStateMachineBehaviourAutoInjecter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ZenjectStateMachineBehaviourAutoInjecter() = default;

// Ctor Parameters [CppParam { name: "", ty: "ZenjectStateMachineBehaviourAutoInjecter", modifiers: " const&", def_value: None }]
constexpr ZenjectStateMachineBehaviourAutoInjecter(ZenjectStateMachineBehaviourAutoInjecter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ZenjectStateMachineBehaviourAutoInjecter", modifiers: "&&", def_value: None }]
constexpr ZenjectStateMachineBehaviourAutoInjecter(ZenjectStateMachineBehaviourAutoInjecter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ZenjectStateMachineBehaviourAutoInjecter(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ZenjectStateMachineBehaviourAutoInjecter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ZenjectStateMachineBehaviourAutoInjecter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ZenjectStateMachineBehaviourAutoInjecter& operator=(ZenjectStateMachineBehaviourAutoInjecter&& o) noexcept = default;
  constexpr ZenjectStateMachineBehaviourAutoInjecter& operator=(ZenjectStateMachineBehaviourAutoInjecter const& o) noexcept = default;
                


// Fields

 ::Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(::Zenject::DiContainer value) ;

constexpr ::Zenject::DiContainer __get__container() const;

 ::UnityEngine::Animator __declspec(property(get=__get__animator, put=__set__animator))  _animator;

constexpr void __set__animator(::UnityEngine::Animator value) ;

constexpr ::UnityEngine::Animator __get__animator() const;


// Methods

/// @brief Method Construct addr 0x2da78ec size 0x64 virtual false final false
 void Construct(::Zenject::DiContainer container) ;

/// @brief Method Start addr 0x2da7950 size 0xe8 virtual false final false
 void Start() ;

// Ctor Parameters []
explicit ZenjectStateMachineBehaviourAutoInjecter() ;

/// @brief Method .ctor addr 0x2da7a38 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method __zenInjectMethod0 addr 0x2da7a40 size 0xe8 virtual false final false
static void __zenInjectMethod0(::bs_hook::Il2CppWrapperType P_0, ::ArrayW<::bs_hook::Il2CppWrapperType> P_1) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2da7b28 size 0x2f8 virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::ZenjectStateMachineBehaviourAutoInjecter);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ZenjectStateMachineBehaviourAutoInjecter, "Zenject", "ZenjectStateMachineBehaviourAutoInjecter");
