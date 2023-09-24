#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class BoolSO;
}
namespace GlobalNamespace {
class MainCamera;
}
namespace UnityEngine {
class Canvas;
}
// Forward declare root types
namespace GlobalNamespace {
class FPSManager;
}
// Type: ::FPSManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5924))
// CS Name: FPSManager
class CORDL_TYPE FPSManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~FPSManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "FPSManager", modifiers: " const&", def_value: None }]
constexpr FPSManager(FPSManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FPSManager", modifiers: "&&", def_value: None }]
constexpr FPSManager(FPSManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FPSManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr FPSManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FPSManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FPSManager& operator=(FPSManager&& o) noexcept = default;
  constexpr FPSManager& operator=(FPSManager const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BoolSO __declspec(property(get=__get__enableFPSCounter, put=__set__enableFPSCounter))  _enableFPSCounter;

constexpr void __set__enableFPSCounter(GlobalNamespace::BoolSO value) ;

constexpr GlobalNamespace::BoolSO __get__enableFPSCounter() const;

 UnityEngine::Canvas __declspec(property(get=__get__fpsCounterCanvasPrefab, put=__set__fpsCounterCanvasPrefab))  _fpsCounterCanvasPrefab;

constexpr void __set__fpsCounterCanvasPrefab(UnityEngine::Canvas value) ;

constexpr UnityEngine::Canvas __get__fpsCounterCanvasPrefab() const;

 GlobalNamespace::MainCamera __declspec(property(get=__get__mainCamera, put=__set__mainCamera))  _mainCamera;

constexpr void __set__mainCamera(GlobalNamespace::MainCamera value) ;

constexpr GlobalNamespace::MainCamera __get__mainCamera() const;


// Methods

/// @brief Method Start addr 0x21936c0 size 0xe4 virtual false final false
 void Start() ;

static GlobalNamespace::FPSManager New_ctor() ;

/// @brief Method .ctor addr 0x21937a4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::FPSManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FPSManager, "", "FPSManager");
