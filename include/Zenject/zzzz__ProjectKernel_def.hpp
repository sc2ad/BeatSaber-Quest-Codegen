#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoKernel_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class SceneContextRegistry;
}
namespace Zenject {
class ZenjectSettings;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class SceneContext;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Zenject {
class ProjectKernel;
}
namespace Zenject {
class ____Zenject__ProjectKernel____c__DisplayClass4_0;
}
// Type: ::<>c__DisplayClass4_0
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11266))
// CS Name: Zenject.ProjectKernel::<>c__DisplayClass4_0
class CORDL_TYPE ____Zenject__ProjectKernel____c__DisplayClass4_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____Zenject__ProjectKernel____c__DisplayClass4_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__ProjectKernel____c__DisplayClass4_0", modifiers: " const&", def_value: None }]
constexpr ____Zenject__ProjectKernel____c__DisplayClass4_0(____Zenject__ProjectKernel____c__DisplayClass4_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__ProjectKernel____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
constexpr ____Zenject__ProjectKernel____c__DisplayClass4_0(____Zenject__ProjectKernel____c__DisplayClass4_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__ProjectKernel____c__DisplayClass4_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__ProjectKernel____c__DisplayClass4_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__ProjectKernel____c__DisplayClass4_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__ProjectKernel____c__DisplayClass4_0& operator=(____Zenject__ProjectKernel____c__DisplayClass4_0&& o) noexcept = default;
  constexpr ____Zenject__ProjectKernel____c__DisplayClass4_0& operator=(____Zenject__ProjectKernel____c__DisplayClass4_0 const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::UnityEngine::SceneManagement::Scene> __declspec(property(get=__get_sceneOrder, put=__set_sceneOrder))  sceneOrder;

constexpr void __set_sceneOrder(::System::Collections::Generic::List_1<::UnityEngine::SceneManagement::Scene> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::SceneManagement::Scene> __get_sceneOrder() const;

 ::System::Func_2<::Zenject::SceneContext,int32_t> __declspec(property(get=__get___9__0, put=__set___9__0))  __9__0;

constexpr void __set___9__0(::System::Func_2<::Zenject::SceneContext,int32_t> value) ;

constexpr ::System::Func_2<::Zenject::SceneContext,int32_t> __get___9__0() const;


// Methods

// Ctor Parameters []
explicit ____Zenject__ProjectKernel____c__DisplayClass4_0() ;

/// @brief Method .ctor addr 0x2d9ced0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ForceUnloadAllScenes>b__0 addr 0x2d9d534 size 0x78 virtual false final false
 int32_t _ForceUnloadAllScenes_b__0(::Zenject::SceneContext x) ;

/// @brief Method __zenCreate addr 0x2d9d5ac size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d9d608 size 0x1c0 virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::ProjectKernel
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11265))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11267))
// CS Name: Zenject.ProjectKernel
class CORDL_TYPE ProjectKernel : public ::Zenject::MonoKernel {
public:
// Declarations
using __c__DisplayClass4_0 = ::Zenject::____Zenject__ProjectKernel____c__DisplayClass4_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~ProjectKernel() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProjectKernel", modifiers: " const&", def_value: None }]
constexpr ProjectKernel(ProjectKernel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProjectKernel", modifiers: "&&", def_value: None }]
constexpr ProjectKernel(ProjectKernel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProjectKernel(void* ptr) noexcept : ::Zenject::MonoKernel(ptr) {
}


  constexpr ProjectKernel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProjectKernel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProjectKernel& operator=(ProjectKernel&& o) noexcept = default;
  constexpr ProjectKernel& operator=(ProjectKernel const& o) noexcept = default;
                


// Fields

 ::Zenject::ZenjectSettings __declspec(property(get=__get__settings, put=__set__settings))  _settings;

constexpr void __set__settings(::Zenject::ZenjectSettings value) ;

constexpr ::Zenject::ZenjectSettings __get__settings() const;

 ::Zenject::SceneContextRegistry __declspec(property(get=__get__contextRegistry, put=__set__contextRegistry))  _contextRegistry;

constexpr void __set__contextRegistry(::Zenject::SceneContextRegistry value) ;

constexpr ::Zenject::SceneContextRegistry __get__contextRegistry() const;


// Methods

/// @brief Method OnApplicationQuit addr 0x2d9ca28 size 0x28 virtual false final false
 void OnApplicationQuit() ;

/// @brief Method DestroyEverythingInOrder addr 0x2d9ca50 size 0x98 virtual false final false
 void DestroyEverythingInOrder() ;

/// @brief Method ForceUnloadAllScenes addr 0x2d9cae8 size 0x3e8 virtual false final false
 void ForceUnloadAllScenes(bool immediate) ;

// Ctor Parameters []
explicit ProjectKernel() ;

/// @brief Method .ctor addr 0x2d9cf28 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method __zenFieldSetter0 addr 0x2d9cf30 size 0x134 virtual false final false
static void __zenFieldSetter0(::bs_hook::Il2CppWrapperType P_0, ::bs_hook::Il2CppWrapperType P_1) ;

/// @brief Method __zenFieldSetter1 addr 0x2d9d064 size 0x134 virtual false final false
static void __zenFieldSetter1(::bs_hook::Il2CppWrapperType P_0, ::bs_hook::Il2CppWrapperType P_1) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d9d198 size 0x39c virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::ProjectKernel);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ProjectKernel, "Zenject", "ProjectKernel");
NEED_NO_BOX(::Zenject::____Zenject__ProjectKernel____c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::____Zenject__ProjectKernel____c__DisplayClass4_0, "Zenject", "ProjectKernel/<>c__DisplayClass4_0");
