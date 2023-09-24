#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
// Forward declare root types
namespace GlobalNamespace {
class OVRAudioSourceTest;
}
// Type: ::OVRAudioSourceTest
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8877))
// CS Name: OVRAudioSourceTest
class CORDL_TYPE OVRAudioSourceTest : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OVRAudioSourceTest() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRAudioSourceTest", modifiers: " const&", def_value: None }]
constexpr OVRAudioSourceTest(OVRAudioSourceTest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRAudioSourceTest", modifiers: "&&", def_value: None }]
constexpr OVRAudioSourceTest(OVRAudioSourceTest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRAudioSourceTest(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRAudioSourceTest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRAudioSourceTest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRAudioSourceTest& operator=(OVRAudioSourceTest&& o) noexcept = default;
  constexpr OVRAudioSourceTest& operator=(OVRAudioSourceTest const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_period, put=__set_period))  period;

constexpr void __set_period(float_t value) ;

constexpr float_t __get_period() const;

 float_t __declspec(property(get=__get_nextActionTime, put=__set_nextActionTime))  nextActionTime;

constexpr void __set_nextActionTime(float_t value) ;

constexpr float_t __get_nextActionTime() const;


// Methods

/// @brief Method Start addr 0x2619100 size 0x100 virtual false final false
 void Start() ;

/// @brief Method Update addr 0x2619200 size 0x1bc virtual false final false
 void Update() ;

static GlobalNamespace::OVRAudioSourceTest New_ctor() ;

/// @brief Method .ctor addr 0x26193bc size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRAudioSourceTest);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRAudioSourceTest, "", "OVRAudioSourceTest");
