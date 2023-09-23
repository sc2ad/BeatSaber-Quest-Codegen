#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace RootMotion {
class Comments;
}
// Type: RootMotion::Comments
namespace RootMotion {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12431))
// CS Name: RootMotion.Comments
class CORDL_TYPE Comments : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Comments() = default;

// Ctor Parameters [CppParam { name: "", ty: "Comments", modifiers: " const&", def_value: None }]
constexpr Comments(Comments const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Comments", modifiers: "&&", def_value: None }]
constexpr Comments(Comments&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Comments(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr Comments& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Comments& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Comments& operator=(Comments&& o) noexcept = default;
  constexpr Comments& operator=(Comments const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_text, put=__set_text))  text;

constexpr void __set_text(::StringW value) ;

constexpr ::StringW __get_text() const;


// Methods

// Ctor Parameters []
explicit Comments() ;

/// @brief Method .ctor addr 0x11b2a48 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion
NEED_NO_BOX(RootMotion::Comments);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::Comments, "RootMotion", "Comments");
