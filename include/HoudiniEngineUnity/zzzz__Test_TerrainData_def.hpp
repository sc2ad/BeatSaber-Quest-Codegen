#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivableWrapperClass_1;
}
namespace UnityEngine {
class TerrainData;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_TerrainData;
}
// Type: HoudiniEngineUnity::Test_TerrainData
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9883))
// CS Name: HoudiniEngineUnity.Test_TerrainData
class CORDL_TYPE Test_TerrainData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to HoudiniEngineUnity::IEquivableWrapperClass_1<HoudiniEngineUnity::Test_TerrainData>
constexpr operator  HoudiniEngineUnity::IEquivableWrapperClass_1<HoudiniEngineUnity::Test_TerrainData>() const noexcept;

/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_TerrainData>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_TerrainData>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Test_TerrainData() = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_TerrainData", modifiers: " const&", def_value: None }]
constexpr Test_TerrainData(Test_TerrainData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_TerrainData", modifiers: "&&", def_value: None }]
constexpr Test_TerrainData(Test_TerrainData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Test_TerrainData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Test_TerrainData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Test_TerrainData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Test_TerrainData& operator=(Test_TerrainData&& o) noexcept = default;
  constexpr Test_TerrainData& operator=(Test_TerrainData const& o) noexcept = default;
                


// Fields

 UnityEngine::TerrainData __declspec(property(get=__get_self, put=__set_self))  self;

constexpr void __set_self(UnityEngine::TerrainData value) ;

constexpr UnityEngine::TerrainData __get_self() const;


// Methods

// Ctor Parameters [CppParam { name: "self", ty: "UnityEngine::TerrainData", modifiers: "", def_value: None }]
explicit Test_TerrainData(UnityEngine::TerrainData self) ;

/// @brief Method .ctor addr 0x2075f88 size 0x28 virtual false final false
 void _ctor(UnityEngine::TerrainData self) ;

/// @brief Method IsNull addr 0x2075fb0 size 0x60 virtual true final true
 bool IsNull() ;

/// @brief Method IsEquivalentTo addr 0x2076010 size 0x568 virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::Test_TerrainData other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::Test_TerrainData);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::Test_TerrainData, "HoudiniEngineUnity", "Test_TerrainData");
