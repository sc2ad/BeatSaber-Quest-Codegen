#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
struct EaseType;
}
// Forward declare root types
namespace GlobalNamespace {
class TransitionTimingSO;
}
// Type: ::TransitionTimingSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5565))
// CS Name: TransitionTimingSO
class CORDL_TYPE TransitionTimingSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TransitionTimingSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "TransitionTimingSO", modifiers: " const&", def_value: None }]
constexpr TransitionTimingSO(TransitionTimingSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TransitionTimingSO", modifiers: "&&", def_value: None }]
constexpr TransitionTimingSO(TransitionTimingSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TransitionTimingSO(void* ptr) noexcept : ::GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr TransitionTimingSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TransitionTimingSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TransitionTimingSO& operator=(TransitionTimingSO&& o) noexcept = default;
  constexpr TransitionTimingSO& operator=(TransitionTimingSO const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::EaseType __declspec(property(get=__get__easeType, put=__set__easeType))  _easeType;

constexpr void __set__easeType(::GlobalNamespace::EaseType value) ;

constexpr ::GlobalNamespace::EaseType __get__easeType() const;

 float_t __declspec(property(get=__get__easeDuration, put=__set__easeDuration))  _easeDuration;

constexpr void __set__easeDuration(float_t value) ;

constexpr float_t __get__easeDuration() const;


// Properties

 ::GlobalNamespace::EaseType __declspec(property(get=get_easeType))  easeType;

 float_t __declspec(property(get=get_easeDuration))  easeDuration;


// Methods

/// @brief Method get_easeType addr 0x212c294 size 0x8 virtual false final false
 ::GlobalNamespace::EaseType get_easeType() ;

/// @brief Method get_easeDuration addr 0x212c29c size 0x8 virtual false final false
 float_t get_easeDuration() ;

// Ctor Parameters []
explicit TransitionTimingSO() ;

/// @brief Method .ctor addr 0x212c2a4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::TransitionTimingSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TransitionTimingSO, "", "TransitionTimingSO");
