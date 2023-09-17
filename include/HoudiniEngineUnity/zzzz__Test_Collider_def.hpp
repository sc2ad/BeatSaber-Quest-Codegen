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
class Collider;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_Collider;
}
// Type: HoudiniEngineUnity::Test_Collider
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9854))
// CS Name: HoudiniEngineUnity.Test_Collider
class CORDL_TYPE Test_Collider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Collider>
constexpr operator  ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Collider>() const noexcept;

/// @brief Convert operator to ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Collider>
constexpr operator  ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Collider>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Test_Collider() = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_Collider", modifiers: " const&", def_value: None }]
constexpr Test_Collider(Test_Collider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_Collider", modifiers: "&&", def_value: None }]
constexpr Test_Collider(Test_Collider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Test_Collider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Test_Collider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Test_Collider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Test_Collider& operator=(Test_Collider&& o) noexcept = default;
  constexpr Test_Collider& operator=(Test_Collider const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Collider __declspec(property(get=__get_self, put=__set_self))  self;

constexpr void __set_self(::UnityEngine::Collider value) ;

constexpr ::UnityEngine::Collider __get_self() const;


// Methods

// Ctor Parameters [CppParam { name: "self", ty: "::UnityEngine::Collider", modifiers: "", def_value: None }]
explicit Test_Collider(::UnityEngine::Collider self) ;

/// @brief Method .ctor addr 0x2072a98 size 0x28 virtual false final false
 void _ctor(::UnityEngine::Collider self) ;

/// @brief Method IsNull addr 0x2072ac0 size 0x60 virtual true final true
 bool IsNull() ;

/// @brief Method IsEquivalentTo addr 0x2072b20 size 0x8 virtual true final true
 bool IsEquivalentTo(::HoudiniEngineUnity::Test_Collider other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
NEED_NO_BOX(::HoudiniEngineUnity::Test_Collider);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_Collider, "HoudiniEngineUnity", "Test_Collider");
