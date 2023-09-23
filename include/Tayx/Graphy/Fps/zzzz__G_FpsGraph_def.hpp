#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Tayx/Graphy/Graph/zzzz__G_Graph_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace UnityEngine {
class Shader;
}
namespace Tayx::Graphy {
class GraphyManager;
}
namespace Tayx::Graphy {
class G_GraphShader;
}
namespace UnityEngine::UI {
class Image;
}
namespace Tayx::Graphy::Fps {
class G_FpsMonitor;
}
// Forward declare root types
namespace Tayx::Graphy::Fps {
class G_FpsGraph;
}
// Type: Tayx.Graphy.Fps::G_FpsGraph
namespace Tayx::Graphy::Fps {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15202))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15203))
// CS Name: Tayx.Graphy.Fps.G_FpsGraph
class CORDL_TYPE G_FpsGraph : public Tayx::Graphy::Graph::G_Graph {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~G_FpsGraph() = default;

// Ctor Parameters [CppParam { name: "", ty: "G_FpsGraph", modifiers: " const&", def_value: None }]
constexpr G_FpsGraph(G_FpsGraph const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "G_FpsGraph", modifiers: "&&", def_value: None }]
constexpr G_FpsGraph(G_FpsGraph&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit G_FpsGraph(void* ptr) noexcept : Tayx::Graphy::Graph::G_Graph(ptr) {
}


  constexpr G_FpsGraph& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr G_FpsGraph& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr G_FpsGraph& operator=(G_FpsGraph&& o) noexcept = default;
  constexpr G_FpsGraph& operator=(G_FpsGraph const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Image __declspec(property(get=__get_m_imageGraph, put=__set_m_imageGraph))  m_imageGraph;

constexpr void __set_m_imageGraph(UnityEngine::UI::Image value) ;

constexpr UnityEngine::UI::Image __get_m_imageGraph() const;

 UnityEngine::Shader __declspec(property(get=__get_ShaderFull, put=__set_ShaderFull))  ShaderFull;

constexpr void __set_ShaderFull(UnityEngine::Shader value) ;

constexpr UnityEngine::Shader __get_ShaderFull() const;

 UnityEngine::Shader __declspec(property(get=__get_ShaderLight, put=__set_ShaderLight))  ShaderLight;

constexpr void __set_ShaderLight(UnityEngine::Shader value) ;

constexpr UnityEngine::Shader __get_ShaderLight() const;

 bool __declspec(property(get=__get_m_isInitialized, put=__set_m_isInitialized))  m_isInitialized;

constexpr void __set_m_isInitialized(bool value) ;

constexpr bool __get_m_isInitialized() const;

 Tayx::Graphy::GraphyManager __declspec(property(get=__get_m_graphyManager, put=__set_m_graphyManager))  m_graphyManager;

constexpr void __set_m_graphyManager(Tayx::Graphy::GraphyManager value) ;

constexpr Tayx::Graphy::GraphyManager __get_m_graphyManager() const;

 Tayx::Graphy::Fps::G_FpsMonitor __declspec(property(get=__get_m_fpsMonitor, put=__set_m_fpsMonitor))  m_fpsMonitor;

constexpr void __set_m_fpsMonitor(Tayx::Graphy::Fps::G_FpsMonitor value) ;

constexpr Tayx::Graphy::Fps::G_FpsMonitor __get_m_fpsMonitor() const;

 int32_t __declspec(property(get=__get_m_resolution, put=__set_m_resolution))  m_resolution;

constexpr void __set_m_resolution(int32_t value) ;

constexpr int32_t __get_m_resolution() const;

 Tayx::Graphy::G_GraphShader __declspec(property(get=__get_m_shaderGraph, put=__set_m_shaderGraph))  m_shaderGraph;

constexpr void __set_m_shaderGraph(Tayx::Graphy::G_GraphShader value) ;

constexpr Tayx::Graphy::G_GraphShader __get_m_shaderGraph() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_m_fpsArray, put=__set_m_fpsArray))  m_fpsArray;

constexpr void __set_m_fpsArray(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_m_fpsArray() const;

 int32_t __declspec(property(get=__get_m_highestFps, put=__set_m_highestFps))  m_highestFps;

constexpr void __set_m_highestFps(int32_t value) ;

constexpr int32_t __get_m_highestFps() const;


// Methods

/// @brief Method Update addr 0x2875200 size 0xc virtual false final false
 void Update() ;

/// @brief Method UpdateParameters addr 0x287520c size 0x100 virtual false final false
 void UpdateParameters() ;

/// @brief Method UpdateGraph addr 0x287530c size 0x244 virtual true final false
 void UpdateGraph() ;

/// @brief Method CreatePoints addr 0x2875624 size 0x14c virtual true final false
 void CreatePoints() ;

/// @brief Method Init addr 0x2875550 size 0xd4 virtual false final false
 void Init() ;

// Ctor Parameters []
explicit G_FpsGraph() ;

/// @brief Method .ctor addr 0x2875770 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tayx::Graphy::Fps
NEED_NO_BOX(Tayx::Graphy::Fps::G_FpsGraph);
DEFINE_IL2CPP_ARG_TYPE(Tayx::Graphy::Fps::G_FpsGraph, "Tayx.Graphy.Fps", "G_FpsGraph");
