#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace Tayx::Graphy {
struct Tayx__Graphy__GraphyManager__ModulePosition;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Tayx::Graphy::UI {
class IMovable;
}
namespace Tayx::Graphy::UI {
class IModifiableState;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine::UI {
class Image;
}
namespace Tayx::Graphy {
struct Tayx__Graphy__GraphyManager__ModuleState;
}
namespace Tayx::Graphy {
class GraphyManager;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace Tayx::Graphy::Advanced {
class G_AdvancedData;
}
// Type: Tayx.Graphy.Advanced::G_AdvancedData
namespace Tayx::Graphy::Advanced {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15212))
// CS Name: Tayx.Graphy.Advanced.G_AdvancedData
class CORDL_TYPE G_AdvancedData : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to Tayx::Graphy::UI::IMovable
constexpr operator  Tayx::Graphy::UI::IMovable() const noexcept;

/// @brief Convert operator to Tayx::Graphy::UI::IModifiableState
constexpr operator  Tayx::Graphy::UI::IModifiableState() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~G_AdvancedData() = default;

// Ctor Parameters [CppParam { name: "", ty: "G_AdvancedData", modifiers: " const&", def_value: None }]
constexpr G_AdvancedData(G_AdvancedData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "G_AdvancedData", modifiers: "&&", def_value: None }]
constexpr G_AdvancedData(G_AdvancedData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit G_AdvancedData(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr G_AdvancedData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr G_AdvancedData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr G_AdvancedData& operator=(G_AdvancedData&& o) noexcept = default;
  constexpr G_AdvancedData& operator=(G_AdvancedData const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<UnityEngine::UI::Image> __declspec(property(get=__get_m_backgroundImages, put=__set_m_backgroundImages))  m_backgroundImages;

constexpr void __set_m_backgroundImages(System::Collections::Generic::List_1<UnityEngine::UI::Image> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UI::Image> __get_m_backgroundImages() const;

 UnityEngine::UI::Text __declspec(property(get=__get_m_graphicsDeviceVersionText, put=__set_m_graphicsDeviceVersionText))  m_graphicsDeviceVersionText;

constexpr void __set_m_graphicsDeviceVersionText(UnityEngine::UI::Text value) ;

constexpr UnityEngine::UI::Text __get_m_graphicsDeviceVersionText() const;

 UnityEngine::UI::Text __declspec(property(get=__get_m_processorTypeText, put=__set_m_processorTypeText))  m_processorTypeText;

constexpr void __set_m_processorTypeText(UnityEngine::UI::Text value) ;

constexpr UnityEngine::UI::Text __get_m_processorTypeText() const;

 UnityEngine::UI::Text __declspec(property(get=__get_m_operatingSystemText, put=__set_m_operatingSystemText))  m_operatingSystemText;

constexpr void __set_m_operatingSystemText(UnityEngine::UI::Text value) ;

constexpr UnityEngine::UI::Text __get_m_operatingSystemText() const;

 UnityEngine::UI::Text __declspec(property(get=__get_m_systemMemoryText, put=__set_m_systemMemoryText))  m_systemMemoryText;

constexpr void __set_m_systemMemoryText(UnityEngine::UI::Text value) ;

constexpr UnityEngine::UI::Text __get_m_systemMemoryText() const;

 UnityEngine::UI::Text __declspec(property(get=__get_m_graphicsDeviceNameText, put=__set_m_graphicsDeviceNameText))  m_graphicsDeviceNameText;

constexpr void __set_m_graphicsDeviceNameText(UnityEngine::UI::Text value) ;

constexpr UnityEngine::UI::Text __get_m_graphicsDeviceNameText() const;

 UnityEngine::UI::Text __declspec(property(get=__get_m_graphicsMemorySizeText, put=__set_m_graphicsMemorySizeText))  m_graphicsMemorySizeText;

constexpr void __set_m_graphicsMemorySizeText(UnityEngine::UI::Text value) ;

constexpr UnityEngine::UI::Text __get_m_graphicsMemorySizeText() const;

 UnityEngine::UI::Text __declspec(property(get=__get_m_screenResolutionText, put=__set_m_screenResolutionText))  m_screenResolutionText;

constexpr void __set_m_screenResolutionText(UnityEngine::UI::Text value) ;

constexpr UnityEngine::UI::Text __get_m_screenResolutionText() const;

 UnityEngine::UI::Text __declspec(property(get=__get_m_gameWindowResolutionText, put=__set_m_gameWindowResolutionText))  m_gameWindowResolutionText;

constexpr void __set_m_gameWindowResolutionText(UnityEngine::UI::Text value) ;

constexpr UnityEngine::UI::Text __get_m_gameWindowResolutionText() const;

 float_t __declspec(property(get=__get_m_updateRate, put=__set_m_updateRate))  m_updateRate;

constexpr void __set_m_updateRate(float_t value) ;

constexpr float_t __get_m_updateRate() const;

 Tayx::Graphy::GraphyManager __declspec(property(get=__get_m_graphyManager, put=__set_m_graphyManager))  m_graphyManager;

constexpr void __set_m_graphyManager(Tayx::Graphy::GraphyManager value) ;

constexpr Tayx::Graphy::GraphyManager __get_m_graphyManager() const;

 UnityEngine::RectTransform __declspec(property(get=__get_m_rectTransform, put=__set_m_rectTransform))  m_rectTransform;

constexpr void __set_m_rectTransform(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get_m_rectTransform() const;

 float_t __declspec(property(get=__get_m_deltaTime, put=__set_m_deltaTime))  m_deltaTime;

constexpr void __set_m_deltaTime(float_t value) ;

constexpr float_t __get_m_deltaTime() const;

 System::Text::StringBuilder __declspec(property(get=__get_m_sb, put=__set_m_sb))  m_sb;

constexpr void __set_m_sb(System::Text::StringBuilder value) ;

constexpr System::Text::StringBuilder __get_m_sb() const;

 Tayx::Graphy::Tayx__Graphy__GraphyManager__ModuleState __declspec(property(get=__get_m_previousModuleState, put=__set_m_previousModuleState))  m_previousModuleState;

constexpr void __set_m_previousModuleState(Tayx::Graphy::Tayx__Graphy__GraphyManager__ModuleState value) ;

constexpr Tayx::Graphy::Tayx__Graphy__GraphyManager__ModuleState __get_m_previousModuleState() const;

 Tayx::Graphy::Tayx__Graphy__GraphyManager__ModuleState __declspec(property(get=__get_m_currentModuleState, put=__set_m_currentModuleState))  m_currentModuleState;

constexpr void __set_m_currentModuleState(Tayx::Graphy::Tayx__Graphy__GraphyManager__ModuleState value) ;

constexpr Tayx::Graphy::Tayx__Graphy__GraphyManager__ModuleState __get_m_currentModuleState() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_m_windowStrings, put=__set_m_windowStrings))  m_windowStrings;

constexpr void __set_m_windowStrings(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_m_windowStrings() const;


// Methods

/// @brief Method OnEnable addr 0x2877f58 size 0x4 virtual false final false
 void OnEnable() ;

/// @brief Method Update addr 0x2878dd4 size 0x284 virtual false final false
 void Update() ;

/// @brief Method SetPosition addr 0x2870a08 size 0x660 virtual true final true
 void SetPosition(Tayx::Graphy::Tayx__Graphy__GraphyManager__ModulePosition newModulePosition) ;

/// @brief Method SetState addr 0x2870968 size 0x78 virtual true final true
 void SetState(Tayx::Graphy::Tayx__Graphy__GraphyManager__ModuleState state, bool silentUpdate) ;

/// @brief Method RestorePreviousState addr 0x2871ed8 size 0xc virtual false final false
 void RestorePreviousState() ;

/// @brief Method UpdateParameters addr 0x2872394 size 0x198 virtual false final false
 void UpdateParameters() ;

/// @brief Method RefreshParameters addr 0x2872a70 size 0x190 virtual false final false
 void RefreshParameters() ;

/// @brief Method Init addr 0x2877f5c size 0xe78 virtual false final false
 void Init() ;

// Ctor Parameters []
explicit G_AdvancedData() ;

/// @brief Method .ctor addr 0x2879058 size 0x23c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tayx::Graphy::Advanced
NEED_NO_BOX(Tayx::Graphy::Advanced::G_AdvancedData);
DEFINE_IL2CPP_ARG_TYPE(Tayx::Graphy::Advanced::G_AdvancedData, "Tayx.Graphy.Advanced", "G_AdvancedData");
