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
class LODGroup;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_LODGroup;
}
// Type: HoudiniEngineUnity::Test_LODGroup
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9845))
// CS Name: HoudiniEngineUnity.Test_LODGroup
class CORDL_TYPE Test_LODGroup : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to HoudiniEngineUnity::IEquivableWrapperClass_1<HoudiniEngineUnity::Test_LODGroup>
constexpr operator  HoudiniEngineUnity::IEquivableWrapperClass_1<HoudiniEngineUnity::Test_LODGroup>() const noexcept;

/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_LODGroup>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_LODGroup>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Test_LODGroup() = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_LODGroup", modifiers: " const&", def_value: None }]
constexpr Test_LODGroup(Test_LODGroup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_LODGroup", modifiers: "&&", def_value: None }]
constexpr Test_LODGroup(Test_LODGroup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Test_LODGroup(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Test_LODGroup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Test_LODGroup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Test_LODGroup& operator=(Test_LODGroup&& o) noexcept = default;
  constexpr Test_LODGroup& operator=(Test_LODGroup const& o) noexcept = default;
                


// Fields

 UnityEngine::LODGroup __declspec(property(get=__get_self, put=__set_self))  self;

constexpr void __set_self(UnityEngine::LODGroup value) ;

constexpr UnityEngine::LODGroup __get_self() const;


// Methods

static HoudiniEngineUnity::Test_LODGroup New_ctor(UnityEngine::LODGroup self) ;

/// @brief Method .ctor addr 0x20719a8 size 0x28 virtual false final false
 void _ctor(UnityEngine::LODGroup self) ;

/// @brief Method IsNull addr 0x20719d0 size 0x60 virtual true final true
 bool IsNull() ;

/// @brief Method IsEquivalentTo addr 0x2071a30 size 0x28c virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::Test_LODGroup other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::Test_LODGroup);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::Test_LODGroup, "HoudiniEngineUnity", "Test_LODGroup");
