#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace Tayx::Graphy::Ram {
class G_RamMonitor;
}
namespace Tayx::Graphy {
class GraphyManager;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace Tayx::Graphy::Ram {
class G_RamText;
}
// Type: Tayx.Graphy.Ram::G_RamText
namespace Tayx::Graphy::Ram {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15201))
// CS Name: Tayx.Graphy.Ram.G_RamText
class CORDL_TYPE G_RamText : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~G_RamText() = default;

// Ctor Parameters [CppParam { name: "", ty: "G_RamText", modifiers: " const&", def_value: None }]
constexpr G_RamText(G_RamText const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "G_RamText", modifiers: "&&", def_value: None }]
constexpr G_RamText(G_RamText&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit G_RamText(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr G_RamText& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr G_RamText& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr G_RamText& operator=(G_RamText&& o) noexcept = default;
  constexpr G_RamText& operator=(G_RamText const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Text __declspec(property(get=__get_m_allocatedSystemMemorySizeText, put=__set_m_allocatedSystemMemorySizeText))  m_allocatedSystemMemorySizeText;

constexpr void __set_m_allocatedSystemMemorySizeText(UnityEngine::UI::Text value) ;

constexpr UnityEngine::UI::Text __get_m_allocatedSystemMemorySizeText() const;

 UnityEngine::UI::Text __declspec(property(get=__get_m_reservedSystemMemorySizeText, put=__set_m_reservedSystemMemorySizeText))  m_reservedSystemMemorySizeText;

constexpr void __set_m_reservedSystemMemorySizeText(UnityEngine::UI::Text value) ;

constexpr UnityEngine::UI::Text __get_m_reservedSystemMemorySizeText() const;

 UnityEngine::UI::Text __declspec(property(get=__get_m_monoSystemMemorySizeText, put=__set_m_monoSystemMemorySizeText))  m_monoSystemMemorySizeText;

constexpr void __set_m_monoSystemMemorySizeText(UnityEngine::UI::Text value) ;

constexpr UnityEngine::UI::Text __get_m_monoSystemMemorySizeText() const;

 Tayx::Graphy::GraphyManager __declspec(property(get=__get_m_graphyManager, put=__set_m_graphyManager))  m_graphyManager;

constexpr void __set_m_graphyManager(Tayx::Graphy::GraphyManager value) ;

constexpr Tayx::Graphy::GraphyManager __get_m_graphyManager() const;

 Tayx::Graphy::Ram::G_RamMonitor __declspec(property(get=__get_m_ramMonitor, put=__set_m_ramMonitor))  m_ramMonitor;

constexpr void __set_m_ramMonitor(Tayx::Graphy::Ram::G_RamMonitor value) ;

constexpr Tayx::Graphy::Ram::G_RamMonitor __get_m_ramMonitor() const;

 float_t __declspec(property(get=__get_m_updateRate, put=__set_m_updateRate))  m_updateRate;

constexpr void __set_m_updateRate(float_t value) ;

constexpr float_t __get_m_updateRate() const;

 float_t __declspec(property(get=__get_m_deltaTime, put=__set_m_deltaTime))  m_deltaTime;

constexpr void __set_m_deltaTime(float_t value) ;

constexpr float_t __get_m_deltaTime() const;


// Methods

/// @brief Method Awake addr 0x2874fc8 size 0x4 virtual false final false
 void Awake() ;

/// @brief Method Update addr 0x2875090 size 0x160 virtual false final false
 void Update() ;

/// @brief Method UpdateParameters addr 0x2874dd4 size 0xa0 virtual false final false
 void UpdateParameters() ;

/// @brief Method Init addr 0x2874fcc size 0xc4 virtual false final false
 void Init() ;

// Ctor Parameters []
explicit G_RamText() ;

/// @brief Method .ctor addr 0x28751f0 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tayx::Graphy::Ram
NEED_NO_BOX(Tayx::Graphy::Ram::G_RamText);
DEFINE_IL2CPP_ARG_TYPE(Tayx::Graphy::Ram::G_RamText, "Tayx.Graphy.Ram", "G_RamText");
