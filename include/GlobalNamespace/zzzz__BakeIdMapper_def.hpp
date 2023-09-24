#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class BakeIdMapper;
}
// Type: ::BakeIdMapper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5942))
// CS Name: BakeIdMapper
class CORDL_TYPE BakeIdMapper : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BakeIdMapper() = default;

// Ctor Parameters [CppParam { name: "", ty: "BakeIdMapper", modifiers: " const&", def_value: None }]
constexpr BakeIdMapper(BakeIdMapper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BakeIdMapper", modifiers: "&&", def_value: None }]
constexpr BakeIdMapper(BakeIdMapper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BakeIdMapper(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BakeIdMapper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BakeIdMapper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BakeIdMapper& operator=(BakeIdMapper&& o) noexcept = default;
  constexpr BakeIdMapper& operator=(BakeIdMapper const& o) noexcept = default;
                


// Methods

static GlobalNamespace::BakeIdMapper New_ctor() ;

/// @brief Method .ctor addr 0x219b634 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BakeIdMapper);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BakeIdMapper, "", "BakeIdMapper");
