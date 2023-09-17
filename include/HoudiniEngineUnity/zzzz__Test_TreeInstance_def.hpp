#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace UnityEngine {
struct TreeInstance;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_TreeInstance;
}
// Type: HoudiniEngineUnity::Test_TreeInstance
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9880))
// CS Name: HoudiniEngineUnity.Test_TreeInstance
class CORDL_TYPE Test_TreeInstance : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_TreeInstance>
constexpr operator  ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_TreeInstance>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Test_TreeInstance() = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_TreeInstance", modifiers: " const&", def_value: None }]
constexpr Test_TreeInstance(Test_TreeInstance const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_TreeInstance", modifiers: "&&", def_value: None }]
constexpr Test_TreeInstance(Test_TreeInstance&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Test_TreeInstance(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Test_TreeInstance& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Test_TreeInstance& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Test_TreeInstance& operator=(Test_TreeInstance&& o) noexcept = default;
  constexpr Test_TreeInstance& operator=(Test_TreeInstance const& o) noexcept = default;
                


// Fields

 ::UnityEngine::TreeInstance __declspec(property(get=__get_self, put=__set_self))  self;

constexpr void __set_self(::UnityEngine::TreeInstance value) ;

constexpr ::UnityEngine::TreeInstance __get_self() const;


// Methods

// Ctor Parameters [CppParam { name: "self", ty: "::UnityEngine::TreeInstance", modifiers: "", def_value: None }]
explicit Test_TreeInstance(::UnityEngine::TreeInstance self) ;

/// @brief Method .ctor addr 0x2075940 size 0x34 virtual false final false
 void _ctor(::UnityEngine::TreeInstance self) ;

/// @brief Method IsEquivalentTo addr 0x2075974 size 0x21c virtual true final true
 bool IsEquivalentTo(::HoudiniEngineUnity::Test_TreeInstance other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
NEED_NO_BOX(::HoudiniEngineUnity::Test_TreeInstance);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_TreeInstance, "HoudiniEngineUnity", "Test_TreeInstance");
