#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine {
struct LayerMask;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_LayerMask;
}
// Type: HoudiniEngineUnity::Test_LayerMask
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9866))
// CS Name: HoudiniEngineUnity.Test_LayerMask
class CORDL_TYPE Test_LayerMask : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_LayerMask>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_LayerMask>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Test_LayerMask() = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_LayerMask", modifiers: " const&", def_value: None }]
constexpr Test_LayerMask(Test_LayerMask const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_LayerMask", modifiers: "&&", def_value: None }]
constexpr Test_LayerMask(Test_LayerMask&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Test_LayerMask(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Test_LayerMask& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Test_LayerMask& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Test_LayerMask& operator=(Test_LayerMask&& o) noexcept = default;
  constexpr Test_LayerMask& operator=(Test_LayerMask const& o) noexcept = default;
                


// Fields

 UnityEngine::LayerMask __declspec(property(get=__get_self, put=__set_self))  self;

constexpr void __set_self(UnityEngine::LayerMask value) ;

constexpr UnityEngine::LayerMask __get_self() const;


// Methods

// Ctor Parameters [CppParam { name: "self", ty: "UnityEngine::LayerMask", modifiers: "", def_value: None }]
explicit Test_LayerMask(UnityEngine::LayerMask self) ;

/// @brief Method .ctor addr 0x20740cc size 0x28 virtual false final false
 void _ctor(UnityEngine::LayerMask self) ;

/// @brief Method IsEquivalentTo addr 0x20740f4 size 0xf8 virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::Test_LayerMask other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::Test_LayerMask);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::Test_LayerMask, "HoudiniEngineUnity", "Test_LayerMask");
