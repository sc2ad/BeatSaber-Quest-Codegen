// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Tayx.Graphy.Graph.G_Graph
#include "Tayx/Graphy/Graph/G_Graph.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Shader
  class Shader;
}
// Forward declaring namespace: Tayx::Graphy
namespace Tayx::Graphy {
  // Forward declaring type: GraphyManager
  class GraphyManager;
  // Forward declaring type: G_GraphShader
  class G_GraphShader;
}
// Forward declaring namespace: Tayx::Graphy::Fps
namespace Tayx::Graphy::Fps {
  // Forward declaring type: G_FpsMonitor
  class G_FpsMonitor;
}
// Completed forward declares
// Type namespace: Tayx.Graphy.Fps
namespace Tayx::Graphy::Fps {
  // Forward declaring type: G_FpsGraph
  class G_FpsGraph;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Tayx::Graphy::Fps::G_FpsGraph);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Fps::G_FpsGraph*, "Tayx.Graphy.Fps", "G_FpsGraph");
// Type namespace: Tayx.Graphy.Fps
namespace Tayx::Graphy::Fps {
  // Size: 0x64
  #pragma pack(push, 1)
  // Autogenerated type: Tayx.Graphy.Fps.G_FpsGraph
  // [TokenAttribute] Offset: FFFFFFFF
  class G_FpsGraph : public ::Tayx::Graphy::Graph::G_Graph {
    public:
    public:
    // private UnityEngine.UI.Image m_imageGraph
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UI::Image* m_imageGraph;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.Shader ShaderFull
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Shader* ShaderFull;
    // Field size check
    static_assert(sizeof(::UnityEngine::Shader*) == 0x8);
    // private UnityEngine.Shader ShaderLight
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Shader* ShaderLight;
    // Field size check
    static_assert(sizeof(::UnityEngine::Shader*) == 0x8);
    // private System.Boolean m_isInitialized
    // Size: 0x1
    // Offset: 0x30
    bool m_isInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_isInitialized and: m_graphyManager
    char __padding3[0x7] = {};
    // private Tayx.Graphy.GraphyManager m_graphyManager
    // Size: 0x8
    // Offset: 0x38
    ::Tayx::Graphy::GraphyManager* m_graphyManager;
    // Field size check
    static_assert(sizeof(::Tayx::Graphy::GraphyManager*) == 0x8);
    // private Tayx.Graphy.Fps.G_FpsMonitor m_fpsMonitor
    // Size: 0x8
    // Offset: 0x40
    ::Tayx::Graphy::Fps::G_FpsMonitor* m_fpsMonitor;
    // Field size check
    static_assert(sizeof(::Tayx::Graphy::Fps::G_FpsMonitor*) == 0x8);
    // private System.Int32 m_resolution
    // Size: 0x4
    // Offset: 0x48
    int m_resolution;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_resolution and: m_shaderGraph
    char __padding6[0x4] = {};
    // private Tayx.Graphy.G_GraphShader m_shaderGraph
    // Size: 0x8
    // Offset: 0x50
    ::Tayx::Graphy::G_GraphShader* m_shaderGraph;
    // Field size check
    static_assert(sizeof(::Tayx::Graphy::G_GraphShader*) == 0x8);
    // private System.Int32[] m_fpsArray
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<int> m_fpsArray;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private System.Int32 m_highestFps
    // Size: 0x4
    // Offset: 0x60
    int m_highestFps;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.UI.Image m_imageGraph
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Image*& dyn_m_imageGraph();
    // Get instance field reference: private UnityEngine.Shader ShaderFull
    [[deprecated("Use field access instead!")]] ::UnityEngine::Shader*& dyn_ShaderFull();
    // Get instance field reference: private UnityEngine.Shader ShaderLight
    [[deprecated("Use field access instead!")]] ::UnityEngine::Shader*& dyn_ShaderLight();
    // Get instance field reference: private System.Boolean m_isInitialized
    [[deprecated("Use field access instead!")]] bool& dyn_m_isInitialized();
    // Get instance field reference: private Tayx.Graphy.GraphyManager m_graphyManager
    [[deprecated("Use field access instead!")]] ::Tayx::Graphy::GraphyManager*& dyn_m_graphyManager();
    // Get instance field reference: private Tayx.Graphy.Fps.G_FpsMonitor m_fpsMonitor
    [[deprecated("Use field access instead!")]] ::Tayx::Graphy::Fps::G_FpsMonitor*& dyn_m_fpsMonitor();
    // Get instance field reference: private System.Int32 m_resolution
    [[deprecated("Use field access instead!")]] int& dyn_m_resolution();
    // Get instance field reference: private Tayx.Graphy.G_GraphShader m_shaderGraph
    [[deprecated("Use field access instead!")]] ::Tayx::Graphy::G_GraphShader*& dyn_m_shaderGraph();
    // Get instance field reference: private System.Int32[] m_fpsArray
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_m_fpsArray();
    // Get instance field reference: private System.Int32 m_highestFps
    [[deprecated("Use field access instead!")]] int& dyn_m_highestFps();
    // private System.Void Update()
    // Offset: 0x2ADC8D0
    void Update();
    // public System.Void UpdateParameters()
    // Offset: 0x2ADC8DC
    void UpdateParameters();
    // private System.Void Init()
    // Offset: 0x2ADCC84
    void Init();
    // public System.Void .ctor()
    // Offset: 0x2ADCEA4
    // Implemented from: Tayx.Graphy.Graph.G_Graph
    // Base method: System.Void G_Graph::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static G_FpsGraph* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Tayx::Graphy::Fps::G_FpsGraph::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<G_FpsGraph*, creationType>()));
    }
    // protected override System.Void UpdateGraph()
    // Offset: 0x2ADC9F0
    // Implemented from: Tayx.Graphy.Graph.G_Graph
    // Base method: System.Void G_Graph::UpdateGraph()
    void UpdateGraph();
    // protected override System.Void CreatePoints()
    // Offset: 0x2ADCD48
    // Implemented from: Tayx.Graphy.Graph.G_Graph
    // Base method: System.Void G_Graph::CreatePoints()
    void CreatePoints();
  }; // Tayx.Graphy.Fps.G_FpsGraph
  #pragma pack(pop)
  static check_size<sizeof(G_FpsGraph), 96 + sizeof(int)> __Tayx_Graphy_Fps_G_FpsGraphSizeCheck;
  static_assert(sizeof(G_FpsGraph) == 0x64);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Tayx::Graphy::Fps::G_FpsGraph::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::Fps::G_FpsGraph::*)()>(&Tayx::Graphy::Fps::G_FpsGraph::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::Fps::G_FpsGraph*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tayx::Graphy::Fps::G_FpsGraph::UpdateParameters
// Il2CppName: UpdateParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::Fps::G_FpsGraph::*)()>(&Tayx::Graphy::Fps::G_FpsGraph::UpdateParameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::Fps::G_FpsGraph*), "UpdateParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tayx::Graphy::Fps::G_FpsGraph::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::Fps::G_FpsGraph::*)()>(&Tayx::Graphy::Fps::G_FpsGraph::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::Fps::G_FpsGraph*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tayx::Graphy::Fps::G_FpsGraph::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Tayx::Graphy::Fps::G_FpsGraph::UpdateGraph
// Il2CppName: UpdateGraph
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::Fps::G_FpsGraph::*)()>(&Tayx::Graphy::Fps::G_FpsGraph::UpdateGraph)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::Fps::G_FpsGraph*), "UpdateGraph", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tayx::Graphy::Fps::G_FpsGraph::CreatePoints
// Il2CppName: CreatePoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::Fps::G_FpsGraph::*)()>(&Tayx::Graphy::Fps::G_FpsGraph::CreatePoints)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::Fps::G_FpsGraph*), "CreatePoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
