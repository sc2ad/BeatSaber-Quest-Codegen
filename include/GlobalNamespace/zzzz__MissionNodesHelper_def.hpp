#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class MissionNode;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionNodesHelper;
}
// Type: ::MissionNodesHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5637))
// CS Name: MissionNodesHelper
class CORDL_TYPE MissionNodesHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MissionNodesHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionNodesHelper", modifiers: " const&", def_value: None }]
constexpr MissionNodesHelper(MissionNodesHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionNodesHelper", modifiers: "&&", def_value: None }]
constexpr MissionNodesHelper(MissionNodesHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionNodesHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MissionNodesHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionNodesHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionNodesHelper& operator=(MissionNodesHelper&& o) noexcept = default;
  constexpr MissionNodesHelper& operator=(MissionNodesHelper const& o) noexcept = default;
                


// Methods

/// @brief Method GetAllNodesFromRoot addr 0x21499f8 size 0x80 virtual false final false
static System::Collections::Generic::HashSet_1<GlobalNamespace::MissionNode> GetAllNodesFromRoot(GlobalNamespace::MissionNode root) ;

/// @brief Method VisitAllTree addr 0x2149a78 size 0xd8 virtual false final false
static void VisitAllTree(GlobalNamespace::MissionNode node, System::Collections::Generic::HashSet_1<GlobalNamespace::MissionNode> visitedNodes) ;

/// @brief Method CycleDetection addr 0x2149b50 size 0x7c virtual false final false
static bool CycleDetection(GlobalNamespace::MissionNode node) ;

/// @brief Method CycleDetection addr 0x2149bcc size 0x154 virtual false final false
static bool CycleDetection(GlobalNamespace::MissionNode node, int32_t layer, System::Collections::Generic::Dictionary_2<GlobalNamespace::MissionNode,int32_t> layers) ;

/// @brief Method FinalNodeIsFinal addr 0x2149d20 size 0x88 virtual false final false
static bool FinalNodeIsFinal(GlobalNamespace::MissionNode finalNode, GlobalNamespace::MissionNode rootNode) ;

/// @brief Method FinalNodeIsFinal addr 0x2149da8 size 0x11c virtual false final false
static bool FinalNodeIsFinal(GlobalNamespace::MissionNode finalNode, GlobalNamespace::MissionNode node, System::Collections::Generic::HashSet_1<GlobalNamespace::MissionNode> visitedNodes) ;

// Ctor Parameters []
explicit MissionNodesHelper() ;

/// @brief Method .ctor addr 0x2149ec4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MissionNodesHelper);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionNodesHelper, "", "MissionNodesHelper");
