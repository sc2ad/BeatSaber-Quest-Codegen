#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class FadeInOutController;
}
// Forward declare root types
namespace GlobalNamespace {
class FadeOutInstantly;
}
// Type: ::FadeOutInstantly
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15305))
// CS Name: FadeOutInstantly
class CORDL_TYPE FadeOutInstantly : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~FadeOutInstantly() = default;

// Ctor Parameters [CppParam { name: "", ty: "FadeOutInstantly", modifiers: " const&", def_value: None }]
constexpr FadeOutInstantly(FadeOutInstantly const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FadeOutInstantly", modifiers: "&&", def_value: None }]
constexpr FadeOutInstantly(FadeOutInstantly&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FadeOutInstantly(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr FadeOutInstantly& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FadeOutInstantly& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FadeOutInstantly& operator=(FadeOutInstantly&& o) noexcept = default;
  constexpr FadeOutInstantly& operator=(FadeOutInstantly const& o) noexcept = default;
                


// Fields

 GlobalNamespace::FadeInOutController __declspec(property(get=__get__fadeInOut, put=__set__fadeInOut))  _fadeInOut;

constexpr void __set__fadeInOut(GlobalNamespace::FadeInOutController value) ;

constexpr GlobalNamespace::FadeInOutController __get__fadeInOut() const;


// Methods

/// @brief Method Start addr 0x2676318 size 0x1c virtual false final false
 void Start() ;

static GlobalNamespace::FadeOutInstantly New_ctor() ;

/// @brief Method .ctor addr 0x2676334 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::FadeOutInstantly);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FadeOutInstantly, "", "FadeOutInstantly");
