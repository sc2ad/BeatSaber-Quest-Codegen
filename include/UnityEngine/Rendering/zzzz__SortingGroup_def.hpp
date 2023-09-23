#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
// Forward declare root types
namespace UnityEngine::Rendering {
class SortingGroup;
}
// Type: UnityEngine.Rendering::SortingGroup
namespace UnityEngine::Rendering {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10129))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10310))
// CS Name: UnityEngine.Rendering.SortingGroup
class CORDL_TYPE SortingGroup : public UnityEngine::Behaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SortingGroup() = default;

// Ctor Parameters [CppParam { name: "", ty: "SortingGroup", modifiers: " const&", def_value: None }]
constexpr SortingGroup(SortingGroup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SortingGroup", modifiers: "&&", def_value: None }]
constexpr SortingGroup(SortingGroup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SortingGroup(void* ptr) noexcept : UnityEngine::Behaviour(ptr) {
}


  constexpr SortingGroup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SortingGroup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SortingGroup& operator=(SortingGroup&& o) noexcept = default;
  constexpr SortingGroup& operator=(SortingGroup const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
NEED_NO_BOX(UnityEngine::Rendering::SortingGroup);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::SortingGroup, "UnityEngine.Rendering", "SortingGroup");
