#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
// Forward declare root types
namespace Tayx::Graphy::Graph {
class G_Graph;
}
// Type: Tayx.Graphy.Graph::G_Graph
namespace Tayx::Graphy::Graph {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15202))
// CS Name: Tayx.Graphy.Graph.G_Graph
class CORDL_TYPE G_Graph : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~G_Graph() = default;

// Ctor Parameters [CppParam { name: "", ty: "G_Graph", modifiers: " const&", def_value: None }]
constexpr G_Graph(G_Graph const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "G_Graph", modifiers: "&&", def_value: None }]
constexpr G_Graph(G_Graph&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit G_Graph(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr G_Graph& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr G_Graph& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr G_Graph& operator=(G_Graph&& o) noexcept = default;
  constexpr G_Graph& operator=(G_Graph const& o) noexcept = default;
                


// Methods

/// @brief Method UpdateGraph addr 0x0 size 0xffffffffffffffff virtual true final false
 void UpdateGraph() ;

/// @brief Method CreatePoints addr 0x0 size 0xffffffffffffffff virtual true final false
 void CreatePoints() ;

static Tayx::Graphy::Graph::G_Graph New_ctor() ;

/// @brief Method .ctor addr 0x2874900 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tayx::Graphy::Graph
NEED_NO_BOX(Tayx::Graphy::Graph::G_Graph);
DEFINE_IL2CPP_ARG_TYPE(Tayx::Graphy::Graph::G_Graph, "Tayx.Graphy.Graph", "G_Graph");
