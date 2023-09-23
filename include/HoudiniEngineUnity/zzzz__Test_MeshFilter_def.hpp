#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace UnityEngine {
class MeshFilter;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivableWrapperClass_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_MeshFilter;
}
// Type: HoudiniEngineUnity::Test_MeshFilter
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9863))
// CS Name: HoudiniEngineUnity.Test_MeshFilter
class CORDL_TYPE Test_MeshFilter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to HoudiniEngineUnity::IEquivableWrapperClass_1<HoudiniEngineUnity::Test_MeshFilter>
constexpr operator  HoudiniEngineUnity::IEquivableWrapperClass_1<HoudiniEngineUnity::Test_MeshFilter>() const noexcept;

/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_MeshFilter>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_MeshFilter>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Test_MeshFilter() = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_MeshFilter", modifiers: " const&", def_value: None }]
constexpr Test_MeshFilter(Test_MeshFilter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_MeshFilter", modifiers: "&&", def_value: None }]
constexpr Test_MeshFilter(Test_MeshFilter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Test_MeshFilter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Test_MeshFilter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Test_MeshFilter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Test_MeshFilter& operator=(Test_MeshFilter&& o) noexcept = default;
  constexpr Test_MeshFilter& operator=(Test_MeshFilter const& o) noexcept = default;
                


// Fields

 UnityEngine::MeshFilter __declspec(property(get=__get_self, put=__set_self))  self;

constexpr void __set_self(UnityEngine::MeshFilter value) ;

constexpr UnityEngine::MeshFilter __get_self() const;


// Methods

// Ctor Parameters [CppParam { name: "self", ty: "UnityEngine::MeshFilter", modifiers: "", def_value: None }]
explicit Test_MeshFilter(UnityEngine::MeshFilter self) ;

/// @brief Method .ctor addr 0x2073b7c size 0x28 virtual false final false
 void _ctor(UnityEngine::MeshFilter self) ;

/// @brief Method IsNull addr 0x2073ba4 size 0x60 virtual true final true
 bool IsNull() ;

/// @brief Method IsEquivalentTo addr 0x2073c04 size 0x1a0 virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::Test_MeshFilter other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::Test_MeshFilter);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::Test_MeshFilter, "HoudiniEngineUnity", "Test_MeshFilter");
