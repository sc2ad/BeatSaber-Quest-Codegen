#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
class NumberTag;
}
// Type: ::NumberTag
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13814))
// CS Name: NumberTag
class CORDL_TYPE NumberTag : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~NumberTag() = default;

// Ctor Parameters [CppParam { name: "", ty: "NumberTag", modifiers: " const&", def_value: None }]
constexpr NumberTag(NumberTag const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NumberTag", modifiers: "&&", def_value: None }]
constexpr NumberTag(NumberTag&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NumberTag(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr NumberTag& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NumberTag& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NumberTag& operator=(NumberTag&& o) noexcept = default;
  constexpr NumberTag& operator=(NumberTag const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_number, put=__set_number))  number;

constexpr void __set_number(int32_t value) ;

constexpr int32_t __get_number() const;


// Methods

// Ctor Parameters []
explicit NumberTag() ;

/// @brief Method .ctor addr 0x1f7905c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::NumberTag);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NumberTag, "", "NumberTag");
