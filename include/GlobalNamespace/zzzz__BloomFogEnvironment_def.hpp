#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace GlobalNamespace {
class BloomFogSO;
}
namespace GlobalNamespace {
class BloomFogEnvironmentParams;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomFogEnvironment;
}
// Type: ::BloomFogEnvironment
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14611))
// CS Name: BloomFogEnvironment
class CORDL_TYPE BloomFogEnvironment : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BloomFogEnvironment() = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomFogEnvironment", modifiers: " const&", def_value: None }]
constexpr BloomFogEnvironment(BloomFogEnvironment const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomFogEnvironment", modifiers: "&&", def_value: None }]
constexpr BloomFogEnvironment(BloomFogEnvironment&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BloomFogEnvironment(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BloomFogEnvironment& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BloomFogEnvironment& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BloomFogEnvironment& operator=(BloomFogEnvironment&& o) noexcept = default;
  constexpr BloomFogEnvironment& operator=(BloomFogEnvironment const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::BloomFogSO __declspec(property(get=__get__bloomFog, put=__set__bloomFog))  _bloomFog;

constexpr void __set__bloomFog(::GlobalNamespace::BloomFogSO value) ;

constexpr ::GlobalNamespace::BloomFogSO __get__bloomFog() const;

 ::GlobalNamespace::BloomFogEnvironmentParams __declspec(property(get=__get__fogParams, put=__set__fogParams))  _fogParams;

constexpr void __set__fogParams(::GlobalNamespace::BloomFogEnvironmentParams value) ;

constexpr ::GlobalNamespace::BloomFogEnvironmentParams __get__fogParams() const;


// Properties

 ::GlobalNamespace::BloomFogEnvironmentParams __declspec(property(get=get_fogParams))  fogParams;


// Methods

/// @brief Method get_fogParams addr 0x1f8ff54 size 0x8 virtual false final false
 ::GlobalNamespace::BloomFogEnvironmentParams get_fogParams() ;

/// @brief Method OnEnable addr 0x1f8ff5c size 0x40 virtual false final false
 void OnEnable() ;

/// @brief Method OnValidate addr 0x1f8ffbc size 0x48 virtual false final false
 void OnValidate() ;

// Ctor Parameters []
explicit BloomFogEnvironment() ;

/// @brief Method .ctor addr 0x1f90214 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BloomFogEnvironment);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomFogEnvironment, "", "BloomFogEnvironment");
