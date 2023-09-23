#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace Tayx::Graphy {
class GraphyManager;
}
namespace Tayx::Graphy::Audio {
class G_AudioMonitor;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace Tayx::Graphy::Audio {
class G_AudioText;
}
// Type: Tayx.Graphy.Audio::G_AudioText
namespace Tayx::Graphy::Audio {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15211))
// CS Name: Tayx.Graphy.Audio.G_AudioText
class CORDL_TYPE G_AudioText : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~G_AudioText() = default;

// Ctor Parameters [CppParam { name: "", ty: "G_AudioText", modifiers: " const&", def_value: None }]
constexpr G_AudioText(G_AudioText const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "G_AudioText", modifiers: "&&", def_value: None }]
constexpr G_AudioText(G_AudioText&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit G_AudioText(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr G_AudioText& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr G_AudioText& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr G_AudioText& operator=(G_AudioText&& o) noexcept = default;
  constexpr G_AudioText& operator=(G_AudioText const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Text __declspec(property(get=__get_m_DBText, put=__set_m_DBText))  m_DBText;

constexpr void __set_m_DBText(UnityEngine::UI::Text value) ;

constexpr UnityEngine::UI::Text __get_m_DBText() const;

 Tayx::Graphy::GraphyManager __declspec(property(get=__get_m_graphyManager, put=__set_m_graphyManager))  m_graphyManager;

constexpr void __set_m_graphyManager(Tayx::Graphy::GraphyManager value) ;

constexpr Tayx::Graphy::GraphyManager __get_m_graphyManager() const;

 Tayx::Graphy::Audio::G_AudioMonitor __declspec(property(get=__get_m_audioMonitor, put=__set_m_audioMonitor))  m_audioMonitor;

constexpr void __set_m_audioMonitor(Tayx::Graphy::Audio::G_AudioMonitor value) ;

constexpr Tayx::Graphy::Audio::G_AudioMonitor __get_m_audioMonitor() const;

 int32_t __declspec(property(get=__get_m_updateRate, put=__set_m_updateRate))  m_updateRate;

constexpr void __set_m_updateRate(int32_t value) ;

constexpr int32_t __get_m_updateRate() const;

 float_t __declspec(property(get=__get_m_deltaTimeOffset, put=__set_m_deltaTimeOffset))  m_deltaTimeOffset;

constexpr void __set_m_deltaTimeOffset(float_t value) ;

constexpr float_t __get_m_deltaTimeOffset() const;


// Methods

/// @brief Method Awake addr 0x2877d74 size 0x4 virtual false final false
 void Awake() ;

/// @brief Method Update addr 0x2877e48 size 0x100 virtual false final false
 void Update() ;

/// @brief Method UpdateParameters addr 0x28777f4 size 0x20 virtual false final false
 void UpdateParameters() ;

/// @brief Method Init addr 0x2877d78 size 0xd0 virtual false final false
 void Init() ;

// Ctor Parameters []
explicit G_AudioText() ;

/// @brief Method .ctor addr 0x2877f48 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tayx::Graphy::Audio
NEED_NO_BOX(Tayx::Graphy::Audio::G_AudioText);
DEFINE_IL2CPP_ARG_TYPE(Tayx::Graphy::Audio::G_AudioText, "Tayx.Graphy.Audio", "G_AudioText");
