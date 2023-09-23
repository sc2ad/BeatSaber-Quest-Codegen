#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace Tayx::Graphy::Fps {
class G_FpsMonitor;
}
namespace Tayx::Graphy {
class GraphyManager;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace Tayx::Graphy::Fps {
class G_FpsText;
}
// Type: Tayx.Graphy.Fps::G_FpsText
namespace Tayx::Graphy::Fps {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15207))
// CS Name: Tayx.Graphy.Fps.G_FpsText
class CORDL_TYPE G_FpsText : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~G_FpsText() = default;

// Ctor Parameters [CppParam { name: "", ty: "G_FpsText", modifiers: " const&", def_value: None }]
constexpr G_FpsText(G_FpsText const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "G_FpsText", modifiers: "&&", def_value: None }]
constexpr G_FpsText(G_FpsText&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit G_FpsText(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr G_FpsText& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr G_FpsText& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr G_FpsText& operator=(G_FpsText&& o) noexcept = default;
  constexpr G_FpsText& operator=(G_FpsText const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Text __declspec(property(get=__get_m_fpsText, put=__set_m_fpsText))  m_fpsText;

constexpr void __set_m_fpsText(UnityEngine::UI::Text value) ;

constexpr UnityEngine::UI::Text __get_m_fpsText() const;

 UnityEngine::UI::Text __declspec(property(get=__get_m_msText, put=__set_m_msText))  m_msText;

constexpr void __set_m_msText(UnityEngine::UI::Text value) ;

constexpr UnityEngine::UI::Text __get_m_msText() const;

 UnityEngine::UI::Text __declspec(property(get=__get_m_avgFpsText, put=__set_m_avgFpsText))  m_avgFpsText;

constexpr void __set_m_avgFpsText(UnityEngine::UI::Text value) ;

constexpr UnityEngine::UI::Text __get_m_avgFpsText() const;

 UnityEngine::UI::Text __declspec(property(get=__get_m_onePercentFpsText, put=__set_m_onePercentFpsText))  m_onePercentFpsText;

constexpr void __set_m_onePercentFpsText(UnityEngine::UI::Text value) ;

constexpr UnityEngine::UI::Text __get_m_onePercentFpsText() const;

 UnityEngine::UI::Text __declspec(property(get=__get_m_zero1PercentFpsText, put=__set_m_zero1PercentFpsText))  m_zero1PercentFpsText;

constexpr void __set_m_zero1PercentFpsText(UnityEngine::UI::Text value) ;

constexpr UnityEngine::UI::Text __get_m_zero1PercentFpsText() const;

 Tayx::Graphy::GraphyManager __declspec(property(get=__get_m_graphyManager, put=__set_m_graphyManager))  m_graphyManager;

constexpr void __set_m_graphyManager(Tayx::Graphy::GraphyManager value) ;

constexpr Tayx::Graphy::GraphyManager __get_m_graphyManager() const;

 Tayx::Graphy::Fps::G_FpsMonitor __declspec(property(get=__get_m_fpsMonitor, put=__set_m_fpsMonitor))  m_fpsMonitor;

constexpr void __set_m_fpsMonitor(Tayx::Graphy::Fps::G_FpsMonitor value) ;

constexpr Tayx::Graphy::Fps::G_FpsMonitor __get_m_fpsMonitor() const;

 int32_t __declspec(property(get=__get_m_updateRate, put=__set_m_updateRate))  m_updateRate;

constexpr void __set_m_updateRate(int32_t value) ;

constexpr int32_t __get_m_updateRate() const;

 int32_t __declspec(property(get=__get_m_frameCount, put=__set_m_frameCount))  m_frameCount;

constexpr void __set_m_frameCount(int32_t value) ;

constexpr int32_t __get_m_frameCount() const;

 float_t __declspec(property(get=__get_m_deltaTime, put=__set_m_deltaTime))  m_deltaTime;

constexpr void __set_m_deltaTime(float_t value) ;

constexpr float_t __get_m_deltaTime() const;

 float_t __declspec(property(get=__get_m_fps, put=__set_m_fps))  m_fps;

constexpr void __set_m_fps(float_t value) ;

constexpr float_t __get_m_fps() const;

 float_t __declspec(property(get=__get_m_ms, put=__set_m_ms))  m_ms;

constexpr void __set_m_ms(float_t value) ;

constexpr float_t __get_m_ms() const;

/// @brief Field m_msStringFormat offset 0
static constexpr ::ConstString  m_msStringFormat{u"0.0"};


// Methods

/// @brief Method Awake addr 0x28762cc size 0x4 virtual false final false
 void Awake() ;

/// @brief Method Update addr 0x28763d4 size 0x30c virtual false final false
 void Update() ;

/// @brief Method UpdateParameters addr 0x2875cb0 size 0x20 virtual false final false
 void UpdateParameters() ;

/// @brief Method SetFpsRelatedTextColor addr 0x28766e0 size 0x7c virtual false final false
 void SetFpsRelatedTextColor(UnityEngine::UI::Text text, float_t fps) ;

/// @brief Method Init addr 0x28762d0 size 0x104 virtual false final false
 void Init() ;

// Ctor Parameters []
explicit G_FpsText() ;

/// @brief Method .ctor addr 0x287675c size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tayx::Graphy::Fps
NEED_NO_BOX(Tayx::Graphy::Fps::G_FpsText);
DEFINE_IL2CPP_ARG_TYPE(Tayx::Graphy::Fps::G_FpsText, "Tayx.Graphy.Fps", "G_FpsText");
