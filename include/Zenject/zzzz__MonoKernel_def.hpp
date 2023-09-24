#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Zenject {
class TickableManager;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class DisposableManager;
}
namespace Zenject {
class InitializableManager;
}
// Forward declare root types
namespace Zenject {
class MonoKernel;
}
// Type: Zenject::MonoKernel
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11265))
// CS Name: Zenject.MonoKernel
class CORDL_TYPE MonoKernel : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~MonoKernel() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoKernel", modifiers: " const&", def_value: None }]
constexpr MonoKernel(MonoKernel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoKernel", modifiers: "&&", def_value: None }]
constexpr MonoKernel(MonoKernel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoKernel(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MonoKernel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoKernel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoKernel& operator=(MonoKernel&& o) noexcept = default;
  constexpr MonoKernel& operator=(MonoKernel const& o) noexcept = default;
                


// Fields

 Zenject::TickableManager __declspec(property(get=__get__tickableManager, put=__set__tickableManager))  _tickableManager;

constexpr void __set__tickableManager(Zenject::TickableManager value) ;

constexpr Zenject::TickableManager __get__tickableManager() const;

 Zenject::InitializableManager __declspec(property(get=__get__initializableManager, put=__set__initializableManager))  _initializableManager;

constexpr void __set__initializableManager(Zenject::InitializableManager value) ;

constexpr Zenject::InitializableManager __get__initializableManager() const;

 Zenject::DisposableManager __declspec(property(get=__get__disposablesManager, put=__set__disposablesManager))  _disposablesManager;

constexpr void __set__disposablesManager(Zenject::DisposableManager value) ;

constexpr Zenject::DisposableManager __get__disposablesManager() const;

 bool __declspec(property(get=__get__hasInitialized, put=__set__hasInitialized))  _hasInitialized;

constexpr void __set__hasInitialized(bool value) ;

constexpr bool __get__hasInitialized() const;

 bool __declspec(property(get=__get__isDestroyed, put=__set__isDestroyed))  _isDestroyed;

constexpr void __set__isDestroyed(bool value) ;

constexpr bool __get__isDestroyed() const;


// Properties

 bool __declspec(property(get=get_IsDestroyed))  IsDestroyed;


// Methods

/// @brief Method get_IsDestroyed addr 0x2d9c148 size 0x8 virtual false final false
 bool get_IsDestroyed() ;

/// @brief Method Start addr 0x2d9c150 size 0x4 virtual true final false
 void Start() ;

/// @brief Method Initialize addr 0x2d9c154 size 0x34 virtual false final false
 void Initialize() ;

/// @brief Method Update addr 0x2d9c188 size 0x10 virtual true final false
 void Update() ;

/// @brief Method FixedUpdate addr 0x2d9c198 size 0x10 virtual true final false
 void FixedUpdate() ;

/// @brief Method LateUpdate addr 0x2d9c1a8 size 0x10 virtual true final false
 void LateUpdate() ;

/// @brief Method OnDestroy addr 0x2d9c1b8 size 0x54 virtual true final false
 void OnDestroy() ;

static Zenject::MonoKernel New_ctor() ;

/// @brief Method .ctor addr 0x2d9b4d8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method __zenFieldSetter0 addr 0x2d9c20c size 0x134 virtual false final false
static void __zenFieldSetter0(::bs_hook::Il2CppWrapperType P_0, ::bs_hook::Il2CppWrapperType P_1) ;

/// @brief Method __zenFieldSetter1 addr 0x2d9c340 size 0x134 virtual false final false
static void __zenFieldSetter1(::bs_hook::Il2CppWrapperType P_0, ::bs_hook::Il2CppWrapperType P_1) ;

/// @brief Method __zenFieldSetter2 addr 0x2d9c474 size 0x134 virtual false final false
static void __zenFieldSetter2(::bs_hook::Il2CppWrapperType P_0, ::bs_hook::Il2CppWrapperType P_1) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d9c5a8 size 0x480 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::MonoKernel);
DEFINE_IL2CPP_ARG_TYPE(Zenject::MonoKernel, "Zenject", "MonoKernel");
