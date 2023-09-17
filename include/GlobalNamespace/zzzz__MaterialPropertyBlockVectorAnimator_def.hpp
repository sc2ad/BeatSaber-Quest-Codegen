#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockAnimator_def.hpp"
namespace {
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialPropertyBlockVectorAnimator;
}
// Type: ::MaterialPropertyBlockVectorAnimator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14723))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14731))
// CS Name: MaterialPropertyBlockVectorAnimator
class CORDL_TYPE MaterialPropertyBlockVectorAnimator : public ::GlobalNamespace::MaterialPropertyBlockAnimator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MaterialPropertyBlockVectorAnimator() = default;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockVectorAnimator", modifiers: " const&", def_value: None }]
constexpr MaterialPropertyBlockVectorAnimator(MaterialPropertyBlockVectorAnimator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockVectorAnimator", modifiers: "&&", def_value: None }]
constexpr MaterialPropertyBlockVectorAnimator(MaterialPropertyBlockVectorAnimator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MaterialPropertyBlockVectorAnimator(void* ptr) noexcept : ::GlobalNamespace::MaterialPropertyBlockAnimator(ptr) {
}


  constexpr MaterialPropertyBlockVectorAnimator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MaterialPropertyBlockVectorAnimator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MaterialPropertyBlockVectorAnimator& operator=(MaterialPropertyBlockVectorAnimator&& o) noexcept = default;
  constexpr MaterialPropertyBlockVectorAnimator& operator=(MaterialPropertyBlockVectorAnimator const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Vector4 __declspec(property(get=__get__vector, put=__set__vector))  _vector;

constexpr void __set__vector(::UnityEngine::Vector4 value) ;

constexpr ::UnityEngine::Vector4 __get__vector() const;


// Methods

/// @brief Method SetProperty addr 0x1fa29fc size 0x34 virtual true final false
 void SetProperty() ;

// Ctor Parameters []
explicit MaterialPropertyBlockVectorAnimator() ;

/// @brief Method .ctor addr 0x1fa2a30 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyBlockVectorAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyBlockVectorAnimator, "", "MaterialPropertyBlockVectorAnimator");
