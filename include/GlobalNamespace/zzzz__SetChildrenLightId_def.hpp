#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
class SetChildrenLightId;
}
// Type: ::SetChildrenLightId
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14716))
// CS Name: SetChildrenLightId
class CORDL_TYPE SetChildrenLightId : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SetChildrenLightId() = default;

// Ctor Parameters [CppParam { name: "", ty: "SetChildrenLightId", modifiers: " const&", def_value: None }]
constexpr SetChildrenLightId(SetChildrenLightId const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SetChildrenLightId", modifiers: "&&", def_value: None }]
constexpr SetChildrenLightId(SetChildrenLightId&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SetChildrenLightId(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SetChildrenLightId& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SetChildrenLightId& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SetChildrenLightId& operator=(SetChildrenLightId&& o) noexcept = default;
  constexpr SetChildrenLightId& operator=(SetChildrenLightId const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__ID, put=__set__ID))  _ID;

constexpr void __set__ID(int32_t value) ;

constexpr int32_t __get__ID() const;


// Methods

// Ctor Parameters []
explicit SetChildrenLightId() ;

/// @brief Method .ctor addr 0x1fa0550 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SetChildrenLightId);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SetChildrenLightId, "", "SetChildrenLightId");
