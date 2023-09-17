#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace HoudiniEngineUnity {
template<typename T>
class IEquivableWrapperClass_1;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_AnimationCurve;
}
// Type: HoudiniEngineUnity::Test_AnimationCurve
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9871))
// CS Name: HoudiniEngineUnity.Test_AnimationCurve
class CORDL_TYPE Test_AnimationCurve : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_AnimationCurve>
constexpr operator  ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_AnimationCurve>() const noexcept;

/// @brief Convert operator to ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_AnimationCurve>
constexpr operator  ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_AnimationCurve>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Test_AnimationCurve() = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_AnimationCurve", modifiers: " const&", def_value: None }]
constexpr Test_AnimationCurve(Test_AnimationCurve const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_AnimationCurve", modifiers: "&&", def_value: None }]
constexpr Test_AnimationCurve(Test_AnimationCurve&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Test_AnimationCurve(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Test_AnimationCurve& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Test_AnimationCurve& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Test_AnimationCurve& operator=(Test_AnimationCurve&& o) noexcept = default;
  constexpr Test_AnimationCurve& operator=(Test_AnimationCurve const& o) noexcept = default;
                


// Fields

 ::UnityEngine::AnimationCurve __declspec(property(get=__get_self, put=__set_self))  self;

constexpr void __set_self(::UnityEngine::AnimationCurve value) ;

constexpr ::UnityEngine::AnimationCurve __get_self() const;


// Methods

// Ctor Parameters [CppParam { name: "self", ty: "::UnityEngine::AnimationCurve", modifiers: "", def_value: None }]
explicit Test_AnimationCurve(::UnityEngine::AnimationCurve self) ;

/// @brief Method .ctor addr 0x2074708 size 0x28 virtual false final false
 void _ctor(::UnityEngine::AnimationCurve self) ;

/// @brief Method IsNull addr 0x2074730 size 0x10 virtual true final true
 bool IsNull() ;

/// @brief Method IsEquivalentTo addr 0x2074740 size 0xe0 virtual true final true
 bool IsEquivalentTo(::HoudiniEngineUnity::Test_AnimationCurve other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
NEED_NO_BOX(::HoudiniEngineUnity::Test_AnimationCurve);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_AnimationCurve, "HoudiniEngineUnity", "Test_AnimationCurve");
