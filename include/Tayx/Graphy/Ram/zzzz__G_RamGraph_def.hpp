#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Tayx/Graphy/Graph/zzzz__G_Graph_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace Tayx::Graphy::Ram {
class G_RamMonitor;
}
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
// Forward declare root types
namespace Tayx::Graphy::Ram {
class G_RamGraph;
}
// Type: Tayx.Graphy.Ram::G_RamGraph
namespace Tayx::Graphy::Ram {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15202))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15198))
// CS Name: Tayx.Graphy.Ram.G_RamGraph
class CORDL_TYPE G_RamGraph : public ::Tayx::Graphy::Graph::G_Graph {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~G_RamGraph() = default;

// Ctor Parameters [CppParam { name: "", ty: "G_RamGraph", modifiers: " const&", def_value: None }]
constexpr G_RamGraph(G_RamGraph const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "G_RamGraph", modifiers: "&&", def_value: None }]
constexpr G_RamGraph(G_RamGraph&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit G_RamGraph(void* ptr) noexcept : ::Tayx::Graphy::Graph::G_Graph(ptr) {
}


  constexpr G_RamGraph& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr G_RamGraph& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr G_RamGraph& operator=(G_RamGraph&& o) noexcept = default;
  constexpr G_RamGraph& operator=(G_RamGraph const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UI::Image __declspec(property(get=__get_m_imageAllocated, put=__set_m_imageAllocated))  m_imageAllocated;

constexpr void __set_m_imageAllocated(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get_m_imageAllocated() const;

 ::UnityEngine::UI::Image __declspec(property(get=__get_m_imageReserved, put=__set_m_imageReserved))  m_imageReserved;

constexpr void __set_m_imageReserved(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get_m_imageReserved() const;

 ::UnityEngine::UI::Image __declspec(property(get=__get_m_imageMono, put=__set_m_imageMono))  m_imageMono;

constexpr void __set_m_imageMono(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get_m_imageMono() const;

 ::UnityEngine::Shader __declspec(property(get=__get_ShaderFull, put=__set_ShaderFull))  ShaderFull;

constexpr void __set_ShaderFull(::UnityEngine::Shader value) ;

constexpr ::UnityEngine::Shader __get_ShaderFull() const;

 ::UnityEngine::Shader __declspec(property(get=__get_ShaderLight, put=__set_ShaderLight))  ShaderLight;

constexpr void __set_ShaderLight(::UnityEngine::Shader value) ;

constexpr ::UnityEngine::Shader __get_ShaderLight() const;

 bool __declspec(property(get=__get_m_isInitialized, put=__set_m_isInitialized))  m_isInitialized;

constexpr void __set_m_isInitialized(bool value) ;

constexpr bool __get_m_isInitialized() const;

 ::Tayx::Graphy::GraphyManager __declspec(property(get=__get_m_graphyManager, put=__set_m_graphyManager))  m_graphyManager;

constexpr void __set_m_graphyManager(::Tayx::Graphy::GraphyManager value) ;

constexpr ::Tayx::Graphy::GraphyManager __get_m_graphyManager() const;

 ::Tayx::Graphy::Ram::G_RamMonitor __declspec(property(get=__get_m_ramMonitor, put=__set_m_ramMonitor))  m_ramMonitor;

constexpr void __set_m_ramMonitor(::Tayx::Graphy::Ram::G_RamMonitor value) ;

constexpr ::Tayx::Graphy::Ram::G_RamMonitor __get_m_ramMonitor() const;

 int32_t __declspec(property(get=__get_m_resolution, put=__set_m_resolution))  m_resolution;

constexpr void __set_m_resolution(int32_t value) ;

constexpr int32_t __get_m_resolution() const;

 ::Tayx::Graphy::G_GraphShader __declspec(property(get=__get_m_shaderGraphAllocated, put=__set_m_shaderGraphAllocated))  m_shaderGraphAllocated;

constexpr void __set_m_shaderGraphAllocated(::Tayx::Graphy::G_GraphShader value) ;

constexpr ::Tayx::Graphy::G_GraphShader __get_m_shaderGraphAllocated() const;

 ::Tayx::Graphy::G_GraphShader __declspec(property(get=__get_m_shaderGraphReserved, put=__set_m_shaderGraphReserved))  m_shaderGraphReserved;

constexpr void __set_m_shaderGraphReserved(::Tayx::Graphy::G_GraphShader value) ;

constexpr ::Tayx::Graphy::G_GraphShader __get_m_shaderGraphReserved() const;

 ::Tayx::Graphy::G_GraphShader __declspec(property(get=__get_m_shaderGraphMono, put=__set_m_shaderGraphMono))  m_shaderGraphMono;

constexpr void __set_m_shaderGraphMono(::Tayx::Graphy::G_GraphShader value) ;

constexpr ::Tayx::Graphy::G_GraphShader __get_m_shaderGraphMono() const;

 ::ArrayW<float_t> __declspec(property(get=__get_m_allocatedArray, put=__set_m_allocatedArray))  m_allocatedArray;

constexpr void __set_m_allocatedArray(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_m_allocatedArray() const;

 ::ArrayW<float_t> __declspec(property(get=__get_m_reservedArray, put=__set_m_reservedArray))  m_reservedArray;

constexpr void __set_m_reservedArray(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_m_reservedArray() const;

 ::ArrayW<float_t> __declspec(property(get=__get_m_monoArray, put=__set_m_monoArray))  m_monoArray;

constexpr void __set_m_monoArray(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_m_monoArray() const;

 float_t __declspec(property(get=__get_m_highestMemory, put=__set_m_highestMemory))  m_highestMemory;

constexpr void __set_m_highestMemory(float_t value) ;

constexpr float_t __get_m_highestMemory() const;


// Methods

/// @brief Method Update addr 0x2874014 size 0xc virtual false final false
 void Update() ;

/// @brief Method UpdateParameters addr 0x2874020 size 0x258 virtual false final false
 void UpdateParameters() ;

/// @brief Method UpdateGraph addr 0x2874278 size 0x268 virtual true final false
 void UpdateGraph() ;

/// @brief Method CreatePoints addr 0x2874604 size 0x2ec virtual true final false
 void CreatePoints() ;

/// @brief Method Init addr 0x28744e0 size 0x124 virtual false final false
 void Init() ;

// Ctor Parameters []
explicit G_RamGraph() ;

/// @brief Method .ctor addr 0x28748f0 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tayx::Graphy::Ram
} // end anonymous namespace
NEED_NO_BOX(::Tayx::Graphy::Ram::G_RamGraph);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Ram::G_RamGraph, "Tayx.Graphy.Ram", "G_RamGraph");
