#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine {
class Mesh;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivableWrapperClass_1;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_Mesh;
}
// Type: HoudiniEngineUnity::Test_Mesh
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9857))
// CS Name: HoudiniEngineUnity.Test_Mesh
class CORDL_TYPE Test_Mesh : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to HoudiniEngineUnity::IEquivableWrapperClass_1<HoudiniEngineUnity::Test_Mesh>
constexpr operator  HoudiniEngineUnity::IEquivableWrapperClass_1<HoudiniEngineUnity::Test_Mesh>() const noexcept;

/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_Mesh>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_Mesh>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Test_Mesh() = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_Mesh", modifiers: " const&", def_value: None }]
constexpr Test_Mesh(Test_Mesh const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_Mesh", modifiers: "&&", def_value: None }]
constexpr Test_Mesh(Test_Mesh&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Test_Mesh(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Test_Mesh& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Test_Mesh& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Test_Mesh& operator=(Test_Mesh&& o) noexcept = default;
  constexpr Test_Mesh& operator=(Test_Mesh const& o) noexcept = default;
                


// Fields

 UnityEngine::Mesh __declspec(property(get=__get_self, put=__set_self))  self;

constexpr void __set_self(UnityEngine::Mesh value) ;

constexpr UnityEngine::Mesh __get_self() const;


// Methods

static HoudiniEngineUnity::Test_Mesh New_ctor(UnityEngine::Mesh self) ;

/// @brief Method .ctor addr 0x2072e50 size 0x28 virtual false final false
 void _ctor(UnityEngine::Mesh self) ;

/// @brief Method IsNull addr 0x2072e78 size 0x60 virtual true final true
 bool IsNull() ;

/// @brief Method IsEquivalentTo addr 0x2072ed8 size 0x42c virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::Test_Mesh other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::Test_Mesh);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::Test_Mesh, "HoudiniEngineUnity", "Test_Mesh");
