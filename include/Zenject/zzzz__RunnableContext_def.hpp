#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__Context_def.hpp"
namespace Zenject {
class InjectTypeInfo;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Zenject {
class RunnableContext;
}
// Type: Zenject::RunnableContext
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11061))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11064))
// CS Name: Zenject.RunnableContext
class CORDL_TYPE RunnableContext : public Zenject::Context {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~RunnableContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "RunnableContext", modifiers: " const&", def_value: None }]
constexpr RunnableContext(RunnableContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RunnableContext", modifiers: "&&", def_value: None }]
constexpr RunnableContext(RunnableContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RunnableContext(void* ptr) noexcept : Zenject::Context(ptr) {
}


  constexpr RunnableContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RunnableContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RunnableContext& operator=(RunnableContext&& o) noexcept = default;
  constexpr RunnableContext& operator=(RunnableContext const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__autoRun, put=__set__autoRun))  _autoRun;

constexpr void __set__autoRun(bool value) ;

constexpr bool __get__autoRun() const;

static bool __declspec(property(get=__get__staticAutoRun, put=__set__staticAutoRun))  _staticAutoRun;

static void __set__staticAutoRun(bool value) ;

static bool __get__staticAutoRun() ;

 bool __declspec(property(get=__get__Initialized_k__BackingField, put=__set__Initialized_k__BackingField))  _Initialized_k__BackingField;

constexpr void __set__Initialized_k__BackingField(bool value) ;

constexpr bool __get__Initialized_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_Initialized, put=set_Initialized))  Initialized;


// Methods

/// @brief Method get_Initialized addr 0x2d77e70 size 0x8 virtual false final false
 bool get_Initialized() ;

/// @brief Method set_Initialized addr 0x2d77e78 size 0xc virtual false final false
 void set_Initialized(bool value) ;

/// @brief Method Initialize addr 0x2d750c0 size 0x94 virtual false final false
 void Initialize() ;

/// @brief Method Run addr 0x2d77e84 size 0x70 virtual false final false
 void Run() ;

/// @brief Method RunInternal addr 0x0 size 0xffffffffffffffff virtual true final false
 void RunInternal() ;

/// @brief Method CreateComponent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T CreateComponent(UnityEngine::GameObject gameObject) ;

static Zenject::RunnableContext New_ctor() ;

/// @brief Method .ctor addr 0x2d75a40 size 0xc virtual false final false
 void _ctor() ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d77f40 size 0x178 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::RunnableContext);
DEFINE_IL2CPP_ARG_TYPE(Zenject::RunnableContext, "Zenject", "RunnableContext");
