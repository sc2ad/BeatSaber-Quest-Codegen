#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
namespace UnityEngine {
class Cubemap;
}
// Forward declare root types
namespace GlobalNamespace {
class ReflectionProbeDataSO;
}
// Type: ::ReflectionProbeDataSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5954))
// CS Name: ReflectionProbeDataSO
class CORDL_TYPE ReflectionProbeDataSO : public UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ReflectionProbeDataSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionProbeDataSO", modifiers: " const&", def_value: None }]
constexpr ReflectionProbeDataSO(ReflectionProbeDataSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionProbeDataSO", modifiers: "&&", def_value: None }]
constexpr ReflectionProbeDataSO(ReflectionProbeDataSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReflectionProbeDataSO(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr ReflectionProbeDataSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReflectionProbeDataSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReflectionProbeDataSO& operator=(ReflectionProbeDataSO&& o) noexcept = default;
  constexpr ReflectionProbeDataSO& operator=(ReflectionProbeDataSO const& o) noexcept = default;
                


// Fields

 UnityEngine::Cubemap __declspec(property(get=__get__reflectionProbeCubemap1, put=__set__reflectionProbeCubemap1))  _reflectionProbeCubemap1;

constexpr void __set__reflectionProbeCubemap1(UnityEngine::Cubemap value) ;

constexpr UnityEngine::Cubemap __get__reflectionProbeCubemap1() const;

 UnityEngine::Cubemap __declspec(property(get=__get__reflectionProbeCubemap2, put=__set__reflectionProbeCubemap2))  _reflectionProbeCubemap2;

constexpr void __set__reflectionProbeCubemap2(UnityEngine::Cubemap value) ;

constexpr UnityEngine::Cubemap __get__reflectionProbeCubemap2() const;


// Properties

 UnityEngine::Cubemap __declspec(property(get=get_reflectionProbeCubemap1, put=set_reflectionProbeCubemap1))  reflectionProbeCubemap1;

 UnityEngine::Cubemap __declspec(property(get=get_reflectionProbeCubemap2, put=set_reflectionProbeCubemap2))  reflectionProbeCubemap2;


// Methods

/// @brief Method get_reflectionProbeCubemap1 addr 0x219d018 size 0x8 virtual false final false
 UnityEngine::Cubemap get_reflectionProbeCubemap1() ;

/// @brief Method set_reflectionProbeCubemap1 addr 0x219d020 size 0x8 virtual false final false
 void set_reflectionProbeCubemap1(UnityEngine::Cubemap value) ;

/// @brief Method get_reflectionProbeCubemap2 addr 0x219d028 size 0x8 virtual false final false
 UnityEngine::Cubemap get_reflectionProbeCubemap2() ;

/// @brief Method set_reflectionProbeCubemap2 addr 0x219d030 size 0x8 virtual false final false
 void set_reflectionProbeCubemap2(UnityEngine::Cubemap value) ;

// Ctor Parameters []
explicit ReflectionProbeDataSO() ;

/// @brief Method .ctor addr 0x219d038 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ReflectionProbeDataSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ReflectionProbeDataSO, "", "ReflectionProbeDataSO");
