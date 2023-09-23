#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__Context_def.hpp"
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine {
class GameObject;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
struct ReflectionBakingCoverageModes;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class ZenjectSettings;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace Zenject {
class DiContainer;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Zenject {
class ProjectContext;
}
// Type: Zenject::ProjectContext
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11061))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11063))
// CS Name: Zenject.ProjectContext
class CORDL_TYPE ProjectContext : public Zenject::Context {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~ProjectContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProjectContext", modifiers: " const&", def_value: None }]
constexpr ProjectContext(ProjectContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProjectContext", modifiers: "&&", def_value: None }]
constexpr ProjectContext(ProjectContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProjectContext(void* ptr) noexcept : Zenject::Context(ptr) {
}


  constexpr ProjectContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProjectContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProjectContext& operator=(ProjectContext&& o) noexcept = default;
  constexpr ProjectContext& operator=(ProjectContext const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_PreInstall, put=__set_PreInstall))  PreInstall;

constexpr void __set_PreInstall(System::Action value) ;

constexpr System::Action __get_PreInstall() const;

 System::Action __declspec(property(get=__get_PostInstall, put=__set_PostInstall))  PostInstall;

constexpr void __set_PostInstall(System::Action value) ;

constexpr System::Action __get_PostInstall() const;

 System::Action __declspec(property(get=__get_PreResolve, put=__set_PreResolve))  PreResolve;

constexpr void __set_PreResolve(System::Action value) ;

constexpr System::Action __get_PreResolve() const;

 System::Action __declspec(property(get=__get_PostResolve, put=__set_PostResolve))  PostResolve;

constexpr void __set_PostResolve(System::Action value) ;

constexpr System::Action __get_PostResolve() const;

/// @brief Field ProjectContextResourcePath offset 0
static constexpr ::ConstString  ProjectContextResourcePath{u"ProjectContext"};

/// @brief Field ProjectContextResourcePathOld offset 0
static constexpr ::ConstString  ProjectContextResourcePathOld{u"ProjectCompositionRoot"};

static Zenject::ProjectContext __declspec(property(get=__get__instance, put=__set__instance))  _instance;

static void __set__instance(Zenject::ProjectContext value) ;

static Zenject::ProjectContext __get__instance() ;

 bool __declspec(property(get=__get__parentNewObjectsUnderContext, put=__set__parentNewObjectsUnderContext))  _parentNewObjectsUnderContext;

constexpr void __set__parentNewObjectsUnderContext(bool value) ;

constexpr bool __get__parentNewObjectsUnderContext() const;

 Zenject::ReflectionBakingCoverageModes __declspec(property(get=__get__editorReflectionBakingCoverageMode, put=__set__editorReflectionBakingCoverageMode))  _editorReflectionBakingCoverageMode;

constexpr void __set__editorReflectionBakingCoverageMode(Zenject::ReflectionBakingCoverageModes value) ;

constexpr Zenject::ReflectionBakingCoverageModes __get__editorReflectionBakingCoverageMode() const;

 Zenject::ReflectionBakingCoverageModes __declspec(property(get=__get__buildsReflectionBakingCoverageMode, put=__set__buildsReflectionBakingCoverageMode))  _buildsReflectionBakingCoverageMode;

constexpr void __set__buildsReflectionBakingCoverageMode(Zenject::ReflectionBakingCoverageModes value) ;

constexpr Zenject::ReflectionBakingCoverageModes __get__buildsReflectionBakingCoverageMode() const;

 Zenject::ZenjectSettings __declspec(property(get=__get__settings, put=__set__settings))  _settings;

constexpr void __set__settings(Zenject::ZenjectSettings value) ;

constexpr Zenject::ZenjectSettings __get__settings() const;

 Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__container() const;

static bool __declspec(property(get=__get__ValidateOnNextRun_k__BackingField, put=__set__ValidateOnNextRun_k__BackingField))  _ValidateOnNextRun_k__BackingField;

static void __set__ValidateOnNextRun_k__BackingField(bool value) ;

static bool __get__ValidateOnNextRun_k__BackingField() ;


// Properties

 Zenject::DiContainer __declspec(property(get=get_Container))  Container;

static bool __declspec(property(get=get_HasInstance))  HasInstance;

static Zenject::ProjectContext __declspec(property(get=get_Instance))  Instance;

static bool __declspec(property(get=get_ValidateOnNextRun, put=set_ValidateOnNextRun))  ValidateOnNextRun;

 bool __declspec(property(get=get_ParentNewObjectsUnderContext, put=set_ParentNewObjectsUnderContext))  ParentNewObjectsUnderContext;


// Methods

/// @brief Method add_PreInstall addr 0x2d75e2c size 0x9c virtual false final false
 void add_PreInstall(System::Action value) ;

/// @brief Method remove_PreInstall addr 0x2d75ec8 size 0x9c virtual false final false
 void remove_PreInstall(System::Action value) ;

/// @brief Method add_PostInstall addr 0x2d75f64 size 0x9c virtual false final false
 void add_PostInstall(System::Action value) ;

/// @brief Method remove_PostInstall addr 0x2d76000 size 0x9c virtual false final false
 void remove_PostInstall(System::Action value) ;

/// @brief Method add_PreResolve addr 0x2d7609c size 0x9c virtual false final false
 void add_PreResolve(System::Action value) ;

/// @brief Method remove_PreResolve addr 0x2d76138 size 0x9c virtual false final false
 void remove_PreResolve(System::Action value) ;

/// @brief Method add_PostResolve addr 0x2d761d4 size 0x9c virtual false final false
 void add_PostResolve(System::Action value) ;

/// @brief Method remove_PostResolve addr 0x2d76270 size 0x9c virtual false final false
 void remove_PostResolve(System::Action value) ;

/// @brief Method get_Container addr 0x2d7630c size 0x8 virtual true final false
 Zenject::DiContainer get_Container() ;

/// @brief Method get_HasInstance addr 0x2d76314 size 0x78 virtual false final false
static bool get_HasInstance() ;

/// @brief Method get_Instance addr 0x2d7638c size 0xa4 virtual false final false
static Zenject::ProjectContext get_Instance() ;

/// @brief Method get_ValidateOnNextRun addr 0x2d766d4 size 0x48 virtual false final false
static bool get_ValidateOnNextRun() ;

/// @brief Method set_ValidateOnNextRun addr 0x2d7671c size 0x4c virtual false final false
static void set_ValidateOnNextRun(bool value) ;

/// @brief Method GetRootGameObjects addr 0x2d76768 size 0xa0 virtual true final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject> GetRootGameObjects() ;

/// @brief Method TryGetPrefab addr 0x2d76808 size 0x18c virtual false final false
static UnityEngine::GameObject TryGetPrefab() ;

/// @brief Method InstantiateAndInitialize addr 0x2d76430 size 0x2a4 virtual false final false
static void InstantiateAndInitialize() ;

/// @brief Method get_ParentNewObjectsUnderContext addr 0x2d76db4 size 0x8 virtual false final false
 bool get_ParentNewObjectsUnderContext() ;

/// @brief Method set_ParentNewObjectsUnderContext addr 0x2d76dbc size 0xc virtual false final false
 void set_ParentNewObjectsUnderContext(bool value) ;

/// @brief Method EnsureIsInitialized addr 0x2d76dc8 size 0x4 virtual false final false
 void EnsureIsInitialized() ;

/// @brief Method Awake addr 0x2d76dcc size 0x84 virtual false final false
 void Awake() ;

/// @brief Method Initialize addr 0x2d76994 size 0x420 virtual false final false
 void Initialize() ;

/// @brief Method GetInjectableMonoBehaviours addr 0x2d77c2c size 0x40 virtual true final false
 void GetInjectableMonoBehaviours(System::Collections::Generic::List_1<UnityEngine::MonoBehaviour> monoBehaviours) ;

/// @brief Method InstallBindings addr 0x2d778f0 size 0x33c virtual false final false
 void InstallBindings(System::Collections::Generic::List_1<UnityEngine::MonoBehaviour> injectableMonoBehaviours) ;

// Ctor Parameters []
explicit ProjectContext() ;

/// @brief Method .ctor addr 0x2d77cec size 0xc virtual false final false
 void _ctor() ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d77cf8 size 0x178 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::ProjectContext);
DEFINE_IL2CPP_ARG_TYPE(Zenject::ProjectContext, "Zenject", "ProjectContext");
