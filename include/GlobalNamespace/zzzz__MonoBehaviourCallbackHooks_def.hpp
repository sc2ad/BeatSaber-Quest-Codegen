#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__ComponentSingleton_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MonoBehaviourCallbackHooks;
}
// Type: ::MonoBehaviourCallbackHooks
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14247)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14247), inst: 1027 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14229))
// CS Name: MonoBehaviourCallbackHooks
class CORDL_TYPE MonoBehaviourCallbackHooks : public UnityEngine::ResourceManagement::Util::ComponentSingleton_1<GlobalNamespace::MonoBehaviourCallbackHooks> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MonoBehaviourCallbackHooks() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoBehaviourCallbackHooks", modifiers: " const&", def_value: None }]
constexpr MonoBehaviourCallbackHooks(MonoBehaviourCallbackHooks const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoBehaviourCallbackHooks", modifiers: "&&", def_value: None }]
constexpr MonoBehaviourCallbackHooks(MonoBehaviourCallbackHooks&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoBehaviourCallbackHooks(void* ptr) noexcept : UnityEngine::ResourceManagement::Util::ComponentSingleton_1<GlobalNamespace::MonoBehaviourCallbackHooks>(ptr) {
}


  constexpr MonoBehaviourCallbackHooks& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoBehaviourCallbackHooks& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoBehaviourCallbackHooks& operator=(MonoBehaviourCallbackHooks&& o) noexcept = default;
  constexpr MonoBehaviourCallbackHooks& operator=(MonoBehaviourCallbackHooks const& o) noexcept = default;
                


// Fields

 System::Action_1<float_t> __declspec(property(get=__get_m_OnUpdateDelegate, put=__set_m_OnUpdateDelegate))  m_OnUpdateDelegate;

constexpr void __set_m_OnUpdateDelegate(System::Action_1<float_t> value) ;

constexpr System::Action_1<float_t> __get_m_OnUpdateDelegate() const;


// Methods

/// @brief Method add_OnUpdateDelegate addr 0x2a31fd0 size 0xa8 virtual false final false
 void add_OnUpdateDelegate(System::Action_1<float_t> value) ;

/// @brief Method remove_OnUpdateDelegate addr 0x2a32078 size 0xa8 virtual false final false
 void remove_OnUpdateDelegate(System::Action_1<float_t> value) ;

/// @brief Method GetGameObjectName addr 0x2a32120 size 0x40 virtual true final false
 ::StringW GetGameObjectName() ;

/// @brief Method Update addr 0x2a32160 size 0x30 virtual false final false
 void Update() ;

static GlobalNamespace::MonoBehaviourCallbackHooks New_ctor() ;

/// @brief Method .ctor addr 0x2a32190 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MonoBehaviourCallbackHooks);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MonoBehaviourCallbackHooks, "", "MonoBehaviourCallbackHooks");
