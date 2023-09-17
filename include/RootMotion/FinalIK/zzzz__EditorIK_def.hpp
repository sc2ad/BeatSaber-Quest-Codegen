#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace RootMotion::FinalIK {
class IK;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class EditorIK;
}
// Type: RootMotion.FinalIK::EditorIK
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12579))
// CS Name: RootMotion.FinalIK.EditorIK
class CORDL_TYPE EditorIK : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~EditorIK() = default;

// Ctor Parameters [CppParam { name: "", ty: "EditorIK", modifiers: " const&", def_value: None }]
constexpr EditorIK(EditorIK const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EditorIK", modifiers: "&&", def_value: None }]
constexpr EditorIK(EditorIK&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EditorIK(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr EditorIK& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EditorIK& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EditorIK& operator=(EditorIK&& o) noexcept = default;
  constexpr EditorIK& operator=(EditorIK const& o) noexcept = default;
                


// Fields

 ::RootMotion::FinalIK::IK __declspec(property(get=__get_ik, put=__set_ik))  ik;

constexpr void __set_ik(::RootMotion::FinalIK::IK value) ;

constexpr ::RootMotion::FinalIK::IK __get_ik() const;


// Methods

/// @brief Method Start addr 0x1207ac0 size 0x8c virtual false final false
 void Start() ;

/// @brief Method Update addr 0x1207b4c size 0xc0 virtual false final false
 void Update() ;

// Ctor Parameters []
explicit EditorIK() ;

/// @brief Method .ctor addr 0x1207c0c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
} // end anonymous namespace
NEED_NO_BOX(::RootMotion::FinalIK::EditorIK);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::EditorIK, "RootMotion.FinalIK", "EditorIK");
