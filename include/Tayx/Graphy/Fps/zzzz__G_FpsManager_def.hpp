#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine::UI {
class Image;
}
namespace Tayx::Graphy::Fps {
class G_FpsMonitor;
}
namespace UnityEngine {
class RectTransform;
}
namespace Tayx::Graphy {
struct Tayx__Graphy__GraphyManager__ModuleState;
}
namespace Tayx::Graphy {
struct Tayx__Graphy__GraphyManager__ModulePosition;
}
namespace UnityEngine {
class GameObject;
}
namespace Tayx::Graphy::Fps {
class G_FpsText;
}
namespace Tayx::Graphy {
class GraphyManager;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Tayx::Graphy::UI {
class IMovable;
}
namespace Tayx::Graphy::Fps {
class G_FpsGraph;
}
namespace Tayx::Graphy::UI {
class IModifiableState;
}
// Forward declare root types
namespace Tayx::Graphy::Fps {
class G_FpsManager;
}
// Type: Tayx.Graphy.Fps::G_FpsManager
namespace Tayx::Graphy::Fps {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15204))
// CS Name: Tayx.Graphy.Fps.G_FpsManager
class CORDL_TYPE G_FpsManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to Tayx::Graphy::UI::IMovable
constexpr operator  Tayx::Graphy::UI::IMovable() const noexcept;

/// @brief Convert operator to Tayx::Graphy::UI::IModifiableState
constexpr operator  Tayx::Graphy::UI::IModifiableState() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~G_FpsManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "G_FpsManager", modifiers: " const&", def_value: None }]
constexpr G_FpsManager(G_FpsManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "G_FpsManager", modifiers: "&&", def_value: None }]
constexpr G_FpsManager(G_FpsManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit G_FpsManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr G_FpsManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr G_FpsManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr G_FpsManager& operator=(G_FpsManager&& o) noexcept = default;
  constexpr G_FpsManager& operator=(G_FpsManager const& o) noexcept = default;
                


// Fields

 UnityEngine::GameObject __declspec(property(get=__get_m_fpsGraphGameObject, put=__set_m_fpsGraphGameObject))  m_fpsGraphGameObject;

constexpr void __set_m_fpsGraphGameObject(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_m_fpsGraphGameObject() const;

 System::Collections::Generic::List_1<UnityEngine::GameObject> __declspec(property(get=__get_m_nonBasicTextGameObjects, put=__set_m_nonBasicTextGameObjects))  m_nonBasicTextGameObjects;

constexpr void __set_m_nonBasicTextGameObjects(System::Collections::Generic::List_1<UnityEngine::GameObject> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::GameObject> __get_m_nonBasicTextGameObjects() const;

 System::Collections::Generic::List_1<UnityEngine::UI::Image> __declspec(property(get=__get_m_backgroundImages, put=__set_m_backgroundImages))  m_backgroundImages;

constexpr void __set_m_backgroundImages(System::Collections::Generic::List_1<UnityEngine::UI::Image> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UI::Image> __get_m_backgroundImages() const;

 Tayx::Graphy::GraphyManager __declspec(property(get=__get_m_graphyManager, put=__set_m_graphyManager))  m_graphyManager;

constexpr void __set_m_graphyManager(Tayx::Graphy::GraphyManager value) ;

constexpr Tayx::Graphy::GraphyManager __get_m_graphyManager() const;

 Tayx::Graphy::Fps::G_FpsGraph __declspec(property(get=__get_m_fpsGraph, put=__set_m_fpsGraph))  m_fpsGraph;

constexpr void __set_m_fpsGraph(Tayx::Graphy::Fps::G_FpsGraph value) ;

constexpr Tayx::Graphy::Fps::G_FpsGraph __get_m_fpsGraph() const;

 Tayx::Graphy::Fps::G_FpsMonitor __declspec(property(get=__get_m_fpsMonitor, put=__set_m_fpsMonitor))  m_fpsMonitor;

constexpr void __set_m_fpsMonitor(Tayx::Graphy::Fps::G_FpsMonitor value) ;

constexpr Tayx::Graphy::Fps::G_FpsMonitor __get_m_fpsMonitor() const;

 Tayx::Graphy::Fps::G_FpsText __declspec(property(get=__get_m_fpsText, put=__set_m_fpsText))  m_fpsText;

constexpr void __set_m_fpsText(Tayx::Graphy::Fps::G_FpsText value) ;

constexpr Tayx::Graphy::Fps::G_FpsText __get_m_fpsText() const;

 UnityEngine::RectTransform __declspec(property(get=__get_m_rectTransform, put=__set_m_rectTransform))  m_rectTransform;

constexpr void __set_m_rectTransform(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get_m_rectTransform() const;

 System::Collections::Generic::List_1<UnityEngine::GameObject> __declspec(property(get=__get_m_childrenGameObjects, put=__set_m_childrenGameObjects))  m_childrenGameObjects;

constexpr void __set_m_childrenGameObjects(System::Collections::Generic::List_1<UnityEngine::GameObject> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::GameObject> __get_m_childrenGameObjects() const;

 Tayx::Graphy::Tayx__Graphy__GraphyManager__ModuleState __declspec(property(get=__get_m_previousModuleState, put=__set_m_previousModuleState))  m_previousModuleState;

constexpr void __set_m_previousModuleState(Tayx::Graphy::Tayx__Graphy__GraphyManager__ModuleState value) ;

constexpr Tayx::Graphy::Tayx__Graphy__GraphyManager__ModuleState __get_m_previousModuleState() const;

 Tayx::Graphy::Tayx__Graphy__GraphyManager__ModuleState __declspec(property(get=__get_m_currentModuleState, put=__set_m_currentModuleState))  m_currentModuleState;

constexpr void __set_m_currentModuleState(Tayx::Graphy::Tayx__Graphy__GraphyManager__ModuleState value) ;

constexpr Tayx::Graphy::Tayx__Graphy__GraphyManager__ModuleState __get_m_currentModuleState() const;


// Methods

/// @brief Method Awake addr 0x2875780 size 0x4 virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x2875c28 size 0x4 virtual false final false
 void Start() ;

/// @brief Method SetPosition addr 0x286f1f0 size 0x2e8 virtual true final true
 void SetPosition(Tayx::Graphy::Tayx__Graphy__GraphyManager__ModulePosition newModulePosition) ;

/// @brief Method SetState addr 0x286faec size 0x1b0 virtual true final true
 void SetState(Tayx::Graphy::Tayx__Graphy__GraphyManager__ModuleState state, bool silentUpdate) ;

/// @brief Method RestorePreviousState addr 0x2871eb4 size 0xc virtual false final false
 void RestorePreviousState() ;

/// @brief Method UpdateParameters addr 0x286fccc size 0x1fc virtual false final false
 void UpdateParameters() ;

/// @brief Method RefreshParameters addr 0x287252c size 0x1f4 virtual false final false
 void RefreshParameters() ;

/// @brief Method Init addr 0x2875784 size 0x4a4 virtual false final false
 void Init() ;

/// @brief Method SetGraphActive addr 0x2875c2c size 0x44 virtual false final false
 void SetGraphActive(bool active) ;

// Ctor Parameters []
explicit G_FpsManager() ;

/// @brief Method .ctor addr 0x2875cd0 size 0xe4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tayx::Graphy::Fps
NEED_NO_BOX(Tayx::Graphy::Fps::G_FpsManager);
DEFINE_IL2CPP_ARG_TYPE(Tayx::Graphy::Fps::G_FpsManager, "Tayx.Graphy.Fps", "G_FpsManager");
