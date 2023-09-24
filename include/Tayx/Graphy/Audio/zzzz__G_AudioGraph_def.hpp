#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Tayx/Graphy/Graph/zzzz__G_Graph_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class Shader;
}
namespace UnityEngine::UI {
class Image;
}
namespace Tayx::Graphy::Audio {
class G_AudioMonitor;
}
namespace Tayx::Graphy {
class G_GraphShader;
}
namespace Tayx::Graphy {
class GraphyManager;
}
// Forward declare root types
namespace Tayx::Graphy::Audio {
class G_AudioGraph;
}
// Type: Tayx.Graphy.Audio::G_AudioGraph
namespace Tayx::Graphy::Audio {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15202))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15208))
// CS Name: Tayx.Graphy.Audio.G_AudioGraph
class CORDL_TYPE G_AudioGraph : public Tayx::Graphy::Graph::G_Graph {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~G_AudioGraph() = default;

// Ctor Parameters [CppParam { name: "", ty: "G_AudioGraph", modifiers: " const&", def_value: None }]
constexpr G_AudioGraph(G_AudioGraph const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "G_AudioGraph", modifiers: "&&", def_value: None }]
constexpr G_AudioGraph(G_AudioGraph&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit G_AudioGraph(void* ptr) noexcept : Tayx::Graphy::Graph::G_Graph(ptr) {
}


  constexpr G_AudioGraph& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr G_AudioGraph& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr G_AudioGraph& operator=(G_AudioGraph&& o) noexcept = default;
  constexpr G_AudioGraph& operator=(G_AudioGraph const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Image __declspec(property(get=__get_m_imageGraph, put=__set_m_imageGraph))  m_imageGraph;

constexpr void __set_m_imageGraph(UnityEngine::UI::Image value) ;

constexpr UnityEngine::UI::Image __get_m_imageGraph() const;

 UnityEngine::UI::Image __declspec(property(get=__get_m_imageGraphHighestValues, put=__set_m_imageGraphHighestValues))  m_imageGraphHighestValues;

constexpr void __set_m_imageGraphHighestValues(UnityEngine::UI::Image value) ;

constexpr UnityEngine::UI::Image __get_m_imageGraphHighestValues() const;

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

 Tayx::Graphy::Audio::G_AudioMonitor __declspec(property(get=__get_m_audioMonitor, put=__set_m_audioMonitor))  m_audioMonitor;

constexpr void __set_m_audioMonitor(Tayx::Graphy::Audio::G_AudioMonitor value) ;

constexpr Tayx::Graphy::Audio::G_AudioMonitor __get_m_audioMonitor() const;

 int32_t __declspec(property(get=__get_m_resolution, put=__set_m_resolution))  m_resolution;

constexpr void __set_m_resolution(int32_t value) ;

constexpr int32_t __get_m_resolution() const;

 Tayx::Graphy::G_GraphShader __declspec(property(get=__get_m_shaderGraph, put=__set_m_shaderGraph))  m_shaderGraph;

constexpr void __set_m_shaderGraph(Tayx::Graphy::G_GraphShader value) ;

constexpr Tayx::Graphy::G_GraphShader __get_m_shaderGraph() const;

 Tayx::Graphy::G_GraphShader __declspec(property(get=__get_m_shaderGraphHighestValues, put=__set_m_shaderGraphHighestValues))  m_shaderGraphHighestValues;

constexpr void __set_m_shaderGraphHighestValues(Tayx::Graphy::G_GraphShader value) ;

constexpr Tayx::Graphy::G_GraphShader __get_m_shaderGraphHighestValues() const;

 ::ArrayW<float_t> __declspec(property(get=__get_m_graphArray, put=__set_m_graphArray))  m_graphArray;

constexpr void __set_m_graphArray(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_m_graphArray() const;

 ::ArrayW<float_t> __declspec(property(get=__get_m_graphArrayHighestValue, put=__set_m_graphArrayHighestValue))  m_graphArrayHighestValue;

constexpr void __set_m_graphArrayHighestValue(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_m_graphArrayHighestValue() const;


// Methods

/// @brief Method OnEnable addr 0x287676c size 0x50 virtual false final false
 void OnEnable() ;

/// @brief Method Update addr 0x28767bc size 0x38 virtual false final false
 void Update() ;

/// @brief Method UpdateParameters addr 0x2876854 size 0x1ac virtual false final false
 void UpdateParameters() ;

/// @brief Method UpdateGraph addr 0x2876a00 size 0x4d8 virtual true final false
 void UpdateGraph() ;

/// @brief Method CreatePoints addr 0x2877010 size 0x214 virtual true final false
 void CreatePoints() ;

/// @brief Method Init addr 0x2876ed8 size 0xf4 virtual false final false
 void Init() ;

static Tayx::Graphy::Audio::G_AudioGraph New_ctor() ;

/// @brief Method .ctor addr 0x2877224 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tayx::Graphy::Audio
NEED_NO_BOX(Tayx::Graphy::Audio::G_AudioGraph);
DEFINE_IL2CPP_ARG_TYPE(Tayx::Graphy::Audio::G_AudioGraph, "Tayx.Graphy.Audio", "G_AudioGraph");
