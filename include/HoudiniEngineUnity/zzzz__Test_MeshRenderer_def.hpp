#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace HoudiniEngineUnity {
template<typename T>
class IEquivableWrapperClass_1;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_MeshRenderer;
}
// Type: HoudiniEngineUnity::Test_MeshRenderer
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9860))
// CS Name: HoudiniEngineUnity.Test_MeshRenderer
class CORDL_TYPE Test_MeshRenderer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to HoudiniEngineUnity::IEquivableWrapperClass_1<HoudiniEngineUnity::Test_MeshRenderer>
constexpr operator  HoudiniEngineUnity::IEquivableWrapperClass_1<HoudiniEngineUnity::Test_MeshRenderer>() const noexcept;

/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_MeshRenderer>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_MeshRenderer>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Test_MeshRenderer() = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_MeshRenderer", modifiers: " const&", def_value: None }]
constexpr Test_MeshRenderer(Test_MeshRenderer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_MeshRenderer", modifiers: "&&", def_value: None }]
constexpr Test_MeshRenderer(Test_MeshRenderer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Test_MeshRenderer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Test_MeshRenderer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Test_MeshRenderer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Test_MeshRenderer& operator=(Test_MeshRenderer&& o) noexcept = default;
  constexpr Test_MeshRenderer& operator=(Test_MeshRenderer const& o) noexcept = default;
                


// Fields

 UnityEngine::MeshRenderer __declspec(property(get=__get_self, put=__set_self))  self;

constexpr void __set_self(UnityEngine::MeshRenderer value) ;

constexpr UnityEngine::MeshRenderer __get_self() const;


// Methods

// Ctor Parameters [CppParam { name: "self", ty: "UnityEngine::MeshRenderer", modifiers: "", def_value: None }]
explicit Test_MeshRenderer(UnityEngine::MeshRenderer self) ;

/// @brief Method .ctor addr 0x2073690 size 0x28 virtual false final false
 void _ctor(UnityEngine::MeshRenderer self) ;

/// @brief Method IsNull addr 0x20736b8 size 0x60 virtual true final true
 bool IsNull() ;

/// @brief Method IsEquivalentTo addr 0x2073718 size 0x13c virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::Test_MeshRenderer other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::Test_MeshRenderer);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::Test_MeshRenderer, "HoudiniEngineUnity", "Test_MeshRenderer");
