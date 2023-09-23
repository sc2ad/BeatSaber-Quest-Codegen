#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace Tayx::Graphy::Audio {
class G_AudioGraph;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
class Text;
}
namespace Tayx::Graphy::Audio {
class G_AudioMonitor;
}
namespace UnityEngine {
class RectTransform;
}
namespace Tayx::Graphy::UI {
class IModifiableState;
}
namespace Tayx::Graphy {
class GraphyManager;
}
namespace Tayx::Graphy::UI {
class IMovable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace Tayx::Graphy::Audio {
class G_AudioText;
}
namespace Tayx::Graphy {
struct Tayx__Graphy__GraphyManager__ModuleState;
}
namespace Tayx::Graphy {
struct Tayx__Graphy__GraphyManager__ModulePosition;
}
// Forward declare root types
namespace Tayx::Graphy::Audio {
class G_AudioManager;
}
// Type: Tayx.Graphy.Audio::G_AudioManager
namespace Tayx::Graphy::Audio {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15209))
// CS Name: Tayx.Graphy.Audio.G_AudioManager
class CORDL_TYPE G_AudioManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to Tayx::Graphy::UI::IMovable
constexpr operator  Tayx::Graphy::UI::IMovable() const noexcept;

/// @brief Convert operator to Tayx::Graphy::UI::IModifiableState
constexpr operator  Tayx::Graphy::UI::IModifiableState() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~G_AudioManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "G_AudioManager", modifiers: " const&", def_value: None }]
constexpr G_AudioManager(G_AudioManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "G_AudioManager", modifiers: "&&", def_value: None }]
constexpr G_AudioManager(G_AudioManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit G_AudioManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr G_AudioManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr G_AudioManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr G_AudioManager& operator=(G_AudioManager&& o) noexcept = default;
  constexpr G_AudioManager& operator=(G_AudioManager const& o) noexcept = default;
                


// Fields

 UnityEngine::GameObject __declspec(property(get=__get_m_audioGraphGameObject, put=__set_m_audioGraphGameObject))  m_audioGraphGameObject;

constexpr void __set_m_audioGraphGameObject(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_m_audioGraphGameObject() const;

 UnityEngine::UI::Text __declspec(property(get=__get_m_audioDbText, put=__set_m_audioDbText))  m_audioDbText;

constexpr void __set_m_audioDbText(UnityEngine::UI::Text value) ;

constexpr UnityEngine::UI::Text __get_m_audioDbText() const;

 System::Collections::Generic::List_1<UnityEngine::UI::Image> __declspec(property(get=__get_m_backgroundImages, put=__set_m_backgroundImages))  m_backgroundImages;

constexpr void __set_m_backgroundImages(System::Collections::Generic::List_1<UnityEngine::UI::Image> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UI::Image> __get_m_backgroundImages() const;

 Tayx::Graphy::GraphyManager __declspec(property(get=__get_m_graphyManager, put=__set_m_graphyManager))  m_graphyManager;

constexpr void __set_m_graphyManager(Tayx::Graphy::GraphyManager value) ;

constexpr Tayx::Graphy::GraphyManager __get_m_graphyManager() const;

 Tayx::Graphy::Audio::G_AudioGraph __declspec(property(get=__get_m_audioGraph, put=__set_m_audioGraph))  m_audioGraph;

constexpr void __set_m_audioGraph(Tayx::Graphy::Audio::G_AudioGraph value) ;

constexpr Tayx::Graphy::Audio::G_AudioGraph __get_m_audioGraph() const;

 Tayx::Graphy::Audio::G_AudioMonitor __declspec(property(get=__get_m_audioMonitor, put=__set_m_audioMonitor))  m_audioMonitor;

constexpr void __set_m_audioMonitor(Tayx::Graphy::Audio::G_AudioMonitor value) ;

constexpr Tayx::Graphy::Audio::G_AudioMonitor __get_m_audioMonitor() const;

 Tayx::Graphy::Audio::G_AudioText __declspec(property(get=__get_m_audioText, put=__set_m_audioText))  m_audioText;

constexpr void __set_m_audioText(Tayx::Graphy::Audio::G_AudioText value) ;

constexpr Tayx::Graphy::Audio::G_AudioText __get_m_audioText() const;

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

/// @brief Method Awake addr 0x2877234 size 0x4 virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x28776dc size 0x4 virtual false final false
 void Start() ;

/// @brief Method SetPosition addr 0x286f7c0 size 0x300 virtual true final true
 void SetPosition(Tayx::Graphy::Tayx__Graphy__GraphyManager__ModulePosition newModulePosition) ;

/// @brief Method SetState addr 0x28704d0 size 0x150 virtual true final true
 void SetState(Tayx::Graphy::Tayx__Graphy__GraphyManager__ModuleState state, bool silentUpdate) ;

/// @brief Method RestorePreviousState addr 0x2871ecc size 0xc virtual false final false
 void RestorePreviousState() ;

/// @brief Method UpdateParameters addr 0x2870648 size 0x1c4 virtual false final false
 void UpdateParameters() ;

/// @brief Method RefreshParameters addr 0x28728b4 size 0x1bc virtual false final false
 void RefreshParameters() ;

/// @brief Method Init addr 0x2877238 size 0x4a4 virtual false final false
 void Init() ;

/// @brief Method SetGraphActive addr 0x28776e0 size 0x44 virtual false final false
 void SetGraphActive(bool active) ;

// Ctor Parameters []
explicit G_AudioManager() ;

/// @brief Method .ctor addr 0x2877814 size 0xc0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tayx::Graphy::Audio
NEED_NO_BOX(Tayx::Graphy::Audio::G_AudioManager);
DEFINE_IL2CPP_ARG_TYPE(Tayx::Graphy::Audio::G_AudioManager, "Tayx.Graphy.Audio", "G_AudioManager");
