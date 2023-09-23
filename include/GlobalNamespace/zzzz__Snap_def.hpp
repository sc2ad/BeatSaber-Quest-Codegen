#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class Snap;
}
// Type: ::Snap
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13835))
// CS Name: Snap
class CORDL_TYPE Snap : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Snap() = default;

// Ctor Parameters [CppParam { name: "", ty: "Snap", modifiers: " const&", def_value: None }]
constexpr Snap(Snap const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Snap", modifiers: "&&", def_value: None }]
constexpr Snap(Snap&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Snap(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr Snap& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Snap& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Snap& operator=(Snap&& o) noexcept = default;
  constexpr Snap& operator=(Snap const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_snap, put=__set_snap))  snap;

constexpr void __set_snap(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_snap() const;

 UnityEngine::Vector3 __declspec(property(get=__get_offset, put=__set_offset))  offset;

constexpr void __set_offset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_offset() const;


// Methods

/// @brief Method SnapPosition addr 0x1f7b718 size 0x27c virtual false final false
 void SnapPosition() ;

// Ctor Parameters []
explicit Snap() ;

/// @brief Method .ctor addr 0x1f7b994 size 0x18 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::Snap);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Snap, "", "Snap");
