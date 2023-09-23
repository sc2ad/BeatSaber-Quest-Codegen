#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine {
class Gradient;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivableWrapperClass_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_Gradient;
}
// Type: HoudiniEngineUnity::Test_Gradient
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9868))
// CS Name: HoudiniEngineUnity.Test_Gradient
class CORDL_TYPE Test_Gradient : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to HoudiniEngineUnity::IEquivableWrapperClass_1<HoudiniEngineUnity::Test_Gradient>
constexpr operator  HoudiniEngineUnity::IEquivableWrapperClass_1<HoudiniEngineUnity::Test_Gradient>() const noexcept;

/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_Gradient>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_Gradient>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Test_Gradient() = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_Gradient", modifiers: " const&", def_value: None }]
constexpr Test_Gradient(Test_Gradient const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_Gradient", modifiers: "&&", def_value: None }]
constexpr Test_Gradient(Test_Gradient&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Test_Gradient(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Test_Gradient& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Test_Gradient& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Test_Gradient& operator=(Test_Gradient&& o) noexcept = default;
  constexpr Test_Gradient& operator=(Test_Gradient const& o) noexcept = default;
                


// Fields

 UnityEngine::Gradient __declspec(property(get=__get_self, put=__set_self))  self;

constexpr void __set_self(UnityEngine::Gradient value) ;

constexpr UnityEngine::Gradient __get_self() const;


// Methods

// Ctor Parameters [CppParam { name: "self", ty: "UnityEngine::Gradient", modifiers: "", def_value: None }]
explicit Test_Gradient(UnityEngine::Gradient self) ;

/// @brief Method .ctor addr 0x2074250 size 0x28 virtual false final false
 void _ctor(UnityEngine::Gradient self) ;

/// @brief Method IsNull addr 0x2074278 size 0x10 virtual true final true
 bool IsNull() ;

/// @brief Method IsEquivalentTo addr 0x2074288 size 0xf4 virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::Test_Gradient other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::Test_Gradient);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::Test_Gradient, "HoudiniEngineUnity", "Test_Gradient");
